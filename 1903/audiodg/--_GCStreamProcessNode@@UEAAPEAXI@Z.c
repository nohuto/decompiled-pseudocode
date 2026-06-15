/*
 * XREFs of ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x140036160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x140035F68 (--1CStreamProcessNode@@UEAA@XZ.c)
 */

CStreamProcessNode *__fastcall CStreamProcessNode::`scalar deleting destructor'(
        CStreamProcessNode *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CStreamProcessNode::~CStreamProcessNode(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
