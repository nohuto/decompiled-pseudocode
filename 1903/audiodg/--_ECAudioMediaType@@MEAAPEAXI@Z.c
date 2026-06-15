/*
 * XREFs of ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x140040490
 * Callers:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140007180 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400156F8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
