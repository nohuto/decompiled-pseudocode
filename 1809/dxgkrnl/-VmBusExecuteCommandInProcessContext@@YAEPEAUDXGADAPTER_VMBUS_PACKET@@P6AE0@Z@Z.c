/*
 * XREFs of ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C01EF2EC
 * Callers:
 *     ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C01F1A80 (-VmBusProcessPacket@@YAXPEAX@Z.c)
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C00118CC (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0031600 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 */

char __fastcall VmBusExecuteCommandInProcessContext(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 (__fastcall *a2)(struct DXGADAPTER_VMBUS_PACKET *))
{
  __int64 v2; // rbx
  _DWORD *v4; // rdi
  __int64 v6; // rcx
  char v7; // r14
  BOOLEAN v8; // bp
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct _EX_RUNDOWN_REF *v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v22[24]; // [rsp+28h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v2 = *((_QWORD *)a1 + 7);
  v4 = (_DWORD *)*((_QWORD *)a1 + 10);
  KeStackAttachProcess(*(PRKPROCESS *)(v2 + 56), &ApcState);
  v7 = 0;
  v8 = 0;
  if ( v4[2] )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v22, (struct _KTHREAD **)v2);
    v9 = (v4[2] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v9 < *(_DWORD *)(v2 + 248) )
    {
      v10 = *(_QWORD *)(v2 + 232);
      v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
      if ( ((v4[2] >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60) && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
      {
        v12 = v11 & 0x1F;
        if ( (_BYTE)v12 == 12 )
        {
          v14 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * (unsigned int)v9);
          if ( !v14 )
            goto LABEL_13;
          v8 = ExAcquireRundownProtection(v14 + 25);
          if ( v8 )
            goto LABEL_13;
          v13 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v13 + 24) = (unsigned int)v4[2];
          *(_QWORD *)(v13 + 32) = 178LL;
        }
        else
        {
          v13 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v13 + 24) = 316LL;
        }
        WdLogEvent5_WdError(v13);
      }
    }
    v14 = 0LL;
LABEL_13:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
    goto LABEL_18;
  }
  if ( v4[3] )
    goto LABEL_24;
  v16 = (int)v4[4];
  if ( (unsigned int)v16 > 0x30 )
    goto LABEL_24;
  v6 = 0x1000000000104LL;
  if ( !_bittest64(&v6, v16) )
    goto LABEL_24;
  v14 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)a1 + 7);
LABEL_18:
  if ( !v14 )
  {
LABEL_24:
    v19 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v19 + 24) = (unsigned int)v4[2];
    WdLogEvent5_WdError(v19);
    goto LABEL_25;
  }
  v21 = 0LL;
  CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v21, (struct DXGPROCESS *)v14);
  if ( v21 )
  {
    *((_QWORD *)a1 + 6) = v14;
    v7 = a2(a1);
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v18 + 24) = 212LL;
    WdLogEvent5_WdError(v18);
  }
  CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v21);
  if ( v8 )
    ExReleaseRundownProtection(v14 + 25);
LABEL_25:
  KeUnstackDetachProcess(&ApcState);
  return v7;
}
