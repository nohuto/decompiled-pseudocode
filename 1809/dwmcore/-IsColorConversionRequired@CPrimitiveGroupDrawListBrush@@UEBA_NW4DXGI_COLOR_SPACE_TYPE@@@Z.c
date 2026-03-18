/*
 * XREFs of ?IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18022AC40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CPrimitiveGroupDrawListBrush::IsColorConversionRequired(
        CPrimitiveGroupDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  _DWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+28h] [rbp-20h]

  v2 = *((_QWORD *)this + 7);
  v3 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(v2 + 24) + 8LL) )
    return 0;
  while ( 1 )
  {
    v6 = (_DWORD *)(**(_QWORD **)(v2 + 24) + 144 * v3);
    if ( *v6 )
    {
      v7 = (unsigned int)v6[10];
      if ( (unsigned int)v7 < *(_DWORD *)(v2 + 64) )
      {
        _mm_lfence();
        v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + 112LL) + 24 * v7 + 8);
        (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 24LL))(v8, v10);
        if ( a2 != v11 )
          break;
      }
    }
    v2 = *((_QWORD *)this + 7);
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(*(_QWORD *)(v2 + 24) + 8LL) )
      return 0;
  }
  return 1;
}
