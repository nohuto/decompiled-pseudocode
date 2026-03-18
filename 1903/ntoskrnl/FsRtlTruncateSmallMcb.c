/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x140344500
 * Callers:
 *     KiInterruptThunk @ 0x1401CE1F0 (KiInterruptThunk.c)
 *     $$1 @ 0x1401CE200 ($$1.c)
 *     $$2 @ 0x1401CE210 ($$2.c)
 *     $$3 @ 0x1401CE220 ($$3.c)
 *     $$4 @ 0x1401CE230 ($$4.c)
 *     $$5 @ 0x1401CE240 ($$5.c)
 *     $$6 @ 0x1401CE250 ($$6.c)
 *     $$7 @ 0x1401CE260 ($$7.c)
 *     $$8 @ 0x1401CE270 ($$8.c)
 *     $$9 @ 0x1401CE280 ($$9.c)
 *     $$a @ 0x1401CE290 ($$a.c)
 *     $$b @ 0x1401CE2A0 ($$b.c)
 *     $$c @ 0x1401CE2B0 ($$c.c)
 *     $$d @ 0x1401CE2C0 ($$d.c)
 *     $$e @ 0x1401CE2D0 ($$e.c)
 *     $$f @ 0x1401CE2E0 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x1400FF0D8 (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1401B9E54 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x1401CE130 (KiCustomAccessRoutine0.c)
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
