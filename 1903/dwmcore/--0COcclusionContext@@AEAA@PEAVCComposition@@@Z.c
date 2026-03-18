/*
 * XREFs of ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x1800461B0
 * Callers:
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B5338 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CLightStack@@QEAA@XZ @ 0x180046C88 (--0CLightStack@@QEAA@XZ.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

COcclusionContext *__fastcall COcclusionContext::COcclusionContext(COcclusionContext *this, struct CComposition *a2)
{
  __int64 v3; // r8

  *(_QWORD *)this = &COcclusionContext::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 13) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 38) = 0;
  CLightStack::CLightStack((COcclusionContext *)((char *)this + 160));
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = (char *)this + 440;
  *((_QWORD *)this + 52) = (char *)this + 440;
  *((_DWORD *)this + 106) = 10;
  *(_QWORD *)((char *)this + 428) = 10LL;
  *((_QWORD *)this + 80) = v3;
  *((_DWORD *)this + 162) = 0;
  `vector constructor iterator'(
    (char *)this + 652,
    16LL,
    8LL,
    (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  *((_QWORD *)this + 102) = 0LL;
  *((_WORD *)this + 412) = 0;
  *((_DWORD *)this + 223) = 0;
  *((_DWORD *)this + 240) = 0;
  *((_QWORD *)this + 121) = (char *)this + 976;
  *((_DWORD *)this + 244) = 0;
  *((_QWORD *)this + 130) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 134) = 0LL;
  *((_DWORD *)this + 266) = 0;
  *((_DWORD *)this + 270) = 0;
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 138) = 0LL;
  *((_DWORD *)this + 274) = 0;
  *((_DWORD *)this + 278) = 0;
  *((_QWORD *)this + 140) = 0LL;
  *((_QWORD *)this + 142) = 0LL;
  *((_DWORD *)this + 282) = 0;
  *((_DWORD *)this + 286) = 0;
  *((_QWORD *)this + 144) = 0LL;
  *((_QWORD *)this + 145) = 0LL;
  *((_QWORD *)this + 146) = 0LL;
  *((_QWORD *)this + 147) = 0LL;
  *((_DWORD *)this + 296) = 0;
  *((_QWORD *)this + 149) = 0LL;
  *((_QWORD *)this + 150) = 0LL;
  memset_0((char *)this + 652, 0, 0x80uLL);
  memset_0((char *)this + 780, 0, 0x20uLL);
  return this;
}
