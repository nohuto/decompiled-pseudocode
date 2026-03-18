/*
 * XREFs of KeGuardDispatchICall @ 0x14036D310
 * Callers:
 *     KiDecodeMcaFault @ 0x1401AA700 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1401AB5C0 (KiSwInterruptDispatch.c)
 *     sub_1401AC880 @ 0x1401AC880 (sub_1401AC880.c)
 *     sub_1401B8C80 @ 0x1401B8C80 (sub_1401B8C80.c)
 *     sub_1401B8E9C @ 0x1401B8E9C (sub_1401B8E9C.c)
 *     sub_1401B8EFC @ 0x1401B8EFC (sub_1401B8EFC.c)
 *     sub_1401B8F7C @ 0x1401B8F7C (sub_1401B8F7C.c)
 *     sub_1401B9EE8 @ 0x1401B9EE8 (sub_1401B9EE8.c)
 *     RtlpComputeEpilogueOffset @ 0x1401BA574 (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140354010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140368148 @ 0x140368148 (sub_140368148.c)
 *     sub_14036A0A4 @ 0x14036A0A4 (sub_14036A0A4.c)
 *     sub_14036AB20 @ 0x14036AB20 (sub_14036AB20.c)
 *     sub_14036BD00 @ 0x14036BD00 (sub_14036BD00.c)
 *     sub_14036C810 @ 0x14036C810 (sub_14036C810.c)
 *     sub_1409D0FB4 @ 0x1409D0FB4 (sub_1409D0FB4.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 *     sub_1409EC964 @ 0x1409EC964 (sub_1409EC964.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
