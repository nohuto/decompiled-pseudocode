/*
 * XREFs of ??0CAudioMediaType@@IEAA@XZ @ 0x1400073F8
 * Callers:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140007170 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x140015020 (--0IUnknown@@QEAA@XZ.c)
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
