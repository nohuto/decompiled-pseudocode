/*
 * XREFs of SpbCheckDce @ 0x1C0035560
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0033D9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     RevalidateDCE @ 0x1C00EC450 (RevalidateDCE.c)
 *     SpbCheck @ 0x1C01CEA10 (SpbCheck.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C01CEB18 (SpbCheckRect.c)
 */

__int64 __fastcall SpbCheckDce(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  int v6; // edx
  LONG bottom; // r14d
  int v8; // ecx
  LONG left; // edi
  LONG right; // esi
  LONG top; // r15d
  unsigned int v12; // r12d
  __int64 StyleWindow; // rax
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  __int64 v17; // rbx
  struct tagRECT v18; // [rsp+20h] [rbp-20h] BYREF

  result = GreGetBounds(*(_QWORD *)(a1 + 8), &v18, 0LL);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( !v3 || (v4 = *(_DWORD *)(a1 + 64), (v4 & 0x4000) != 0) || v4 < 0 )
    {
      bottom = v18.bottom;
      right = v18.right;
      top = v18.top;
      left = v18.left;
    }
    else
    {
      v5 = *(_QWORD *)(v3 + 40);
      v6 = *(_DWORD *)(v5 + 32);
      bottom = v6 + v18.bottom;
      v8 = *(_DWORD *)(v5 + 28);
      left = v8 + v18.left;
      right = v8 + v18.right;
      top = v6 + v18.top;
      v18.left += v8;
      v18.top += v6;
      v18.right += v8;
      v18.bottom += v6;
    }
    v12 = *(_DWORD *)(a1 + 64);
    if ( (v12 & 0x4000) != 0 )
    {
      StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848);
      if ( StyleWindow )
      {
        v14 = *(_QWORD *)(StyleWindow + 40);
        v15 = *(_DWORD *)(v14 + 92);
        v16 = *(_DWORD *)(v14 + 88);
        v18.left = v16 + left;
        v18.right = v16 + right;
        v18.top = v15 + top;
        v18.bottom = v15 + bottom;
      }
    }
    v17 = *(_QWORD *)(a1 + 16);
    result = IntersectRect(&v18, &v18.left, (int *)(*(_QWORD *)(v17 + 40) + 88LL));
    if ( (_DWORD)result )
      return SpbCheckRect((struct tagWND *)v17, &v18, v12);
  }
  return result;
}
