/*
 * XREFs of ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ED1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0021980 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003651C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00E00B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     DxgkShareObjectsInternal @ 0x1C012B970 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C012BD74 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C01E9E9C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

char __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateNtSharedObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGPROCESS *Current; // rax
  char v3; // bl
  struct _KTHREAD **v4; // r15
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r14
  DXGSYNCOBJECT *v10; // rsi
  __int64 v11; // rcx
  char *Src; // r14
  __int64 v13; // r15
  unsigned int v14; // edx
  int v15; // r9d
  int EntryType; // eax
  int v17; // r12d
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rax
  struct _EX_RUNDOWN_REF *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  struct _EX_RUNDOWN_REF *v35; // [rsp+50h] [rbp-19h] BYREF
  __int64 v36[3]; // [rsp+58h] [rbp-11h] BYREF
  int v37; // [rsp+70h] [rbp+7h]
  __int128 v38; // [rsp+78h] [rbp+Fh]
  int v39; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v40; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v41; // [rsp+E8h] [rbp+7Fh] BYREF

  Current = DXGPROCESS::GetCurrent();
  v3 = 0;
  v39 = 0;
  v4 = (struct _KTHREAD **)Current;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v35, 0LL);
  v5 = operator new(0x20uLL, 0x4B677844u, PagedPool);
  v7 = (__int64)v5;
  if ( v5 )
  {
    *(_DWORD *)v5 = 0;
    v5[1] = 0LL;
    *((_DWORD *)v5 + 4) = 0;
    *((_DWORD *)v5 + 6) = 1;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v8 + 24) = 5008LL;
    WdLogEvent5_WdLowResource(v8);
    goto LABEL_53;
  }
  v9 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  if ( !v9 )
    goto LABEL_57;
  v41 = 0LL;
  v10 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36, v4);
  Src = (char *)(v9 + 24);
  v13 = (__int64)(v4 + 29);
  v14 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
  if ( v14 >= *(_DWORD *)(v13 + 16) )
    goto LABEL_50;
  v11 = 2LL * v14;
  v15 = *(_DWORD *)(*(_QWORD *)v13 + 16LL * v14 + 8);
  if ( ((*(_DWORD *)Src >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)v13 + 16LL * v14 + 8) & 0x60)
    || (v15 & 0x2000) != 0
    || (v15 & 0x1F) == 0 )
  {
    goto LABEL_50;
  }
  EntryType = HMGRTABLE::GetEntryType(v13, v14);
  v17 = EntryType;
  if ( EntryType != 4 )
  {
    if ( EntryType != 8 )
    {
      if ( EntryType != 11 )
        goto LABEL_50;
      v11 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
      if ( (unsigned int)v11 >= *(_DWORD *)(v13 + 16) )
        goto LABEL_50;
      v18 = (unsigned int)v11;
      v11 = *(unsigned int *)(*(_QWORD *)v13 + 16LL * (unsigned int)v11 + 8);
      if ( ((*(_DWORD *)Src >> 25) & 0x60) != (v11 & 0x60) || (v11 & 0x2000) != 0 || (v11 & 0x1F) == 0 )
        goto LABEL_50;
      v19 = 2 * v18;
      v11 &= 0x1Fu;
      if ( (_BYTE)v11 != (_BYTE)EntryType )
      {
        v20 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v20 + 24) = 316LL;
        WdLogEvent5_WdError(v20);
LABEL_50:
        v24 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v24 + 24) = *(unsigned int *)Src;
        goto LABEL_51;
      }
      v21 = *(_QWORD *)(*(_QWORD *)v13 + 8 * v19);
      if ( !v21 || (*(_DWORD *)(v21 + 72) & 2) == 0 )
        goto LABEL_50;
      v10 = *(DXGSYNCOBJECT **)(v21 + 32);
      goto LABEL_33;
    }
    v22 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
    if ( (unsigned int)v22 < *(_DWORD *)(v13 + 16) )
    {
      v11 = *(unsigned int *)(*(_QWORD *)v13 + 16 * v22 + 8);
      if ( ((*(_DWORD *)Src >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v13 + 16 * v22 + 8) & 0x60)
        && (v11 & 0x2000) == 0
        && (v11 & 0x1F) != 0 )
      {
        v11 &= 0x1Fu;
        if ( (_BYTE)v11 == 8 )
        {
          v10 = *(DXGSYNCOBJECT **)(*(_QWORD *)v13 + 16LL * (unsigned int)v22);
          if ( v10 && (*((_DWORD *)v10 + 43) & 2) != 0 )
          {
LABEL_33:
            DXGSYNCOBJECT::AddReference(v10);
            goto LABEL_43;
          }
        }
        else
        {
          v23 = WdLogNewEntry5_WdError(v11);
          *(_QWORD *)(v23 + 24) = 316LL;
          WdLogEvent5_WdError(v23);
        }
      }
    }
    v24 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v24 + 24) = *(unsigned int *)Src;
    *(_QWORD *)(v24 + 32) = 5031LL;
LABEL_51:
    WdLogEvent5_WdError(v24);
    goto LABEL_52;
  }
  LOBYTE(v25) = EvaluateCurrentState((int **)&g_Feature_645437753_58376215_FeatureDescriptorDetails);
  if ( v25 )
  {
    v26 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *(_DWORD *)(v13 + 16) )
    {
      v27 = *(_DWORD *)(*(_QWORD *)v13 + 16 * v26 + 8);
      if ( ((*(_DWORD *)Src >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v13 + 16 * v26 + 8) & 0x60)
        && (v27 & 0x2000) == 0
        && (v27 & 0x1F) != 0 )
      {
        v28 = v27 & 0x1F;
        if ( (_BYTE)v28 == 4 )
        {
          v30 = *(struct _EX_RUNDOWN_REF **)(*(_QWORD *)v13 + 16LL * (unsigned int)v26);
          goto LABEL_42;
        }
        v29 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v29 + 24) = 316LL;
        WdLogEvent5_WdError(v29);
      }
    }
    v30 = 0LL;
LABEL_42:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v40, v30);
    DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v35, (struct DXGRESOURCE **)&v40);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v40);
  }
LABEL_43:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
  if ( v17 == 4 )
  {
    LODWORD(v36[0]) = 48;
    v36[1] = 0LL;
    v37 = 512;
    v36[2] = 0LL;
    v38 = 0LL;
    v40 = 0LL;
    if ( (int)DxgkShareObjectsInternal(0LL, 0, 0LL, 1u, Src, (__int64)v36, 0x10000000u, &v41, (PVOID *)&v40) < 0 )
    {
      v32 = WdLogNewEntry5_WdError(v31);
      *(_QWORD *)(v32 + 24) = *(unsigned int *)Src;
      WdLogEvent5_WdError(v32);
      goto LABEL_53;
    }
    v10 = *(DXGSYNCOBJECT **)(v40 + 16);
  }
  *(_QWORD *)(v7 + 16) = v41;
  *(_DWORD *)v7 = v17;
  *(_QWORD *)(v7 + 8) = v10;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v36,
    *((struct _KTHREAD ***)a1 + 7));
  v39 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)a1 + 7) + 232LL), v7, 13, 0, 0);
  if ( !v39 )
  {
    v24 = WdLogNewEntry5_WdError(v33);
    *(_QWORD *)(v24 + 24) = 5101LL;
    goto LABEL_51;
  }
LABEL_52:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
LABEL_53:
  if ( !v39 && v7 )
    DXGSHAREDVMOBJECT::ReleaseReference((int *)v7);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v39, 4u);
  v3 = 1;
LABEL_57:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v35);
  return v3;
}
