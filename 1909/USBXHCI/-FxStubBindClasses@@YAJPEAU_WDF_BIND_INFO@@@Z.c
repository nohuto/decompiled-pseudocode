/*
 * XREFs of ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0007DE4
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0007CB4 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxStubBindClasses(struct _WDF_BIND_INFO *a1)
{
  __int64 result; // rax
  _QWORD *v2; // r8
  bool i; // cf
  _QWORD *v4; // rbx
  __int64 (__fastcall *v5)(__int64 (__fastcall *)(_QWORD, _QWORD), void *, unsigned __int64, _QWORD *); // rax

  result = 0LL;
  if ( &__KMDF_CLASS_BIND_START > (_UNKNOWN *)&__KMDF_CLASS_BIND_END )
    return 3221225595LL;
  v2 = &Ucx_BIND_INFO;
  for ( i = &Ucx_BIND_INFO < (_UNKNOWN *)&__KMDF_CLASS_BIND_END; i; i = v4 < &__KMDF_CLASS_BIND_END )
  {
    if ( (_QWORD *)((char *)v2 + 4) > &__KMDF_CLASS_BIND_END )
      return 3221225595LL;
    if ( *(_DWORD *)v2 != 80 )
      return 3221225476LL;
    v4 = v2 + 10;
    if ( v2 + 10 > &__KMDF_CLASS_BIND_END )
      return 3221225595LL;
    v5 = (__int64 (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD), void *, unsigned __int64, _QWORD *))v2[7];
    off_1C00575E8 = v2;
    if ( v5 )
      result = v5(WdfVersionBindClass, &WdfBindInfo, WPP_MAIN_CB.Dpc.ProcessorHistory, v2);
    else
      result = WdfVersionBindClass(&WdfBindInfo, WPP_MAIN_CB.Dpc.ProcessorHistory);
    if ( (int)result < 0 )
      return result;
    v2 = v4;
  }
  return result;
}
