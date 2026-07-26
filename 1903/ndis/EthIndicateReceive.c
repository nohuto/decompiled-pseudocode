/*
 * XREFs of EthIndicateReceive @ 0x1C00AE000
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisLWM5IndicateReceive@@YAXPEAU_X_FILTER@@PEAX1I1II@Z @ 0x1C00ACEC8 (-ndisLWM5IndicateReceive@@YAXPEAU_X_FILTER@@PEAX1I1II@Z.c)
 */

void __fastcall EthIndicateReceive(
        struct _X_FILTER *a1,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        unsigned int a8)
{
  size_t v8; // [rsp+30h] [rbp-18h]

  LODWORD(v8) = a8;
  ndisLWM5IndicateReceive(a1, a2, a4, a5, a6, a7, v8);
}
