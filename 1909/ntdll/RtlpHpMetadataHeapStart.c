/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x18004D09C
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18004CFA0 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpMetadataHeapStart(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)a1 )
    return 0LL;
  else
    return RtlRunOnceExecuteOnce(
             (volatile signed __int64 *)(a1 + 8),
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpMetadataHeapCreate,
             a2,
             0LL);
}
