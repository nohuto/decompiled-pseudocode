/*
 * XREFs of ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EFBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x1C0036238 (--_GCDriverStoreCopy@@QEAAPEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003651C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0208B5C (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0209258 (-ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0209904 (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 *     DpiGetDriverStorePath @ 0x1C0262DC0 (DpiGetDriverStorePath.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  int v13; // eax
  CDriverStoreCopy *v14; // rcx
  int v16; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v17[24]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v18[32]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v19[148]; // [rsp+60h] [rbp-A0h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v18,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
    if ( !v5 )
      goto LABEL_26;
    v6 = *((_QWORD *)a1 + 5);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v17, (struct _KTHREAD **)(v6 + 56));
    memset(v19, 0, 0x248uLL);
    if ( *(_BYTE *)(v6 + 145) )
    {
      v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v10 + 24) = 4410LL;
      WdLogEvent5_WdWarning(v10);
      v19[4] = -1073741790;
LABEL_25:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v19, 0x248u);
      v3 = 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
      goto LABEL_26;
    }
    if ( !*(_BYTE *)(v5 + 24) )
    {
      v11 = *(_QWORD *)(v6 + 16);
      v16 = 520;
      v19[4] = DpiGetDriverStorePath(*(_QWORD *)(v11 + 192), &v19[15], &v16);
      if ( v19[4] < 0 )
        goto LABEL_25;
      v19[4] = 0;
      if ( *(_QWORD *)(v6 + 256) )
        goto LABEL_15;
      v12 = operator new(0x658uLL, 0x4B677844u, PagedPool);
      if ( v12 )
      {
        v12[2] = -1LL;
        *v12 = 0LL;
        *((_DWORD *)v12 + 2) = 536;
        *((_DWORD *)v12 + 396) = 0;
        v12[200] = v12 + 199;
        v12[199] = v12 + 199;
        v12[202] = v12 + 201;
        v12[201] = v12 + 201;
      }
      else
      {
        v12 = 0LL;
      }
      *(_QWORD *)(v6 + 256) = v12;
      if ( !v12 )
      {
        v19[4] = -1073741801;
        goto LABEL_25;
      }
      HIWORD(v19[144]) = 0;
      CDriverStoreCopy::SetRootDirectory(
        *(CDriverStoreCopy **)(v6 + 256),
        *(struct DXGADAPTER **)(v6 + 16),
        (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v19);
      v13 = v19[4];
      LOWORD(v19[15]) = 0;
      if ( v19[4] >= 0 )
      {
LABEL_15:
        CDriverStoreCopy::EnumDirectory(
          *(CDriverStoreCopy **)(v6 + 256),
          (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v19);
        while ( 1 )
        {
          v13 = v19[4];
          if ( v19[4] != -2147483642 )
            break;
          if ( !CDriverStoreCopy::ProcessNextDirectory(
                  *(CDriverStoreCopy **)(v6 + 256),
                  (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v19) )
          {
            v13 = v19[4];
            break;
          }
        }
        if ( v13 >= 0 )
          goto LABEL_25;
      }
      if ( v13 == -2147483642 )
        goto LABEL_25;
    }
    v14 = *(CDriverStoreCopy **)(v6 + 256);
    if ( v14 )
      CDriverStoreCopy::`scalar deleting destructor'(v14);
    *(_QWORD *)(v6 + 256) = 0LL;
    goto LABEL_25;
  }
  v4 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v4 + 24) = 4398LL;
  WdLogEvent5_WdError(v4);
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return v3;
}
