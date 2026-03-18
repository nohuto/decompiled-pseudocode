/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1400D5F30
 * Callers:
 *     SmDecompressBuffer @ 0x1400D5D48 (SmDecompressBuffer.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400D6C10 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14019916C (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     EtwpInitializeCompression @ 0x140333870 (EtwpInitializeCompression.c)
 *     PopHiberInitializeResources @ 0x1407284D8 (PopHiberInitializeResources.c)
 *     EtwpInitializeCompressedWriter @ 0x140906E74 (EtwpInitializeCompressedWriter.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall RtlGetCompressionWorkSpaceSize(
        USHORT CompressionFormatAndEngine,
        PULONG CompressBufferWorkSpaceSize,
        PULONG CompressFragmentWorkSpaceSize)
{
  if ( (unsigned __int8)CompressionFormatAndEngine < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 4u )
    return -1073741217;
  return ((__int64 (__fastcall *)(_WORD, PULONG, PULONG))RtlWorkSpaceProcs[(unsigned __int8)CompressionFormatAndEngine])(
           CompressionFormatAndEngine & 0xFF00,
           CompressBufferWorkSpaceSize,
           CompressFragmentWorkSpaceSize);
}
