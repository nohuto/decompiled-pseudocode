/*
 * XREFs of ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x1801A0CB4
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

__int64 __fastcall CInteractionTracker::ProcessSetRequestedPositionAnimation(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edx
  CBaseExpression *Resource; // rsi
  __int64 v9; // rcx
  int v10; // eax

  v3 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (CBaseExpression *)CResourceTable::GetResource((__int64)a2, v5, 0xAu)) != 0LL )
  {
    *((_BYTE *)this + 532) = *((_BYTE *)this + 532) & 0xBF | (*((_DWORD *)a3 + 3) == 0 ? 0x40 : 0);
    if ( (unsigned __int8)CInteractionTracker::SetCustomAnimation(this, Resource, 0LL) )
    {
      v10 = *((_DWORD *)this + 45);
      if ( v10 <= *((_DWORD *)a3 + 5) )
        v10 = *((_DWORD *)a3 + 5);
      *((_DWORD *)this + 45) = v10;
    }
    else if ( Resource )
    {
      CBaseExpression::NotifyAnimationCompleted(Resource);
      CResource::UnRegisterNotifierInternal(this, Resource);
      if ( *((_DWORD *)a3 + 3) )
        CInteractionTracker::NotifyRequestIgnored(this);
    }
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x1E9u);
  }
  *((_BYTE *)this + 532) &= ~0x40u;
  return v3;
}
