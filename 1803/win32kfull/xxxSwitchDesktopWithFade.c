/*
 * XREFs of xxxSwitchDesktopWithFade @ 0x1C00BC2A8
 * Callers:
 *     NtUserSwitchDesktop @ 0x1C00BC740 (NtUserSwitchDesktop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     RestoreGammaRamp @ 0x1C00BB520 (RestoreGammaRamp.c)
 *     FadeDesktop @ 0x1C00BBB90 (FadeDesktop.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     PrepareGammaRampData @ 0x1C0105940 (PrepareGammaRampData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSwitchDesktopWithFade(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  int v5; // r15d
  unsigned int v7; // r14d
  unsigned int *v8; // rdi
  int v9; // r13d
  DWORD v11; // ebx
  __int64 v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // r9
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 ThreadWin32Thread; // rax
  int v22; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v23; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v24[4]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v26; // [rsp+A0h] [rbp+40h] BYREF

  v5 = 0;
  v7 = 0;
  v26 = 0;
  v8 = 0LL;
  v23 = 0LL;
  v22 = 0;
  v9 = 0;
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 3221225506LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (!a2
     || !grpdeskRitInput
     || (*(_DWORD *)(**(_QWORD **)(a2 + 8) + 52LL) & 1) == 0
     || (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1) == 0
     || !a5)
    && !gfIsFadingInProgress )
  {
    gfIsFadingInProgress = 1;
    v9 = 1;
    v16 = PrepareGammaRampData(&v26, &v23, &v22);
    v8 = v23;
    if ( v16 >= 0 )
      PushW32ThreadLock((__int64)v23, v24, (__int64)RestoreGammaRamp);
    if ( v22 )
    {
      v5 = 1;
      if ( gdwInAtomicOperation )
      {
        v17 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v17, gdwInAtomicOperation, v18, v19);
      v7 = v26;
      v11 = a4 >> 1;
      FadeDesktop(v26, v8, v11, 0);
      EnterCrit(0LL, 1LL);
      goto LABEL_9;
    }
    v7 = v26;
  }
  v11 = a4 >> 1;
LABEL_9:
  v13 = xxxSwitchDesktop(a1, a2, 0LL, a5);
  if ( v5 )
  {
    v20 = gdwInAtomicOperation;
    if ( gdwInAtomicOperation )
    {
      v20 = gdwExtraInstrumentations;
      v12 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v20, v12, gdwInAtomicOperation, v14);
    FadeDesktop(v7, v8, v11, 1);
    EnterCrit(0LL, 1LL);
  }
  if ( v8 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
    *(_QWORD *)(ThreadWin32Thread + 16) = v24[0];
    RestoreGammaRamp(v23);
  }
  if ( v9 )
    gfIsFadingInProgress = 0;
  return v13;
}
