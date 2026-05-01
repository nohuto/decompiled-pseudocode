/*
 * XREFs of ??$create@V?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x18027D3DC
 * Callers:
 *     ??4?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18027E624 (--4-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@.c)
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x18003CB8C (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z @ 0x1801078E8 (--0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18028254C (-reset@-$shared_object@V-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Para_ea_18028254C.c)
 */

char __fastcall wil::details::shared_object<wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>>::create<wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>>(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  char result; // al

  v4 = operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 1;
    v4[2] = 0;
    *((_BYTE *)v4 + 12) = 0;
    v4[2] = *(_DWORD *)a2;
    *((_BYTE *)v4 + 12) = *(_BYTE *)(a2 + 4);
    *((_OWORD *)v4 + 1) = *(_OWORD *)(a2 + 8);
    *((_OWORD *)v4 + 2) = *(_OWORD *)(a2 + 24);
    *(_DWORD *)a2 = 0;
    *(_BYTE *)(a2 + 4) = 0;
    wil::details::StoredCallContextInfo::StoredCallContextInfo(v4 + 12, a2 + 40);
    v5[20] = *(_DWORD *)(a2 + 72);
    v5[21] = *(_DWORD *)(a2 + 76);
    wil::StoredFailureInfo::StoredFailureInfo((__int64)(v5 + 22), a2 + 80);
    *((_QWORD *)v5 + 31) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
    return 0;
  wil::details::shared_object<wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1);
  result = 1;
  *a1 = v5;
  return result;
}
