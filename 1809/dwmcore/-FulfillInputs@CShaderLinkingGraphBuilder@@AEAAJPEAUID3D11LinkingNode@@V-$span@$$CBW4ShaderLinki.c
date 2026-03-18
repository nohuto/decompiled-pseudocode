/*
 * XREFs of ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF74C
 * Callers:
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF418 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800E333C (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@_K@Z @ 0x1800693C8 (-_End@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??A?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@QEBAAEBW4ShaderLinkingArgument@@_J@Z @ 0x1800E021C (--A-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@QEBAAEBW4ShaderLinkingArgument@@_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::FulfillInputs(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned int v4; // ebx
  signed int v5; // edi
  __int64 v9; // rax
  const unsigned __int8 *v10; // rbx
  __int64 v11; // r11
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // eax
  int v21; // r9d
  unsigned int v22[2]; // [rsp+20h] [rbp-38h]
  unsigned int v23; // [rsp+20h] [rbp-38h]
  __int64 v24; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *a3 > 0 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v10 = (const unsigned __int8 *)gsl::span<enum ShaderLinkingArgument const,-1>::operator[](a3, v9, a3, a4);
      v11 = a1[8] & std::_Hash_bytes(v10, 2uLL);
      while ( 1 )
      {
        v12 = std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
                (__int64)(a1 + 2),
                &v24,
                v11);
        if ( v14 == *v12 )
          break;
        if ( *(_WORD *)(v14 + 16) == *(_WORD *)v10 )
          goto LABEL_6;
      }
      v14 = a1[3];
LABEL_6:
      if ( v14 == a1[3] )
        break;
      v15 = (__int64 *)a1[1];
      v16 = *(_QWORD *)(v14 + 24);
      v17 = (unsigned int)*(char *)(v14 + 32);
      v18 = *v15;
      if ( *(_BYTE *)(v14 + 33) )
      {
        v22[1] = HIDWORD(a2);
        v19 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v18 + 64))(v15, v16, v17);
        v4 = v19;
        if ( v19 < 0 )
        {
          v23 = 347;
LABEL_16:
          v21 = v19;
          goto LABEL_18;
        }
      }
      else
      {
        v22[0] = v5;
        v19 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, unsigned int *))(v18 + 56))(
                v15,
                v16,
                v17,
                a2,
                *(unsigned int **)v22);
        v4 = v19;
        if ( v19 < 0 )
        {
          v23 = 340;
          goto LABEL_16;
        }
      }
      v9 = ++v5;
      if ( v5 >= *a3 )
        return v4;
    }
    v4 = -2147024809;
    v23 = 332;
    v21 = -2147024809;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v21, v23);
  }
  return v4;
}
