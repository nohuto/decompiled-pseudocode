/*
 * XREFs of ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x1800E8E58
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18004BF34 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x1800ECD44 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 *     ?HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z @ 0x1800EF368 (-HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x1800EFB84 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 */

void __fastcall CAppManagerTelemetry::HandleViewCreationFailure<unsigned short const *,unsigned __int64 &,long &,long &>(
        const unsigned __int16 **a1,
        unsigned __int64 *a2,
        int *a3,
        int *a4)
{
  CAppManagerTelemetry *v8; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-18h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-10h] BYREF

  if ( CAppManagerTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        Context = qword_18050F738;
        qword_18050F738[0] = &IamTraceLogging::`vftable';
        atexit(lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
        CAppManagerTelemetry::Create((CAppManagerTelemetry *)qword_18050F738);
        InitOnceComplete(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, qword_18050F738);
      }
    }
    CAppManagerTelemetry::HandleViewCreationFailure_(v8, *a1, *a2, *a3, *a4);
  }
}
