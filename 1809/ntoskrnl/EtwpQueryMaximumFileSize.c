/*
 * XREFs of EtwpQueryMaximumFileSize @ 0x140014A4C
 * Callers:
 *     EtwpFlushBufferToLogfile @ 0x1405C1784 (EtwpFlushBufferToLogfile.c)
 *     EtwpUpdateFileHeader @ 0x14069AFDC (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x14069B5BC (EtwpFinalizeHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpQueryMaximumFileSize(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(unsigned int *)(a1 + 308);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000) != 0 )
    return v1 << 10;
  else
    return v1 << 20;
}
