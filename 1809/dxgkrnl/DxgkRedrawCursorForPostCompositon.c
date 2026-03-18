/*
 * XREFs of DxgkRedrawCursorForPostCompositon @ 0x1C0222DF4
 * Callers:
 *     _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1C02492C0 (_lambda_ed10ad305aea6a5ff601fc5b120cc334_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEAA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C00205AC (-IsAddapterSessionized@DXGADAPTER@@QEAA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00ED0A0 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00ED7C8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 */

__int64 __fastcall DxgkRedrawCursorForPostCompositon(DXGADAPTER *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  struct _LUID v9; // rbx
  __int64 v10; // r14
  INT v12; // eax
  __int64 v13; // rcx
  DXGSESSIONMGR *SessionDataForSpecifiedSession; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rdi
  struct _LUID *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // [rsp+20h] [rbp-49h]
  __int64 v30; // [rsp+28h] [rbp-41h]
  _BYTE v31[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _LUID v32; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v33[8]; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v34; // [rsp+80h] [rbp+17h] BYREF

  v2 = a2;
  if ( !this )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v4 + 24) = 1559LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_QWORD *)this + 315) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 1560LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 1561LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)this + 315);
  v9 = *(struct _LUID *)((char *)this + 276);
  v32 = v9;
  v10 = *(_QWORD *)(v8 + 112) + 3760 * v2;
  if ( !v10 )
    return -1073741811LL;
  if ( *(_BYTE *)(v10 + 725) )
  {
    *(_QWORD *)&v34.VidPnSourceId = 0LL;
    *(_QWORD *)&v34.Y = 0LL;
    v34.VidPnSourceId = *(_DWORD *)(v10 + 16);
    v34.X = *(_DWORD *)(v10 + 680);
    v12 = *(_DWORD *)(v10 + 684);
    v34.Flags.Value = 1;
    v34.Y = v12;
    SessionDataForSpecifiedSession = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 77);
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         SessionDataForSpecifiedSession,
                                         CurrentProcessSessionId);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v16 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v16 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v17);
      *(_QWORD *)(v16 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v16);
LABEL_22:
      memset(v33, 0, sizeof(v33));
      v33[0] = 13;
      DXGADAPTER::IsAddapterSessionized(this, v27, 0LL, (unsigned __int64 *)&v32);
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))SMgrGdiCallout)(
               v33,
               v32,
               v28,
               0LL,
               v28 & v29,
               v28 & v30);
    }
    v31[0] = 0;
    v18 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v31, 0);
    v21 = v18;
    if ( v18 >= 0 )
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                SessionDataForSpecifiedSession,
                                &v32,
                                *(_DWORD *)(v10 + 16));
      if ( SessionViewFromSource )
      {
        LODWORD(v21) = SetPointerShapeForDisplaySource(
                         (struct DISPLAY_SOURCE *)v10,
                         &v34,
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
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v25);
        v26[3] = *(unsigned int *)(v10 + 16);
        v26[4] = v32.HighPart;
        v26[5] = v9.LowPart;
        LODWORD(v21) = -1073741811;
        v26[6] = (unsigned int)PsGetCurrentProcessSessionId(v9.LowPart);
        v26[7] = -1073741811LL;
        WdLogEvent5_WdError(v26);
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdEvent(v20, v19);
      *(_QWORD *)(v22 + 24) = v21;
      WdLogEvent5_WdEvent(v22);
    }
    if ( v31[0] )
      DxgkReleaseSessionModeChangeLock(v23);
    if ( (int)v21 < 0 )
      goto LABEL_22;
  }
  return 0LL;
}
