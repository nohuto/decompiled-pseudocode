/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x180076F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 */

NTSTATUS __cdecl LdrDisableThreadCalloutsForDll(PVOID DllImageBase)
{
  NTSTATUS v1; // ebx
  char *v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  if ( !byte_180165408 )
  {
    v1 = sub_18001869C((unsigned __int64)DllImageBase, (__int64 *)&BaseAddress, &v4);
    if ( v1 >= 0 )
    {
      v2 = (char *)BaseAddress;
      if ( !*((_WORD *)BaseAddress + 55) )
        *((_BYTE *)BaseAddress + 106) |= 4u;
      sub_18001B678(v2);
    }
  }
  return v1;
}
