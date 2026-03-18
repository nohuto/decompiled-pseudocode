/*
 * XREFs of ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C0249328
 * Callers:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C024C6B8 (DxgkSubmitCommandToHwQueueInternal.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C6AC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017DA0 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001CA58 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z @ 0x1C0042C8C (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1C01402E0 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$01@@QEAAPEAII@Z @ 0x1C0247284 (-AllocateElements@-$PagedPoolZeroedArray@I$01@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::SubmitCommand(
        struct _SLIST_ENTRY **this,
        const struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a2,
        char a3)
{
  struct _SLIST_ENTRY *Next; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _SLIST_ENTRY *v11; // rsi
  __int64 v12; // rax
  void *v14; // r15
  __int64 NumPrimaries; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  PVOID v21; // rcx
  size_t v22; // r8
  const D3DKMT_HANDLE *WrittenPrimaries; // rdx
  UINT PrivateDriverDataSize; // r14d
  struct CRefCountedBuffer *RefCountedBuffer; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  size_t v30; // r8
  char *pPrivateDriverData; // rdx
  void *v32; // rcx
  UINT v33; // r14d
  const GUID *v34; // r8
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  CRefCountedBuffer **v44; // r15
  struct _SLIST_ENTRY *v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  CRefCountedBuffer *v49; // rcx
  UINT i; // r15d
  struct _SLIST_ENTRY *v51; // rcx
  CRefCountedBuffer *v52; // rcx
  struct _SLIST_ENTRY *v54[2]; // [rsp+58h] [rbp-2B0h] BYREF
  ADAPTER_RENDER *v55; // [rsp+68h] [rbp-2A0h]
  __int64 v56; // [rsp+70h] [rbp-298h]
  void *v57; // [rsp+78h] [rbp-290h]
  PVOID v58; // [rsp+80h] [rbp-288h]
  struct _DXGKARG_VALIDATESUBMITCOMMAND v59; // [rsp+90h] [rbp-278h] BYREF
  PVOID P; // [rsp+2C0h] [rbp-48h] BYREF
  char v61; // [rsp+2C8h] [rbp-40h] BYREF
  unsigned int v62; // [rsp+2D0h] [rbp-38h]

  v55 = (ADAPTER_RENDER *)this;
  v56 = 0x8000000LL;
  Next = this[2][1].Next[1].Next;
  v54[0] = 0LL;
  v54[1] = Next;
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v54);
  v11 = v54[0];
  if ( !v54[0] )
  {
    v12 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = 752LL;
    WdLogEvent5_WdLowResource(v12);
LABEL_3:
    CVidSchSubmitData::~CVidSchSubmitData(v54);
    return 3221225495LL;
  }
  v54[0]->Next = (struct _SLIST_ENTRY *)v56;
  P = 0LL;
  v62 = 0;
  v14 = 0LL;
  v57 = 0LL;
  NumPrimaries = a2->NumPrimaries;
  if ( (_DWORD)NumPrimaries )
  {
    if ( a3 )
    {
      if ( !PagedPoolZeroedArray<unsigned int,2>::AllocateElements(&P, NumPrimaries) )
      {
        v20 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
        *(_QWORD *)(v20 + 24) = 769LL;
        WdLogEvent5_WdLowResource(v20);
        if ( P != &v61 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        P = 0LL;
        v62 = 0;
        CVidSchSubmitData::~CVidSchSubmitData(v54);
        return 3221225495LL;
      }
      v21 = P;
      v58 = P;
      v22 = v62;
      WrittenPrimaries = a2->WrittenPrimaries;
      if ( &WrittenPrimaries[v22] < WrittenPrimaries || (unsigned __int64)&WrittenPrimaries[v22] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v21, WrittenPrimaries, v22 * 4);
      v14 = P;
    }
    else
    {
      v14 = (void *)a2->WrittenPrimaries;
    }
    v57 = v14;
  }
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  if ( !PrivateDriverDataSize )
    goto LABEL_31;
  RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(PrivateDriverDataSize, NumPrimaries, v9);
  if ( !RefCountedBuffer )
  {
    v29 = WdLogNewEntry5_WdLowResource(0LL, v26, v27, v28);
    *(_QWORD *)(v29 + 24) = 794LL;
    WdLogEvent5_WdLowResource(v29);
    if ( P != &v61 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v62 = 0;
    goto LABEL_3;
  }
  v11[1].Next = (struct _SLIST_ENTRY *)RefCountedBuffer;
  *(_DWORD *)RefCountedBuffer = a2->PrivateDriverDataSize;
  *((_DWORD *)RefCountedBuffer + 1) = 1;
  v30 = a2->PrivateDriverDataSize;
  pPrivateDriverData = (char *)a2->pPrivateDriverData;
  v32 = &v11[1].Next->Next + 1;
  if ( a3
    && (&pPrivateDriverData[v30] < pPrivateDriverData || (unsigned __int64)&pPrivateDriverData[v30] > MmUserProbeAddress) )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v32, pPrivateDriverData, v30);
  v33 = a2->PrivateDriverDataSize;
  if ( !v33 )
    goto LABEL_31;
  v55 = (ADAPTER_RENDER *)this[2][1].Next[1].Next;
  if ( !*(_QWORD *)(*((_QWORD *)v55 + 2) + 1256LL) )
    goto LABEL_31;
  memset(&v59, 0, sizeof(v59));
  v59.Flags.Value = 1;
  v59.Commands = a2->CommandBuffer;
  v59.CommandLength = a2->CommandLength;
  v59.ContextCount = 1;
  v59.Context[0] = this[4];
  v59.pPrivateDriverData = &v11[1].Next->Next + 1;
  v59.PrivateDriverDataSize = v33;
  v59.UmdPrivateDataSize = v33;
  v59.HwQueueProgressFenceId = a2->HwQueueProgressFenceId;
  v35 = ADAPTER_RENDER::DdiValidateSubmitCommand(v55, &v59, v34);
  v39 = v35;
  if ( v35 < 0 )
  {
    v40 = WdLogNewEntry5_WdWarning(v37, v36, v38);
    *(_QWORD *)(v40 + 24) = v39;
    *(_QWORD *)(v40 + 32) = 840LL;
  }
  else
  {
LABEL_31:
    v11[3].Next = (struct _SLIST_ENTRY *)a2->CommandBuffer;
    *((_DWORD *)&v11[3].Next + 3) = a2->CommandLength;
    *((_DWORD *)&v11[5].Next + 2) = a2->PrivateDriverDataSize;
    *((_QWORD *)&v11[30].Next + 1) = a2->HwQueueProgressFenceId;
    LODWORD(v11[31].Next) = 1;
    v11[32].Next = this[7];
    *((_QWORD *)&v11[31].Next + 1) = this[8];
    LODWORD(v39) = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *, _QWORD, void *, int, struct _SLIST_ENTRY **, struct _SLIST_ENTRY *, _QWORD))(*((_QWORD *)&this[2][1].Next[1].Next[34].Next->Next + 1) + 856LL))(
                     *((_QWORD *)&this[2][1].Next[1].Next[34].Next + 1),
                     this[2][1].Next,
                     a2->NumPrimaries,
                     v14,
                     1,
                     &v11[12].Next + 1,
                     this[5],
                     0LL);
    if ( (int)v39 >= 0 )
    {
      v44 = (CRefCountedBuffer **)&v11[1];
      v45 = v11[1].Next;
      if ( v45 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&v45->Next + 1);
        v11 = v54[0];
      }
      v46 = (*(__int64 (__fastcall **)(struct _SLIST_ENTRY *, struct _SLIST_ENTRY *))(*(_QWORD *)(*((_QWORD *)&this[2][1].Next[1].Next[32].Next
                                                                                                  + 1)
                                                                                                + 8LL)
                                                                                    + 432LL))(
              this[5],
              v11);
      v39 = v46;
      if ( v46 >= 0 )
        goto LABEL_44;
      v49 = *v44;
      if ( *v44 )
        CRefCountedBuffer::RefCountedBufferRelease(v49);
      for ( i = 0; i < a2->NumPrimaries; ++i )
      {
        v48 = *((_QWORD *)&v11[13].Next + i);
        if ( v48 )
        {
          v51 = this[2][1].Next[1].Next;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*((_QWORD *)&v51[34].Next->Next + 1) + 424LL))(
            *((_QWORD *)&v51[34].Next + 1),
            0LL,
            v48,
            0LL);
        }
      }
      v40 = WdLogNewEntry5_WdWarning(v49, v47, v48);
      *(_QWORD *)(v40 + 24) = this;
      *(_QWORD *)(v40 + 32) = v39;
    }
    else
    {
      v40 = WdLogNewEntry5_WdWarning(v42, v41, v43);
      *(_QWORD *)(v40 + 24) = 866LL;
    }
  }
  WdLogEvent5_WdWarning(v40);
LABEL_44:
  v52 = (CRefCountedBuffer *)v11[1].Next;
  if ( v52 )
    CRefCountedBuffer::RefCountedBufferRelease(v52);
  if ( P != &v61 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v62 = 0;
  CVidSchSubmitData::~CVidSchSubmitData(v54);
  return (unsigned int)v39;
}
