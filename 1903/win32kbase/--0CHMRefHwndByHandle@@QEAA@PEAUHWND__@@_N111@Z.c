/*
 * XREFs of ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C0023ED0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0072394 (EtwTraceUIPIHandleValidationError.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C009F820 (WPP_RECORDER_SF_qqq.c)
 *     HMIsHandleEntrySecureWorker @ 0x1C01058B0 (HMIsHandleEntrySecureWorker.c)
 */

CHMRefHwndByHandle *__fastcall CHMRefHwndByHandle::CHMRefHwndByHandle(
        CHMRefHwndByHandle *this,
        HWND a2,
        char a3,
        char a4,
        bool a5,
        bool a6)
{
  HWND v8; // rsi
  struct tagPROCESSINFO *v10; // rdx
  char *v11; // rdi
  char *v12; // rbp
  __int64 v13; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rbp
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r8d
  int v26; // r9d
  int v27; // r10d
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // edx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int128 v35; // [rsp+40h] [rbp-48h] BYREF
  __int64 v36; // [rsp+50h] [rbp-38h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      20,
      10,
      (__int64)&WPP_ff22e2111f9634943613373808792668_Traceguids);
  }
  *(_QWORD *)this = 0LL;
  LODWORD(v10) = (unsigned __int16)v8;
  if ( (unsigned __int64)(unsigned __int16)v8 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_15;
  v11 = (char *)qword_1C0213758 + (unsigned int)(unsigned __int16)v8 * dword_1C0213760;
  v12 = (char *)gpKernelHandleTable + 24 * ((__int64)((unsigned int)(unsigned __int16)v8 * dword_1C0213760) >> 5);
  if ( WORD1(v8) != *((_WORD *)v11 + 13)
    && WORD1(v8) != 0xFFFF
    && (WORD1(v8) || !PsGetCurrentProcessWow64Process(0xFFFFLL)) )
  {
    goto LABEL_15;
  }
  if ( v11[24] != 1 || (v11[25] & 1) != 0 )
    goto LABEL_15;
  v13 = *(_QWORD *)v12;
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v12 + 8LL));
  *(_QWORD *)this = v13;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v15 = *(_QWORD *)this;
  v16 = ThreadWin32Thread;
  v17 = *(_QWORD *)(*(_QWORD *)this + 16LL);
  v36 = *(_QWORD *)(ThreadWin32Thread + 400);
  v18 = *(_OWORD *)(ThreadWin32Thread + 384);
  v19 = *(_QWORD *)(ThreadWin32Thread + 416);
  v36 = *(_QWORD *)(v17 + 400);
  v35 = v18;
  v36 = *(_QWORD *)(v19 + 312);
  v35 = *(_OWORD *)(v17 + 384);
  v20 = *(_OWORD *)(v19 + 296);
  v21 = *(_QWORD *)(v17 + 416);
  v35 = v20;
  v36 = *(_QWORD *)(v21 + 312);
  v35 = *(_OWORD *)(v21 + 296);
  if ( a3
    && v17 != v16
    && *(_QWORD *)(v15 + 24) != *(_QWORD *)(v16 + 448)
    && (*(_DWORD *)(v16 + 480) & 4) == 0
    && ((int)IsGetDesktopViewSupported() < 0
     || !GetDesktopView(*(_QWORD *)(v16 + 416), *(_QWORD *)(*(_QWORD *)this + 24LL))) )
  {
LABEL_14:
    *((_QWORD *)this + 1) = *(_QWORD *)this;
    *(_QWORD *)this = 0LL;
    goto LABEL_15;
  }
  if ( a4 && *(_DWORD *)(*(_QWORD *)(v17 + 416) + 880LL) != 1 )
    a4 = 0;
  if ( !a6
    || (v23 = *(_QWORD *)(v17 + 416), v24 = *(_QWORD *)(v16 + 416), !UIPrivelegeIsolation::fEnforce)
    || (LODWORD(v10) = *(_DWORD *)(v24 + 872), v25 = *(_DWORD *)(v23 + 872), (unsigned int)v10 > v25)
    || (_DWORD)v10 == v25
    && ((v26 = *(_DWORD *)(v24 + 876), v27 = *(_DWORD *)(v23 + 876), v26 == v27) || v26 == -1 || v27 == -1)
    || a4
    && (_DWORD)v10 == v25
    && (unsigned __int8)SeIsParentOfChildAppContainer(
                          gSessionId,
                          *(unsigned int *)(v24 + 876),
                          *(unsigned int *)(v23 + 876))
    || (v10 = *(struct tagPROCESSINFO **)(v17 + 416), *(PVOID *)v10 == gpepCSRSS) )
  {
    if ( a5 )
    {
      v28 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v29 = *(_QWORD *)this;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 448) + 8LL) + 24LL) != *(_QWORD *)this )
      {
        if ( !UIPrivelegeIsolation::fEnforce
          || (v29 = *(unsigned int *)(*(_QWORD *)(v29 + 16) + 480LL), (v29 & 0xC) != 0) )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29, v10);
          v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 416LL);
          v33 = *(unsigned int *)(v32 + 772);
          if ( *(_DWORD *)(CurrentProcessWin32Process + 772) != (_DWORD)v33
            || (v34 = PsGetCurrentProcessWin32Process(v32, v33),
                LODWORD(v10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 416LL) + 776LL),
                *(_DWORD *)(v34 + 776) != (_DWORD)v10) )
          {
            UserSetLastError(5LL);
            goto LABEL_15;
          }
        }
      }
    }
    if ( (*(_DWORD *)(v16 + 480) & 0x20000000) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 416) + 760LL) + 24LL) & 1) != 0 )
    {
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(&v35);
      GetDomainLockRef(17LL);
      if ( !(unsigned int)HMIsHandleEntrySecureWorker(v8) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return this;
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_q(
          (_DWORD)gBaseLog,
          (_DWORD)v10,
          20,
          12,
          (__int64)&WPP_ff22e2111f9634943613373808792668_Traceguids,
          (char)v8);
        goto LABEL_15;
      }
    }
    goto LABEL_14;
  }
  EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v16 + 416), v10);
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return this;
  LOBYTE(v30) = 2;
  WPP_RECORDER_SF_qqq(
    (_DWORD)gBaseLog,
    v30,
    20,
    11,
    (__int64)&WPP_ff22e2111f9634943613373808792668_Traceguids,
    (char)v8,
    *(_QWORD *)(v17 + 416),
    *(_QWORD *)(v16 + 416),
    v35,
    v36);
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v10,
      20,
      13,
      (__int64)&WPP_ff22e2111f9634943613373808792668_Traceguids);
  }
  return this;
}
