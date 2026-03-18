/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C0179328
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178698 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0021D2C (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiGetMonitorDescriptor @ 0x1C01794F4 (DpiGetMonitorDescriptor.c)
 *     DpiQueryDisplayIDDescriptor @ 0x1C01795D0 (DpiQueryDisplayIDDescriptor.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver(void **this, __int64 a2)
{
  _QWORD *v3; // r14
  unsigned int v4; // esi
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // r15
  int MonitorDescriptor; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  SIZE_T v17; // rax
  PVOID v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // r8
  void *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  void *v38; // rcx
  __int64 v39; // rsi
  PVOID v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rsi
  int v46; // r8d
  char *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  size_t Size; // [rsp+40h] [rbp+8h] BYREF

  if ( !this[7] )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( *((_DWORD *)this + 32) )
  {
    v29 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( this[17] )
  {
    v30 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v30);
  }
  v3 = 0LL;
  v4 = 0;
  while ( 1 )
  {
    v5 = (char *)operator new[](0x9FuLL, 0x4D677844u, PagedPool);
    v9 = v5;
    if ( !v5 )
    {
      v37 = WdLogNewEntry5_WdError(v7, v6, v8);
      WdLogEvent5_WdError(v37);
      LODWORD(v14) = -1073741801;
LABEL_41:
      while ( v3 )
      {
        v38 = v3;
        v3 = (_QWORD *)*v3;
        operator delete[](v38);
      }
      goto LABEL_32;
    }
    MonitorDescriptor = DpiGetMonitorDescriptor(this[7], v4 << 7, v8, v5 + 24);
    v14 = MonitorDescriptor;
    if ( MonitorDescriptor == -1071841272 )
      break;
    if ( MonitorDescriptor == -1071841279 || MonitorDescriptor == -1071774719 )
    {
      if ( v4 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v12, v11);
        WdLogEvent5_WdAssertion(v32);
      }
      v33 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v33 + 24) = this;
      WdLogEvent5_WdWarning(v33);
      goto LABEL_18;
    }
    if ( MonitorDescriptor < 0 )
    {
      v31 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v31 + 24) = v14;
      WdLogEvent5_WdError(v31);
      goto LABEL_18;
    }
    *(_QWORD *)v9 = v3;
    v15 = -v4;
    v9[2] = 2;
    *((_QWORD *)v9 + 2) = 128LL;
    v3 = v9;
    v16 = -(v4++ != 0);
    v9[3] = (v16 & 0xFE) + 1;
    if ( v4 > 0xFE )
      goto LABEL_19;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = v4;
LABEL_18:
  operator delete[](v9);
  LODWORD(v14) = 0;
LABEL_19:
  if ( (int)v14 < 0 )
    goto LABEL_41;
  if ( !v3 )
    goto LABEL_32;
  if ( !v4 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v15, v11);
    WdLogEvent5_WdAssertion(v34);
  }
  v17 = 8LL * v4;
  if ( !is_mul_ok(v4, 8uLL) )
    v17 = -1LL;
  v18 = operator new[](v17, 0x4D677844u, PagedPool);
  this[17] = v18;
  if ( !v18 )
    goto LABEL_49;
  for ( *((_DWORD *)this + 32) = v4; v4; *v20 = 0LL )
  {
    if ( !v3 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v20, v19);
      WdLogEvent5_WdAssertion(v35);
    }
    *((_QWORD *)this[17] + --v4) = v3;
    v3 = (_QWORD *)*v3;
    v20 = (_QWORD *)*((_QWORD *)this[17] + v4);
  }
  if ( v3 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v36);
  }
LABEL_32:
  if ( (int)v14 >= 0 )
  {
    v22 = this[7];
    LODWORD(Size) = 0;
    if ( (unsigned int)DpiQueryDisplayIDDescriptor(v22, &Size, 0LL) == -1073741789 )
    {
      v39 = (unsigned int)Size;
      if ( (unsigned int)(Size - 1) > 0xFFFF )
      {
        v51 = WdLogNewEntry5_WdWarning(v24, v23, v25);
        *(_QWORD *)(v51 + 24) = v39;
LABEL_51:
        WdLogEvent5_WdWarning(v51);
        return (unsigned int)v14;
      }
      v40 = operator new[]((unsigned int)Size, 0x4D677844u, PagedPool);
      this[20] = v40;
      if ( v40 )
      {
        memset(v40, 0, (unsigned int)v39);
        v41 = DpiQueryDisplayIDDescriptor(this[7], &Size, this[20]);
        v45 = v41;
        if ( v41 < 0 )
        {
          v52 = WdLogNewEntry5_WdError(v43, v42, v44);
          *(_QWORD *)(v52 + 24) = v45;
          WdLogEvent5_WdError(v52);
          operator delete[](this[20]);
          this[20] = 0LL;
          return (unsigned int)v14;
        }
        v46 = Size;
        v47 = (char *)this[20];
        *((_DWORD *)this + 38) = Size;
        DisplayID_Initialize((struct DisplayIDObj *)(this + 21), v47, v46);
        if ( *((_DWORD *)this + 32) )
          return (unsigned int)v14;
        v51 = WdLogNewEntry5_WdWarning(v49, v48, v50);
        goto LABEL_51;
      }
LABEL_49:
      v53 = WdLogNewEntry5_WdError(v20, v19, v21);
      WdLogEvent5_WdError(v53);
      LODWORD(v14) = -1073741801;
    }
  }
  return (unsigned int)v14;
}
