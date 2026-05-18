/*
 * XREFs of j__Mtx_destroy_in_situ @ 0x180020BB8
 * Callers:
 *     sub_180128636 @ 0x180128636 (sub_180128636.c)
 *     sub_18012CEBC @ 0x18012CEBC (sub_18012CEBC.c)
 *     sub_18012DB6C @ 0x18012DB6C (sub_18012DB6C.c)
 *     sub_18012DDBB @ 0x18012DDBB (sub_18012DDBB.c)
 *     sub_180130127 @ 0x180130127 (sub_180130127.c)
 *     sub_1801301FB @ 0x1801301FB (sub_1801301FB.c)
 *     ?dtor$1@?0???1_CancellationTokenState@details@Concurrency@@UEAA@XZ@4HA @ 0x1801311E5 (-dtor$1@-0---1_CancellationTokenState@details@Concurrency@@UEAA@XZ@4HA.c)
 *     sub_1801311F5 @ 0x1801311F5 (sub_1801311F5.c)
 *     sub_180133455 @ 0x180133455 (sub_180133455.c)
 *     sub_180133481 @ 0x180133481 (sub_180133481.c)
 *     sub_1801334AD @ 0x1801334AD (sub_1801334AD.c)
 *     sub_180134942 @ 0x180134942 (sub_180134942.c)
 *     sub_180134965 @ 0x180134965 (sub_180134965.c)
 *     ?dtor$0@?0???1_TaskCollection@details@Concurrency@@QEAA@XZ@4HA_2 @ 0x180134B83 (-dtor$0@-0---1_TaskCollection@details@Concurrency@@QEAA@XZ@4HA_2.c)
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_9 @ 0x180134C2F (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_9.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl j__Mtx_destroy_in_situ(_Mtx_t a1)
{
  Mtx_destroy_in_situ(a1);
}
