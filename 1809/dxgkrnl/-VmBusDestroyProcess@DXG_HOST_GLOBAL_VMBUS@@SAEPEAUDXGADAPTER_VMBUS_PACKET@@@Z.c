/*
 * XREFs of ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EEDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C00118CC (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0031600 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYPROCESS@@@@YAPEAUDXGKVMB_COMMAND_DESTROYPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0036634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYPROCESS@@@@YAPEAUDXGKVMB_COMMAND_DESTROYPROCESS@@P.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // ebp
  unsigned int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // edx
  int v10; // r11d
  __int64 v11; // rax
  struct _EX_RUNDOWN_REF *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v16; // [rsp+20h] [rbp-78h] BYREF
  __int64 v17; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v18[24]; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-50h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYPROCESS>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return v2;
  v4 = *((_QWORD *)a1 + 7);
  v16 = -1073741823;
  KeStackAttachProcess(*(PRKPROCESS *)(v4 + 56), &ApcState);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v18, (struct _KTHREAD **)v4);
  v5 = *(_DWORD *)(v3 + 8);
  v6 = *(_DWORD *)(v4 + 248);
  v7 = (v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 < v6 )
  {
    v8 = *(_QWORD *)(v4 + 232);
    v9 = *(_DWORD *)(16LL * (unsigned int)v7 + v8 + 8);
    v10 = (v9 >> 5) & 3;
    if ( v5 >> 30 == v10 && (v9 & 0x2000) == 0 && (v9 & 0x1F) != 0 )
    {
      if ( (v9 & 0x1F) == 0xC )
      {
        v12 = *(struct _EX_RUNDOWN_REF **)(v8 + 16LL * (unsigned int)v7);
        if ( v12 && (unsigned int)v7 < v6 && v5 >> 30 == v10 && (v9 & 0x2000) == 0 && (v9 & 0x1F) != 0 )
          *(_DWORD *)(16LL * ((v5 >> 6) & 0xFFFFFF) + v8 + 8) |= 0x2000u;
        goto LABEL_9;
      }
      v11 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v11 + 24) = 316LL;
      WdLogEvent5_WdError(v11);
    }
  }
  v12 = 0LL;
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  if ( v12 )
  {
    ExWaitForRundownProtectionRelease(v12 + 25);
    v17 = 0LL;
    CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v17, (struct DXGPROCESS *)v12);
    if ( v17 )
    {
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)v12);
      v16 = 0;
    }
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v17);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 24) = *(unsigned int *)(v3 + 8);
    WdLogEvent5_WdError(v14);
  }
  KeUnstackDetachProcess(&ApcState);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v16, 4u);
  LOBYTE(v2) = 1;
  return v2;
}
