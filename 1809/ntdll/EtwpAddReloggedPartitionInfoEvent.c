/*
 * XREFs of EtwpAddReloggedPartitionInfoEvent @ 0x18005A834
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x18005A560 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

void __fastcall EtwpAddReloggedPartitionInfoEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  const void *v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // edi

  v4 = *(const void **)(a1 + 520);
  if ( v4 )
  {
    v5 = *(_DWORD *)(a1 + 528);
    v6 = *(unsigned int *)(a2 + 48);
    v7 = (v5 + 7) & 0xFFFFFFF8;
    if ( (unsigned int)v6 < a3 && (unsigned int)v6 >= 0x180 && a3 - (unsigned int)v6 >= v7 )
    {
      memmove((void *)(a2 + v6), v4, v5);
      *(_DWORD *)(a2 + 48) = v6 + v7;
    }
  }
}
