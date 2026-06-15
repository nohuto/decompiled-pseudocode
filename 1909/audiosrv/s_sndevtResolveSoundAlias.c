/*
 * XREFs of s_sndevtResolveSoundAlias @ 0x18004D020
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002DF80 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     MIDL_user_allocate @ 0x1800471A0 (MIDL_user_allocate.c)
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x18004D310 (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 *     ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18004D870 (-StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 */

__int64 __fastcall s_sndevtResolveSoundAlias(
        RPC_BINDING_HANDLE BindingHandle,
        const unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        LPHANDLE lpTargetHandle,
        wchar_t **a6)
{
  char *FileW; // r13
  char *v9; // r15
  int v10; // esi
  __int64 v11; // r8
  const unsigned __int16 *v12; // rbx
  DWORD LastError; // edi
  unsigned __int64 v14; // r8
  const unsigned __int16 *v15; // rcx
  int SoundAlias; // ebx
  int v17; // esi
  HANDLE CurrentProcess; // rax
  __int64 v19; // rax
  size_t v20; // rbx
  wchar_t *v21; // rax
  int dwCreationDisposition; // [rsp+20h] [rbp-E0h]
  char v24; // [rsp+44h] [rbp-BCh]
  WINBOOL fPending; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v27; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int Pid; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  HKEY phkResult; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 *v31; // [rsp+70h] [rbp-90h]
  RPC_BINDING_HANDLE Binding; // [rsp+78h] [rbp-88h]
  struct _TP_TIMER *pv[8]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR FileName[264]; // [rsp+C0h] [rbp-40h] BYREF

  v31 = a3;
  Binding = BindingHandle;
  v24 = a4;
  memset_0(FileName, 0, 0x208uLL);
  v27 = a4;
  Context = 0LL;
  FileW = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v11,
    (struct _TP_TIMER *)L"s_sndevtResolveSoundAlias");
  v12 = a2;
  if ( !a2 )
  {
    LastError = -2147418096;
    goto LABEL_34;
  }
  if ( lpTargetHandle )
  {
    *lpTargetHandle = (HANDLE)-1LL;
    if ( !a6 )
      goto LABEL_8;
  }
  else if ( !a6 )
  {
    LastError = -2147418096;
    goto LABEL_32;
  }
  *a6 = 0LL;
LABEL_8:
  LastError = RpcImpersonateClient(BindingHandle);
  if ( LastError )
  {
LABEL_34:
    v17 = 0;
    goto LABEL_20;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      FileName[0] = 0;
      LastError = RegOpenCurrentUser(1u, &phkResult);
      if ( LastError )
        goto LABEL_43;
      v15 = (const unsigned __int16 *)&szSystemDefaultSound;
      if ( !v10 )
        v15 = v12;
      SoundAlias = _GetSoundAlias(v15, FileName, v14, &v27, dwCreationDisposition, phkResult, v31);
      RegCloseKey(phkResult);
      if ( !SoundAlias )
      {
        if ( (v24 & 2) != 0 || v10 == 1 )
        {
          LastError = 1168;
          goto LABEL_43;
        }
        goto LABEL_39;
      }
      if ( FileName[0] )
        break;
      if ( (v24 & 2) != 0 || v10 == 1 )
      {
        LastError = 2;
LABEL_43:
        v17 = 1;
        goto LABEL_20;
      }
LABEL_39:
      v12 = a2;
      v10 = 1;
    }
    if ( !lpTargetHandle )
      goto LABEL_43;
    FileW = (char *)CreateFileW(FileName, 0x80000000, 3u, 0LL, 3u, 0x60000080u, 0LL);
    if ( FileW != (char *)-1LL )
      break;
    if ( (v24 & 2) != 0 || v10 == 1 )
    {
      LastError = GetLastError();
      goto LABEL_43;
    }
    v12 = a2;
    v10 = 1;
  }
  LastError = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( LastError )
    goto LABEL_43;
  v9 = (char *)OpenProcess(0x40u, 0, Pid);
  LastError = RpcRevertToSelf();
  if ( LastError )
    goto LABEL_43;
  v17 = 0;
  if ( !v9
    || (CurrentProcess = GetCurrentProcess(), !DuplicateHandle(CurrentProcess, FileW, v9, lpTargetHandle, 0, 0, 2u)) )
  {
    LastError = GetLastError();
  }
LABEL_20:
  if ( a6 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( FileName[v19] );
    v20 = 2 * v19 + 2;
    v21 = (wchar_t *)MIDL_user_allocate(v20);
    *a6 = v21;
    if ( v21 )
    {
      StringCbCopyExW(v21, v20, (size_t)FileName, 0LL, 0LL, 0x600u);
      goto LABEL_25;
    }
    if ( LastError )
    {
      LastError = 14;
LABEL_25:
      if ( LastError && lpTargetHandle )
      {
        if ( (char *)*lpTargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(*lpTargetHandle);
        *lpTargetHandle = (HANDLE)-1LL;
      }
    }
  }
  if ( v17 == 1 )
    RpcRevertToSelf();
  if ( (unsigned __int64)(FileW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(FileW);
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v9);
LABEL_32:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return LastError;
}
