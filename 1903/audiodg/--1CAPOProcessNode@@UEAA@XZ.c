/*
 * XREFs of ??1CAPOProcessNode@@UEAA@XZ @ 0x140035E78
 * Callers:
 *     ??_GCAPOProcessNode@@UEAAPEAXI@Z @ 0x140036060 (--_GCAPOProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCAPOInstance@@QEAAPEAXI@Z @ 0x14003600C (--_GCAPOInstance@@QEAAPEAXI@Z.c)
 */

void __fastcall CAPOProcessNode::~CAPOProcessNode(CAPOProcessNode *this, unsigned int a2)
{
  CAPOInstance *v3; // rcx

  *(_QWORD *)this = &CAPOProcessNode::`vftable';
  v3 = (CAPOInstance *)*((_QWORD *)this + 4);
  if ( v3 )
    CAPOInstance::`scalar deleting destructor'(v3, a2);
  *((_QWORD *)this + 4) = 0LL;
  CProcessNode::~CProcessNode(this);
}
