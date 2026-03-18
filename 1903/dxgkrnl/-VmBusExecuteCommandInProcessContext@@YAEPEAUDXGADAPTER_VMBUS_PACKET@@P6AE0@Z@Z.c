/*
 * XREFs of ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C021ECD4
 * Callers:
 *     ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C0221760 (-VmBusProcessPacket@@YAXPEAX@Z.c)
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000A8BC (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0036E4C (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 */

char __fastcall VmBusExecuteCommandInProcessContext(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 (__fastcall *a2)(struct DXGADAPTER_VMBUS_PACKET *))
{
  _DWORD *v2; // rdi
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char v9; // r15
  BOOLEAN v10; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct _EX_RUNDOWN_REF *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v27; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v28[24]; // [rsp+28h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v2 = (_DWORD *)*((_QWORD *)a1 + 10);
  v4 = *((_QWORD *)a1 + 7);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v4 + 56), &ApcState);
  v9 = 0;
  v10 = 0;
  if ( v2[2] )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, (struct _KTHREAD **)v4);
    v11 = (v2[2] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v11 < *(_DWORD *)(v4 + 224) )
    {
      v12 = *(_QWORD *)(v4 + 208);
      v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
      if ( ((v2[2] >> 25) & 0x60) == (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60) && (v13 & 0x2000) == 0 && (v13 & 0x1F) != 0 )
      {
        v14 = v13 & 0x1F;
        if ( (_BYTE)v14 == 12 )
        {
          v16 = *(struct _EX_RUNDOWN_REF **)(v12 + 16LL * (unsigned int)v11);
          if ( !v16 )
            goto LABEL_13;
          v10 = ExAcquireRundownProtection(v16 + 22);
          if ( v10 )
            goto LABEL_13;
          v15 = WdLogNewEntry5_WdError(v18, v17, v19);
          *(_QWORD *)(v15 + 24) = (unsigned int)v2[2];
          *(_QWORD *)(v15 + 32) = 178LL;
        }
        else
        {
          v15 = WdLogNewEntry5_WdError(v14, (v2[2] >> 25) & 0x60, v12);
          *(_QWORD *)(v15 + 24) = 267LL;
        }
        WdLogEvent5_WdError(v15);
      }
    }
    v16 = 0LL;
LABEL_13:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
    goto LABEL_18;
  }
  if ( v2[3] )
    goto LABEL_24;
  v20 = (int)v2[4];
  if ( (unsigned int)v20 > 0x30 )
    goto LABEL_24;
  v7 = 0x1000000000104LL;
  if ( !_bittest64(&v7, v20) )
    goto LABEL_24;
  v16 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)a1 + 7);
LABEL_18:
  if ( !v16 )
  {
LABEL_24:
    v25 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v25 + 24) = (unsigned int)v2[2];
    WdLogEvent5_WdError(v25);
    goto LABEL_25;
  }
  v27 = 0LL;
  CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v27, (struct DXGPROCESS *)v16);
  if ( v27 )
  {
    *((_QWORD *)a1 + 6) = v16;
    v9 = a2(a1);
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v22, v21, v23);
    *(_QWORD *)(v24 + 24) = 212LL;
    WdLogEvent5_WdError(v24);
  }
  CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v27);
  if ( v10 )
    ExReleaseRundownProtection(v16 + 22);
LABEL_25:
  KeUnstackDetachProcess(&ApcState);
  return v9;
}
