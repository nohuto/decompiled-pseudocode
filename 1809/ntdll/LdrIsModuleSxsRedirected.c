/*
 * XREFs of LdrIsModuleSxsRedirected @ 0x1800CFE50
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180042010 (LdrpFindLoadedDllByHandle.c)
 */

bool __fastcall LdrIsModuleSxsRedirected(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  int v5; // ebx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( (int)LdrpFindLoadedDllByHandle(a1, &v7, 0LL, a4) >= 0 )
  {
    v5 = *(_DWORD *)(v7 + 104);
    LdrpDereferenceModule(v7);
    return (v5 & 0x10000000) != 0;
  }
  return v4;
}
