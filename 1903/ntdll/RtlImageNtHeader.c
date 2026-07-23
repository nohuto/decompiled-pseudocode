/*
 * XREFs of RtlImageNtHeader @ 0x18001B960
 * Callers:
 *     sub_18001A870 @ 0x18001A870 (sub_18001A870.c)
 *     sub_18001F014 @ 0x18001F014 (sub_18001F014.c)
 *     sub_18002C750 @ 0x18002C750 (sub_18002C750.c)
 *     sub_1800593F0 @ 0x1800593F0 (sub_1800593F0.c)
 *     sub_1800599C4 @ 0x1800599C4 (sub_1800599C4.c)
 *     sub_18005A624 @ 0x18005A624 (sub_18005A624.c)
 *     sub_180062F34 @ 0x180062F34 (sub_180062F34.c)
 *     RtlCreateUserStack @ 0x180074900 (RtlCreateUserStack.c)
 *     sub_1800CEDF8 @ 0x1800CEDF8 (sub_1800CEDF8.c)
 *     sub_1800D9FD0 @ 0x1800D9FD0 (sub_1800D9FD0.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 *     RtlComputeImportTableHash @ 0x1800DF5C0 (RtlComputeImportTableHash.c)
 *     sub_1800E02E0 @ 0x1800E02E0 (sub_1800E02E0.c)
 *     sub_1800E046C @ 0x1800E046C (sub_1800E046C.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 */

PIMAGE_NT_HEADERS __cdecl RtlImageNtHeader(PVOID BaseOfImage)
{
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  return OutHeaders;
}
