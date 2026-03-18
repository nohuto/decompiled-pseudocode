/*
 * XREFs of ?IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802584A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CPrimitiveGroupDrawListBrush::IsColorConversionRequired(
        CPrimitiveGroupDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v6; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]

  v2 = *((_QWORD *)this + 9);
  v3 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(v2 + 24) + 8LL) )
    return 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v2 + 112) + 24LL * *(unsigned int *)(**(_QWORD **)(v2 + 24) + 144 * v3 + 40) + 8);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 24LL))(v6, v8);
    if ( a2 != v9 )
      break;
    v2 = *((_QWORD *)this + 9);
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(*(_QWORD *)(v2 + 24) + 8LL) )
      return 0;
  }
  return 1;
}
