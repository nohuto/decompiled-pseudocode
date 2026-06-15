/*
 * XREFs of ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x140043550
 * Callers:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000D730 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001B8B0 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall CAudioMediaType::`vector deleting destructor'(void **this, char a2)
{
  *this = &CAudioMediaType::`vftable';
  operator delete(this[2]);
  this[2] = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
