/*
 * XREFs of ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x1800AA58C
 * Callers:
 *     ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x1800AA630 (-ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENC.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x18002FF30 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A5178 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@V?$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D5684 (-reset@-$com_ptr_t@V-$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CVisualReferenceController::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  unsigned int v2; // edi
  struct CWeakResourceReference **v4; // rsi
  signed int v5; // eax
  __int64 v6; // rcx
  struct CWeakResourceReference *v7; // rcx
  CVisualReferenceController **v8; // rax
  CVisualReferenceController ***v9; // rcx
  CVisualReferenceController **i; // rdx
  CVisualReferenceController **v11; // rdx
  struct CResourceTable *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v2 = 0;
  if ( this[7] )
  {
    v4 = this + 8;
    wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset(this + 8);
    v5 = CWeakReference<CVisual>::Create(this[7], v4);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x13u, 0LL);
    }
    else
    {
      v7 = *v4;
      v13 = (struct CResourceTable *)this;
      v8 = (CVisualReferenceController **)*((_QWORD *)v7 + 4);
      v9 = (CVisualReferenceController ***)((char *)v7 + 24);
      for ( i = *v9; i != v8 && *i != (CVisualReferenceController *)this; ++i )
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
          *v11 = (CVisualReferenceController *)this;
          ++v9[1];
        }
      }
      this[7] = 0LL;
    }
  }
  return v2;
}
