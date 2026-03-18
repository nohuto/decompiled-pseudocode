/*
 * XREFs of Controller_ExecuteDSM @ 0x1C00603A8
 * Callers:
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C000E590 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C000FC60 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Controller_QuerySupportedDSMs @ 0x1C000FD50 (Controller_QuerySupportedDSMs.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C005E938 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C00606EC (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C00608DC (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C0014AF4 (WPP_RECORDER_SF__guid_d.c)
 *     WPP_RECORDER_SF_q_guid_L @ 0x1C00150E4 (WPP_RECORDER_SF_q_guid_L.c)
 *     WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C00151EC (WPP_RECORDER_SF_q_guid_LLLLL.c)
 *     WPP_RECORDER_SF_q_guid_Ld @ 0x1C0015370 (WPP_RECORDER_SF_q_guid_Ld.c)
 */

__int64 __fastcall Controller_ExecuteDSM(__int64 *a1, const void *a2, int a3, int a4, void *a5, unsigned __int16 a6)
{
  unsigned int v6; // edi
  __int64 v7; // r13
  int v11; // eax
  _DWORD *PoolWithTag; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rbx
  __int64 v17; // rax
  void *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // cl
  int v25; // [rsp+20h] [rbp-99h]
  int v26; // [rsp+20h] [rbp-99h]
  unsigned int Size; // [rsp+60h] [rbp-59h]
  __int64 v29; // [rsp+70h] [rbp-49h] BYREF
  _BYTE *v30; // [rsp+78h] [rbp-41h]
  __int64 v31; // [rsp+80h] [rbp-39h]
  __int64 v32; // [rsp+88h] [rbp-31h] BYREF
  _DWORD *v33; // [rsp+90h] [rbp-29h]
  __int64 v34; // [rsp+98h] [rbp-21h]
  void *Src; // [rsp+A0h] [rbp-19h]
  char v36[8]; // [rsp+A8h] [rbp-11h] BYREF
  _BYTE v37[20]; // [rsp+B0h] [rbp-9h] BYREF

  v6 = 0;
  v7 = *a1;
  Src = a5;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  memset(v37, 0, sizeof(v37));
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v11 = a6;
  if ( a6 < 4u )
    v11 = 4;
  Size = v11 + 56;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v11 + 56), 0x49434858u);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    v16[2] = Size;
    *v16 = 1130980673;
    v16[1] = 1297302623;
    v16[3] = 4;
    v16[4] = 1048578;
    memcpy_s(v16 + 5, 0x10uLL, a2, 0x10uLL);
    LOWORD(v17) = *((_WORD *)v16 + 9);
    if ( (unsigned __int16)v17 >= 4u )
      v17 = (unsigned __int16)v17;
    else
      v17 = 4LL;
    v18 = Src;
    *(_DWORD *)((char *)v16 + v17 + 24) = a3;
    *(_DWORD *)((char *)v16 + v17 + 20) = 0x40000;
    *(_DWORD *)((char *)v16 + v17 + 28) = 0x40000;
    *(_DWORD *)((char *)v16 + v17 + 32) = a4;
    *(_WORD *)((char *)v16 + v17 + 36) = 2;
    *(_WORD *)((char *)v16 + v17 + 38) = a6;
    memcpy_s((char *)v16 + v17 + 40, a6, v18, a6);
    v34 = Size;
    v32 = 1LL;
    v30 = v37;
    v33 = v16;
    *(_OWORD *)&v37[4] = 0LL;
    *(_DWORD *)v37 = 1114596673;
    v29 = 1LL;
    v31 = 20LL;
    v19 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 336))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v7);
    if ( (*(int (__fastcall **)(unsigned __int64, __int64, _QWORD, __int64, __int64 *, __int64 *, _QWORD, char *))(WdfFunctions_01023 + 1488))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v19,
           0LL,
           3325956LL,
           &v32,
           &v29,
           0LL,
           v36) >= 0 )
    {
      if ( *(_DWORD *)v37 == 1114596673 )
      {
        if ( *(_DWORD *)&v37[8] && *(_WORD *)&v37[14] )
        {
          v21 = *(unsigned __int16 *)&v37[14];
          v23 = 3;
          if ( (unsigned __int64)*(unsigned __int16 *)&v37[14] - 1 <= 3 )
            v23 = v37[14] - 1;
          v6 = *(_DWORD *)&v37[16] & ((256 << (8 * v23)) - 1);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q_guid_LLLLL(a1[9], *(unsigned __int16 *)&v37[14], v21, *(unsigned int *)&v37[8], v26);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_q_guid_L(a1[9], v20, v21, v22, v26);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q_guid_Ld(a1[9], v20, v21, v22, v26);
    }
    ExFreePoolWithTag(v16, 0x49434858u);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid_d(a1[9], v13, v14, v15, v25, (__int64)a2);
  }
  return v6;
}
