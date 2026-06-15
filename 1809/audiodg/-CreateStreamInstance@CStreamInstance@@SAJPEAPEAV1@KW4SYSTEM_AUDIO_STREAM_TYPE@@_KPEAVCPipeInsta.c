/*
 * XREFs of ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x1400177D4
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140009040 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003FCB0 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400402B0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140041F84 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CStreamInstance::CreateStreamInstance(
        _QWORD *a1,
        DWORD a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char *v6; // rbx
  HRESULT v11; // eax
  unsigned int v12; // edi
  void *v13; // rdx
  unsigned int v14; // r8d
  const char *v15; // r9
  char *v16; // rax
  char *v17; // rsi
  __int64 v18; // rax
  void **v19; // r14
  void *v20; // rbp
  __int64 v22; // r9
  __int64 v23; // rdx
  DWORD LastError; // edi
  int v25; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v27; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  *a1 = 0LL;
  if ( a2 )
  {
    v11 = CoImpersonateClient();
    v12 = v11;
    if ( v11 < 0 )
    {
      v22 = (unsigned int)v11;
      v23 = 42LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)v22,
        v25);
      goto LABEL_14;
    }
    v6 = (char *)OpenProcess(0x2000u, 0, a2);
    if ( ((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      wil::details::in1diag3::_Log_GetLastError(retaddr, v13, v14, v15);
    CoRevertToSelf();
  }
  v16 = (char *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  if ( v16 )
  {
    *(_QWORD *)v16 = 0LL;
    *((_QWORD *)v16 + 1) = 0LL;
    *((_WORD *)v16 + 8) = 0;
    *((_DWORD *)v16 + 5) = a3;
    *((_QWORD *)v16 + 3) = 0LL;
    *((_QWORD *)v16 + 4) = 0LL;
    *((_QWORD *)v16 + 5) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v16 + 48), 0, 0);
    *((_QWORD *)v17 + 11) = 0LL;
    *((_QWORD *)v17 + 12) = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
    v12 = -2147024882;
    v23 = 57LL;
    v22 = 2147942414LL;
    goto LABEL_20;
  }
  *(_QWORD *)v17 = a5;
  v18 = a6;
  *((_QWORD *)v17 + 1) = a4;
  v19 = (void **)(v17 + 40);
  *((_QWORD *)v17 + 12) = v18;
  if ( v17 + 40 != &v27 )
  {
    v20 = *v19;
    if ( (char *)*v19 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      LastError = GetLastError();
      CloseHandle(v20);
      SetLastError(LastError);
    }
    *v19 = v6;
    v6 = 0LL;
  }
  *a1 = v17;
  v12 = 0;
LABEL_14:
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  return v12;
}
