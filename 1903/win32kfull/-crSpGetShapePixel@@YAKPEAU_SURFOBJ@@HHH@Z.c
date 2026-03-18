/*
 * XREFs of ?crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z @ 0x1C026C4DC
 * Callers:
 *     GrePtInSprite @ 0x1C0046454 (GrePtInSprite.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall crSpGetShapePixel(struct _SURFOBJ *a1, int a2, int a3, int a4)
{
  unsigned int v6; // ebx
  __int64 v9; // r8
  HDEV hdev; // rcx
  __m128i si128; // xmm0
  unsigned int *v12; // rsi
  unsigned int (__fastcall *v13)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, __m128i *, _DWORD *); // rax
  __int64 v14; // rcx
  unsigned int v15; // r8d
  _DWORD v17[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-50h] BYREF
  __m128i v19; // [rsp+58h] [rbp-40h] BYREF

  v6 = 0;
  v18[0] = 0LL;
  SURFREFVIEW::bMap((SURFREFVIEW *)v18, a1);
  if ( v18[0] )
  {
    v9 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    if ( (*(_DWORD *)(v9 + 116) & 1) != 0 )
    {
      hdev = a1->hdev;
      if ( hdev )
      {
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        v12 = *(unsigned int **)(*((_QWORD *)hdev + 139) + 56LL);
        v13 = (unsigned int (__fastcall *)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, __m128i *, _DWORD *))*((_QWORD *)hdev + 355);
        *v12 = 0;
        v14 = *((_QWORD *)hdev + 139);
        v19 = si128;
        v17[0] = a2;
        v17[1] = a3;
        if ( v13(v14, a1, 0LL, 0LL, &v19, v17) )
          v6 = *v12;
      }
    }
    else
    {
      v15 = *(_DWORD *)(4 * a2 + (__int64)(a3 * *(_DWORD *)(v9 + 88)) + *(_QWORD *)(v9 + 80));
      if ( a4 )
        v6 = v15 & 0xFF00 | ((unsigned __int8)v15 << 16) | BYTE2(v15);
      else
        v6 = v15;
    }
  }
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v18);
  return v6;
}
