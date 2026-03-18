/*
 * XREFs of ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x1C025C8D0
 * Callers:
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C0231160 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SendCreateCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAIPEAPEAX@Z @ 0x1C02327D8 (-SendCreateCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAIPEAPEAX@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C025AD4C (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendCreateCompositionSurface(DXGSESSIONDATA *this, unsigned int *a2, void **a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _EX_RUNDOWN_REF *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int CompositionSurface; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _BYTE v34[8]; // [rsp+20h] [rbp-20h] BYREF
  char v35; // [rsp+28h] [rbp-18h]
  _BYTE v36[16]; // [rsp+30h] [rbp-10h] BYREF

  LODWORD(v6) = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
    if ( *((_DWORD *)Current + 98) && (*((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
    {
      if ( *((_BYTE *)Current + 448) )
      {
        v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v11) + 77);
        if ( v15 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v15,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( SessionDataForSpecifiedSession )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, (DXGSESSIONDATA *)((char *)this + 18720), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
          v22 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2346);
          if ( v22 )
            ++*((_DWORD *)this + 4690);
          if ( v35 )
          {
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
            v22 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2346);
          }
          if ( v22 && ExAcquireRundownProtection(v22 + 7) )
          {
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2346) + 64LL) + 64LL)) )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)v34,
                (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2346) + 16LL),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
              CompositionSurface = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendCreateCompositionSurface(
                                     *(DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)(*((_QWORD *)this + 2346) + 80LL),
                                     a2,
                                     a3);
              v6 = CompositionSurface;
              if ( CompositionSurface < 0 )
              {
                v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
                *(_QWORD *)(v30 + 24) = v6;
                WdLogEvent5_WdWarning(v30);
              }
              if ( v35 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2346) + 64LL) + 64LL));
            }
            else
            {
              LODWORD(v6) = -2147483611;
              v31 = WdLogNewEntry5_WdWarning(v24, v23, v25);
              *(_QWORD *)(v31 + 24) = 2LL;
              *(_QWORD *)(v31 + 32) = -2147483611LL;
              WdLogEvent5_WdWarning(v31);
            }
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2346) + 56LL));
          }
          else
          {
            LODWORD(v6) = -2147483611;
            v32 = WdLogNewEntry5_WdWarning(v22, v20, v21);
            *(_QWORD *)(v32 + 24) = 1LL;
            *(_QWORD *)(v32 + 32) = -2147483611LL;
            WdLogEvent5_WdWarning(v32);
          }
          if ( *((_QWORD *)this + 2346) )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, (DXGSESSIONDATA *)((char *)this + 18720), 0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
            DXGSESSIONDATA::ReleaseVailGuestReference(this);
            if ( v35 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
          }
        }
        else
        {
          LODWORD(v6) = -1073741811;
          v18 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v18 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v19);
          *(_QWORD *)(v18 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v18);
        }
      }
      else
      {
        LODWORD(v6) = -2147483611;
        v13 = WdLogNewEntry5_WdWarning(v11, v10, v12);
        *(_QWORD *)(v13 + 24) = -2147483611LL;
        WdLogEvent5_WdWarning(v13);
      }
    }
    KeLeaveCriticalRegion();
    if ( v36[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36);
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    LODWORD(v6) = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
  }
  return (unsigned int)v6;
}
