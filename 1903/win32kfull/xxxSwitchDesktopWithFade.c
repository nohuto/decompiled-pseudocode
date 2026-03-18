/*
 * XREFs of xxxSwitchDesktopWithFade @ 0x1C012732C
 * Callers:
 *     NtUserSwitchDesktop @ 0x1C0080F50 (NtUserSwitchDesktop.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     FadeDesktop @ 0x1C007FE40 (FadeDesktop.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     RestoreGammaRamp @ 0x1C0127540 (RestoreGammaRamp.c)
 *     PrepareGammaRampData @ 0x1C01275D0 (PrepareGammaRampData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSwitchDesktopWithFade(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  int v5; // r14d
  unsigned int *v6; // rbx
  unsigned int v9; // esi
  int v10; // r13d
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 ThreadWin32Thread; // rax
  int v21; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v22; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v23[4]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+A0h] [rbp+40h] BYREF

  v5 = 0;
  v6 = 0LL;
  v25 = 0;
  v22 = 0LL;
  v21 = 0;
  v9 = 0;
  memset(v23, 0, 24);
  v10 = 0;
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 3221225506LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (!a2
     || !grpdeskRitInput
     || (*(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1) == 0
     || (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0
     || !a5)
    && !gfIsFadingInProgress )
  {
    gfIsFadingInProgress = 1;
    v10 = 1;
    v16 = PrepareGammaRampData(&v25, &v22, &v21);
    v6 = v22;
    if ( v16 >= 0 )
      PushW32ThreadLock((__int64)v22, v23, (__int64)RestoreGammaRamp, v18);
    if ( v21 )
    {
      v5 = 1;
      if ( gdwInAtomicOperation )
      {
        v17 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v17);
      v9 = v25;
      FadeDesktop(v25, v6, a4 >> 1, 0);
      EnterCrit(0LL, 1LL);
    }
    else
    {
      v9 = v25;
    }
  }
  v12 = xxxSwitchDesktop(a1, a2, 0, a5);
  if ( v5 )
  {
    v19 = gdwInAtomicOperation;
    if ( gdwInAtomicOperation )
    {
      v19 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v19);
    FadeDesktop(v9, v6, a4 >> 1, 1);
    EnterCrit(0LL, 1LL);
  }
  if ( v6 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13, v14);
    *(_QWORD *)(ThreadWin32Thread + 16) = v23[0];
    RestoreGammaRamp(v22);
  }
  if ( v10 )
    gfIsFadingInProgress = 0;
  return v12;
}
