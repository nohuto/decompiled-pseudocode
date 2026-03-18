/*
 * XREFs of UserGetWindowRect @ 0x1C01247B4
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x1C00293A4 (GreUpdateSpriteClipRgn.c)
 *     DxgkEngGetWindowRect @ 0x1C01247A0 (DxgkEngGetWindowRect.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserGetWindowRect(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rcx

  v4 = (_OWORD *)a2;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( result )
  {
    v6 = *(_QWORD *)(result + 40);
    result = 1LL;
    *v4 = *(_OWORD *)(v6 + 88);
  }
  return result;
}
