/*
 * XREFs of ?HampPkgIssueStateChangeNotification@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180013C48
 * Callers:
 *     ?HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@1@Z @ 0x180013FEC (-HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@.c)
 * Callees:
 *     ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@@Z @ 0x18001427C (-HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_STATE_CHANGE.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall HampPkgIssueStateChangeNotification(__int64 a1, int a2)
{
  unsigned int v4; // edx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int16 v7; // ax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _DWORD v17[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v18; // [rsp+28h] [rbp-D8h]
  __int128 v19; // [rsp+38h] [rbp-C8h]
  __int128 v20; // [rsp+48h] [rbp-B8h]
  __int128 v21; // [rsp+58h] [rbp-A8h]
  __int128 v22; // [rsp+68h] [rbp-98h]
  __int128 v23; // [rsp+78h] [rbp-88h]
  __int128 v24; // [rsp+88h] [rbp-78h]
  __int128 v25; // [rsp+98h] [rbp-68h]
  __int16 v26; // [rsp+A8h] [rbp-58h]
  __int128 v27; // [rsp+1F8h] [rbp+F8h]
  __int128 v28; // [rsp+208h] [rbp+108h]
  __int128 v29; // [rsp+218h] [rbp+118h]
  __int128 v30; // [rsp+228h] [rbp+128h]
  int v31; // [rsp+238h] [rbp+138h]
  unsigned int v32; // [rsp+23Ch] [rbp+13Ch]

  memset_0(v17, 0, 0x220uLL);
  v4 = *(_DWORD *)(a1 + 296);
  v5 = *(_OWORD *)(a1 + 112);
  v18 = *(_OWORD *)(a1 + 96);
  v6 = *(_OWORD *)(a1 + 128);
  v7 = *(_WORD *)(a1 + 224);
  v19 = v5;
  v8 = *(_OWORD *)(a1 + 144);
  v20 = v6;
  v9 = *(_OWORD *)(a1 + 160);
  v21 = v8;
  v10 = *(_OWORD *)(a1 + 176);
  v22 = v9;
  v11 = *(_OWORD *)(a1 + 192);
  v23 = v10;
  v12 = *(_OWORD *)(a1 + 244);
  v24 = v11;
  v25 = *(_OWORD *)(a1 + 208);
  v26 = v7;
  v13 = *(_OWORD *)(a1 + 228);
  v31 = *(_DWORD *)(a1 + 292);
  v14 = *(_QWORD *)(a1 + 32);
  v27 = v13;
  v17[0] = 1;
  v15 = *(_OWORD *)(a1 + 260);
  v17[1] = a2;
  v28 = v12;
  v32 = v4;
  v16 = *(_OWORD *)(a1 + 276);
  v29 = v15;
  v30 = v16;
  HampManagerIssueStateChangeNotifications(
    (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                    - 168),
    v4,
    (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)v17);
}
