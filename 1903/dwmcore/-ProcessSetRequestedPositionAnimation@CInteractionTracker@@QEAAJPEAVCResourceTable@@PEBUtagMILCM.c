/*
 * XREFs of ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x1801DB9A8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800C0C50 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1801DAEBC (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801DCB1C (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedPositionAnimation(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION *a3)
{
  CBaseExpression *v4; // rdi
  unsigned int v5; // edx
  __int64 Resource; // rax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 )
    goto LABEL_5;
  Resource = CResourceTable::GetResource((__int64)a2, v5, 0xAu);
  v4 = (CBaseExpression *)Resource;
  if ( !Resource )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
  if ( (*(_BYTE *)(Resource + 208) & 8) == 0 )
  {
LABEL_5:
    *((_BYTE *)this + 532) = *((_BYTE *)this + 532) & 0xBF | (*((_BYTE *)a3 + 12) == 0 ? 0x40 : 0);
    if ( (unsigned __int8)CInteractionTracker::SetCustomAnimation(this, v4, 0LL) )
    {
      v10 = *((_DWORD *)this + 45);
      if ( v10 <= *((_DWORD *)a3 + 5) )
        v10 = *((_DWORD *)a3 + 5);
      *((_DWORD *)this + 45) = v10;
    }
    else if ( v4 )
    {
      CBaseExpression::NotifyAnimationCompleted(v4);
      CResource::UnRegisterNotifierInternal(this, v4);
      if ( *((_BYTE *)a3 + 12) )
        CInteractionTracker::NotifyRequestIgnored(this);
    }
    *((_BYTE *)this + 532) &= ~0x40u;
  }
  return 0LL;
}
