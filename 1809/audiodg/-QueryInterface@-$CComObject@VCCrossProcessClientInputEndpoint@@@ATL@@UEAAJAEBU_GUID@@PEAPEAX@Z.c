/*
 * XREFs of ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140052690
 * Callers:
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001EEE0 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001EEF0 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJA@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001EF00 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJI@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001EF10 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001EF20 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001EF30 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBNI@EAAJAEBU_GUID@@PEAPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::QueryInterface(
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
      v7 = a1 + 408;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 408) + 8LL))(a1 + 408);
      result = 0LL;
      *a3 = v7;
      return result;
    }
    v8 = &unk_1400936B0;
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
