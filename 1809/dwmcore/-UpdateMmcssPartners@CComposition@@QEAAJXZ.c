/*
 * XREFs of ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18008A454
 * Callers:
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x18008A384 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800CE718 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 * Callees:
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18008A4FC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x18008A55C (-UpdateMMCSSTask@CManipulationManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::UpdateMmcssPartners(CComposition *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v4; // esi
  int updated; // eax
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // edi
  unsigned int v12; // ecx

  v2 = *(_QWORD *)(*((_QWORD *)this + 11) + 232LL);
  if ( !v2 )
    goto LABEL_5;
  if ( !*(_BYTE *)(v2 + 24) && *(_QWORD *)(v2 + 8) )
  {
    SetEvent(*(HANDLE *)(v2 + 112));
LABEL_5:
    v3 = 0;
    v4 = 0;
    goto LABEL_6;
  }
  v3 = -2147467260;
  MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, -2147467260, 0x1B6u);
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147467260, 0x2FFu);
  v4 = -2147467260;
LABEL_6:
  updated = CManipulationManager::UpdateMMCSSTask((CManipulationManager *)v2);
  v7 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, 0x301u);
  if ( !v4 )
    v3 = v7;
  v8 = CSurfaceManager::ResetTokenThread(*((CSurfaceManager **)this + 9));
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x303u);
  if ( !v3 || v3 >= 0 && v10 < 0 )
    return (unsigned int)v10;
  return (unsigned int)v3;
}
