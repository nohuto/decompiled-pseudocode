/*
 * XREFs of ??_GCAPOProcessNode@@UEAAPEAXI@Z @ 0x140036060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAPOProcessNode@@UEAA@XZ @ 0x140035E78 (--1CAPOProcessNode@@UEAA@XZ.c)
 */

CAPOProcessNode *__fastcall CAPOProcessNode::`scalar deleting destructor'(CAPOProcessNode *this, unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CAPOProcessNode::~CAPOProcessNode(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
