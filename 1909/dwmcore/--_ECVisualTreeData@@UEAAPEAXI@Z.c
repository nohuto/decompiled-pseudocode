/*
 * XREFs of ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x1800CA250
 * Callers:
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x18007B264 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x1800785F4 (--1CTreeData@@UEAA@XZ.c)
 */

CVisualTreeData *__fastcall CVisualTreeData::`vector deleting destructor'(CVisualTreeData *this, char a2)
{
  *(_QWORD *)this = &CVisualTreeData::`vftable';
  CTreeData::~CTreeData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
