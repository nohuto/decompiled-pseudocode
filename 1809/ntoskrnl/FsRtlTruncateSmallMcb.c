/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x1403229C0
 * Callers:
 *     KiInterruptThunk @ 0x1401C7C20 (KiInterruptThunk.c)
 *     $$1 @ 0x1401C7C30 ($$1.c)
 *     $$2 @ 0x1401C7C40 ($$2.c)
 *     $$3 @ 0x1401C7C50 ($$3.c)
 *     $$4 @ 0x1401C7C60 ($$4.c)
 *     $$5 @ 0x1401C7C70 ($$5.c)
 *     $$6 @ 0x1401C7C80 ($$6.c)
 *     $$7 @ 0x1401C7C90 ($$7.c)
 *     $$8 @ 0x1401C7CA0 ($$8.c)
 *     $$9 @ 0x1401C7CB0 ($$9.c)
 *     $$a @ 0x1401C7CC0 ($$a.c)
 *     $$b @ 0x1401C7CD0 ($$b.c)
 *     $$c @ 0x1401C7CE0 ($$c.c)
 *     $$d @ 0x1401C7CF0 ($$d.c)
 *     $$e @ 0x1401C7D00 ($$e.c)
 *     $$f @ 0x1401C7D10 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x14013916C (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1401AEF6C (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x1401C7B60 (KiCustomAccessRoutine0.c)
 */

__int64 __fastcall FsRtlTruncateSmallMcb(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // [rsp+61h] [rbp-77h]
  __int64 v10; // [rsp+A9h] [rbp-2Fh]
  __int64 v11; // [rsp+B1h] [rbp-27h]

  KeExitRetpoline(a1, a2, a3, a4);
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
