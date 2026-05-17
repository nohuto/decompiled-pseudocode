/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800D0430
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180042010 (LdrpFindLoadedDllByHandle.c)
 */

__int64 __fastcall LdrSetImplicitPathOptions(unsigned __int64 a1, int a2, __int64 a3, __int64 a4)
{
  int LoadedDllByHandle; // edi
  __int64 v6; // rcx
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  if ( (~((LdrpPolicyBits & 4 | 0x7B) << 8) & a2) != 0 || !a2 )
    return 3221225485LL;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v9, &v8, a4);
  if ( LoadedDllByHandle >= 0 )
  {
    v6 = v9;
    *(_DWORD *)(v9 + 272) = a2;
    LdrpDereferenceModule(v6);
  }
  return (unsigned int)LoadedDllByHandle;
}
