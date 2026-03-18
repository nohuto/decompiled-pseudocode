/*
 * XREFs of ACPILoadProcessRSDT @ 0x1C00BDC94
 * Callers:
 *     ACPIInitialize @ 0x1C00BE114 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0001A78 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001B40 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C001DD80 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008F42C (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIPccInitialize @ 0x1C00B00F0 (ACPIPccInitialize.c)
 *     ACPIRegDumpAcpiTables @ 0x1C00BD394 (ACPIRegDumpAcpiTables.c)
 *     ACPILoadAddDynamicDataBlockTable @ 0x1C00BDF00 (ACPILoadAddDynamicDataBlockTable.c)
 *     ACPILoadProcessFADT @ 0x1C00BE078 (ACPILoadProcessFADT.c)
 */

__int64 ACPILoadProcessRSDT()
{
  int v0; // ebx
  _DWORD *v1; // rax
  _DWORD *v2; // rdi
  unsigned int v3; // r15d
  unsigned int v4; // r13d
  int **v5; // r12
  int *v6; // rdi
  int v7; // eax
  _OWORD *PoolWithTag; // rax
  int v10; // eax
  unsigned __int16 v11; // r9
  PVOID v12; // rax
  _DWORD *v13; // rdi
  PVOID v14; // rdi
  __int64 v15; // [rsp+28h] [rbp-50h]
  char v16; // [rsp+80h] [rbp+8h]
  PVOID v17; // [rsp+88h] [rbp+10h] BYREF
  char v18; // [rsp+90h] [rbp+18h]
  PVOID P; // [rsp+98h] [rbp+20h] BYREF

  v0 = 0;
  v16 = 0;
  v18 = 0;
  LOBYTE(v17) = 0;
  v1 = (_DWORD *)(*(__int64 (**)(void))(PmHalDispatchTable + 112))();
  v2 = v1;
  if ( !v1 || (v3 = *v1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x12u,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
    v0 = -1072431079;
    goto LABEL_19;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x13u,
      (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
      *v1);
  v4 = 0;
  v5 = (int **)(v2 + 2);
  do
  {
    v6 = *v5;
    v7 = **v5;
    if ( v7 == 1414742611 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          6u,
          0x14u,
          (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
          *v5);
      goto LABEL_15;
    }
    if ( v7 != 1413763923 && v7 != 1346584902 && v7 != 1128878145 && v7 != 1413763920 && v7 != 1413694288 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v15) = **v5;
        WPP_RECORDER_SF_L(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          6u,
          0x15u,
          (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
          v15);
      }
      goto LABEL_15;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_49;
    *PoolWithTag = *(_OWORD *)v6;
    PoolWithTag[1] = *((_OWORD *)v6 + 1);
    *((_DWORD *)PoolWithTag + 8) = v6[8];
    *((_DWORD *)PoolWithTag + 1) = 36;
    if ( ACPIRegReadAMLRegistryEntry((__int64 *)&P) )
      v6 = (int *)P;
    else
      ExFreePoolWithTag(P, 0);
    switch ( *v6 )
    {
      case 1128878145:
        if ( !v18 )
        {
          v18 = 1;
          *((_QWORD *)AcpiInformation + 4) = v6;
          break;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = 23;
          goto LABEL_48;
        }
        break;
      case 1346584902:
        if ( !v16 )
        {
          v16 = 1;
          *((_QWORD *)AcpiInformation + 1) = v6;
          v10 = ACPILoadProcessFADT();
          goto LABEL_30;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = 22;
          goto LABEL_48;
        }
        break;
      case 1413694288:
        if ( !(_BYTE)v17 )
        {
          LOBYTE(v17) = 1;
          v10 = ACPIPccInitialize((__int64)v6);
          goto LABEL_30;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = 24;
LABEL_48:
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            6u,
            v11,
            (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
        }
        break;
      case 1413763920:
      case 1413763923:
        v10 = ACPILoadAddDynamicDataBlockTable(v6, 0LL);
LABEL_30:
        v0 = v10;
        break;
    }
    if ( v0 < 0 )
      goto LABEL_19;
LABEL_15:
    ++v4;
    ++v5;
  }
  while ( v4 < v3 );
  if ( !g_SimulatorCallbackObject && !AcpiLoadSimulatorTable )
    goto LABEL_18;
  v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
  v17 = v12;
  v13 = v12;
  if ( v12 )
  {
    memset(v12, 0, 0x24uLL);
    *v13 = 1413763923;
    v13[1] = 36;
    *((_WORD *)v13 + 4) = 1;
    v13[6] = 1;
    v13[8] = 1;
    *(_DWORD *)((char *)v13 + 10) = 1413894989;
    *((_QWORD *)v13 + 2) = 0x7274616C756D6973LL;
    v13[7] = 1413894989;
    if ( !ACPIRegReadAMLRegistryEntry((__int64 *)&v17) )
    {
      ExFreePoolWithTag(v17, 0);
LABEL_18:
      ACPIRegDumpAcpiTables();
      goto LABEL_19;
    }
    v14 = v17;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        6u,
        0x19u,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
        v17);
    v0 = ACPILoadAddDynamicDataBlockTable(v14, 0LL);
    if ( v0 >= 0 )
      goto LABEL_18;
    ExFreePoolWithTag(v14, 0);
  }
  else
  {
LABEL_49:
    v0 = -1073741670;
  }
LABEL_19:
  if ( !v16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x1Au,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
    return (unsigned int)-1072431079;
  }
  return (unsigned int)v0;
}
