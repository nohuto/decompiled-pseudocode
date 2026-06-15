/*
 * XREFs of ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x140036090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x140035EA4 (--1CDeviceProcessNode@@UEAA@XZ.c)
 */

CDeviceProcessNode *__fastcall CDeviceProcessNode::`vector deleting destructor'(
        CDeviceProcessNode *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CDeviceProcessNode::~CDeviceProcessNode(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
