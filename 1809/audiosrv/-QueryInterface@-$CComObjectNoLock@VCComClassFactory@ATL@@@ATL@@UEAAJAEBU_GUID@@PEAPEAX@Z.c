/*
 * XREFs of ?QueryInterface@?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010EB70
 * Callers:
 *     <none>
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18003E770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x1800D9DF0 (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComObjectNoLock<ATL::CComClassFactory>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rbx

  if ( a1 )
  {
    if ( !a3 )
      return 2147500035LL;
    *a3 = 0LL;
    if ( ATL::InlineIsEqualUnknown(a2) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      result = 0LL;
      *a3 = a1;
      return result;
    }
    v7 = &unk_180159C50;
    while ( 1 )
    {
      v8 = *(v7 - 2);
      if ( !v8 || InlineIsEqualGUID((const struct _GUID *)*(v7 - 2), a2) )
      {
        if ( *v7 == 1LL )
        {
          v9 = a1 + *(v7 - 1);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
          result = 0LL;
          *a3 = v9;
          return result;
        }
        result = ((__int64 (__fastcall *)(__int64, const struct _GUID *, _QWORD *, _QWORD))*v7)(a1, a2, a3, *(v7 - 1));
        if ( !(_DWORD)result || v8 && (int)result < 0 )
          return result;
      }
      v7 += 3;
      if ( !*v7 )
        return 2147500034LL;
    }
  }
  return 2147942487LL;
}
