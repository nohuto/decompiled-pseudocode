/*
 * XREFs of ?IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x1800BE4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800BE560 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRegionGeometry::IsSameGeometry(CRegionGeometry *this, const struct CGeometry *a2)
{
  char v2; // bl
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rcx

  v2 = 0;
  if ( a2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CGeometry *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 140LL) )
    {
      v5 = *((_QWORD *)this + 18);
      v6 = *((_QWORD *)a2 + 17);
      v7 = *((_QWORD *)this + 17);
      if ( (((v5 - v7) ^ (*((_QWORD *)a2 + 18) - v6)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      {
        v2 = 1;
        v8 = v6 - v7;
        while ( v7 != v5 )
        {
          if ( !(unsigned __int8)operator==(v7, v8 + v7) )
            return 0;
          v7 = v10 + 16;
        }
      }
    }
  }
  return v2;
}
