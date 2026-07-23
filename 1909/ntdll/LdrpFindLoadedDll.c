/*
 * XREFs of LdrpFindLoadedDll @ 0x180021908
 * Callers:
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllInternal @ 0x1800219E8 (LdrpFindLoadedDllInternal.c)
 *     LdrpPreprocessDllName @ 0x180025240 (LdrpPreprocessDllName.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 *     LdrpDropLastInProgressCount @ 0x1800743BC (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpFindLoadedDll(__int64 a1, __int64 a2, char **a3)
{
  int LoadedDllInternal; // ebx
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh]
  _UNICODE_STRING v8; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[128]; // [rsp+50h] [rbp-B0h] BYREF

  *(_DWORD *)&v8.Length = 0x1000000;
  *a3 = 0LL;
  v6 = 0;
  v8.Buffer = v9;
  v9[0] = 0;
  LoadedDllInternal = LdrpPreprocessDllName(a1, &v8, 0LL, &v6);
  if ( LoadedDllInternal >= 0 )
  {
    LoadedDllInternal = LdrpFindLoadedDllInternal(&v8, v6);
    if ( LoadedDllInternal >= 0 && v7 < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a3);
      *a3 = 0LL;
      LdrpDrainWorkQueue(0LL);
      LoadedDllInternal = LdrpFindLoadedDllInternal(&v8, v6);
      LdrpDropLastInProgressCount();
      if ( LoadedDllInternal >= 0 && v7 != 9 )
      {
        LdrpDereferenceModule(*a3);
        *a3 = 0LL;
        LoadedDllInternal = -1073741515;
      }
    }
  }
  if ( v9 != v8.Buffer )
    NtdllpFreeStringRoutine(v8.Buffer);
  return (unsigned int)LoadedDllInternal;
}
