/*
 * XREFs of ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C0214900
 * Callers:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0217C78 (DxgkSubmitCommandToHwQueueInternal.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C001137C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011958 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0011984 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z @ 0x1C003C3FC (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1C01D18B8 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$01@@QEAAPEAII@Z @ 0x1C0212FD0 (-AllocateElements@-$PagedPoolZeroedArray@I$01@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::SubmitCommand(
        struct _SLIST_ENTRY **this,
        const struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a2,
        char a3)
{
  struct _SLIST_ENTRY *Next; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _SLIST_ENTRY *v9; // rsi
  __int64 v10; // rax
  void *v12; // r15
  __int64 NumPrimaries; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  PVOID v16; // rcx
  size_t v17; // r8
  const D3DKMT_HANDLE *WrittenPrimaries; // rdx
  UINT PrivateDriverDataSize; // r14d
  struct CRefCountedBuffer *RefCountedBuffer; // rax
  __int64 v21; // rax
  char *pPrivateDriverData; // rdx
  size_t v23; // r8
  void *v24; // rcx
  UINT v25; // r14d
  const GUID *v26; // r8
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  CRefCountedBuffer **v36; // r15
  struct _SLIST_ENTRY *v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  CRefCountedBuffer *v41; // rcx
  UINT i; // r15d
  struct _SLIST_ENTRY *v43; // rcx
  CRefCountedBuffer *v44; // rcx
  struct _SLIST_ENTRY *v46[2]; // [rsp+58h] [rbp-2A0h] BYREF
  ADAPTER_RENDER *v47; // [rsp+68h] [rbp-290h]
  __int64 v48; // [rsp+70h] [rbp-288h]
  void *v49; // [rsp+78h] [rbp-280h]
  struct _DXGKARG_VALIDATESUBMITCOMMAND v50; // [rsp+80h] [rbp-278h] BYREF
  PVOID P; // [rsp+2B0h] [rbp-48h] BYREF
  char v52; // [rsp+2B8h] [rbp-40h] BYREF
  unsigned int v53; // [rsp+2C0h] [rbp-38h]

  v47 = (ADAPTER_RENDER *)this;
  v48 = 0x8000000LL;
  Next = this[2][1].Next[1].Next;
  v46[0] = 0LL;
  v46[1] = Next;
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v46);
  v9 = v46[0];
  if ( !v46[0] )
  {
    v10 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v10 + 24) = 752LL;
    WdLogEvent5_WdLowResource(v10);
LABEL_3:
    CVidSchSubmitData::~CVidSchSubmitData(v46);
    return 3221225495LL;
  }
  v46[0]->Next = (struct _SLIST_ENTRY *)v48;
  P = 0LL;
  v53 = 0;
  v12 = 0LL;
  v49 = 0LL;
  NumPrimaries = a2->NumPrimaries;
  if ( (_DWORD)NumPrimaries )
  {
    if ( a3 )
    {
      if ( !PagedPoolZeroedArray<unsigned int,2>::AllocateElements(&P, NumPrimaries) )
      {
        v15 = WdLogNewEntry5_WdLowResource(v14);
        *(_QWORD *)(v15 + 24) = 769LL;
        WdLogEvent5_WdLowResource(v15);
        if ( P != &v52 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        P = 0LL;
        v53 = 0;
        CVidSchSubmitData::~CVidSchSubmitData(v46);
        return 3221225495LL;
      }
      v16 = P;
      v48 = (__int64)P;
      v17 = v53;
      WrittenPrimaries = a2->WrittenPrimaries;
      if ( &WrittenPrimaries[v17] < WrittenPrimaries || (unsigned __int64)&WrittenPrimaries[v17] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v16, WrittenPrimaries, v17 * 4);
      v12 = P;
    }
    else
    {
      v12 = (void *)a2->WrittenPrimaries;
    }
    v49 = v12;
  }
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  if ( !PrivateDriverDataSize )
    goto LABEL_31;
  RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(PrivateDriverDataSize, NumPrimaries, v8);
  if ( !RefCountedBuffer )
  {
    v21 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v21 + 24) = 794LL;
    WdLogEvent5_WdLowResource(v21);
    if ( P != &v52 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v53 = 0;
    goto LABEL_3;
  }
  v9[1].Next = (struct _SLIST_ENTRY *)RefCountedBuffer;
  *(_DWORD *)RefCountedBuffer = a2->PrivateDriverDataSize;
  *((_DWORD *)RefCountedBuffer + 1) = 1;
  pPrivateDriverData = (char *)a2->pPrivateDriverData;
  v23 = a2->PrivateDriverDataSize;
  v24 = &v9[1].Next->Next + 1;
  if ( a3
    && (&pPrivateDriverData[v23] < pPrivateDriverData || (unsigned __int64)&pPrivateDriverData[v23] > MmUserProbeAddress) )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v24, pPrivateDriverData, v23);
  v25 = a2->PrivateDriverDataSize;
  if ( !v25 )
    goto LABEL_31;
  v47 = (ADAPTER_RENDER *)this[2][1].Next[1].Next;
  if ( !*(_QWORD *)(*((_QWORD *)v47 + 2) + 1272LL) )
    goto LABEL_31;
  memset(&v50, 0, sizeof(v50));
  v50.Flags.Value = 1;
  v50.Commands = a2->CommandBuffer;
  v50.CommandLength = a2->CommandLength;
  v50.ContextCount = 1;
  v50.Context[0] = this[4];
  v50.pPrivateDriverData = &v9[1].Next->Next + 1;
  v50.PrivateDriverDataSize = v25;
  v50.UmdPrivateDataSize = v25;
  v50.HwQueueProgressFenceId = a2->HwQueueProgressFenceId;
  v27 = ADAPTER_RENDER::DdiValidateSubmitCommand(v47, &v50, v26);
  v31 = v27;
  if ( v27 < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v32 + 24) = v31;
    *(_QWORD *)(v32 + 32) = 840LL;
  }
  else
  {
LABEL_31:
    v9[3].Next = (struct _SLIST_ENTRY *)a2->CommandBuffer;
    *((_DWORD *)&v9[3].Next + 3) = a2->CommandLength;
    *((_DWORD *)&v9[5].Next + 2) = a2->PrivateDriverDataSize;
    *((_QWORD *)&v9[30].Next + 1) = a2->HwQueueProgressFenceId;
    LODWORD(v9[31].Next) = 1;
    v9[32].Next = this[7];
    *((_QWORD *)&v9[31].Next + 1) = this[8];
    LODWORD(v31) = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *, _QWORD, void *, int, struct _SLIST_ENTRY **, struct _SLIST_ENTRY *, _QWORD))(*((_QWORD *)&this[2][1].Next[1].Next[34].Next->Next + 1) + 856LL))(
                     *((_QWORD *)&this[2][1].Next[1].Next[34].Next + 1),
                     this[2][1].Next,
                     a2->NumPrimaries,
                     v12,
                     1,
                     &v9[12].Next + 1,
                     this[5],
                     0LL);
    if ( (int)v31 >= 0 )
    {
      v36 = (CRefCountedBuffer **)&v9[1];
      v37 = v9[1].Next;
      if ( v37 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&v37->Next + 1);
        v9 = v46[0];
      }
      v38 = (*(__int64 (__fastcall **)(struct _SLIST_ENTRY *, struct _SLIST_ENTRY *))(*(_QWORD *)(*((_QWORD *)&this[2][1].Next[1].Next[32].Next
                                                                                                  + 1)
                                                                                                + 8LL)
                                                                                    + 432LL))(
              this[5],
              v9);
      v31 = v38;
      if ( v38 >= 0 )
        goto LABEL_44;
      v41 = *v36;
      if ( *v36 )
        CRefCountedBuffer::RefCountedBufferRelease(v41);
      for ( i = 0; i < a2->NumPrimaries; ++i )
      {
        v40 = *((_QWORD *)&v9[13].Next + i);
        if ( v40 )
        {
          v43 = this[2][1].Next[1].Next;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*((_QWORD *)&v43[34].Next->Next + 1) + 424LL))(
            *((_QWORD *)&v43[34].Next + 1),
            0LL,
            v40,
            0LL);
        }
      }
      v32 = WdLogNewEntry5_WdWarning(v41, v39, v40);
      *(_QWORD *)(v32 + 24) = this;
      *(_QWORD *)(v32 + 32) = v31;
    }
    else
    {
      v32 = WdLogNewEntry5_WdWarning(v34, v33, v35);
      *(_QWORD *)(v32 + 24) = 866LL;
    }
  }
  WdLogEvent5_WdWarning(v32);
LABEL_44:
  v44 = (CRefCountedBuffer *)v9[1].Next;
  if ( v44 )
    CRefCountedBuffer::RefCountedBufferRelease(v44);
  if ( P != &v52 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v53 = 0;
  CVidSchSubmitData::~CVidSchSubmitData(v46);
  return (unsigned int)v31;
}
