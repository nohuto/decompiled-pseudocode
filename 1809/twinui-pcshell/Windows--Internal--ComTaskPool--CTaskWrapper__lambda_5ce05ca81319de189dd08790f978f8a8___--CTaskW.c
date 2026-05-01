/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5ce05ca81319de189dd08790f978f8a8___::CTaskWrapper__lambda_5ce05ca81319de189dd08790f978f8a8_____lambda_5ce05ca81319de189dd08790f978f8a8___ @ 0x180125A64
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5ce05ca81319de189dd08790f978f8a8___ @ 0x1801264D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_5ce05ca81319de189dd08790f978f8a8___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18010706C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_18010706C.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5ce05ca81319de189dd08790f978f8a8___::CTaskWrapper__lambda_5ce05ca81319de189dd08790f978f8a8_____lambda_5ce05ca81319de189dd08790f978f8a8___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 2;
  a1[3] = a2[1];
  a1[4] = 0LL;
  if ( a1 + 4 != a2 + 2 )
  {
    a1[4] = *v4;
    *v4 = 0LL;
  }
  a1[5] = a2[3];
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 6,
    (__int64)(a2 + 4));
  a1[6] = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
  *a1 = off_1803D1388;
  return a1;
}
