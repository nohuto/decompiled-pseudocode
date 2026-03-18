/*
 * XREFs of ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0007EA0
 * Callers:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0007C3C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxStubUnbindClasses(struct _WDF_BIND_INFO *a1)
{
  _QWORD *v1; // rbx
  void (__fastcall *v2)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, unsigned __int64, _QWORD *); // rax

  v1 = &Ucx_BIND_INFO;
  if ( off_1C00575E8 != &__KMDF_CLASS_BIND_START && &Ucx_BIND_INFO <= off_1C00575E8 )
  {
    do
    {
      v2 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, unsigned __int64, _QWORD *))v1[8];
      if ( v2 )
        v2(WdfVersionUnbindClass, &WdfBindInfo, WPP_MAIN_CB.Dpc.ProcessorHistory, v1);
      else
        WdfVersionUnbindClass(&WdfBindInfo, WPP_MAIN_CB.Dpc.ProcessorHistory, v1);
      v1 += 10;
    }
    while ( v1 <= (_QWORD *)off_1C00575E8 );
  }
}
