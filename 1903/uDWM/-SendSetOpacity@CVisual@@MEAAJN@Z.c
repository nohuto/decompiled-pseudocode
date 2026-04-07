/*
 * XREFs of ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180036D00
 * Callers:
 *     ?SetOpacity@CImage@@UEAAXN@Z @ 0x180082EA0 (-SetOpacity@CImage@@UEAAXN@Z.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x18008E1B0 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x18009FCA0 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     ??$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x180016AD0 (--$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SendSetOpacity(CVisual *this, double a2)
{
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rbx
  unsigned int v6; // edi
  int v7; // eax
  int v8; // eax
  void *v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v3 = CCompositor::CreateProxy<CEffectGroupProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), &v11);
  v5 = v11;
  v6 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x35Au, v10);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _DWORD))(**(_QWORD **)(*(_QWORD *)(v11 + 16) + 16LL)
                                                                            + 904LL))(
           *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL),
           *(unsigned int *)(*(_QWORD *)(v11 + 16) + 24LL),
           v4,
           0LL,
           0);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x35Du, v10);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                           + 16LL)
                                                             + 408LL))(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
             *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
             *(unsigned int *)(*(_QWORD *)(v5 + 16) + 24LL));
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x360u, v10);
    }
  }
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
  return v6;
}
