/*
 * XREFs of ?VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0220070
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z @ 0x1C023BF80 (-GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z.c)
 *     ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C023C010 (-InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetNextHardLink(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi
  char v6; // bl
  __int64 v7; // rax
  CDriverStoreCopy *v8; // rcx
  _QWORD *v9; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-468h] BYREF
  _BYTE v12[24]; // [rsp+38h] [rbp-450h] BYREF
  _DWORD v13[264]; // [rsp+50h] [rbp-438h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v12,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = *((_QWORD *)a1 + 5);
  v6 = 0;
  if ( *(_BYTE *)(v5 + 157) )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v11, (struct _KTHREAD **)(v5 + 56));
    memset(v13, 0, 0x41CuLL);
    if ( *(_BYTE *)(v5 + 145) )
    {
      v13[0] = -1073741811;
LABEL_13:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v13, 0x41Cu);
      v6 = 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
      goto LABEL_14;
    }
    v8 = *(CDriverStoreCopy **)(v5 + 256);
    if ( !v8 )
    {
      v9 = operator new[](0x658uLL, 0x4B677844u, PagedPool);
      if ( v9 )
      {
        v9[2] = -1LL;
        *v9 = 0LL;
        *((_DWORD *)v9 + 2) = 536;
        *((_DWORD *)v9 + 396) = 0;
        v9[200] = 0LL;
        v9[202] = 0LL;
        v9[200] = v9 + 199;
        v9[199] = v9 + 199;
        v9[202] = v9 + 201;
        v9[201] = v9 + 201;
      }
      else
      {
        v9 = 0LL;
      }
      *(_QWORD *)(v5 + 256) = v9;
      if ( !v9 )
      {
        v13[0] = -1073741801;
        goto LABEL_13;
      }
      CDriverStoreCopy::InitializeSystem32Links((CDriverStoreCopy *)v9, *(struct DXGADAPTER **)(v5 + 16));
      v8 = *(CDriverStoreCopy **)(v5 + 256);
    }
    CDriverStoreCopy::GetNextHardLink(v8, (struct DXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN *)v13);
    goto LABEL_13;
  }
  v7 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v7 + 24) = 4401LL;
  WdLogEvent5_WdError(v7);
LABEL_14:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  return v6;
}
