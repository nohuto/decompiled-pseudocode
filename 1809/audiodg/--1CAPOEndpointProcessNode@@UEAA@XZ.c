/*
 * XREFs of ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x14003B338
 * Callers:
 *     ??_ECAPOEndpointProcessNode@@UEAAPEAXI@Z @ 0x14003B3F0 (--_ECAPOEndpointProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x14003B42C (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

void __fastcall CAPOEndpointProcessNode::~CAPOEndpointProcessNode(CAPOEndpointProcessNode *this, unsigned int a2)
{
  CEndpointInstance *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CAPOEndpointProcessNode::`vftable';
  v3 = (CEndpointInstance *)*((_QWORD *)this + 4);
  if ( v3 )
    CEndpointInstance::`scalar deleting destructor'(v3, a2);
  *((_QWORD *)this + 4) = 0LL;
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CProcessNode::~CProcessNode(this);
}
