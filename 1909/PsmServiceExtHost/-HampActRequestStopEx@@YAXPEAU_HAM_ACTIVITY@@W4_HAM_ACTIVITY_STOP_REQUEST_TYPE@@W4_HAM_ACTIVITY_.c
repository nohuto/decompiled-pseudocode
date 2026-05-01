/*
 * XREFs of ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800029F4
 * Callers:
 *     ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180002984 (-HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000D1C0 (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180023A10 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002D1F0 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x18007711C (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STA.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077A48 (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180077F90 (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x180079544 (-RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z.c)
 * Callees:
 *     RmpWnfPublishMessageToClientStateName @ 0x1800152B4 (RmpWnfPublishMessageToClientStateName.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18007A99C (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 */

char __fastcall HampActRequestStopEx(__int64 a1, unsigned int a2, int a3, int a4, int a5, unsigned int a6, __int64 a7)
{
  int v9; // r13d
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rdx
  char v13; // r10
  __int64 v14; // rdx
  __int64 (__fastcall **v15)(_QWORD *, _QWORD); // rax
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18; // [rsp+31h] [rbp-CFh] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h]
  unsigned int v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+6Ch] [rbp-94h]
  int v26; // [rsp+70h] [rbp-90h]
  int v27; // [rsp+74h] [rbp-8Ch]
  __int64 v28; // [rsp+78h] [rbp-88h]
  __int128 v29; // [rsp+80h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  int *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  char *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]

  v20 = a4;
  v19 = a3;
  if ( a7 )
    v9 = *(_DWORD *)(a7 + 140);
  else
    v9 = 0;
  if ( a6 )
    HampActCheckSetExpiration((struct _HAM_ACTIVITY *)a1, a6);
  v10 = *(_DWORD *)(a1 + 544);
  v11 = (unsigned __int8)v10 >> 6;
  if ( v11 >= a2 )
  {
    if ( dword_1800AB2C0 > 5u )
    {
      v32 = 8LL;
      v31 = (_QWORD *)(a1 + 40);
      v33 = &v19;
      v35 = &v17;
      v19 = v9;
      v34 = 4LL;
      v17 = a2;
      v36 = 1LL;
      LOBYTE(v11) = TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099B88, 0LL, 0LL, 5u, &pData);
    }
  }
  else
  {
    if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
    {
      v32 = v12;
      v31 = (_QWORD *)(a1 + 40);
      v33 = (int *)v21;
      v35 = &v17;
      v37 = &v18;
      LODWORD(v21[0]) = v9;
      v34 = 4LL;
      v17 = a2;
      v36 = 1LL;
      v18 = v13;
      v38 = 1LL;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099AAB, 0LL, 0LL, 6u, &pData);
      v10 = *(_DWORD *)(a1 + 544);
    }
    v14 = *(_QWORD *)(a1 + 64);
    v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)((_BYTE)a2 << 6)) & 0xC0;
    *(_DWORD *)(a1 + 544) = v11;
    if ( v14 )
    {
      v22[0] = *(_QWORD *)(a1 + 40);
      v25 = v19;
      v27 = v20;
      v26 = a5;
      v15 = (__int64 (__fastcall **)(_QWORD *, _QWORD))(v14 + 104);
      v23 = 1LL;
      v28 = 0LL;
      v29 = 0LL;
      v22[1] = 0LL;
      v24 = a2;
      if ( (*(_BYTE *)(v14 + 128) & 2) != 0 )
      {
        LOBYTE(v11) = (*v15)(v22, *(_QWORD *)(v14 + 120));
      }
      else
      {
        v11 = RmpWnfPublishMessageToClientStateName(v15, v22, 64LL, *(_QWORD *)(v14 + 112));
        if ( v11 < 0 && dword_1800AB2C0 > 4u )
        {
          LOBYTE(v11) = TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL);
          if ( (_BYTE)v11 )
          {
            v32 = 8LL;
            v31 = v22;
            v20 = v23;
            v33 = &v20;
            v35 = (char *)v21;
            v34 = 4LL;
            v21[0] = 0x1000000LL;
            v36 = 8LL;
            LOBYTE(v11) = TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009690B, 0LL, 0LL, 5u, &pData);
          }
        }
      }
    }
  }
  return v11;
}
