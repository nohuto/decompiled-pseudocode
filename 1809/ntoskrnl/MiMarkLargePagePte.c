/*
 * XREFs of MiMarkLargePagePte @ 0x1409D2EF0
 * Callers:
 *     <none>
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMarkLargePagePte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rdx
  int v5; // r10d
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = v2;
  if ( (v2 & 1) != 0 && (v2 & 0x80u) != 0LL )
  {
    v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v8) >> 12) & 0xFFFFFFFFFLL;
    if ( ((*(_QWORD *)(48 * v4 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
    {
      v6 = 512LL;
      if ( v5 > 1 )
      {
        v7 = (unsigned int)(v5 - 1);
        do
        {
          v6 <<= 9;
          --v7;
        }
        while ( v7 );
      }
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v4, v6, 1, 0);
    }
  }
  return 0LL;
}
