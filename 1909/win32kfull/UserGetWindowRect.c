/*
 * XREFs of UserGetWindowRect @ 0x1C00FF1E4
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x1C002F814 (GreUpdateSpriteClipRgn.c)
 *     DxgkEngGetWindowRect @ 0x1C00FF1D0 (DxgkEngGetWindowRect.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserGetWindowRect(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = (_OWORD *)a2;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2, a3);
  if ( result )
  {
    v5 = *(_QWORD *)(result + 40);
    result = 1LL;
    *v3 = *(_OWORD *)(v5 + 88);
  }
  return result;
}
