/*
 * XREFs of ?_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C0299694
 * Callers:
 *     MonitorSerializeMonitor @ 0x1C02914C0 (MonitorSerializeMonitor.c)
 * Callees:
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C0299F90 (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 */

__int64 __fastcall DXGMONITOR::_SerializeMonitor(
        DXGMONITOR **this,
        unsigned __int64 *a2,
        struct _DMM_MONITOR_SERIALIZATION *a3)
{
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  DXGMONITOR *v14; // rax
  int v15; // eax
  unsigned int v16; // r8d
  DXGMONITOR *v17; // rax
  char *v18; // rdx
  DXGMONITOR *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  unsigned int v22; // r8d
  unsigned __int8 *v23; // r9
  DXGMONITOR *v24; // rax
  char *v25; // rdx
  DXGMONITOR *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r14
  unsigned int v29; // r12d
  char *v30; // r15
  __int64 v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rbx

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_DWORD *)this + 52);
  v8 = 112LL;
  if ( v7 )
    v8 = 104LL * (unsigned int)(v7 - 1) + 112;
  v9 = *((_DWORD *)this + 64);
  v10 = 56LL;
  if ( v9 )
    v10 = 48LL * (unsigned int)(v9 - 1) + 56;
  v11 = *((_DWORD *)this + 32);
  if ( v11 )
    v12 = 140LL * (unsigned int)(v11 - 1) + 184;
  else
    v12 = 184LL;
  v13 = v8 + v12 + v10;
  if ( a3 && v13 <= *a2 )
  {
    *(_DWORD *)a3 = v13;
    *((_DWORD *)a3 + 1) = *((_DWORD *)this + 11);
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 31);
    *((_BYTE *)a3 + 12) = *((_DWORD *)this + 108) != 1;
    *((_BYTE *)a3 + 13) = ((_DWORD)this[5] & 8) != 0;
    *((_DWORD *)a3 + 4) = *((_DWORD *)this + 30);
    v14 = this[7];
    if ( v14 )
      v15 = *(_DWORD *)(*((_QWORD *)v14 + 8) + 284LL);
    else
      v15 = 0;
    *((_DWORD *)a3 + 5) = v15;
    v16 = 0;
    *((_DWORD *)a3 + 9) = *((_DWORD *)this + 108);
    *((_DWORD *)a3 + 10) = *((_DWORD *)this + 52);
    v17 = this[27];
    if ( v17 != (DXGMONITOR *)(this + 27) )
    {
      v18 = (char *)v17 - 96;
      if ( !v17 )
        v18 = 0LL;
      while ( v18 )
      {
        v12 = 104LL * v16;
        *(_DWORD *)((char *)a3 + v12 + 144) = *((_DWORD *)v18 + 28);
        *(_OWORD *)((char *)a3 + v12 + 48) = *(_OWORD *)v18;
        *(_OWORD *)((char *)a3 + v12 + 64) = *((_OWORD *)v18 + 1);
        *(_OWORD *)((char *)a3 + v12 + 80) = *((_OWORD *)v18 + 2);
        *(_OWORD *)((char *)a3 + v12 + 96) = *((_OWORD *)v18 + 3);
        *(_OWORD *)((char *)a3 + v12 + 112) = *((_OWORD *)v18 + 4);
        *(_OWORD *)((char *)a3 + v12 + 128) = *((_OWORD *)v18 + 5);
        v19 = (DXGMONITOR *)*((_QWORD *)v18 + 12);
        if ( v19 == (DXGMONITOR *)(this + 27) )
        {
          v18 = 0LL;
        }
        else
        {
          v18 = (char *)v19 - 96;
          if ( !v19 )
            v18 = 0LL;
        }
        ++v16;
      }
    }
    *((_DWORD *)a3 + 6) = 40;
    if ( v16 != *((_DWORD *)a3 + 10) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = v8 + 40;
    v22 = 0;
    v23 = (unsigned __int8 *)a3 + v21;
    *((_BYTE *)a3 + v21) = *((_BYTE *)this + 256);
    v24 = this[33];
    if ( v24 != (DXGMONITOR *)(this + 33) )
    {
      v25 = (char *)v24 - 48;
      if ( !v24 )
        v25 = 0LL;
      while ( v25 )
      {
        v12 = 6LL * v22;
        *(_OWORD *)&v23[8 * v12 + 8] = *(_OWORD *)v25;
        *(_OWORD *)&v23[8 * v12 + 24] = *((_OWORD *)v25 + 1);
        *(_OWORD *)&v23[8 * v12 + 40] = *((_OWORD *)v25 + 2);
        v26 = (DXGMONITOR *)*((_QWORD *)v25 + 6);
        if ( v26 == (DXGMONITOR *)(this + 33) )
        {
          v25 = 0LL;
        }
        else
        {
          v25 = (char *)v26 - 48;
          if ( !v26 )
            v25 = 0LL;
        }
        ++v22;
      }
    }
    *((_DWORD *)a3 + 7) = v21;
    if ( v22 != *v23 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v27);
    }
    v28 = v10 + v21;
    v29 = 0;
    v30 = (char *)a3 + v28;
    for ( *((_BYTE *)a3 + v28) = *((_BYTE *)this + 128);
          v29 < *((_DWORD *)this + 32);
          *(_OWORD *)&v30[v33 + 128] = *(_OWORD *)(v12 + 136) )
    {
      v31 = v29;
      if ( !*((_QWORD *)this[17] + v29) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v32);
      }
      v33 = 140LL * v29;
      *(_DWORD *)&v30[v33 + 4] = v29;
      *(_DWORD *)&v30[v33 + 8] = *(_DWORD *)(*((_QWORD *)this[17] + v29) + 12LL);
      ConvertMonitorCapablitiesOrigin(
        *(enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *)(*((_QWORD *)this[17] + v29++) + 8LL),
        (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)&v30[v33 + 12]);
      v12 = *((_QWORD *)this[17] + v31);
      *(_OWORD *)&v30[v33 + 16] = *(_OWORD *)(v12 + 24);
      *(_OWORD *)&v30[v33 + 32] = *(_OWORD *)(v12 + 40);
      *(_OWORD *)&v30[v33 + 48] = *(_OWORD *)(v12 + 56);
      *(_OWORD *)&v30[v33 + 64] = *(_OWORD *)(v12 + 72);
      *(_OWORD *)&v30[v33 + 80] = *(_OWORD *)(v12 + 88);
      *(_OWORD *)&v30[v33 + 96] = *(_OWORD *)(v12 + 104);
      *(_OWORD *)&v30[v33 + 112] = *(_OWORD *)(v12 + 120);
    }
    *((_DWORD *)a3 + 8) = v28;
    return 0LL;
  }
  else
  {
    *a2 = v13;
    return 3221225507LL;
  }
}
