/*
 * XREFs of ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x1800D7E78
 * Callers:
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180070550 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800D5BA0 (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::UpdateMPOCaps(CRenderTargetManager *this)
{
  int v1; // ebx
  __int64 i; // rdi
  __int64 v4; // rcx
  signed int v5; // eax
  __int64 v6; // rcx
  int v7; // esi

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 272LL))(v4, 0LL);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x370u, 0LL);
    if ( !v1 || v1 >= 0 && v7 < 0 )
      v1 = v7;
  }
  return (unsigned int)v1;
}
