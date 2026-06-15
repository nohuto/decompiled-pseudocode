/*
 * XREFs of ?QueryInterface@?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010E910
 * Callers:
 *     <none>
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18003E770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x1800D9DF0 (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComAggObject<CAPOWrapperSrv>::QueryInterface(__int64 a1, const struct _GUID *a2, _QWORD *a3)
{
  unsigned int v7; // edi
  const struct _GUID *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rbx

  if ( !a3 )
    return 2147500035LL;
  v7 = 0;
  *a3 = 0LL;
  if ( ATL::InlineIsEqualUnknown(a2) )
  {
    *v9 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return v7;
  }
  v10 = a1 + 24;
  if ( v10 )
  {
    *v9 = 0LL;
    if ( ATL::InlineIsEqualUnknown(v8) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *a3 = v10;
      return v7;
    }
    v11 = &unk_180159BC0;
    while ( 1 )
    {
      v12 = *(v11 - 2);
      if ( !v12 || InlineIsEqualGUID((const struct _GUID *)*(v11 - 2), a2) )
      {
        if ( *v11 == 1LL )
        {
          v14 = v10 + *(v11 - 1);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          *a3 = v14;
          return v7;
        }
        v13 = ((__int64 (__fastcall *)(__int64, const struct _GUID *, _QWORD *, _QWORD))*v11)(v10, a2, a3, *(v11 - 1));
        if ( !v13 || v12 && v13 < 0 )
          return (unsigned int)v13;
      }
      v11 += 3;
      if ( !*v11 )
        return (unsigned int)-2147467262;
    }
  }
  return (unsigned int)-2147024809;
}
