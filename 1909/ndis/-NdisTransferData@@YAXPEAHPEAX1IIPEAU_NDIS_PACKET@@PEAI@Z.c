/*
 * XREFs of ?NdisTransferData@@YAXPEAHPEAX1IIPEAU_NDIS_PACKET@@PEAI@Z @ 0x1C00946E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisTransferData(
        int *a1,
        __int64 (__fastcall **a2)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        void *a3,
        unsigned int a4,
        unsigned int a5,
        struct _NDIS_PACKET *a6,
        unsigned int *a7)
{
  *a1 = ((__int64 (__fastcall **)(_QWORD, void *, _QWORD, _QWORD, struct _NDIS_PACKET *, unsigned int *))a2)[13](
          a2,
          a3,
          a4,
          a5,
          a6,
          a7);
}
