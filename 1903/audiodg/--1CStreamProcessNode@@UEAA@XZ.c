/*
 * XREFs of ??1CStreamProcessNode@@UEAA@XZ @ 0x140035F68
 * Callers:
 *     ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x140036160 (--_GCStreamProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x1400360DC (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

void __fastcall CStreamProcessNode::~CStreamProcessNode(CStreamProcessNode *this, unsigned int a2)
{
  CEndpointInstance *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CStreamProcessNode::`vftable';
  v3 = (CEndpointInstance *)*((_QWORD *)this + 4);
  if ( v3 )
    CEndpointInstance::`scalar deleting destructor'(v3, a2);
  *((_QWORD *)this + 4) = 0LL;
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CProcessNode::~CProcessNode(this);
}
