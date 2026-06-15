/*
 * XREFs of ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140058D50
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400198D0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PE.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400198E0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400198F0 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019900 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDJI@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019910 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDKA@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WECI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019920 (-QueryInterface@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WECI@EAAJAEBU_GUID@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  _QWORD *v7; // rsi
  _DWORD *v8; // rcx
  int v9; // ebp
  int v10; // eax
  __int64 v11; // rbx

  v3 = 0;
  if ( !a1 )
    return (unsigned int)-2147024809;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      *a3 = a1;
      return v3;
    }
    v7 = &unk_140091790;
    while ( 1 )
    {
      v8 = (_DWORD *)*(v7 - 2);
      if ( v8 )
      {
        v9 = 0;
        if ( *v8 != *a2 || v8[1] != a2[1] || v8[2] != a2[2] || v8[3] != a2[3] )
          goto LABEL_20;
      }
      else
      {
        v9 = 1;
      }
      if ( *v7 == 1LL )
      {
        v11 = a1 + *(v7 - 1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        *a3 = v11;
        return v3;
      }
      v10 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD *, _QWORD))*v7)(a1, a2, a3, *(v7 - 1));
      if ( !v10 || !v9 && v10 < 0 )
        return (unsigned int)v10;
LABEL_20:
      v7 += 3;
      if ( !*v7 )
        return (unsigned int)-2147467262;
    }
  }
  return (unsigned int)-2147467261;
}
