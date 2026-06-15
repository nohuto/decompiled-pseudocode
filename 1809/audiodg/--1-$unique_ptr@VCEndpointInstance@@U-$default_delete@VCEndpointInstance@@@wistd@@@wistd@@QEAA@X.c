/*
 * XREFs of ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14003D548
 * Callers:
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$12 @ 0x14001F950 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$12.c)
 * Callees:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x14003B42C (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

CEndpointInstance *__fastcall wistd::unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>::~unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>(
        CEndpointInstance **a1)
{
  CEndpointInstance *v1; // rcx
  CEndpointInstance *result; // rax

  v1 = *a1;
  if ( v1 )
    return CEndpointInstance::`scalar deleting destructor'(v1);
  return result;
}
