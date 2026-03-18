/*
 * XREFs of ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021CB70
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C904 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00FB100 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkShareObjectsInternal @ 0x1C01398E0 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0139CE4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C02197CC (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateNtSharedObject(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2)
{
  struct _KTHREAD **Current; // r14
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rcx
  char *Src; // rsi
  __int64 v18; // r14
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // r9d
  int EntryType; // eax
  int v23; // r15d
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  DXGAUTOPUSHLOCK *v40; // rcx
  _BYTE v42[24]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v43[24]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v44[4]; // [rsp+80h] [rbp-9h] BYREF
  __int128 v45; // [rsp+A0h] [rbp+17h]
  int v46; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v47; // [rsp+100h] [rbp+77h] BYREF
  __int64 v48; // [rsp+108h] [rbp+7Fh] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, a2);
  v46 = 0;
  v4 = operator new[](0x20uLL, 0x4B677844u, PagedPool);
  v9 = (__int64)v4;
  if ( v4 )
  {
    *(_DWORD *)v4 = 0;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 4) = 0;
    *((_DWORD *)v4 + 6) = 1;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    *(_QWORD *)(v10 + 24) = 4943LL;
    WdLogEvent5_WdLowResource(v10);
    goto LABEL_44;
  }
  v13 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v14 = v13;
  if ( !v13 )
    return v13;
  v48 = 0LL;
  v15 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v42, Current);
  Src = (char *)(v14 + 24);
  v18 = (__int64)(Current + 26);
  v19 = *(unsigned int *)Src;
  v20 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 16) )
    goto LABEL_41;
  v19 = ((unsigned int)v19 >> 25) & 0x60;
  v16 = 2LL * (unsigned int)v20;
  v21 = *(_DWORD *)(*(_QWORD *)v18 + 16LL * (unsigned int)v20 + 8);
  if ( (_BYTE)v19 != (*(_BYTE *)(*(_QWORD *)v18 + 16LL * (unsigned int)v20 + 8) & 0x60)
    || (v21 & 0x2000) != 0
    || (v21 & 0x1F) == 0 )
  {
    goto LABEL_41;
  }
  EntryType = HMGRTABLE::GetEntryType(v18, v20);
  v23 = EntryType;
  if ( EntryType != 4 )
  {
    if ( EntryType != 8 )
    {
      if ( EntryType != 11 )
        goto LABEL_41;
      v20 = *(unsigned int *)Src;
      v16 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
      if ( (unsigned int)v16 >= *(_DWORD *)(v18 + 16) )
        goto LABEL_41;
      v19 = *(_QWORD *)v18;
      v24 = (unsigned int)v16;
      v20 = ((unsigned int)v20 >> 25) & 0x60;
      v16 = *(unsigned int *)(*(_QWORD *)v18 + 16LL * (unsigned int)v16 + 8);
      if ( (_BYTE)v20 != (v16 & 0x60) || (v16 & 0x2000) != 0 || (v16 & 0x1F) == 0 )
        goto LABEL_41;
      v25 = 2 * v24;
      v16 &= 0x1Fu;
      if ( (_BYTE)v16 != (_BYTE)EntryType )
      {
        v26 = WdLogNewEntry5_WdError(v16, v20, v19);
        *(_QWORD *)(v26 + 24) = 267LL;
        WdLogEvent5_WdError(v26);
LABEL_41:
        v31 = WdLogNewEntry5_WdError(v16, v20, v19);
        *(_QWORD *)(v31 + 24) = *(unsigned int *)Src;
        goto LABEL_42;
      }
      v27 = *(_QWORD *)(v19 + 8 * v25);
      if ( !v27 || (*(_DWORD *)(v27 + 72) & 2) == 0 )
        goto LABEL_41;
      v15 = *(_QWORD *)(v27 + 32);
      goto LABEL_33;
    }
    v28 = *(unsigned int *)Src;
    v29 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *(_DWORD *)(v18 + 16) )
    {
      v19 = *(_QWORD *)v18;
      v28 = ((unsigned int)v28 >> 25) & 0x60;
      v16 = *(unsigned int *)(*(_QWORD *)v18 + 16 * v29 + 8);
      if ( (_BYTE)v28 == (*(_BYTE *)(*(_QWORD *)v18 + 16 * v29 + 8) & 0x60) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
      {
        v16 &= 0x1Fu;
        if ( (_BYTE)v16 == 8 )
        {
          v15 = *(_QWORD *)(v19 + 16LL * (unsigned int)v29);
          if ( v15 && (*(_DWORD *)(v15 + 196) & 2) != 0 )
          {
LABEL_33:
            _InterlockedIncrement((volatile signed __int32 *)(v15 + 24));
            goto LABEL_34;
          }
        }
        else
        {
          v30 = WdLogNewEntry5_WdError(v16, v28, v19);
          *(_QWORD *)(v30 + 24) = 267LL;
          WdLogEvent5_WdError(v30);
        }
      }
    }
    v31 = WdLogNewEntry5_WdError(v16, v28, v19);
    *(_QWORD *)(v31 + 24) = *(unsigned int *)Src;
    *(_QWORD *)(v31 + 32) = 4966LL;
LABEL_42:
    WdLogEvent5_WdError(v31);
    v40 = (DXGAUTOPUSHLOCK *)v42;
    goto LABEL_43;
  }
LABEL_34:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
  if ( v23 == 4 )
  {
    v44[0] = 48LL;
    v44[3] = 512LL;
    v44[1] = 0LL;
    v44[2] = 0LL;
    v45 = 0LL;
    v47 = 0LL;
    if ( (int)DxgkShareObjectsInternal(0LL, 0, 0LL, 1u, Src, (__int64)v44, 0x10000000u, (HANDLE *)&v48, (PVOID *)&v47) < 0 )
    {
      v35 = WdLogNewEntry5_WdError(v33, v32, v34);
      *(_QWORD *)(v35 + 24) = *(unsigned int *)Src;
      WdLogEvent5_WdError(v35);
      goto LABEL_44;
    }
    v15 = *(_QWORD *)(v47 + 16);
  }
  *(_QWORD *)(v9 + 16) = v48;
  *(_DWORD *)v9 = v23;
  *(_QWORD *)(v9 + 8) = v15;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v43,
    *((struct _KTHREAD ***)a1 + 7));
  v46 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)a1 + 7) + 208LL), v9, 13, 0, 0);
  if ( !v46 )
  {
    v39 = WdLogNewEntry5_WdError(v37, v36, v38);
    *(_QWORD *)(v39 + 24) = 5031LL;
    WdLogEvent5_WdError(v39);
  }
  v40 = (DXGAUTOPUSHLOCK *)v43;
LABEL_43:
  DXGAUTOPUSHLOCK::Release(v40);
LABEL_44:
  if ( !v46 && v9 )
    DXGSHAREDVMOBJECT::ReleaseReference((int *)v9, v11, v12);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v46, 4u);
  LOBYTE(v13) = 1;
  return v13;
}
