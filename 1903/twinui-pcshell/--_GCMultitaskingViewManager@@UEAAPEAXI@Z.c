/*
 * XREFs of ??_GCMultitaskingViewManager@@UEAAPEAXI@Z @ 0x180349430
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x1803491F8 (--1CMultitaskingViewManager@@UEAA@XZ.c)
 */

CMultitaskingViewManager *__fastcall CMultitaskingViewManager::`scalar deleting destructor'(
        CMultitaskingViewManager *this,
        char a2)
{
  CMultitaskingViewManager::~CMultitaskingViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
