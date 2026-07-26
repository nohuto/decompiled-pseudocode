/*
 * XREFs of ?ndisMpHookSetAdapterContext@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@@Z @ 0x1C00FC510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisMpHookSetAdapterContext(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *a2)
{
  *((_QWORD *)a1 + 659) = a2;
}
