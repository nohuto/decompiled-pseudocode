/*
 * XREFs of ??_GMultitaskingData@@EEAAPEAXI@Z @ 0x18036CB80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     ??1MultitaskingData@@EEAA@XZ @ 0x18036CAC0 (--1MultitaskingData@@EEAA@XZ.c)
 */

MultitaskingData *__fastcall MultitaskingData::`scalar deleting destructor'(MultitaskingData *this, char a2)
{
  MultitaskingData::~MultitaskingData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
