/*
 * XREFs of ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C0295EA4
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0295D7C (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0295E34 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C0296B30 (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(DXGMONITOR *this, void *a2, char a3)
{
  unsigned int v3; // r14d
  struct DXGMONITOR::_MONTIOR_CONFIG_TABLE near **v4; // rdi
  __int64 v5; // rsi
  unsigned int v9; // r9d
  struct DXGMONITOR::_MONTIOR_CONFIG_TABLE near *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v22; // [rsp+38h] [rbp-39h] BYREF
  int v23; // [rsp+40h] [rbp-31h]
  struct DXGMONITOR::_MONTIOR_CONFIG_TABLE near *v24; // [rsp+48h] [rbp-29h]
  unsigned int *v25; // [rsp+50h] [rbp-21h]
  int v26; // [rsp+58h] [rbp-19h]
  unsigned int *v27; // [rsp+60h] [rbp-11h]
  int v28; // [rsp+68h] [rbp-9h]
  __int64 v29; // [rsp+70h] [rbp-1h]
  int v30; // [rsp+78h] [rbp+7h]
  _BYTE v31[40]; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int v32; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = &DXGMONITOR::_MonitorConfigInfoTable;
  v5 = 0LL;
  do
  {
    v9 = *(_DWORD *)((char *)this + *((int *)v4 + 2));
    v10 = *v4;
    v22 = 0LL;
    v29 = 0LL;
    v30 = 0;
    v24 = v10;
    v25 = &v32;
    v27 = &v32;
    v32 = v9;
    v23 = 288;
    v26 = 67108868;
    v28 = 4;
    memset(v31, 0, sizeof(v31));
    v11 = RtlQueryRegistryValuesEx(0x40000000LL, a2, &v22, 0LL, 0LL);
    v13 = v11;
    if ( v11 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v20[3] = v5;
      v20[4] = *((unsigned int *)this + 11);
      v20[5] = v13;
      goto LABEL_9;
    }
    if ( !((unsigned __int8 (__fastcall *)(DXGMONITOR *, _QWORD))v4[2])(this, v32) )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v20[3] = v32;
      v20[4] = v5;
      v20[5] = *((unsigned int *)this + 11);
LABEL_9:
      WdLogEvent5_WdError(v20);
      goto LABEL_10;
    }
    v18 = *((int *)v4 + 3);
    if ( *(_DWORD *)((char *)this + v18) != v32 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v18, v14, v16, v17);
      v19[3] = v32;
      v19[4] = v5;
      v19[5] = *((unsigned int *)this + 11);
      WdLogEvent5_WdDmmEvent(v19);
      *(_DWORD *)((char *)this + *((int *)v4 + 3)) = v32;
      if ( a3 )
        DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(this, v3);
    }
LABEL_10:
    ++v3;
    ++v5;
    v4 += 3;
  }
  while ( v3 < 2 );
  return 0LL;
}
