/*
 * XREFs of ?RtlpFlsInitialize@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z @ 0x1800DE540
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     memset @ 0x1800A3DC0 (memset.c)
 */

void __fastcall RtlpFlsInitialize(struct _RTLP_FLS_CONTEXT *a1)
{
  memset(&RtlpFlsContext, 0, 0x60uLL);
  memset(&unk_180166138, 0, 0x40uLL);
  qword_180166180 = (__int64)&qword_180166178;
  qword_180166178 = (__int64)&qword_180166178;
}
