/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800CEC40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrSetImplicitPathOptions(ULONG ImplicitPathOptions)
{
  int v1; // edx
  int v2; // ebx
  NTSTATUS v3; // edi
  char *v4; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v2 = v1;
  if ( (~((dword_180162714 & 4 | 0x7B) << 8) & v1) != 0 || !v1 )
    return -1073741811;
  v3 = sub_18001869C(*(unsigned __int64 *)&ImplicitPathOptions, (__int64 *)&BaseAddress, &v6);
  if ( v3 >= 0 )
  {
    v4 = (char *)BaseAddress;
    *((_DWORD *)BaseAddress + 68) = v2;
    sub_18001B678(v4);
  }
  return v3;
}
