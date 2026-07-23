/*
 * XREFs of RtlpWaitOnAddressWithTimeout @ 0x18005ED60
 * Callers:
 *     RtlpWaitOnAddress @ 0x18005EBE8 (RtlpWaitOnAddress.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18005EE98 (RtlpWaitOnAddressRemoveWaitBlock.c)
 * Callees:
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18005EE98 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3C10 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpWaitOnAddressWithTimeout(__int64 a1, __int64 a2, LARGE_INTEGER *a3, unsigned int a4)
{
  unsigned int v4; // edi
  int v7; // edx
  unsigned __int32 v8; // esi

  v4 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v7 = 0;
    if ( a4 )
    {
      while ( (*(_DWORD *)(a2 + 40) & 1) != 0 )
      {
        _mm_pause();
        if ( ++v7 >= a4 )
          goto LABEL_3;
      }
      return 0LL;
    }
  }
LABEL_3:
  if ( !_interlockedbittestandreset((volatile signed __int32 *)(a2 + 40), 0) )
    return 0LL;
  v8 = NtWaitForAlertByThreadId(*(PVOID *)a2, a3);
  if ( v8 == 258 )
  {
    if ( _InterlockedExchange((volatile __int32 *)(a2 + 40), 4) == 2 )
      v8 = NtWaitForAlertByThreadId(*(PVOID *)a2, 0LL);
    else
      RtlpWaitOnAddressRemoveWaitBlock(a1, a2);
  }
  if ( v8 != 257 )
    return v8;
  return v4;
}
