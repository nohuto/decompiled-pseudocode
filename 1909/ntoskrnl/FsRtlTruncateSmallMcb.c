/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x140343F60
 * Callers:
 *     KiInterruptThunk @ 0x1401CED70 (KiInterruptThunk.c)
 *     $$1 @ 0x1401CED80 ($$1.c)
 *     $$2 @ 0x1401CED90 ($$2.c)
 *     $$3 @ 0x1401CEDA0 ($$3.c)
 *     $$4 @ 0x1401CEDB0 ($$4.c)
 *     $$5 @ 0x1401CEDC0 ($$5.c)
 *     $$6 @ 0x1401CEDD0 ($$6.c)
 *     $$7 @ 0x1401CEDE0 ($$7.c)
 *     $$8 @ 0x1401CEDF0 ($$8.c)
 *     $$9 @ 0x1401CEE00 ($$9.c)
 *     $$a @ 0x1401CEE10 ($$a.c)
 *     $$b @ 0x1401CEE20 ($$b.c)
 *     $$c @ 0x1401CEE30 ($$c.c)
 *     $$d @ 0x1401CEE40 ($$d.c)
 *     $$e @ 0x1401CEE50 ($$e.c)
 *     $$f @ 0x1401CEE60 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x140101AD8 (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1401BA574 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x1401CECB0 (KiCustomAccessRoutine0.c)
 */

__int64 __fastcall FsRtlTruncateSmallMcb(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // [rsp+61h] [rbp-77h]
  __int64 v10; // [rsp+A9h] [rbp-2Fh]
  __int64 v11; // [rsp+B1h] [rbp-27h]

  KeExitRetpoline();
  result = ((__int64)a2 >> 47) + 1;
  if ( (__int64)a2 >> 47 != -1 && result != 1 )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v11 = a3;
    v9 = __ROL8__(a2, a3);
    v10 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    return KiCustomAccessRoutine0(a2);
  }
  return result;
}
