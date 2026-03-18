/*
 * XREFs of ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C01F7C0C
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01DB6D0 (DxgkUpdateGpuVirtualAddress.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010C44 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        int a4,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a5)
{
  unsigned __int64 v9; // rcx
  __int64 v10; // r15
  unsigned int v11; // esi
  struct _EX_RUNDOWN_REF *v12; // rdi
  unsigned int HostProcess; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  struct DXGPROCESS *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ecx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  int v23; // r13d
  int Count; // r12d
  UINT i; // r15d
  unsigned __int64 v26; // rsi
  int v27; // eax
  unsigned int v28; // r8d
  struct DXGALLOCATION **AllocationUnsafe; // rax
  struct _MDL *v30; // r9
  __int64 v31; // rax
  struct _EX_RUNDOWN_REF *v32; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v33[8]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v34; // [rsp+30h] [rbp-78h]
  char v35; // [rsp+38h] [rbp-70h]
  unsigned int v36; // [rsp+40h] [rbp-68h]
  unsigned int v37; // [rsp+44h] [rbp-64h]
  int v38; // [rsp+48h] [rbp-60h]
  struct _EX_RUNDOWN_REF *v39[2]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v40[72]; // [rsp+60h] [rbp-48h] BYREF

  v34 = *((_QWORD *)this + 7);
  v35 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
  if ( *(_DWORD *)(*((_QWORD *)this + 7) + 176LL) != 1 )
  {
    if ( v35 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    return 3221226166LL;
  }
  v9 = (unsigned __int64)a5->NumOperations << 6;
  v10 = 0xFFFFFFFFLL;
  if ( v9 <= 0xFFFFFFFF )
    v10 = (unsigned int)v9;
  v38 = v10;
  v11 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v37 = v11;
  if ( (unsigned int)v10 >= 0x20000 || (v36 = v10 + 56, (unsigned int)(v10 + 56) > 0x20000) )
  {
    if ( v35 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    return 3221225659LL;
  }
  v12 = (struct _EX_RUNDOWN_REF *)operator new[]((unsigned int)(v10 + 56), 0x4B677844u, (POOL_TYPE)512);
  v39[1] = v12;
  if ( !v12 )
  {
    if ( v35 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    return 3221225495LL;
  }
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v12->Count = 0LL;
  LODWORD(v12[1].Count) = HostProcess;
  HIDWORD(v12[1].Ptr) = 0;
  LODWORD(v12[2].Count) = 19;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v40, (struct _KTHREAD **)a2);
  v15 = (a5->hFenceObject >> 6) & 0xFFFFFF;
  v16 = a5->hFenceObject >> 30;
  v17 = a2;
  if ( (unsigned int)v15 < *((_DWORD *)a2 + 62) )
  {
    v14 = (unsigned int)v15;
    v18 = *((_QWORD *)a2 + 29);
    v17 = (struct DXGPROCESS *)*(unsigned int *)(v18 + 16 * v15 + 8);
    if ( (_DWORD)v16 == ((*(_DWORD *)(v18 + 16 * v15 + 8) >> 5) & 3)
      && ((unsigned __int16)v17 & 0x2000) == 0
      && ((unsigned __int8)v17 & 0x1F) != 0 )
    {
      v14 = 2LL * (unsigned int)v15;
      v17 = (struct DXGPROCESS *)((unsigned __int8)v17 & 0x1F);
      if ( (_BYTE)v17 == 11 )
      {
        v20 = *(_QWORD *)(v18 + 16LL * (unsigned int)v15);
        if ( v20 )
        {
          v21 = *(_DWORD *)(v20 + 44);
          v12[3].Count = a5->FenceValue;
          LODWORD(v12[6].Count) = a5->Flags.Value;
          HIDWORD(v12[4].Ptr) = a4;
          LODWORD(v12[4].Count) = a3;
          LODWORD(v12[5].Count) = v21;
          HIDWORD(v12[5].Ptr) = a5->NumOperations;
          Operations = a5->Operations;
          if ( (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)((char *)Operations + v10) < Operations
            || (unsigned __int64)Operations + v10 > MmUserProbeAddress )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove(&v12[7], Operations, (unsigned int)v10);
          v23 = 0;
          Count = 0;
          for ( i = 0; i < a5->NumOperations; ++i )
          {
            v26 = (unsigned __int64)i << 6;
            v27 = *(_DWORD *)((char *)&v12[7].Count + v26);
            if ( !v27 || v27 == 3 )
            {
              v28 = *(_DWORD *)((char *)&v12[10].Count + v26);
              if ( v28 == v23 )
              {
                *(_DWORD *)((char *)&v12[10].Count + v26) = Count;
              }
              else
              {
                v32 = 0LL;
                AllocationUnsafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationUnsafe(
                                                              (__int64)a2,
                                                              (DXGALLOCATIONREFERENCE *)v39,
                                                              v28);
                DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v32, AllocationUnsafe);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v39);
                if ( !v32 )
                {
                  v11 = -1073741811;
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v32);
                  goto LABEL_37;
                }
                v23 = *(_DWORD *)((char *)&v12[10].Count + v26);
                Count = v32[12].Count;
                *(_DWORD *)((char *)&v12[10].Count + v26) = Count;
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v32);
              }
            }
          }
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v40);
          v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                  this,
                  (struct DXGKVMB_COMMAND_BASE *)v12,
                  (const GUID *)v36,
                  v30);
          goto LABEL_38;
        }
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v19 + 24) = 316LL;
        WdLogEvent5_WdError(v19);
      }
    }
  }
  v31 = WdLogNewEntry5_WdWarning(v17, v14, v16);
  *(_QWORD *)(v31 + 24) = a5->hFenceObject;
  *(_QWORD *)(v31 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v31);
LABEL_37:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v40);
LABEL_38:
  operator delete[](v12);
  if ( v35 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
  return v11;
}
