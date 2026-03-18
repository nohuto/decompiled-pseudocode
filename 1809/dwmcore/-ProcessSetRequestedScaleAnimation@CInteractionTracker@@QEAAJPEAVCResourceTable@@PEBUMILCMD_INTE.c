/*
 * XREFs of ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x1801A0E64
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800545C0 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1801A019C (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801A1ED4 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedScaleAnimation(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // edx
  CBaseExpression *Resource; // rbp
  __int64 v9; // rcx
  int v10; // eax

  v3 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (CBaseExpression *)CResourceTable::GetResource((__int64)a2, v5, 0xAu)) != 0LL )
  {
    *((_BYTE *)this + 532) = *((_BYTE *)this + 532) & 0xBF | (*((_DWORD *)a3 + 3) == 0 ? 0x40 : 0);
    if ( (unsigned __int8)CInteractionTracker::SetCustomAnimation(this, Resource, 1LL) )
    {
      v10 = *((_DWORD *)this + 45);
      if ( v10 <= *((_DWORD *)a3 + 7) )
        v10 = *((_DWORD *)a3 + 7);
      *((_DWORD *)this + 45) = v10;
    }
    else if ( Resource )
    {
      CBaseExpression::NotifyAnimationCompleted(Resource);
      CResource::UnRegisterNotifierInternal(this, Resource);
      if ( *((_DWORD *)a3 + 3) )
        CInteractionTracker::NotifyRequestIgnored(this);
    }
    *((_DWORD *)this + 35) = *((_DWORD *)a3 + 4) ^ _xmm;
    *((_DWORD *)this + 36) = *((_DWORD *)a3 + 5) ^ _xmm;
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x230u);
  }
  *((_BYTE *)this + 532) &= ~0x40u;
  return v3;
}
