/*
 * XREFs of ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C02264D4
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0102D10 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C02492C8 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C026A788 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027C720 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BC08 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0227990 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z @ 0x1C0229F30 (-VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E230 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0269574 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        __int64 a3,
        const unsigned int *a4,
        struct _D3DDDICB_SIGNALFLAGS a5,
        UINT a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 a9,
        HANDLE *a10,
        bool a11,
        bool a12,
        struct DXGDEVICE *a13)
{
  __int64 v13; // r12
  const unsigned int *v15; // r15
  __int64 v16; // rax
  struct _D3DDDICB_SIGNALFLAGS *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _D3DDDICB_SIGNALFLAGS *v21; // rsi
  __int64 v22; // rax
  char v24; // r12
  ULONG64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned int v28; // r9d
  unsigned int v29; // r11d
  __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  NTSTATUS v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  void *v38; // rax
  _DWORD *v39; // r11
  struct _MDL *v40; // r9
  __int64 v41; // rax
  __int64 i; // rdx
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // r10
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  unsigned int j; // r15d
  __int64 v53; // rdx
  unsigned int v54; // r9d
  unsigned int v55; // r11d
  DXGSYNCOBJECT *v56; // rbx
  __int64 v57; // rbx
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rbx
  unsigned __int64 *v61; // rdx
  PVOID Object; // [rsp+50h] [rbp-88h] BYREF
  int v63; // [rsp+58h] [rbp-80h]
  unsigned int v64; // [rsp+5Ch] [rbp-7Ch]
  unsigned __int64 *v65; // [rsp+60h] [rbp-78h]
  PVOID v66; // [rsp+68h] [rbp-70h]
  _BYTE v67[24]; // [rsp+70h] [rbp-68h] BYREF
  struct _D3DDDICB_SIGNALFLAGS *v68; // [rsp+88h] [rbp-50h]
  __int64 v69; // [rsp+90h] [rbp-48h]
  unsigned int v71; // [rsp+F0h] [rbp+18h]

  v71 = a3;
  v13 = (unsigned int)a3;
  if ( (unsigned int)a3 >= 0x4000 || a6 >= 0x4000 )
  {
    v16 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v16 + 24) = 5776LL;
    goto LABEL_85;
  }
  if ( a12 )
  {
    if ( !a13 || a6 || (v15 = a7) != 0LL || (*(_BYTE *)&a5.0 & 2) != 0 )
    {
      v16 = WdLogNewEntry5_WdError(this, a2, a3);
      *(_QWORD *)(v16 + 24) = 5784LL;
LABEL_85:
      WdLogEvent5_WdError(v16);
      return 3221225485LL;
    }
  }
  else
  {
    v15 = a7;
  }
  v63 = a8 != 0LL ? 8 * a3 : 0;
  v64 = v63 + 4 * (a3 + a6 + 14);
  v17 = (struct _D3DDDICB_SIGNALFLAGS *)operator new(v64, 0x4B677844u, 1, (POOL_TYPE)512);
  v21 = v17;
  v68 = v17;
  if ( !v17 )
  {
    v22 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v22 + 24) = 5796LL;
    WdLogEvent5_WdError(v22);
    return 3221225495LL;
  }
  *(_QWORD *)&v17->0 = 0LL;
  *(_QWORD *)&v17[2].0 = 0LL;
  v17[4].Value = 26;
  v17[2].Value = DXGPROCESS::GetHostProcess(a2);
  v21[8].Value = a6;
  v21[7].0 = a5.0;
  if ( a12 )
    v21[12].0 = *(struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 *)((char *)a13 + 336);
  v21[6].Value = v13;
  *(_QWORD *)&v21[10].0 = a9;
  Object = &v21[v13 + 14];
  v65 = (unsigned __int64 *)((char *)Object + 4 * a6);
  v66 = 0LL;
  v69 = 0LL;
  v24 = 0;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v67, (struct _KTHREAD **)a2);
  if ( !a12 )
  {
    v27 = (*v15 >> 6) & 0xFFFFFF;
    v28 = *v15 >> 30;
    v29 = *((_DWORD *)a2 + 56);
    if ( (unsigned int)v27 >= v29 )
      goto LABEL_27;
    v26 = (unsigned int)v27;
    v30 = *((_QWORD *)a2 + 26);
    v25 = *(unsigned int *)(v30 + 16LL * (unsigned int)v27 + 8);
    if ( v28 != ((*(_DWORD *)(v30 + 16LL * (unsigned int)v27 + 8) >> 5) & 3)
      || (v25 & 0x2000) != 0
      || (v25 & 0x1F) == 0
      || (v26 = 2LL * (unsigned int)v27, v25 &= 0x1Fu, (_BYTE)v25 != 7)
      || !*(_QWORD *)(v30 + 16LL * (unsigned int)v27) )
    {
      if ( (unsigned int)v27 >= v29 )
        goto LABEL_27;
      v26 = (unsigned int)v27;
      v27 = *((_QWORD *)a2 + 26);
      v25 = *(unsigned int *)(v27 + 16LL * (unsigned int)v26 + 8);
      if ( v28 != ((*(_DWORD *)(v27 + 16LL * (unsigned int)v26 + 8) >> 5) & 3)
        || (v25 & 0x2000) != 0
        || (v25 & 0x1F) == 0 )
      {
        goto LABEL_27;
      }
      v26 *= 2LL;
      v25 &= 0x1Fu;
      if ( (_BYTE)v25 != 15 )
      {
        v31 = WdLogNewEntry5_WdError(v25, v27, v26);
        *(_QWORD *)(v31 + 24) = 267LL;
        WdLogEvent5_WdError(v31);
        goto LABEL_27;
      }
      if ( !*(_QWORD *)(v27 + 8 * v26) )
      {
LABEL_27:
        v32 = WdLogNewEntry5_WdError(v25, v27, v26);
        v33 = *v15;
LABEL_28:
        *(_QWORD *)(v32 + 24) = v33;
        WdLogEvent5_WdError(v32);
        v34 = -1073741811;
        goto LABEL_29;
      }
      v24 = 1;
    }
  }
  v39 = Object;
  if ( !v24 )
  {
    for ( i = 0LL; (unsigned int)i < a6; i = (unsigned int)(i + 1) )
    {
      v43 = (unsigned int)i;
      v26 = v15[(unsigned int)i];
      v44 = (v15[(unsigned int)i] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v44 >= *((_DWORD *)a2 + 56) )
        goto LABEL_51;
      v45 = *((_QWORD *)a2 + 26);
      v25 = *(unsigned int *)(v45 + 16 * v44 + 8);
      v26 = ((unsigned int)v26 >> 25) & 0x60;
      if ( (_BYTE)v26 != (*(_BYTE *)(v45 + 16 * v44 + 8) & 0x60) || (v25 & 0x2000) != 0 || (v25 & 0x1F) == 0 )
        goto LABEL_51;
      v25 &= 0x1Fu;
      if ( (_BYTE)v25 != 7 )
      {
        v47 = WdLogNewEntry5_WdError(v25, i, v26);
        *(_QWORD *)(v47 + 24) = 267LL;
        WdLogEvent5_WdError(v47);
LABEL_51:
        v32 = WdLogNewEntry5_WdError(v25, i, v26);
        v33 = v15[v43];
        goto LABEL_28;
      }
      v46 = *(_QWORD *)(v45 + 16LL * (unsigned int)v44);
      if ( !v46 )
        goto LABEL_51;
      v39[(unsigned int)i] = *(_DWORD *)(v46 + 28);
    }
    if ( (*(_BYTE *)&a5.0 & 2) != 0 )
    {
      v34 = ObReferenceObjectByHandle(*a10, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v66 = Object;
      if ( v34 < 0 )
      {
        v51 = WdLogNewEntry5_WdWarning(v49, v48, v50);
        *(_QWORD *)(v51 + 24) = *a10;
        WdLogEvent5_WdWarning(v51);
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v67);
        goto LABEL_35;
      }
      *(_QWORD *)&v21[12].0 = Object;
    }
    else
    {
      for ( j = 0; j < v71; ++j )
      {
        v53 = (a4[j] >> 6) & 0xFFFFFF;
        v54 = a4[j] >> 30;
        v55 = *((_DWORD *)a2 + 56);
        if ( (unsigned int)v53 < v55
          && (v26 = *((_QWORD *)a2 + 26),
              v25 = *(unsigned int *)(v26 + 16LL * (unsigned int)v53 + 8),
              v54 == ((*(_DWORD *)(v26 + 16LL * (unsigned int)v53 + 8) >> 5) & 3))
          && (v25 & 0x2000) == 0
          && (v25 & 0x1F) != 0
          && (v25 &= 0x1Fu, (_BYTE)v25 == 8) )
        {
          v56 = *(DXGSYNCOBJECT **)(v26 + 16LL * (unsigned int)v53);
        }
        else
        {
          v56 = 0LL;
        }
        if ( v56 )
        {
          v21[j + 14].Value = DXGSYNCOBJECT::GetHostHandle(v56, a4[j], v26);
        }
        else
        {
          if ( (unsigned int)v53 >= v55 )
            goto LABEL_73;
          v57 = (unsigned int)v53;
          v53 = *((_QWORD *)a2 + 26);
          v25 = *(unsigned int *)(v53 + 16LL * (unsigned int)v57 + 8);
          if ( v54 != ((*(_DWORD *)(v53 + 16LL * (unsigned int)v57 + 8) >> 5) & 3)
            || (v25 & 0x2000) != 0
            || (v25 & 0x1F) == 0 )
          {
            goto LABEL_73;
          }
          v58 = 2 * v57;
          v25 &= 0x1Fu;
          if ( (_BYTE)v25 != 11 )
          {
            v59 = WdLogNewEntry5_WdError(v25, v53, v26);
            *(_QWORD *)(v59 + 24) = 267LL;
            WdLogEvent5_WdError(v59);
LABEL_73:
            v32 = WdLogNewEntry5_WdError(v25, v53, v26);
            v33 = a4[j];
            goto LABEL_28;
          }
          v60 = *(_QWORD *)(v53 + 8 * v58);
          if ( !v60 )
            goto LABEL_73;
          v21[j + 14] = *(struct _D3DDDICB_SIGNALFLAGS *)(v60 + 44);
          v56 = *(DXGSYNCOBJECT **)(v60 + 32);
        }
        if ( v63 && *((_DWORD *)v56 + 48) == 5 )
        {
          if ( a11 )
          {
            v61 = &a8[j];
            v25 = MmUserProbeAddress;
            if ( (unsigned __int64)v61 >= MmUserProbeAddress )
              v61 = (unsigned __int64 *)MmUserProbeAddress;
            v65[j] = *v61;
          }
          else
          {
            v25 = (ULONG64)v65;
            v65[j] = a8[j];
          }
        }
      }
    }
LABEL_34:
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v67);
    v34 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)v21, v64, v40);
LABEL_35:
    v38 = v66;
    goto LABEL_36;
  }
  v34 = VmBusSubmitSignalToHwQueueHelper(
          a2,
          a11,
          v71,
          a6,
          v15,
          a4,
          a8,
          (unsigned int *)Object,
          (unsigned int *)&v21[14],
          v65);
  if ( v34 >= 0 )
    goto LABEL_34;
LABEL_29:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v67);
  v38 = 0LL;
LABEL_36:
  if ( v34 < 0 )
  {
    if ( v38 )
      ObfDereferenceObject(v38);
    v41 = WdLogNewEntry5_WdError(v36, v35, v37);
    *(_QWORD *)(v41 + 24) = v34;
    WdLogEvent5_WdError(v41);
  }
  operator delete[](v21);
  return (unsigned int)v34;
}
