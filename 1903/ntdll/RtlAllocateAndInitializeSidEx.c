/*
 * XREFs of RtlAllocateAndInitializeSidEx @ 0x18008A5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSidEx(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        PULONG SubAuthorities,
        PSID *Sid)
{
  char *Heap; // rax
  __int64 v9; // r8
  signed __int64 v10; // rdx

  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1310720, 4 * (unsigned int)SubAuthorityCount + 8);
  if ( !Heap )
    return -1073741801;
  *Heap = 1;
  *(_DWORD *)(Heap + 2) = *(_DWORD *)IdentifierAuthority->Value;
  *((_WORD *)Heap + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
  Heap[1] = SubAuthorityCount;
  if ( SubAuthorityCount )
  {
    v9 = SubAuthorityCount;
    v10 = Heap - (char *)SubAuthorities;
    do
    {
      *(PULONG)((char *)SubAuthorities + v10 + 8) = *SubAuthorities;
      ++SubAuthorities;
      --v9;
    }
    while ( v9 );
  }
  *Sid = Heap;
  return 0;
}
