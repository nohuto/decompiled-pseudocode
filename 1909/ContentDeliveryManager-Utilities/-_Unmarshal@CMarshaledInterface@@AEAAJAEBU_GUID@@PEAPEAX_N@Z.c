/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180063FD8
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x18006D71C (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVTargetedContentTriggerInternal@Internal@Targ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMarshaledInterface::_Unmarshal(CMarshaledInterface *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx
  HRESULT InterfaceAndReleaseStream; // eax
  IStream *v9; // rcx

  *a3 = 0LL;
  v4 = *(_QWORD *)this;
  v6 = -2147467259;
  if ( *(_QWORD *)this )
  {
    if ( *(_DWORD *)(v4 + 24) == 2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)this);
    else
      *(_QWORD *)this = 0LL;
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
