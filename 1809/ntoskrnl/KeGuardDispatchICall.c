/*
 * XREFs of KeGuardDispatchICall @ 0x14034AB40
 * Callers:
 *     KiDecodeMcaFault @ 0x14019F6E0 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1401A0550 (KiSwInterruptDispatch.c)
 *     sub_1401A1740 @ 0x1401A1740 (sub_1401A1740.c)
 *     sub_1401AD6E0 @ 0x1401AD6E0 (sub_1401AD6E0.c)
 *     sub_1401AD8FC @ 0x1401AD8FC (sub_1401AD8FC.c)
 *     sub_1401AD95C @ 0x1401AD95C (sub_1401AD95C.c)
 *     sub_1401AD9DC @ 0x1401AD9DC (sub_1401AD9DC.c)
 *     sub_1401AE904 @ 0x1401AE904 (sub_1401AE904.c)
 *     RtlpComputeEpilogueOffset @ 0x1401AEF6C (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140332010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140345BE8 @ 0x140345BE8 (sub_140345BE8.c)
 *     sub_140347B4C @ 0x140347B4C (sub_140347B4C.c)
 *     sub_1403485B4 @ 0x1403485B4 (sub_1403485B4.c)
 *     sub_140349570 @ 0x140349570 (sub_140349570.c)
 *     sub_14034A0A0 @ 0x14034A0A0 (sub_14034A0A0.c)
 *     sub_14098EFA4 @ 0x14098EFA4 (sub_14098EFA4.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 *     sub_1409AA2A4 @ 0x1409AA2A4 (sub_1409AA2A4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
