/*
 * XREFs of ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180070AA0
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800257F0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x1800709F4 (-RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorEnableForHost(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  int v7; // r9d
  int v8; // [rsp+40h] [rbp-29h] BYREF
  __int64 v9; // [rsp+48h] [rbp-21h] BYREF
  __int64 v10; // [rsp+50h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v12; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  __int64 *v14; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  int *v16; // [rsp+A0h] [rbp+37h]
  __int64 v17; // [rsp+A8h] [rbp+3Fh]

  v1 = *((_QWORD *)a1 + 6);
  if ( (*(_BYTE *)(v1 + 2616) & 1) == 0 )
  {
    v3 = v1 + 48;
    v4 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(v1 + 40) + 88LL))(
           (char *)a1 + 552,
           *((unsigned int *)a1 + 155),
           (char *)a1 + 88,
           *((unsigned int *)a1 + 156),
           *((_QWORD *)a1 + 4),
           &v9);
    v5 = v9;
    if ( v4 < 0 )
      v5 = 0LL;
    *((_QWORD *)a1 + 152) = v5;
    v9 = v5;
    ++*(_DWORD *)(v3 + 32);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v10 = *((_QWORD *)a1 + 4);
      v12 = &v10;
      v14 = &v9;
      v16 = &v8;
      v13 = 8LL;
      v15 = 8LL;
      v8 = v7;
      v17 = 4LL;
      TlgWrite(v6, &unk_18009595E, 0LL, 0LL, 5u, &pData);
    }
    if ( (*(_BYTE *)(v3 + 44) & 1) == 0 )
      RmpGpuMonitorEnable((struct _RM_GPU_MONITOR *)v3);
  }
}
