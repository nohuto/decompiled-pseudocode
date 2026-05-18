/*
 * XREFs of j__Mtx_destroy_in_situ @ 0x180020AA8
 * Callers:
 *     sub_180128526 @ 0x180128526 (sub_180128526.c)
 *     sub_18012CDAC @ 0x18012CDAC (sub_18012CDAC.c)
 *     sub_18012DA5C @ 0x18012DA5C (sub_18012DA5C.c)
 *     sub_18012DCAB @ 0x18012DCAB (sub_18012DCAB.c)
 *     sub_180130017 @ 0x180130017 (sub_180130017.c)
 *     sub_1801300EB @ 0x1801300EB (sub_1801300EB.c)
 *     ?dtor$1@?0???1_CancellationTokenState@details@Concurrency@@UEAA@XZ@4HA @ 0x1801310D5 (-dtor$1@-0---1_CancellationTokenState@details@Concurrency@@UEAA@XZ@4HA.c)
 *     sub_1801310E5 @ 0x1801310E5 (sub_1801310E5.c)
 *     sub_180133345 @ 0x180133345 (sub_180133345.c)
 *     sub_180133371 @ 0x180133371 (sub_180133371.c)
 *     sub_18013339D @ 0x18013339D (sub_18013339D.c)
 *     sub_180134832 @ 0x180134832 (sub_180134832.c)
 *     sub_180134855 @ 0x180134855 (sub_180134855.c)
 *     ?dtor$0@?0???1_TaskCollection@details@Concurrency@@QEAA@XZ@4HA_2 @ 0x180134A73 (-dtor$0@-0---1_TaskCollection@details@Concurrency@@QEAA@XZ@4HA_2.c)
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_9 @ 0x180134B1F (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_9.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl j__Mtx_destroy_in_situ(_Mtx_t a1)
{
  Mtx_destroy_in_situ(a1);
}
