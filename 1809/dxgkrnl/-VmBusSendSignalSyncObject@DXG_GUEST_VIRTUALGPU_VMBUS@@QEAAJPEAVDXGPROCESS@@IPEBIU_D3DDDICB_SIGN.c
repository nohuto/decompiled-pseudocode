/*
 * XREFs of ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C01F64A4
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0103B30 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0214F1C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C0235EBC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0246E9C (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z @ 0x1C01F9DD0 (-VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0234C88 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
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
  __int64 v18; // rcx
  struct _D3DDDICB_SIGNALFLAGS *v19; // rsi
  __int64 v20; // rax
  char v22; // r12
  PVOID v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // edx
  unsigned int v26; // r9d
  unsigned int v27; // r11d
  __int64 v28; // r10
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  NTSTATUS v34; // ebx
  __int64 v35; // rcx
  void *v36; // rax
  struct _MDL *v37; // r9
  __int64 v38; // rax
  unsigned int i; // ebx
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  unsigned int j; // r15d
  __int64 v49; // rdx
  unsigned int v50; // r10d
  unsigned int v51; // r11d
  unsigned int v52; // ecx
  DXGSYNCOBJECT *v53; // rbx
  unsigned int v54; // ecx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned __int64 *v59; // rdx
  PVOID Object; // [rsp+50h] [rbp-88h] BYREF
  int v61; // [rsp+58h] [rbp-80h]
  unsigned int v62; // [rsp+5Ch] [rbp-7Ch]
  unsigned __int64 *v63; // [rsp+60h] [rbp-78h]
  PVOID v64; // [rsp+68h] [rbp-70h]
  _BYTE v65[24]; // [rsp+70h] [rbp-68h] BYREF
  struct _D3DDDICB_SIGNALFLAGS *v66; // [rsp+88h] [rbp-50h]
  __int64 v67; // [rsp+90h] [rbp-48h]

  v13 = a3;
  if ( a3 >= 0x4000 || a6 >= 0x4000 )
  {
    v16 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v16 + 24) = 5846LL;
    goto LABEL_88;
  }
  if ( a12 )
  {
    if ( !a13 || a6 || (v15 = a7) != 0LL || (*(_BYTE *)&a5.0 & 2) != 0 )
    {
      v16 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v16 + 24) = 5854LL;
LABEL_88:
      WdLogEvent5_WdError(v16);
      return 3221225485LL;
    }
  }
  else
  {
    v15 = a7;
  }
  v61 = a8 != 0LL ? 8 * a3 : 0;
  v62 = v61 + 4 * (a3 + a6 + 14);
  v17 = (struct _D3DDDICB_SIGNALFLAGS *)operator new(v62, 0x4B677844u, 1, (POOL_TYPE)512);
  v19 = v17;
  v66 = v17;
  if ( !v17 )
  {
    v20 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v20 + 24) = 5866LL;
    WdLogEvent5_WdError(v20);
    return 3221225495LL;
  }
  *(_QWORD *)&v17->0 = 0LL;
  *(_QWORD *)&v17[2].0 = 0LL;
  v17[4].Value = 26;
  v17[2].Value = DXGPROCESS::GetHostProcess(a2);
  v19[8].Value = a6;
  v19[7].0 = a5.0;
  if ( a12 )
    v19[12].0 = *(struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 *)((char *)a13 + 336);
  v19[6].Value = v13;
  *(_QWORD *)&v19[10].0 = a9;
  Object = &v19[v13 + 14];
  v63 = (unsigned __int64 *)((char *)Object + 4 * a6);
  v64 = 0LL;
  v67 = 0LL;
  v22 = 0;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v65, (struct _KTHREAD **)a2);
  if ( !a12 )
  {
    v25 = (*v15 >> 6) & 0xFFFFFF;
    v26 = *v15 >> 30;
    v27 = *((_DWORD *)a2 + 62);
    if ( v25 >= v27 )
    {
LABEL_27:
      v32 = WdLogNewEntry5_WdError(v23);
      v33 = *v15;
      goto LABEL_28;
    }
    v28 = *((_QWORD *)a2 + 29);
    v23 = (PVOID)*(unsigned int *)(v28 + 16LL * v25 + 8);
    if ( v26 != ((*(_DWORD *)(v28 + 16LL * v25 + 8) >> 5) & 3)
      || ((unsigned __int16)v23 & 0x2000) != 0
      || ((unsigned __int8)v23 & 0x1F) == 0
      || (LOBYTE(v24) = 2 * (*v15 >> 6), v23 = (PVOID)((unsigned __int8)v23 & 0x1F), (_BYTE)v23 != 7)
      || !*(_QWORD *)(v28 + 16LL * v25) )
    {
      if ( v25 >= v27 )
        goto LABEL_27;
      v29 = v25;
      v30 = *((_QWORD *)a2 + 29);
      v23 = (PVOID)*(unsigned int *)(v30 + 16LL * (unsigned int)v29 + 8);
      if ( v26 != ((*(_DWORD *)(v30 + 16LL * (unsigned int)v29 + 8) >> 5) & 3)
        || ((unsigned __int16)v23 & 0x2000) != 0
        || ((unsigned __int8)v23 & 0x1F) == 0 )
      {
        goto LABEL_27;
      }
      v24 = 2 * v29;
      v23 = (PVOID)((unsigned __int8)v23 & 0x1F);
      if ( (_BYTE)v23 != 15 )
      {
        v31 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v31 + 24) = 316LL;
        WdLogEvent5_WdError(v31);
        goto LABEL_27;
      }
      if ( !*(_QWORD *)(v30 + 8 * v24) )
        goto LABEL_27;
      v22 = 1;
    }
  }
  if ( v22 )
  {
    v34 = VmBusSubmitSignalToHwQueueHelper(
            a2,
            a11,
            a3,
            a6,
            v15,
            a4,
            a8,
            (unsigned int *)Object,
            (unsigned int *)&v19[14],
            v63);
    if ( v34 < 0 )
      goto LABEL_29;
    goto LABEL_34;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= a6 )
    {
      if ( (*(_BYTE *)&a5.0 & 2) != 0 )
      {
        v34 = ObReferenceObjectByHandle(*a10, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        v64 = Object;
        if ( v34 < 0 )
        {
          v47 = WdLogNewEntry5_WdWarning(v45, v44, v46);
          *(_QWORD *)(v47 + 24) = *a10;
          WdLogEvent5_WdWarning(v47);
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v65);
          goto LABEL_35;
        }
        *(_QWORD *)&v19[12].0 = Object;
LABEL_34:
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v65);
        v34 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                this,
                (struct DXGKVMB_COMMAND_BASE *)v19,
                v62,
                v37);
LABEL_35:
        v36 = v64;
        goto LABEL_36;
      }
      for ( j = 0; ; ++j )
      {
        if ( j >= a3 )
          goto LABEL_34;
        v49 = (a4[j] >> 6) & 0xFFFFFF;
        v50 = a4[j] >> 30;
        v51 = *((_DWORD *)a2 + 62);
        if ( (unsigned int)v49 < v51
          && (v24 = *((_QWORD *)a2 + 29), v52 = *(_DWORD *)(v24 + 16LL * (unsigned int)v49 + 8), v50 == ((v52 >> 5) & 3))
          && (v52 & 0x2000) == 0
          && (v52 & 0x1F) == 8 )
        {
          v53 = *(DXGSYNCOBJECT **)(v24 + 16LL * (unsigned int)v49);
        }
        else
        {
          v53 = 0LL;
        }
        if ( v53 )
        {
          v19[j + 14].Value = DXGSYNCOBJECT::GetHostHandle(v53, a4[j], v24);
          goto LABEL_78;
        }
        if ( (unsigned int)v49 >= v51 )
          goto LABEL_75;
        v24 = *((_QWORD *)a2 + 29);
        v54 = *(_DWORD *)(v24 + 16 * v49 + 8);
        if ( v50 != ((v54 >> 5) & 3) || (v54 & 0x2000) != 0 || (v54 & 0x1F) == 0 )
          goto LABEL_75;
        v55 = 2 * v49;
        v56 = v54 & 0x1F;
        if ( (_BYTE)v56 != 11 )
          break;
        v58 = *(_QWORD *)(v24 + 8 * v55);
LABEL_76:
        if ( !v58 )
        {
          v32 = WdLogNewEntry5_WdError(0LL);
          v33 = a4[j];
          goto LABEL_28;
        }
        v19[j + 14] = *(struct _D3DDDICB_SIGNALFLAGS *)(v58 + 44);
        v53 = *(DXGSYNCOBJECT **)(v58 + 32);
LABEL_78:
        if ( v61 && *((_DWORD *)v53 + 42) == 5 )
        {
          if ( a11 )
          {
            v59 = &a8[j];
            if ( (unsigned __int64)v59 >= MmUserProbeAddress )
              v59 = (unsigned __int64 *)MmUserProbeAddress;
            v63[j] = *v59;
          }
          else
          {
            v63[j] = a8[j];
          }
        }
      }
      v57 = WdLogNewEntry5_WdError(v56);
      *(_QWORD *)(v57 + 24) = 316LL;
      WdLogEvent5_WdError(v57);
LABEL_75:
      v58 = 0LL;
      goto LABEL_76;
    }
    v40 = (v15[i] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v40 >= *((_DWORD *)a2 + 62) )
      goto LABEL_49;
    LOBYTE(v24) = v15[i] >> 6;
    v41 = *((_QWORD *)a2 + 29);
    v23 = (PVOID)*(unsigned int *)(v41 + 16 * v40 + 8);
    if ( ((v15[i] >> 25) & 0x60) != (*(_BYTE *)(v41 + 16 * v40 + 8) & 0x60)
      || ((unsigned __int16)v23 & 0x2000) != 0
      || ((unsigned __int8)v23 & 0x1F) == 0 )
    {
      goto LABEL_49;
    }
    LOBYTE(v24) = 2 * (v15[i] >> 6);
    v23 = (PVOID)((unsigned __int8)v23 & 0x1F);
    if ( (_BYTE)v23 != 7 )
    {
      v42 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v42 + 24) = 316LL;
      WdLogEvent5_WdError(v42);
LABEL_49:
      v43 = 0LL;
      goto LABEL_50;
    }
    v43 = *(_QWORD *)(v41 + 16LL * (unsigned int)v40);
LABEL_50:
    if ( !v43 )
      break;
    v23 = Object;
    *((_DWORD *)Object + i) = *(_DWORD *)(v43 + 28);
  }
  v32 = WdLogNewEntry5_WdError(v23);
  v33 = v15[i];
LABEL_28:
  *(_QWORD *)(v32 + 24) = v33;
  WdLogEvent5_WdError(v32);
  v34 = -1073741811;
LABEL_29:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v65);
  v36 = 0LL;
LABEL_36:
  if ( v34 < 0 )
  {
    if ( v36 )
      ObfDereferenceObject(v36);
    v38 = WdLogNewEntry5_WdError(v35);
    *(_QWORD *)(v38 + 24) = v34;
    WdLogEvent5_WdError(v38);
  }
  operator delete[](v19);
  return (unsigned int)v34;
}
