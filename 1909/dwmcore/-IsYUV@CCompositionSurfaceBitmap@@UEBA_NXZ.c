/*
 * XREFs of ?IsYUV@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180017C40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsYUV(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  char v2; // bl
  int *v3; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 5);
  v2 = 0;
  if ( v1 )
  {
    v3 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v1 + 144) + 24LL))(v1 + 144, v5);
    if ( *v3 == 103 || *v3 > 105 && *v3 <= 107 )
      return 1;
  }
  return v2;
}
