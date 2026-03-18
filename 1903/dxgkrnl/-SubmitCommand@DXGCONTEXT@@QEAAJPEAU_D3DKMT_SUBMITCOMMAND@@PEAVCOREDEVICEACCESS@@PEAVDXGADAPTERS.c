/*
 * XREFs of ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C010B3C0
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C010ACB0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C4A4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001CA08 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     McTemplateK0p @ 0x1C0035594 (McTemplateK0p.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0043F64 (McTemplateK0ppxppttqddddddddq.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0101DA0 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0110150 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1C013CA10 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  PSLIST_ENTRY v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // eax
  int v21; // edx
  char v22; // al
  unsigned int v23; // edx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // edx
  char v27; // al
  int v28; // r8d
  int v29; // ecx
  int v30; // edx
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _DWORD *v34; // r8
  struct _SLIST_ENTRY *v35; // rax
  size_t PrivateDriverDataSize; // r8
  char *pPrivateDriverData; // rdx
  void *v38; // rcx
  UINT v39; // r14d
  ADAPTER_RENDER *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r14
  int v45; // r12d
  __int64 v46; // rdi
  struct _SLIST_ENTRY *Next; // rax
  struct DXGCONTEXT *v48; // rcx
  int v49; // eax
  __int64 v50; // r8
  volatile signed __int32 *v51; // rcx
  __int64 i; // rcx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // ecx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  CRefCountedBuffer *v69; // rcx
  __int64 v70; // rdi
  __int64 j; // r12
  __int64 v72; // r12
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rax
  __int64 v78; // [rsp+A0h] [rbp-728h]
  UINT v79; // [rsp+A8h] [rbp-720h]
  PSLIST_ENTRY ListEntry; // [rsp+B8h] [rbp-710h]
  struct _SLIST_ENTRY *v81; // [rsp+C0h] [rbp-708h]
  struct _SLIST_ENTRY *v82[2]; // [rsp+C8h] [rbp-700h] BYREF
  int v83; // [rsp+D8h] [rbp-6F0h]
  DXGCONTEXT *v84; // [rsp+E0h] [rbp-6E8h]
  __int64 v85; // [rsp+E8h] [rbp-6E0h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v86; // [rsp+F0h] [rbp-6D8h]
  struct COREDEVICEACCESS *v87; // [rsp+F8h] [rbp-6D0h]
  __int64 v88; // [rsp+100h] [rbp-6C8h]
  __int64 v89; // [rsp+108h] [rbp-6C0h]
  __int64 v90; // [rsp+110h] [rbp-6B8h]
  __int64 v91; // [rsp+118h] [rbp-6B0h]
  _DXGKARG_VALIDATESUBMITCOMMAND v92; // [rsp+120h] [rbp-6A8h] BYREF
  _QWORD v93[143]; // [rsp+350h] [rbp-478h] BYREF

  v86 = a4;
  v87 = a3;
  v84 = (DXGCONTEXT *)this;
  Flags = (unsigned int)a2->Flags;
  v11 = (*(_DWORD *)&a2->Flags & 1 | 0x1000) << 15;
  v81 = (struct _SLIST_ENTRY *)v11;
  BroadcastContextCount = (int)a2->BroadcastContextCount;
  v79 = a2->BroadcastContextCount;
  if ( a2->PrivateDriverDataSize > this[52] )
  {
    v58 = WdLogNewEntry5_WdWarning(Flags, a2, a3);
    *(_QWORD *)(v58 + 24) = a2->PrivateDriverDataSize;
    *(_QWORD *)(v58 + 32) = this[52];
    WdLogEvent5_WdWarning(v58);
    return 3221225485LL;
  }
  if ( (Flags & 2) != 0 )
  {
    v11 |= 0xA0u;
    LODWORD(v81) = v11;
    v59 = DXGCONTEXT::WaitForQueuedPresentLimit((DXGCONTEXT *)this, 0, 1, a3);
    v61 = v59;
    if ( v59 < 0 )
    {
      v62 = WdLogNewEntry5_WdEvent(v60);
      *(_QWORD *)(v62 + 24) = this;
      *(_QWORD *)(v62 + 32) = v61;
      WdLogEvent5_WdEvent(v62);
      return (unsigned int)v61;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      v83 = 0;
      v90 = 0LL;
      v91 = 0LL;
      v88 = 0LL;
      v89 = 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
        McTemplateK0ppxppttqddddddddq(0LL, 0LL, (const GUID *)a3, 0LL, 0LL);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0p((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventRender, (const GUID *)a3, 0LL);
    }
  }
  v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v78 = v13;
  v85 = v13;
  v82[1] = (struct _SLIST_ENTRY *)v13;
  ++*(_DWORD *)(v13 + 1140);
  v16 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v13 + 1120));
  if ( !v16 )
  {
    ++*(_DWORD *)(v13 + 1144);
    v16 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v13 + 1168))(
                          *(unsigned int *)(v13 + 1156),
                          *(unsigned int *)(v13 + 1164),
                          *(unsigned int *)(v13 + 1160),
                          v13 + 1120);
  }
  v82[0] = v16;
  if ( !v16 )
  {
    v63 = WdLogNewEntry5_WdLowResource(v15, v14, v17, v18);
    *(_QWORD *)(v63 + 24) = 2128LL;
    WdLogEvent5_WdLowResource(v63);
    goto LABEL_69;
  }
  v19 = *(_QWORD *)(v13 + 16);
  v20 = *(_DWORD *)(v19 + 2184);
  if ( v20 < 0x2000 )
    v21 = 1;
  else
    v21 = *(_DWORD *)(v19 + 256);
  if ( v20 >= 0x2000 || (v22 = *(_BYTE *)(v19 + 2484)) != 0 )
    v22 = 1;
  if ( v22 )
    v23 = *(_DWORD *)(v19 + 2392) * ((v21 << 6) + ((8 * v21 + 191) & 0xFFFFFFF8)) + 8 * v21 + 568;
  else
    v23 = 1296;
  memset(v16, 0, v23);
  v24 = *(_QWORD *)(v13 + 16);
  v25 = *(_DWORD *)(v24 + 2184);
  if ( v25 < 0x2000 )
    v26 = 1;
  else
    v26 = *(_DWORD *)(v24 + 256);
  if ( v25 >= 0x2000 || (v27 = *(_BYTE *)(v24 + 2484)) != 0 )
    v27 = 1;
  v28 = *(_DWORD *)(v24 + 2392);
  BYTE4(v16[22].Next) = v27;
  if ( v27 )
  {
    *((_DWORD *)&v16[34].Next + 3) = v28;
    LODWORD(v16[35].Next) = v26;
    v29 = 8 * v26;
    v30 = v26 << 6;
    HIDWORD(v16[35].Next) = v28 * (v30 + ((v29 + 191) & 0xFFFFFFF8)) + 16;
    v31 = v28 * (v30 + ((v29 + 191) & 0xFFFFFFF8)) + 568;
    *((_DWORD *)&v16[33].Next + 2) = v31;
    *((_DWORD *)&v16[33].Next + 3) = v29 + v31;
  }
  v16->Next = v81;
  if ( (v11 & 0x20) != 0 )
  {
    v64 = 2048;
    if ( (int)BroadcastContextCount > 1 )
      v64 = 3072;
    LODWORD(v16->Next) = (__int64)v16->Next & 0xFFFFFBFF | v64;
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
      *((_DWORD *)&v16[7].Next + 3) = 0;
  }
  v32 = this[52];
  if ( !(_DWORD)v32 )
    goto LABEL_31;
  v33 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v34 = *(_DWORD **)(v33 + 16);
  if ( !a2->PrivateDriverDataSize && v34[432] < 0x8000u && (v34[71] == 4318 || (v34[77] & 0x10) != 0) )
  {
    v65 = WdLogNewEntry5_WdWarning(v33, v32, v34);
    *(_QWORD *)(v65 + 24) = 2162LL;
    WdLogEvent5_WdWarning(v65);
    CVidSchSubmitData::~CVidSchSubmitData(v82);
    return 3221225485LL;
  }
  v35 = (struct _SLIST_ENTRY *)operator new[]((unsigned int)(v32 + 8), 0x4B677844u, (POOL_TYPE)512);
  if ( !v35 )
  {
LABEL_69:
    CVidSchSubmitData::~CVidSchSubmitData(v82);
    return 3221225495LL;
  }
  v16[1].Next = v35;
  LODWORD(v35->Next) = this[52];
  HIDWORD(v35->Next) = 1;
  if ( a8 )
  {
    PrivateDriverDataSize = a2->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a2->pPrivateDriverData;
    v38 = &v16[1].Next->Next + 1;
    if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
      || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v38, pPrivateDriverData, PrivateDriverDataSize);
  }
  else
  {
    memmove(&v16[1].Next->Next + 1, a2->pPrivateDriverData, a2->PrivateDriverDataSize);
  }
LABEL_31:
  v16[3].Next = (struct _SLIST_ENTRY *)a2->Commands;
  *((_DWORD *)&v16[3].Next + 3) = a2->CommandLength;
  HIDWORD(v16[5].Next) = this[52];
  *((_DWORD *)&v16[5].Next + 2) = a2->PrivateDriverDataSize;
  v39 = this[52];
  ListEntry = (PSLIST_ENTRY)BroadcastContextCount;
  if ( !v39 )
    goto LABEL_33;
  v40 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_QWORD *)(*((_QWORD *)v40 + 2) + 1256LL) )
    goto LABEL_33;
  v92.Flags.Value = 0;
  memset(&v92.ContextCount + 1, 0, 0x21CuLL);
  v92.Commands = a2->Commands;
  v92.CommandLength = a2->CommandLength;
  v92.ContextCount = v79;
  if ( BroadcastContextCount > 0 )
  {
    for ( i = 0LL; i < BroadcastContextCount; ++i )
      v92.Context[i] = (HANDLE)*((_QWORD *)a5[i] + 23);
  }
  v92.pPrivateDriverData = &v16[1].Next->Next + 1;
  v92.PrivateDriverDataSize = v39;
  v92.UmdPrivateDataSize = a2->PrivateDriverDataSize;
  v54 = ADAPTER_RENDER::DdiValidateSubmitCommand(v40, &v92);
  v44 = v54;
  if ( v54 < 0 )
  {
    v66 = WdLogNewEntry5_WdWarning(v56, v55, v57);
    *(_QWORD *)(v66 + 24) = v44;
    *(_QWORD *)(v66 + 32) = 2220LL;
    WdLogEvent5_WdWarning(v66);
  }
  else
  {
LABEL_33:
    LODWORD(v44) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DKMT_HANDLE *, UINT, struct _SLIST_ENTRY **, _QWORD, struct DXGCONTEXT **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 856LL))(
                     *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                     *((_QWORD *)this + 2),
                     a2->NumPrimaries,
                     a2->WrittenPrimaries,
                     v79,
                     &v16[12].Next + 1,
                     0LL,
                     a5);
    if ( (int)v44 < 0 )
    {
      v67 = WdLogNewEntry5_WdWarning(v42, v41, v43);
      *(_QWORD *)(v67 + 24) = 2237LL;
      WdLogEvent5_WdWarning(v67);
    }
    else
    {
      *((_QWORD *)&v16[21].Next + 1) = a6;
      LODWORD(v16[22].Next) = a7;
      v45 = 0;
      if ( BroadcastContextCount <= 0 )
      {
LABEL_42:
        if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
        {
          memset(v93, 0, 0x438uLL);
          LODWORD(v93[0]) = 4;
          v93[2] = a2->PresentHistoryToken;
          v74 = SubmitPresentHistoryToken(v93, v87, v86, 0LL, 0, 0LL, 0LL, 0LL, this, 0LL, -1, 0LL);
          v44 = v74;
          if ( (int)(v74 + 0x80000000) >= 0 && v74 != -1073741130 )
          {
            v77 = WdLogNewEntry5_WdWarning(0x80000000LL, v75, v76);
            *(_QWORD *)(v77 + 24) = this;
            *(_QWORD *)(v77 + 32) = v44;
            WdLogEvent5_WdWarning(v77);
            LODWORD(v44) = 0;
          }
        }
      }
      else
      {
        v46 = 0LL;
        while ( 1 )
        {
          Next = v16[1].Next;
          if ( Next )
            _InterlockedIncrement((volatile signed __int32 *)&Next->Next + 1);
          v48 = a5[v46];
          if ( *((struct _KTHREAD **)v48 + 58) != KeGetCurrentThread() )
          {
            v68 = WdLogNewEntry5_WdAssertion(v48, v41);
            *(_QWORD *)(v68 + 24) = 2261LL;
            WdLogEvent5_WdAssertion(v68);
            v48 = a5[v46];
          }
          v49 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 520LL)
                                                                            + 8LL)
                                                                + 424LL))(
                  *((_QWORD *)v48 + 34),
                  v16);
          v44 = v49;
          if ( v49 < 0 )
            break;
          LODWORD(v16->Next) &= ~0x800u;
          ++v45;
          if ( ++v46 >= BroadcastContextCount )
            goto LABEL_42;
        }
        v69 = (CRefCountedBuffer *)v16[1].Next;
        if ( v69 )
          CRefCountedBuffer::RefCountedBufferRelease(v69);
        v70 = v45;
        for ( j = v70; j >= 0; --j )
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 520LL)
                                                             + 8LL)
                                                 + 440LL))(
            *((_QWORD *)a5[j] + 34),
            0LL);
        for ( ; v70 < BroadcastContextCount; ++v70 )
        {
          v72 = 0LL;
          if ( a2->NumPrimaries )
          {
            do
            {
              v50 = *((_QWORD *)&v16[13].Next + v72);
              if ( v50 )
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 544LL)
                                                                                    + 8LL)
                                                                        + 424LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5[v70] + 2) + 16LL) + 552LL),
                  0LL,
                  v50,
                  0LL);
              v72 = (unsigned int)(v72 + 1);
            }
            while ( (unsigned int)v72 < a2->NumPrimaries );
            BroadcastContextCount = (__int64)ListEntry;
          }
        }
        v73 = WdLogNewEntry5_WdWarning(v69, v41, v50);
        *(_QWORD *)(v73 + 24) = this;
        *(_QWORD *)(v73 + 32) = v44;
        WdLogEvent5_WdWarning(v73);
      }
      v13 = v78;
    }
  }
  v51 = (volatile signed __int32 *)v16[1].Next;
  if ( v51 && _InterlockedExchangeAdd(v51 + 1, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)v51, 0);
  ++*(_DWORD *)(v13 + 1148);
  if ( ExQueryDepthSList((PSLIST_HEADER)(v13 + 1120)) >= *(_WORD *)(v13 + 1136) )
  {
    ++*(_DWORD *)(v13 + 1152);
    (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v13 + 1176))(v16, v13 + 1120);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v13 + 1120), v16);
  }
  return (unsigned int)v44;
}
