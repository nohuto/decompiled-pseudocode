/*
 * XREFs of ??_GCMultitaskingViewServiceProvider@@UEAAPEAXI@Z @ 0x1802DEC28
 * Callers:
 *     ??_ECMultitaskingViewServiceProvider@@WBI@EAAPEAXI@Z @ 0x1800A80D0 (--_ECMultitaskingViewServiceProvider@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x1802DE844 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 */

CMultitaskingViewServiceProvider *__fastcall CMultitaskingViewServiceProvider::`scalar deleting destructor'(
        CMultitaskingViewServiceProvider *this,
        char a2)
{
  CMultitaskingViewServiceProvider::~CMultitaskingViewServiceProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
