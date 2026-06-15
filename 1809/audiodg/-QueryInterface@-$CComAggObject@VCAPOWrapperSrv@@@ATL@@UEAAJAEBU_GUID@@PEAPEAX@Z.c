/*
 * XREFs of ?QueryInterface@?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140044980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x14002F26C (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComAggObject<CAPOWrapperSrv>::QueryInterface(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v7; // edi
  _DWORD *v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // r15
  _QWORD *v11; // rsi
  _DWORD *v12; // rbp
  int v13; // eax
  __int64 v14; // rbx

  if ( !a3 )
    return 2147500035LL;
  v7 = 0;
  *a3 = 0LL;
  if ( ATL::InlineIsEqualUnknown((const struct _GUID *)a2) )
  {
    *v9 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return v7;
  }
  v10 = a1 + 24;
  if ( v10 )
  {
    *v9 = 0LL;
    if ( !*v8 && !v8[1] && v8[2] == 192 && v8[3] == 1174405120 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *a3 = v10;
      return v7;
    }
    v11 = &unk_140066180;
    while ( 1 )
    {
      v12 = (_DWORD *)*(v11 - 2);
      if ( !v12
        || *v12 == *(_DWORD *)a2
        && v12[1] == *(_DWORD *)(a2 + 4)
        && v12[2] == *(_DWORD *)(a2 + 8)
        && v12[3] == *(_DWORD *)(a2 + 12) )
      {
        if ( *v11 == 1LL )
        {
          v14 = v10 + *(v11 - 1);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          *a3 = v14;
          return v7;
        }
        v13 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))*v11)(v10, a2, a3, *(v11 - 1));
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
