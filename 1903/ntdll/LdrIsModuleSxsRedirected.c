/*
 * XREFs of LdrIsModuleSxsRedirected @ 0x1800CE670
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 */

BOOLEAN __cdecl LdrIsModuleSxsRedirected(PVOID DllHandle)
{
  BOOLEAN v1; // bl
  int v2; // ebx
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( (int)sub_18001869C((unsigned __int64)DllHandle, (__int64 *)&BaseAddress, 0LL) >= 0 )
  {
    v2 = *((_DWORD *)BaseAddress + 26);
    sub_18001B678((char *)BaseAddress);
    return (v2 & 0x10000000) != 0;
  }
  return v1;
}
