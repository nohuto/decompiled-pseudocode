/*
 * XREFs of ??_ECAPOEndpointProcessNode@@UEAAPEAXI@Z @ 0x140035FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x140035E1C (--1CAPOEndpointProcessNode@@UEAA@XZ.c)
 */

CAPOEndpointProcessNode *__fastcall CAPOEndpointProcessNode::`vector deleting destructor'(
        CAPOEndpointProcessNode *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CAPOEndpointProcessNode::~CAPOEndpointProcessNode(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
