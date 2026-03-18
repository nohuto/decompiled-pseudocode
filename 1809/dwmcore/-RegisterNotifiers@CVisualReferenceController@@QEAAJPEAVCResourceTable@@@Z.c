/*
 * XREFs of ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x18009FF5C
 * Callers:
 *     ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x1800A0044 (-ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALREFERENCECO.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@?$vector@PEAUObserver@CProcessAttributionManager@@V?$allocator@PEAUObserver@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUObserver@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x18001B510 (--$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@-$vector@PEAUObserver@CProce.c)
 *     ?reset@?$com_ptr_t@V?$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180073E04 (-reset@-$com_ptr_t@V-$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A0000 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
  __int64 v9; // rcx
  CVisualReferenceController **i; // rdx
  _BYTE *v11; // rdx
  CVisualReferenceController *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v2 = 0;
  if ( *((_QWORD *)this + 7) )
  {
    v4 = (__int64 *)((char *)this + 64);
    wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset((__int64 *)this + 8);
    v5 = CWeakReference<CVisual>::Create(*((_QWORD *)this + 7), v4);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x18u);
    }
    else
    {
      v7 = *v4;
      v13 = this;
      v8 = *(CVisualReferenceController ***)(v7 + 32);
      v9 = v7 + 24;
      for ( i = *(CVisualReferenceController ***)v9; i != v8 && *i != this; ++i )
        ;
      if ( i == v8 )
      {
        v11 = *(_BYTE **)(v9 + 8);
        if ( *(_BYTE **)(v9 + 16) == v11 )
        {
          std::vector<CProcessAttributionManager::Observer *>::_Emplace_reallocate<CProcessAttributionManager::Observer * const &>(
            (const void **)v9,
            v11,
            &v13);
        }
        else
        {
          *(_QWORD *)v11 = this;
          *(_QWORD *)(v9 + 8) += 8LL;
        }
      }
      *((_QWORD *)this + 7) = 0LL;
    }
  }
  return v2;
}
