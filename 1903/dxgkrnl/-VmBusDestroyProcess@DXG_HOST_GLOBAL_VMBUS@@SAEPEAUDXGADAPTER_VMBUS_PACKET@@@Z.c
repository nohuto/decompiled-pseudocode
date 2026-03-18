/*
 * XREFs of ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021E7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000A8BC (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0036E4C (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYPROCESS@@@@YAPEAUDXGKVMB_COMMAND_DESTROYPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CA1C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYPROCESS@@@@YAPEAUDXGKVMB_COMMAND_DESTROYPROCESS@@P.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F5920 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  unsigned int v5; // r15d
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ecx
  int v10; // r10d
  __int64 v11; // rcx
  __int64 v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v21[24]; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYPROCESS>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return v2;
  v4 = *((_QWORD *)a1 + 7);
  v19 = -1073741823;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v4 + 56), &ApcState);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v21, (struct _KTHREAD **)v4);
  v5 = *(_DWORD *)(v3 + 8);
  v6 = *(_DWORD *)(v4 + 224);
  v7 = (v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 < v6 )
  {
    v8 = *(_QWORD *)(v4 + 208);
    v9 = *(_DWORD *)(16LL * (unsigned int)v7 + v8 + 8);
    v10 = (v9 >> 5) & 3;
    if ( v5 >> 30 == v10 && (v9 & 0x2000) == 0 && (v9 & 0x1F) != 0 )
    {
      v11 = v9 & 0x1F;
      if ( (_BYTE)v11 == 12 )
      {
        v13 = *(struct _EX_RUNDOWN_REF **)(v8 + 16LL * (unsigned int)v7);
        if ( v13
          && (unsigned int)v7 < v6
          && v5 >> 30 == v10
          && (*(_DWORD *)(16LL * (unsigned int)v7 + v8 + 8) & 0x1F) != 0 )
        {
          *(_DWORD *)(16LL * ((v5 >> 6) & 0xFFFFFF) + v8 + 8) |= 0x2000u;
        }
        goto LABEL_9;
      }
      v12 = WdLogNewEntry5_WdError(v11, v7, v8);
      *(_QWORD *)(v12 + 24) = 267LL;
      WdLogEvent5_WdError(v12);
    }
  }
  v13 = 0LL;
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  if ( v13 )
  {
    ExWaitForRundownProtectionRelease(v13 + 22);
    v20 = 0LL;
    CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v20, (struct DXGPROCESS *)v13);
    if ( v20 )
    {
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)v13);
      v19 = 0;
    }
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v20);
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v15, v14, v16);
    *(_QWORD *)(v17 + 24) = *(unsigned int *)(v3 + 8);
    WdLogEvent5_WdError(v17);
  }
  KeUnstackDetachProcess(&ApcState);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v19, 4u);
  LOBYTE(v2) = 1;
  return v2;
}
