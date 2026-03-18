/*
 * XREFs of ??$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z @ 0x1C0015EEC
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00161A8 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowProp::CreateWindowProp<CHwndTargetProp>(_QWORD *a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax

  v2 = 0;
  v3 = (_QWORD *)Win32AllocPoolZInit(40LL, 1835299669LL);
  if ( v3 )
  {
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    *v3 = &CHwndTargetProp::`vftable';
    *a1 = v3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
