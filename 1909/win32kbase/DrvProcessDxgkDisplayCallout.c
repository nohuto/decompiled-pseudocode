/*
 * XREFs of DrvProcessDxgkDisplayCallout @ 0x1C012BAF4
 * Callers:
 *     VideoPortCalloutThread @ 0x1C0106BA0 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvQueryMDEVPowerState @ 0x1C0046F60 (DrvQueryMDEVPowerState.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0127EB4 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C0128FC8 (-DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z.c)
 */

__int64 __fastcall DrvProcessDxgkDisplayCallout(
        struct _MDEV *a1,
        __int64 a2,
        unsigned __int8 *a3,
        bool *a4,
        bool *a5,
        _BYTE *a6)
{
  struct tagDESKTOP *v7; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  char v16; // cl
  int updated; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdi
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int8 v38[4]; // [rsp+40h] [rbp-79h] BYREF
  _DWORD v39[3]; // [rsp+44h] [rbp-75h] BYREF
  char v40; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v41[111]; // [rsp+51h] [rbp-68h] BYREF

  v7 = grpdeskRitInput;
  memset(v41, 0, 0x67uLL);
  v40 = 0x80;
  v10 = ((__int64 (__fastcall *)(char *))qword_1C0212100)(&v40);
  v14 = v10;
  if ( v10 >= 0 )
  {
    v16 = v40;
    *a4 = (v40 & 0x20) != 0;
    *a5 = (v16 & 0x10) != 0;
    *a6 = v16 & 1;
    if ( (v16 & 2) != 0 )
    {
      v39[0] = PsGetCurrentProcessSessionId();
      updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, v39, 0, 0);
      v14 = updated;
      if ( updated < 0 )
      {
        v21 = WdLogNewEntry5_WdError(v19, v18, v20);
        *(_QWORD *)(v21 + 24) = v14;
        *(_QWORD *)(v21 + 32) = v39[0];
        WdLogEvent5_WdError(v21);
        LODWORD(v14) = 0;
      }
      v16 = v40;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v14;
    WdLogEvent5_WdError(v15);
    memset(v41, 0, 0x67uLL);
    v16 = 4;
    v40 = 4;
  }
  if ( (v16 & 4) != 0 )
  {
    v22 = *(_DWORD *)&v41[3];
    if ( !*(_DWORD *)&v41[3] )
      v22 = 2191;
    *(_DWORD *)&v41[3] = v22;
    if ( (v16 & 8) != 0 )
      *(_DWORD *)&v41[3] = v22 | 0x100;
    if ( (unsigned int)DrvQueryMDEVPowerState((__int64)a1) )
    {
      v33 = DrvProcessSetDisplayConfigParameters(
              (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)&v40,
              *(unsigned int *)&v41[3],
              v7,
              v38,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v41[23]);
      v31 = v33;
      if ( v33 < 0 )
      {
        LODWORD(v14) = v33;
        v32 = WdLogNewEntry5_WdError(v35, v34, v36);
        *(_QWORD *)(v32 + 32) = 1LL;
        goto LABEL_16;
      }
      if ( v38[0] )
      {
        DrvUpdateDpiInfoOnOptimizedModeChange(a1, a3);
        v41[0] &= ~1u;
      }
    }
    else
    {
      v26 = *(_DWORD *)&v41[3];
      if ( (*(_WORD *)&v41[3] & 0x200) != 0 )
      {
        v27 = DrvProcessSetDisplayConfigParameters(
                (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)&v40,
                *(_DWORD *)&v41[3] & 0xFFFFFF7F,
                v7,
                0LL,
                (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v41[23]);
        v31 = v27;
        if ( v27 < 0 )
        {
          LODWORD(v14) = v27;
          v32 = WdLogNewEntry5_WdError(v29, v28, v30);
          *(_QWORD *)(v32 + 32) = 0LL;
LABEL_16:
          *(_QWORD *)(v32 + 24) = v31;
LABEL_17:
          WdLogEvent5_WdError(v32);
          goto LABEL_28;
        }
        v26 = *(_WORD *)&v41[3] & 0x1100 | 0x88F;
        *(_DWORD *)&v41[3] = v26;
      }
      else if ( (v41[3] & 0xF) == 0 )
      {
        v32 = WdLogNewEntry5_WdError(v24, v23, v25);
        goto LABEL_17;
      }
      gulDelayedSwitchAction = v26;
    }
  }
  if ( (v41[0] & 1) != 0 )
    DrvUpdateDpiInfoOnOptimizedModeChange(a1, a3);
LABEL_28:
  if ( *(_QWORD *)&v41[15] )
    ExFreePoolWithTag(*(PVOID *)&v41[15], 0);
  if ( *(_QWORD *)&v41[95] )
    **(_DWORD **)&v41[95] = v14;
  return (unsigned int)v14;
}
