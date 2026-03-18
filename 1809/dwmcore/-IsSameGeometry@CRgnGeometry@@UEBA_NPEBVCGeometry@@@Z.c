/*
 * XREFs of ?IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180067B90
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x180067C3C (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRgnGeometry::IsSameGeometry(CRgnGeometry *this, const struct CGeometry *a2)
{
  char v2; // bl
  int v5; // r9d
  int v6; // r8d
  __int64 v7; // r10
  __int64 v8; // r11
  int v9; // r8d
  int v10; // r9d
  __m128i v12; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( a2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CGeometry *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 126LL) )
    {
      v5 = *((_DWORD *)this + 34) >> 4;
      v12 = *(__m128i *)((char *)a2 + 136);
      if ( v5 == (unsigned int)_mm_cvtsi128_si32(v12) >> 4 )
      {
        v6 = 0;
        v2 = 1;
        if ( v5 )
        {
          v7 = *((_QWORD *)this + 18);
          v8 = v12.m128i_i64[1];
          while ( (unsigned __int8)operator==(v7 + 16LL * v6, v8 + 16LL * v6) )
          {
            v6 = v9 + 1;
            if ( v6 >= v10 )
              return v2;
          }
          return 0;
        }
      }
    }
  }
  return v2;
}
