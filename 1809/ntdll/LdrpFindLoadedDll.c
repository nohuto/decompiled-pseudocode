/*
 * XREFs of LdrpFindLoadedDll @ 0x1800229B8
 * Callers:
 *     LdrGetDllHandleEx @ 0x1800228A0 (LdrGetDllHandleEx.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     LdrpFindLoadedDllInternal @ 0x180022ADC (LdrpFindLoadedDllInternal.c)
 *     LdrpPreprocessDllName @ 0x180025FA8 (LdrpPreprocessDllName.c)
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x180079EDC (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpFindLoadedDll(__int64 a1, int a2, __int64 *a3)
{
  int LoadedDllInternal; // ebx
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v8[3]; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  _WORD *v10; // [rsp+48h] [rbp-B8h]
  _WORD v11[128]; // [rsp+50h] [rbp-B0h] BYREF

  v9 = 0x1000000;
  *a3 = 0LL;
  v7 = 0;
  v10 = v11;
  v11[0] = 0;
  LoadedDllInternal = LdrpPreprocessDllName(a1, &v9, 0LL, &v7);
  if ( LoadedDllInternal >= 0 )
  {
    LoadedDllInternal = LdrpFindLoadedDllInternal((unsigned int)&v9, a2, (_DWORD)a3, (unsigned int)v8, v7);
    if ( LoadedDllInternal >= 0 && v8[0] < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a3);
      *a3 = 0LL;
      LdrpDrainWorkQueue(0LL);
      LoadedDllInternal = LdrpFindLoadedDllInternal((unsigned int)&v9, a2, (_DWORD)a3, (unsigned int)v8, v7);
      LdrpDropLastInProgressCount();
      if ( LoadedDllInternal >= 0 && v8[0] != 9 )
      {
        LdrpDereferenceModule(*a3);
        *a3 = 0LL;
        LoadedDllInternal = -1073741515;
      }
    }
  }
  if ( v11 != v10 )
    NtdllpFreeStringRoutine((__int64)v10);
  return (unsigned int)LoadedDllInternal;
}
