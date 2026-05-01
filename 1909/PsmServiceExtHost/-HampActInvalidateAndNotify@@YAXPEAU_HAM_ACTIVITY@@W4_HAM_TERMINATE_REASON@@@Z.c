/*
 * XREFs of ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18003DF9C
 * Callers:
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x18000DEEC (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180028200 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     RmpWnfPublishMessageToClientStateName @ 0x1800152B4 (RmpWnfPublishMessageToClientStateName.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampActInvalidateAndNotify(__int64 a1, int a2)
{
  int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // [rsp+30h] [rbp-69h] BYREF
  __int64 v8; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-59h] BYREF
  int v10; // [rsp+50h] [rbp-49h]
  int v11; // [rsp+58h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-19h] BYREF
  _QWORD *v13; // [rsp+A0h] [rbp+7h]
  int v14; // [rsp+A8h] [rbp+Fh]
  int v15; // [rsp+ACh] [rbp+13h]
  int *v16; // [rsp+B0h] [rbp+17h]
  int v17; // [rsp+B8h] [rbp+1Fh]
  int v18; // [rsp+BCh] [rbp+23h]
  __int64 *v19; // [rsp+C0h] [rbp+27h]
  int v20; // [rsp+C8h] [rbp+2Fh]
  int v21; // [rsp+CCh] [rbp+33h]

  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v15 = 0;
    v13 = (_QWORD *)(a1 + 40);
    v14 = v4;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099CDA, 0LL, 0LL, 3u, &pData);
  }
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 544) |= 8u;
    memset_0(v9, 0, 0x40uLL);
    v6 = *(_QWORD *)(a1 + 40);
    v9[1] = 0LL;
    v9[0] = v6;
    v10 = 2;
    v11 = a2;
    if ( (*(_BYTE *)(v5 + 128) & 2) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(v5 + 104))(v9, *(_QWORD *)(v5 + 120));
    }
    else if ( (int)RmpWnfPublishMessageToClientStateName((_QWORD *)(v5 + 104), v9, 0x40u, *(_QWORD *)(v5 + 112)) < 0
           && dword_1800AB2C0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL) )
      {
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v13 = v9;
        v7 = v10;
        v16 = &v7;
        v19 = &v8;
        v14 = 8;
        v17 = 4;
        v8 = 0x1000000LL;
        v20 = 8;
        TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009690B, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
