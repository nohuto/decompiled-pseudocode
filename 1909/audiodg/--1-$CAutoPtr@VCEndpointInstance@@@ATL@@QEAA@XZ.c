/*
 * XREFs of ??1?$CAutoPtr@VCEndpointInstance@@@ATL@@QEAA@XZ @ 0x1400392C4
 * Callers:
 *     _CEndpointInstance::CreateApoEndpointInstance_::_1_::dtor$0 @ 0x140039477 (_CEndpointInstance--CreateApoEndpointInstance_--_1_--dtor$0.c)
 * Callees:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x1400360CC (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
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
