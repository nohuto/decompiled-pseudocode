/*
 * XREFs of ?ProcessDisableOutputPrediction@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_DISABLEOUTPUTPREDICTION@@@Z @ 0x18019C6B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ProcessDisableOutputPrediction(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_DISABLEOUTPUTPREDICTION *a3)
{
  char v3; // dl

  v3 = *((_BYTE *)this + 184) & 0xBF | (*((_DWORD *)a3 + 2) != 0 ? 0x40 : 0);
  *((_BYTE *)this + 184) = v3;
  if ( (v3 & 0x40) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  else
    _InterlockedDecrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  return 0LL;
}
