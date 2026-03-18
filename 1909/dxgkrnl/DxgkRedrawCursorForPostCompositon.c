/*
 * XREFs of DxgkRedrawCursorForPostCompositon @ 0x1C0257BA0
 * Callers:
 *     _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1C027EEF0 (_lambda_ed10ad305aea6a5ff601fc5b120cc334_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003974 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E2C4 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00EBEC0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00FC8A0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00FD130 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 */

__int64 __fastcall DxgkRedrawCursorForPostCompositon(DXGADAPTER *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  struct _LUID v10; // rbx
  __int64 v11; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  __int64 v16; // r8
  unsigned int CurrentProcessSessionId; // eax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rdi
  __int64 v32; // rdx
  struct _LUID *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // [rsp+20h] [rbp-49h]
  __int64 v36; // [rsp+28h] [rbp-41h]
  _BYTE v37[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _LUID v38; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v39[8]; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v40; // [rsp+80h] [rbp+17h] BYREF

  v2 = (unsigned int)a2;
  if ( !this )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v4 + 24) = 1579LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_QWORD *)this + 319) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 1580LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 1581LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)this + 319);
  v10 = *(struct _LUID *)((char *)this + 276);
  v38 = v10;
  v11 = *(_QWORD *)(v9 + 112) + 3968 * v2;
  if ( !v11 )
    return -1073741811LL;
  if ( *(_BYTE *)(v11 + 724) )
  {
    v40.Flags.Value = 0;
    v40.VidPnSourceId = *(_DWORD *)(v11 + 16);
    v40.X = *(_DWORD *)(v11 + 680);
    v40.Y = *(_DWORD *)(v11 + 684);
    v40.Flags.Value = 1;
    SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(1LL, v6) + 74);
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         SessionDataForSpecifiedSession,
                                         CurrentProcessSessionId);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v18 = WdLogNewEntry5_WdError(v14, v13, v16);
      *(_QWORD *)(v18 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v20, v19);
      *(_QWORD *)(v18 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v18);
LABEL_22:
      memset(v39, 0, sizeof(v39));
      v39[0] = 13;
      DXGADAPTER::IsAddapterSessionized(this, v33, 0LL, (unsigned __int64 *)&v38);
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))SMgrGdiCallout)(
               v39,
               v38,
               v34,
               0LL,
               v34 & v35,
               v34 & v36);
    }
    v37[0] = 0;
    v21 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v37, 0);
    v23 = v21;
    if ( v21 >= 0 )
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                SessionDataForSpecifiedSession,
                                &v38,
                                *(_DWORD *)(v11 + 16));
      if ( SessionViewFromSource )
      {
        LODWORD(v23) = SetPointerShapeForDisplaySource(
                         (struct DISPLAY_SOURCE *)v11,
                         &v40,
                         0LL,
                         (struct SESSION_VIEW *)SessionViewFromSource,
                         0LL,
                         0,
                         0,
                         1,
                         0);
      }
      else
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
        v31[3] = *(unsigned int *)(v11 + 16);
        v31[4] = v38.HighPart;
        v31[5] = v10.LowPart;
        LODWORD(v23) = -1073741811;
        v31[6] = (unsigned int)PsGetCurrentProcessSessionId(v10.LowPart, v32);
        v31[7] = -1073741811LL;
        WdLogEvent5_WdError(v31);
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdEvent(v22);
      *(_QWORD *)(v24 + 24) = v23;
      WdLogEvent5_WdEvent(v24);
    }
    if ( v37[0] )
      DxgkReleaseSessionModeChangeLock(v26, v25);
    if ( (int)v23 < 0 )
      goto LABEL_22;
  }
  return 0LL;
}
