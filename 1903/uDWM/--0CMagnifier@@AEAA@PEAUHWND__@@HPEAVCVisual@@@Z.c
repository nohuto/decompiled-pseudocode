/*
 * XREFs of ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z @ 0x1800837AC
 * Callers:
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x180083914 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CMagnifier *__fastcall CMagnifier::CMagnifier(CMagnifier *this, HWND a2, int a3, struct CVisual *a4)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CMagnifier::`vftable';
  *((_QWORD *)this + 7) = a2;
  *((_DWORD *)this + 42) = 0;
  *((_BYTE *)this + 64) = a3 != 0;
  *(_OWORD *)((char *)this + 68) = g_MilColorTransfIdentity;
  *(_OWORD *)((char *)this + 84) = xmmword_1800CAE20;
  *(_OWORD *)((char *)this + 100) = xmmword_1800CAE30;
  *(_OWORD *)((char *)this + 116) = xmmword_1800CAE40;
  *(_OWORD *)((char *)this + 132) = xmmword_1800CAE50;
  *(_OWORD *)((char *)this + 148) = xmmword_1800CAE60;
  *((_DWORD *)this + 41) = 1065353216;
  *((_QWORD *)this + 2) = a4;
  if ( a4 )
    _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
  return this;
}
