/*
 * XREFs of ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021FC80
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x1C003C7B8 (--_GCDriverStoreCopy@@QEAAPEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CA64 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C023B8FC (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C023C104 (-ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C023C800 (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 *     DpiGetDriverStorePath @ 0x1C029CCB0 (DpiGetDriverStorePath.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  int v15; // eax
  CDriverStoreCopy *v16; // rcx
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v19[24]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v20[32]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v21[148]; // [rsp+60h] [rbp-A0h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v20,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
    if ( !v7 )
      goto LABEL_26;
    v8 = *((_QWORD *)a1 + 5);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)(v8 + 56));
    memset(v21, 0, 0x248uLL);
    if ( *(_BYTE *)(v8 + 145) )
    {
      v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v12 + 24) = 4340LL;
      WdLogEvent5_WdWarning(v12);
      v21[4] = -1073741790;
LABEL_25:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v21, 0x248u);
      v5 = 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
      goto LABEL_26;
    }
    if ( !*(_BYTE *)(v7 + 24) )
    {
      v13 = *(_QWORD *)(v8 + 16);
      v18 = 520;
      v21[4] = DpiGetDriverStorePath(*(_QWORD *)(v13 + 192), &v21[15], &v18);
      if ( v21[4] < 0 )
        goto LABEL_25;
      v21[4] = 0;
      if ( *(_QWORD *)(v8 + 256) )
        goto LABEL_15;
      v14 = operator new[](0x658uLL, 0x4B677844u, PagedPool);
      if ( v14 )
      {
        v14[2] = -1LL;
        *v14 = 0LL;
        *((_DWORD *)v14 + 2) = 536;
        *((_DWORD *)v14 + 396) = 0;
        v14[200] = 0LL;
        v14[202] = 0LL;
        v14[200] = v14 + 199;
        v14[199] = v14 + 199;
        v14[202] = v14 + 201;
        v14[201] = v14 + 201;
      }
      else
      {
        v14 = 0LL;
      }
      *(_QWORD *)(v8 + 256) = v14;
      if ( !v14 )
      {
        v21[4] = -1073741801;
        goto LABEL_25;
      }
      HIWORD(v21[144]) = 0;
      CDriverStoreCopy::SetRootDirectory(
        *(CDriverStoreCopy **)(v8 + 256),
        *(struct DXGADAPTER **)(v8 + 16),
        (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v21);
      v15 = v21[4];
      LOWORD(v21[15]) = 0;
      if ( v21[4] >= 0 )
      {
LABEL_15:
        CDriverStoreCopy::EnumDirectory(
          *(CDriverStoreCopy **)(v8 + 256),
          (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v21);
        while ( 1 )
        {
          v15 = v21[4];
          if ( v21[4] != -2147483642 )
            break;
          if ( !CDriverStoreCopy::ProcessNextDirectory(
                  *(CDriverStoreCopy **)(v8 + 256),
                  (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v21) )
          {
            v15 = v21[4];
            break;
          }
        }
        if ( v15 >= 0 )
          goto LABEL_25;
      }
      if ( v15 == -2147483642 )
        goto LABEL_25;
    }
    v16 = *(CDriverStoreCopy **)(v8 + 256);
    if ( v16 )
      CDriverStoreCopy::`scalar deleting destructor'(v16);
    *(_QWORD *)(v8 + 256) = 0LL;
    goto LABEL_25;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v6 + 24) = 4328LL;
  WdLogEvent5_WdError(v6);
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return v5;
}
