/*
 * XREFs of PopCreateDumpMdl @ 0x14056B410
 * Callers:
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x140144520 (MmMapMemoryDumpMdlEx.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1402D3514 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x1402D3928 (_PopInternalError.c)
 */

void __fastcall PopCreateDumpMdl(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 Number; // r10
  unsigned __int64 v6; // r9
  _QWORD *v7; // rax

  Number = KeGetCurrentPrcb()->Number;
  if ( a3 >= a4 )
    PopInternalError(0xA1475uLL);
  v6 = a4 - a3;
  if ( v6 >= *(unsigned int *)(a1 + 284) )
    v6 = *(unsigned int *)(a1 + 284);
  *(_QWORD *)a2 = 0LL;
  *(_WORD *)(a2 + 10) = 0;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_WORD *)(a2 + 8) = 8 * (v6 + 6);
  v7 = (_QWORD *)(a2 + 48);
  for ( *(_QWORD *)(a2 + 40) = (unsigned int)((_DWORD)v6 << 12); v6; --v6 )
    *v7++ = a3++;
  MmMapMemoryDumpMdlEx(*(_QWORD *)((Number << 7) + *(_QWORD *)(a1 + 264) + 8), a1, a2, 0);
  if ( (*(_DWORD *)(a2 + 40) & 0xFFF) != 0 )
  {
    PopInternalAddToDumpFile(a2, 0x30u, 0LL);
    KeBugCheckEx(0xA0u, 0x106uLL, 0xAuLL, a2, 0LL);
  }
}
