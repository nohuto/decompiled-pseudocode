/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x18007BF90
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180042010 (LdrpFindLoadedDllByHandle.c)
 */

__int64 __fastcall LdrDisableThreadCalloutsForDll(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int LoadedDllByHandle; // ebx
  __int64 v5; // rcx
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_180165408 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v8, &v7, a4);
    if ( LoadedDllByHandle >= 0 )
    {
      v5 = v8;
      if ( !*(_WORD *)(v8 + 110) )
        *(_BYTE *)(v8 + 106) |= 4u;
      LdrpDereferenceModule(v5);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
