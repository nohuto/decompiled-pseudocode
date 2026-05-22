/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180121FD8
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@3@@Z @ 0x18011D360 (-Get@-$CMarshaledInterfaceResult@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Int.c)
 *     ?Get@?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAUIPropertyValue@Foundation@3@@Z @ 0x18011D42C (-Get@-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@QEAAJPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180119D5C (--4-$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CMarshaledInterface::_Unmarshal(CMarshaledInterface *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx
  HRESULT InterfaceAndReleaseStream; // eax
  IStream *v9; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = *(_QWORD *)this;
  v6 = -2147467259;
  if ( *(_QWORD *)this )
  {
    v11 = 0LL;
    if ( *(_DWORD *)(v4 + 24) == 2 )
    {
      Microsoft::WRL::ComPtr<CMarshaledInterface::CMarshalStream>::operator=(&v11, this);
      v4 = v11;
    }
    else
    {
      *(_QWORD *)this = 0LL;
    }
    *a3 = 0LL;
    if ( *(_DWORD *)(v4 + 24) == 2 )
    {
      if ( !*(_QWORD *)(v4 + 32) )
      {
        v6 = -2147024809;
        goto LABEL_13;
      }
      v7 = *(_QWORD *)(v4 + 32);
      if ( !v7 )
      {
        v6 = 0;
LABEL_13:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        return v6;
      }
      InterfaceAndReleaseStream = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **))(*(_QWORD *)v7 + 24LL))(
                                    v7,
                                    a2,
                                    a3);
    }
    else
    {
      v9 = *(IStream **)(v4 + 16);
      *(_QWORD *)(v4 + 16) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v9, a2, a3);
    }
    v6 = InterfaceAndReleaseStream;
    goto LABEL_13;
  }
  return v6;
}
