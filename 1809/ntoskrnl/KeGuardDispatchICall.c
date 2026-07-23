/*
 * XREFs of KeGuardDispatchICall @ 0x14034BB40
 * Callers:
 *     KiDecodeMcaFault @ 0x14019F820 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1401A0690 (KiSwInterruptDispatch.c)
 *     sub_1401A1880 @ 0x1401A1880 (sub_1401A1880.c)
 *     sub_1401AD820 @ 0x1401AD820 (sub_1401AD820.c)
 *     sub_1401ADA3C @ 0x1401ADA3C (sub_1401ADA3C.c)
 *     sub_1401ADA9C @ 0x1401ADA9C (sub_1401ADA9C.c)
 *     sub_1401ADB1C @ 0x1401ADB1C (sub_1401ADB1C.c)
 *     sub_1401AEA44 @ 0x1401AEA44 (sub_1401AEA44.c)
 *     RtlpComputeEpilogueOffset @ 0x1401AF0AC (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140333010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140346BE8 @ 0x140346BE8 (sub_140346BE8.c)
 *     sub_140348B4C @ 0x140348B4C (sub_140348B4C.c)
 *     sub_1403495B4 @ 0x1403495B4 (sub_1403495B4.c)
 *     sub_14034A570 @ 0x14034A570 (sub_14034A570.c)
 *     sub_14034B0A0 @ 0x14034B0A0 (sub_14034B0A0.c)
 *     sub_14098FFA4 @ 0x14098FFA4 (sub_14098FFA4.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 *     sub_1409AB2A4 @ 0x1409AB2A4 (sub_1409AB2A4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
