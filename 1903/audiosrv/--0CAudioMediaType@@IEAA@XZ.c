/*
 * XREFs of ??0CAudioMediaType@@IEAA@XZ @ 0x18001996C
 * Callers:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x1800180D0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x180049A20 (--0IUnknown@@QEAA@XZ.c)
 */

CAudioMediaType *__fastcall CAudioMediaType::CAudioMediaType(CAudioMediaType *this)
{
  IUnknown::IUnknown((IUnknown *)this);
  *(_QWORD *)this = &CAudioMediaType::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  return this;
}
