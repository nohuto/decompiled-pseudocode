/*
 * XREFs of ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180034E30
 * Callers:
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800318A8 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800343C8 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x18006F854 (-lower_bound@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::FulfillInputs(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  signed int v4; // edi
  __int64 v8; // r9
  bool v9; // cf
  unsigned int v10; // ecx
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r10
  int v15; // eax
  int v17; // r9d
  unsigned int v18[2]; // [rsp+20h] [rbp-38h]
  unsigned int v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0;
  if ( *a3 > 0 )
  {
    v8 = 0LL;
    v9 = *a3 != 0;
    while ( 1 )
    {
      if ( !v9 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
        a1 + 16,
        &v20,
        a3[1] + 2 * v8);
      if ( v20 == *(_QWORD *)(a1 + 24) )
        break;
      v11 = *(__int64 **)(a1 + 8);
      v12 = *(_QWORD *)(v20 + 24);
      v13 = (unsigned int)*(char *)(v20 + 32);
      v14 = *v11;
      if ( *(_BYTE *)(v20 + 33) )
      {
        v18[1] = HIDWORD(a2);
        v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v14 + 64))(v11, v12, v13);
        v3 = v15;
        if ( v15 < 0 )
        {
          v19 = 347;
LABEL_12:
          v17 = v15;
          goto LABEL_14;
        }
      }
      else
      {
        v18[0] = v4;
        v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, unsigned int *))(v14 + 56))(
                v11,
                v12,
                v13,
                a2,
                *(unsigned int **)v18);
        v3 = v15;
        if ( v15 < 0 )
        {
          v19 = 340;
          goto LABEL_12;
        }
      }
      v8 = ++v4;
      v9 = v4 < (unsigned __int64)*a3;
      if ( v4 >= *a3 )
        return v3;
    }
    v3 = -2147024809;
    v17 = -2147024809;
    v19 = 332;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v17, v19, 0LL);
  }
  return v3;
}
