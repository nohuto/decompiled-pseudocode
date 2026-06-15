/*
 * XREFs of ??1?$CAutoPtr@VCEndpointInstance@@@ATL@@QEAA@XZ @ 0x14003D4F8
 * Callers:
 *     _CEndpointInstance::CreateApoEndpointInstance_::_1_::dtor$0 @ 0x14003D67F (_CEndpointInstance--CreateApoEndpointInstance_--_1_--dtor$0.c)
 * Callees:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x14003B42C (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

CEndpointInstance *__fastcall ATL::CAutoPtr<CEndpointInstance>::~CAutoPtr<CEndpointInstance>(CEndpointInstance **a1)
{
  CEndpointInstance *v2; // rcx
  CEndpointInstance *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CEndpointInstance::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
