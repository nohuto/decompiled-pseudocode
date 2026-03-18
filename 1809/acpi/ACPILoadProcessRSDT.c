/*
 * XREFs of ACPILoadProcessRSDT @ 0x1C00BA420
 * Callers:
 *     ACPIInitialize @ 0x1C00BAE7C (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002680 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C000F2A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008D3EC (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIPccInitialize @ 0x1C00AC9D0 (ACPIPccInitialize.c)
 *     ACPIRegDumpAcpiTables @ 0x1C00B83AC (ACPIRegDumpAcpiTables.c)
 *     ACPILoadAddDynamicDataBlockTable @ 0x1C00BA710 (ACPILoadAddDynamicDataBlockTable.c)
 *     ACPILoadProcessFADT @ 0x1C00BACDC (ACPILoadProcessFADT.c)
 */

__int64 ACPILoadProcessRSDT()
{
  char v0; // r13
  int v1; // ebx
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  int **v6; // r15
  int *v7; // rdi
  int v8; // eax
  _OWORD *PoolWithTag; // rax
  int v11; // eax
  unsigned __int16 v12; // r9
  PVOID v13; // rax
  _DWORD *v14; // rdi
  PVOID v15; // rdi
  __int64 v16; // [rsp+28h] [rbp-40h]
  PVOID v17; // [rsp+70h] [rbp+8h] BYREF
  char v18; // [rsp+78h] [rbp+10h]
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  v0 = 0;
  v18 = 0;
  v1 = 0;
  LOBYTE(v17) = 0;
  v2 = (_DWORD *)(*(__int64 (**)(void))(PmHalDispatchTable + 112))();
  v3 = v2;
  if ( v2 )
  {
    v4 = *v2;
    if ( *v2 )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        6u,
        0x13u,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
        *v2);
      v5 = 0;
      v6 = (int **)(v3 + 2);
      while ( 1 )
      {
        v7 = *v6;
        v8 = **v6;
        if ( v8 == 1414742611 )
        {
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            6u,
            0x14u,
            (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
            *v6);
        }
        else
        {
          if ( v8 == 1413763923 || v8 == 1346584902 || v8 == 1128878145 || v8 == 1413763920 || v8 == 1413694288 )
          {
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
            P = PoolWithTag;
            if ( !PoolWithTag )
              goto LABEL_42;
            *PoolWithTag = *(_OWORD *)v7;
            PoolWithTag[1] = *((_OWORD *)v7 + 1);
            *((_DWORD *)PoolWithTag + 8) = v7[8];
            *((_DWORD *)PoolWithTag + 1) = 36;
            if ( ACPIRegReadAMLRegistryEntry((__int64 *)&P) )
              v7 = (int *)P;
            else
              ExFreePoolWithTag(P, 0);
            switch ( *v7 )
            {
              case 1128878145:
                if ( !v18 )
                {
                  v18 = 1;
                  *((_QWORD *)AcpiInformation + 4) = v7;
                  goto LABEL_28;
                }
                v12 = 23;
                break;
              case 1346584902:
                if ( !v0 )
                {
                  v0 = 1;
                  *((_QWORD *)AcpiInformation + 1) = v7;
                  v11 = ACPILoadProcessFADT();
LABEL_27:
                  v1 = v11;
                  goto LABEL_28;
                }
                v12 = 22;
                break;
              case 1413694288:
                if ( !(_BYTE)v17 )
                {
                  LOBYTE(v17) = 1;
                  v11 = ACPIPccInitialize((__int64)v7);
                  goto LABEL_27;
                }
                v12 = 24;
                break;
              case 1413763920:
              case 1413763923:
                v11 = ACPILoadAddDynamicDataBlockTable(v7, 0LL);
                goto LABEL_27;
              default:
LABEL_28:
                if ( v1 < 0 )
                  goto LABEL_15;
                goto LABEL_11;
            }
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              6u,
              v12,
              (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
            goto LABEL_28;
          }
          LODWORD(v16) = **v6;
          WPP_RECORDER_SF_L(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            6u,
            0x15u,
            (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
            v16);
        }
LABEL_11:
        ++v5;
        ++v6;
        if ( v5 >= v4 )
        {
          if ( !g_SimulatorCallbackObject && !AcpiLoadSimulatorTable )
            goto LABEL_14;
          v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
          v17 = v13;
          v14 = v13;
          if ( !v13 )
          {
LABEL_42:
            v1 = -1073741670;
            goto LABEL_15;
          }
          memset(v13, 0, 0x24uLL);
          *v14 = 1413763923;
          v14[1] = 36;
          *((_WORD *)v14 + 4) = 1;
          v14[6] = 1;
          v14[8] = 1;
          *(_DWORD *)((char *)v14 + 10) = 1413894989;
          *((_QWORD *)v14 + 2) = 0x7274616C756D6973LL;
          v14[7] = 1413894989;
          if ( ACPIRegReadAMLRegistryEntry((__int64 *)&v17) )
          {
            v15 = v17;
            WPP_RECORDER_SF_q(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              6u,
              0x19u,
              (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
              v17);
            v1 = ACPILoadAddDynamicDataBlockTable(v15, 0LL);
            if ( v1 < 0 )
            {
              ExFreePoolWithTag(v15, 0);
              goto LABEL_15;
            }
          }
          else
          {
            ExFreePoolWithTag(v17, 0);
          }
LABEL_14:
          ACPIRegDumpAcpiTables();
          goto LABEL_15;
        }
      }
    }
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    6u,
    0x12u,
    (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
  v1 = -1072431079;
LABEL_15:
  if ( !v0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x1Au,
      (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
    return (unsigned int)-1072431079;
  }
  return (unsigned int)v1;
}
