/*
 * XREFs of ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x18002AFA8
 * Callers:
 *     ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x1800297E0 (-ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENC.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x18001FCB0 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18002B314 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@V?$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D5404 (-reset@-$com_ptr_t@V-$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CVisualReferenceController::RegisterNotifiers(
        CVisualReferenceController *this,
        struct CResourceTable *a2)
{
  unsigned int v2; // edi
  __int64 *v4; // rsi
  int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rcx
  CVisualReferenceController **v8; // rax
  CVisualReferenceController ***v9; // rcx
  CVisualReferenceController **i; // rdx
  CVisualReferenceController **v11; // rdx
  CVisualReferenceController *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v2 = 0;
  if ( *((_QWORD *)this + 7) )
  {
    v4 = (__int64 *)((char *)this + 64);
    wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset((char *)this + 64);
    v5 = CWeakReference<CVisual>::Create(*((_QWORD *)this + 7), v4);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x13u, 0LL);
    }
    else
    {
      v7 = *v4;
      v13 = this;
      v8 = *(CVisualReferenceController ***)(v7 + 32);
      v9 = (CVisualReferenceController ***)(v7 + 24);
      for ( i = *v9; i != v8 && *i != this; ++i )
        ;
      if ( i == v8 )
      {
        v11 = v9[1];
        if ( v9[2] == v11 )
        {
          std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>((__int64)v9, v11, &v13);
        }
        else
        {
          *v11 = this;
          ++v9[1];
        }
      }
      *((_QWORD *)this + 7) = 0LL;
    }
  }
  return v2;
}
