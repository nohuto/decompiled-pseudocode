/*
 * XREFs of ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005AAF0
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F3E0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@P.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F3F0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F400 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F410 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJA@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F420 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJI@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F430 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDKA@EAAJAEBU_GUID.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F440 (-QueryInterface@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDNA@EAAJAEBU_GUID.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  _DWORD *v9; // rsi
  __int64 v10; // rbx

  if ( a1 )
  {
    if ( !a3 )
      return 2147500035LL;
    *a3 = 0LL;
    if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    {
      v7 = a1 + 920;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 920) + 8LL))(a1 + 920);
      result = 0LL;
      *a3 = v7;
      return result;
    }
    v8 = &unk_1400932B0;
    while ( 1 )
    {
      v9 = (_DWORD *)*(v8 - 2);
      if ( !v9 || *v9 == *a2 && v9[1] == a2[1] && v9[2] == a2[2] && v9[3] == a2[3] )
      {
        if ( *v8 == 1LL )
        {
          v10 = a1 + *(v8 - 1);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
          result = 0LL;
          *a3 = v10;
          return result;
        }
        result = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD *, _QWORD))*v8)(a1, a2, a3, *(v8 - 1));
        if ( !(_DWORD)result || v9 && (int)result < 0 )
          return result;
      }
      v8 += 3;
      if ( !*v8 )
        return 2147500034LL;
    }
  }
  return 2147942487LL;
}
