/*
 * XREFs of ??0FlipManagerObject@@IEAA@XZ @ 0x1C0059440
 * Callers:
 *     ?ObjectInit@FlipManagerObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C00594F0 (-ObjectInit@FlipManagerObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@.c)
 * Callees:
 *     <none>
 */

FlipManagerObject *__fastcall FlipManagerObject::FlipManagerObject(FlipManagerObject *this)
{
  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 4) = &CFlipManager::`vftable'{for `IDxgkCompositionObject'};
  *((_QWORD *)this + 5) = &CFlipManager::`vftable'{for `CPushLock'};
  *((_BYTE *)this + 120) = 0;
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 11) = (char *)this + 88;
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 13) = (char *)this + 104;
  *((_BYTE *)this + 160) = 0;
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 16) = (char *)this + 128;
  *((_QWORD *)this + 19) = (char *)this + 144;
  *((_QWORD *)this + 18) = (char *)this + 144;
  *((_QWORD *)this + 22) = (char *)this + 168;
  *((_QWORD *)this + 21) = (char *)this + 168;
  *((_QWORD *)this + 24) = (char *)this + 184;
  *((_QWORD *)this + 23) = (char *)this + 184;
  *((_QWORD *)this + 26) = (char *)this + 200;
  *((_QWORD *)this + 25) = (char *)this + 200;
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  return this;
}
