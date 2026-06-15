/*
 * XREFs of ??0?$CComQIPtr@UIAPOPreferredFormatSupport@@$1?_GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140044B08
 * Callers:
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x140044D70 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7, a1);
  return a1;
}
