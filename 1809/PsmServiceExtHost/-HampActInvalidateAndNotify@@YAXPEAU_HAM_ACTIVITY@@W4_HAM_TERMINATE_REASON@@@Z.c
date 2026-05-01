/*
 * XREFs of ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18002F714
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800248E0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x18002E7D4 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x180014374 (RmpWnfPublishMessageToClientStateName.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampActInvalidateAndNotify(__int64 a1, int a2)
{
  int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-49h] BYREF
  int v9; // [rsp+50h] [rbp-39h]
  int v10; // [rsp+58h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-9h] BYREF
  _QWORD *v12; // [rsp+A0h] [rbp+17h]
  int v13; // [rsp+A8h] [rbp+1Fh]
  int v14; // [rsp+ACh] [rbp+23h]
  int *v15; // [rsp+B0h] [rbp+27h]
  int v16; // [rsp+B8h] [rbp+2Fh]
  int v17; // [rsp+BCh] [rbp+33h]

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v14 = 0;
    v12 = (_QWORD *)(a1 + 40);
    v13 = v4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BDE1, 0LL, 0LL, 3u, &pData);
  }
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 544) |= 8u;
    memset_0(v8, 0, 0x40uLL);
    v6 = *(_QWORD *)(a1 + 40);
    v8[1] = 0LL;
    v8[0] = v6;
    v9 = 2;
    v10 = a2;
    if ( (*(_BYTE *)(v5 + 128) & 2) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(v5 + 104))(v8, *(_QWORD *)(v5 + 120));
    }
    else if ( (int)RmpWnfPublishMessageToClientStateName((_QWORD *)(v5 + 104), v8, 0x40u, *(_QWORD *)(v5 + 112)) < 0
           && hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL) )
      {
        v14 = 0;
        v17 = 0;
        v12 = v8;
        v7 = v9;
        v15 = &v7;
        v13 = 8;
        v16 = 4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180088BA2, 0LL, 0LL, 4u, &pData);
      }
    }
  }
}
