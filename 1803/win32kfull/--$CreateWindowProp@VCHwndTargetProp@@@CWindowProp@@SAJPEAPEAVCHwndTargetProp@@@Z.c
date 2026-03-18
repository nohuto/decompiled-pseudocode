/*
 * XREFs of ??$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z @ 0x1C000C0F0
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C000C360 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall CWindowProp::CreateWindowProp<CHwndTargetProp>(_QWORD *a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  _QWORD *v4; // rdi

  v2 = 0;
  v3 = (_QWORD *)Win32AllocPoolZInit(40LL, 1835299669LL);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x28uLL);
    *a1 = v4;
    *v4 = &CHwndTargetProp::`vftable';
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
