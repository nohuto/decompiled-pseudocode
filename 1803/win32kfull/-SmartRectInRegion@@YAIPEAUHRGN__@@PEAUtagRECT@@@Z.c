/*
 * XREFs of ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C002C628
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C002AEA0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall SmartRectInRegion(HRGN a1, struct tagRECT *a2)
{
  int RgnBox; // eax
  __int64 v5; // rcx
  bool v6; // zf
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]

  if ( !(unsigned int)GreRectInRegion() )
    return 0LL;
  RgnBox = GreGetRgnBox(a1, &v10);
  if ( !RgnBox )
    return 3LL;
  if ( RgnBox != 2 )
  {
    SetRectRgnIndirect(ghrgnInv2, a2);
    v8 = GreCombineRgn(ghrgnInv2, ghrgnInv2, a1, 1LL) - 1;
    if ( !v8 )
      return 0LL;
    if ( v8 != 1 )
      return 1LL;
    if ( (unsigned int)GreGetRgnBox(ghrgnInv2, &v10) )
    {
      v9 = *(_QWORD *)&a2->left - v10;
      if ( *(_QWORD *)&a2->left == v10 )
        v9 = *(_QWORD *)&a2->right - v11;
      v6 = v9 == 0;
      goto LABEL_8;
    }
    return 3LL;
  }
  if ( !(unsigned int)IntersectRect(&v10, &v10, a2) )
    return 0LL;
  v5 = *(_QWORD *)&a2->left - v10;
  if ( *(_QWORD *)&a2->left == v10 )
    v5 = *(_QWORD *)&a2->right - v11;
  v6 = v5 == 0;
LABEL_8:
  if ( !v6 )
    return 1LL;
  return 2LL;
}
