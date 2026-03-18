/*
 * XREFs of ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C0111EA0
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C01109C0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011958 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0011984 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0021FE0 (McTemplateK0ppxppttqddddddddq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0p @ 0x1C002FD94 (McTemplateK0p.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA9E0 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FC840 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1C01D18B8 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitCommand(
        UINT *this,
        struct _D3DKMT_SUBMITCOMMAND *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct _VIDMM_MULTI_ALLOC **a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  __int64 Flags; // rcx
  unsigned int v11; // r14d
  __int64 BroadcastContextCount; // r13
  __int64 v13; // r12
  __int64 v14; // rcx
  PSLIST_ENTRY v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // r8d
  char v19; // al
  unsigned int v20; // edx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // edx
  char v24; // al
  int v25; // r8d
  int v26; // ecx
  int v27; // edx
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _DWORD *v31; // r8
  struct _SLIST_ENTRY *v32; // rax
  size_t PrivateDriverDataSize; // r8
  char *pPrivateDriverData; // rdx
  void *v35; // rcx
  UINT v36; // r14d
  ADAPTER_RENDER *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r14
  int v42; // r12d
  __int64 v43; // rsi
  struct _SLIST_ENTRY *Next; // rax
  struct DXGCONTEXT *v45; // rcx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  volatile signed __int32 *v49; // rcx
  __int64 i; // rcx
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  CRefCountedBuffer *v68; // rcx
  __int64 v69; // rsi
  __int64 j; // r12
  __int64 v71; // r12
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rax
  __int64 v77; // [rsp+A0h] [rbp-728h]
  UINT v78; // [rsp+A8h] [rbp-720h]
  PSLIST_ENTRY ListEntry; // [rsp+B8h] [rbp-710h]
  struct _SLIST_ENTRY *v80; // [rsp+C0h] [rbp-708h]
  struct _SLIST_ENTRY *v81[2]; // [rsp+C8h] [rbp-700h] BYREF
  int v82; // [rsp+D8h] [rbp-6F0h]
  DXGCONTEXT *v83; // [rsp+E0h] [rbp-6E8h]
  __int64 v84; // [rsp+E8h] [rbp-6E0h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v85; // [rsp+F0h] [rbp-6D8h]
  struct COREDEVICEACCESS *v86; // [rsp+F8h] [rbp-6D0h]
  __int64 v87; // [rsp+100h] [rbp-6C8h]
  __int64 v88; // [rsp+108h] [rbp-6C0h]
  __int64 v89; // [rsp+110h] [rbp-6B8h]
  __int64 v90; // [rsp+118h] [rbp-6B0h]
  _DXGKARG_VALIDATESUBMITCOMMAND v91; // [rsp+120h] [rbp-6A8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v92; // [rsp+350h] [rbp-478h] BYREF

  v85 = a4;
  v86 = a3;
  v83 = (DXGCONTEXT *)this;
  Flags = (unsigned int)a2->Flags;
  v11 = (*(_DWORD *)&a2->Flags & 1 | 0x1000) << 15;
  v80 = (struct _SLIST_ENTRY *)v11;
  BroadcastContextCount = (int)a2->BroadcastContextCount;
  v78 = a2->BroadcastContextCount;
  if ( a2->PrivateDriverDataSize > this[52] )
  {
    v56 = WdLogNewEntry5_WdWarning(Flags, a2, a3);
    *(_QWORD *)(v56 + 24) = a2->PrivateDriverDataSize;
    *(_QWORD *)(v56 + 32) = this[52];
    WdLogEvent5_WdWarning(v56);
    return 3221225485LL;
  }
  if ( (Flags & 2) != 0 )
  {
    v11 |= 0xA0u;
    LODWORD(v80) = v11;
    v57 = DXGCONTEXT::WaitForQueuedPresentLimit((DXGCONTEXT *)this, 0, 1, a3);
    v60 = v57;
    if ( v57 < 0 )
    {
      v61 = WdLogNewEntry5_WdEvent(v59, v58);
      *(_QWORD *)(v61 + 24) = this;
      *(_QWORD *)(v61 + 32) = v60;
      WdLogEvent5_WdEvent(v61);
      return (unsigned int)v60;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      v82 = 0;
      v89 = 0LL;
      v90 = 0LL;
      v87 = 0LL;
      v88 = 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
        McTemplateK0ppxppttqddddddddq(0LL, 0LL, 0LL, 0LL, 0LL);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0p((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventRender, (const GUID *)a3, 0LL);
    }
  }
  v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v77 = v13;
  v84 = v13;
  v81[1] = (struct _SLIST_ENTRY *)v13;
  ++*(_DWORD *)(v13 + 1140);
  v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v13 + 1120));
  if ( !v15 )
  {
    ++*(_DWORD *)(v13 + 1144);
    v15 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v13 + 1168))(
                          *(unsigned int *)(v13 + 1156),
                          *(unsigned int *)(v13 + 1164),
                          *(unsigned int *)(v13 + 1160),
                          v13 + 1120);
  }
  v81[0] = v15;
  if ( !v15 )
  {
    v62 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v62 + 24) = 2141LL;
    WdLogEvent5_WdLowResource(v62);
    goto LABEL_69;
  }
  v16 = *(_QWORD *)(v13 + 16);
  v17 = *(_DWORD *)(v16 + 2160);
  if ( v17 < 0x2000 )
    v18 = 1;
  else
    v18 = *(_DWORD *)(v16 + 256);
  if ( v17 >= 0x2000 || (v19 = *(_BYTE *)(v16 + 2452)) != 0 )
    v19 = 1;
  if ( v19 )
    v20 = *(_DWORD *)(v16 + 2368) * ((8 * v18 + 191) & 0xFFFFFFF8) + 8 * (v18 + 8 * (*(_DWORD *)(v16 + 2368) * v18 + 9));
  else
    v20 = 1296;
  memset(v15, 0, v20);
  v21 = *(_QWORD *)(v13 + 16);
  v22 = *(_DWORD *)(v21 + 2160);
  if ( v22 < 0x2000 )
    v23 = 1;
  else
    v23 = *(_DWORD *)(v21 + 256);
  if ( v22 >= 0x2000 || (v24 = *(_BYTE *)(v21 + 2452)) != 0 )
    v24 = 1;
  v25 = *(_DWORD *)(v21 + 2368);
  BYTE4(v15[22].Next) = v24;
  if ( v24 )
  {
    HIDWORD(v15[35].Next) = v25;
    *((_DWORD *)&v15[35].Next + 2) = v23;
    v26 = 8 * v23;
    v27 = v23 << 6;
    *((_DWORD *)&v15[35].Next + 3) = v25 * (v27 + ((v26 + 191) & 0xFFFFFFF8)) + 16;
    v28 = v25 * (v27 + ((v26 + 191) & 0xFFFFFFF8)) + 576;
    *((_DWORD *)&v15[33].Next + 2) = v28;
    *((_DWORD *)&v15[33].Next + 3) = v26 + v28;
  }
  v15->Next = v80;
  if ( (v11 & 0x20) != 0 )
  {
    v63 = 2048;
    if ( (int)BroadcastContextCount > 1 )
      v63 = 3072;
    LODWORD(v15->Next) = (__int64)v15->Next & 0xFFFFFBFF | v63;
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
      *((_DWORD *)&v15[7].Next + 3) = 0;
  }
  v29 = this[52];
  if ( !(_DWORD)v29 )
    goto LABEL_31;
  v30 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v31 = *(_DWORD **)(v30 + 16);
  if ( !a2->PrivateDriverDataSize && v31[428] < 0x8000u && (v31[71] == 4318 || (v31[77] & 0x10) != 0) )
  {
    v64 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v64 + 24) = 2175LL;
    WdLogEvent5_WdWarning(v64);
    CVidSchSubmitData::~CVidSchSubmitData(v81);
    return 3221225485LL;
  }
  v32 = (struct _SLIST_ENTRY *)operator new[]((unsigned int)(v29 + 8), 0x4B677844u, (POOL_TYPE)512);
  if ( !v32 )
  {
LABEL_69:
    CVidSchSubmitData::~CVidSchSubmitData(v81);
    return 3221225495LL;
  }
  v15[1].Next = v32;
  LODWORD(v32->Next) = this[52];
  HIDWORD(v32->Next) = 1;
  if ( a8 )
  {
    PrivateDriverDataSize = a2->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a2->pPrivateDriverData;
    v35 = &v15[1].Next->Next + 1;
    if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
      || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v35, pPrivateDriverData, PrivateDriverDataSize);
  }
  else
  {
    memmove(&v15[1].Next->Next + 1, a2->pPrivateDriverData, a2->PrivateDriverDataSize);
  }
LABEL_31:
  v15[3].Next = (struct _SLIST_ENTRY *)a2->Commands;
  *((_DWORD *)&v15[3].Next + 3) = a2->CommandLength;
  HIDWORD(v15[5].Next) = this[52];
  *((_DWORD *)&v15[5].Next + 2) = a2->PrivateDriverDataSize;
  v36 = this[52];
  ListEntry = (PSLIST_ENTRY)BroadcastContextCount;
  if ( !v36 )
    goto LABEL_33;
  v37 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_QWORD *)(*((_QWORD *)v37 + 2) + 1272LL) )
    goto LABEL_33;
  memset(&v91, 0, sizeof(v91));
  v91.Commands = a2->Commands;
  v91.CommandLength = a2->CommandLength;
  v91.ContextCount = v78;
  if ( BroadcastContextCount > 0 )
  {
    for ( i = 0LL; i < BroadcastContextCount; ++i )
      v91.Context[i] = (HANDLE)*((_QWORD *)a5[i] + 23);
  }
  v91.pPrivateDriverData = &v15[1].Next->Next + 1;
  v91.PrivateDriverDataSize = v36;
  v91.UmdPrivateDataSize = a2->PrivateDriverDataSize;
  v52 = ADAPTER_RENDER::DdiValidateSubmitCommand(v37, &v91);
  v41 = v52;
  if ( v52 < 0 )
  {
    v65 = WdLogNewEntry5_WdWarning(v54, v53, v55);
    *(_QWORD *)(v65 + 24) = v41;
    *(_QWORD *)(v65 + 32) = 2233LL;
    WdLogEvent5_WdWarning(v65);
  }
  else
  {
LABEL_33:
    LODWORD(v41) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DKMT_HANDLE *, UINT, struct _SLIST_ENTRY **, _QWORD, struct DXGCONTEXT **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 856LL))(
                     *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                     *((_QWORD *)this + 2),
                     a2->NumPrimaries,
                     a2->WrittenPrimaries,
                     v78,
                     &v15[12].Next + 1,
                     0LL,
                     a5);
    if ( (int)v41 < 0 )
    {
      v66 = WdLogNewEntry5_WdWarning(v39, v38, v40);
      *(_QWORD *)(v66 + 24) = 2250LL;
      WdLogEvent5_WdWarning(v66);
    }
    else
    {
      *((_QWORD *)&v15[21].Next + 1) = a6;
      LODWORD(v15[22].Next) = a7;
      v42 = 0;
      if ( BroadcastContextCount <= 0 )
      {
LABEL_42:
        if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
        {
          v92.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
          v92.Token.Flip.FenceValue = a2->PresentHistoryToken;
          v73 = SubmitPresentHistoryToken(&v92, v86, v85, 0LL, 0, 0LL, 0LL, 0LL, (struct DXGCONTEXT *)this, 0LL);
          v41 = v73;
          if ( (int)(v73 + 0x80000000) >= 0 && v73 != -1073741130 )
          {
            v76 = WdLogNewEntry5_WdWarning(0x80000000LL, v74, v75);
            *(_QWORD *)(v76 + 24) = this;
            *(_QWORD *)(v76 + 32) = v41;
            WdLogEvent5_WdWarning(v76);
            LODWORD(v41) = 0;
          }
        }
      }
      else
      {
        v43 = 0LL;
        while ( 1 )
        {
          Next = v15[1].Next;
          if ( Next )
            _InterlockedIncrement((volatile signed __int32 *)&Next->Next + 1);
          v45 = a5[v43];
          if ( *((struct _KTHREAD **)v45 + 56) != KeGetCurrentThread() )
          {
            v67 = WdLogNewEntry5_WdAssertion(v45);
            *(_QWORD *)(v67 + 24) = 2274LL;
            WdLogEvent5_WdAssertion(v67);
            v45 = a5[v43];
          }
          v46 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 520LL)
                                                                            + 8LL)
                                                                + 424LL))(
                  *((_QWORD *)v45 + 32),
                  v15);
          v41 = v46;
          if ( v46 < 0 )
            break;
          LODWORD(v15->Next) &= ~0x800u;
          ++v42;
          if ( ++v43 >= BroadcastContextCount )
            goto LABEL_42;
        }
        v68 = (CRefCountedBuffer *)v15[1].Next;
        if ( v68 )
          CRefCountedBuffer::RefCountedBufferRelease(v68);
        v69 = v42;
        for ( j = v69; j >= 0; --j )
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 520LL)
                                                             + 8LL)
                                                 + 440LL))(
            *((_QWORD *)a5[j] + 32),
            0LL);
        for ( ; v69 < BroadcastContextCount; ++v69 )
        {
          v71 = 0LL;
          if ( a2->NumPrimaries )
          {
            do
            {
              v48 = *((_QWORD *)&v15[13].Next + v71);
              if ( v48 )
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 544LL)
                                                                                    + 8LL)
                                                                        + 424LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5[v69] + 2) + 16LL) + 552LL),
                  0LL,
                  v48,
                  0LL);
              v71 = (unsigned int)(v71 + 1);
            }
            while ( (unsigned int)v71 < a2->NumPrimaries );
            BroadcastContextCount = (__int64)ListEntry;
          }
        }
        v72 = WdLogNewEntry5_WdWarning(v68, v47, v48);
        *(_QWORD *)(v72 + 24) = this;
        *(_QWORD *)(v72 + 32) = v41;
        WdLogEvent5_WdWarning(v72);
      }
      v13 = v77;
    }
  }
  v49 = (volatile signed __int32 *)v15[1].Next;
  if ( v49 && _InterlockedExchangeAdd(v49 + 1, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)v49, 0);
  ++*(_DWORD *)(v13 + 1148);
  if ( ExQueryDepthSList((PSLIST_HEADER)(v13 + 1120)) >= *(_WORD *)(v13 + 1136) )
  {
    ++*(_DWORD *)(v13 + 1152);
    (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v13 + 1176))(v15, v13 + 1120);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v13 + 1120), v15);
  }
  return (unsigned int)v41;
}
