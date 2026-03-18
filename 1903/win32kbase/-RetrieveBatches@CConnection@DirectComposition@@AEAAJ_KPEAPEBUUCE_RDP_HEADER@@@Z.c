/*
 * XREFs of ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0077DC8
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1C0077B30 (NtDCompositionGetConnectionBatch.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C01A382C (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C005647C (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     EtwTraceDCompGetBatchEvent @ 0x1C00782B0 (EtwTraceDCompGetBatchEvent.c)
 *     ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C00782CC (-GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z.c)
 *     ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C0078330 (-GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetrieveBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3)
{
  int UserModeViewAtOffset; // esi
  struct UCE_RDP_HEADER *v4; // r15
  struct UCE_RDP_HEADER *v5; // rdi
  bool v7; // r14
  __int64 v8; // rcx
  char v9; // r8
  char v10; // r12
  _QWORD *v11; // rdi
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  struct UCE_RDP_HEADER *v19; // rax
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // r14
  struct _ERESOURCE *v26; // r15
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  __int64 v30; // rax
  int v31; // eax
  int ChannelRDPHeaders; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  char v36; // [rsp+58h] [rbp-59h]
  bool v37; // [rsp+5Ch] [rbp-55h]
  struct UCE_RDP_HEADER *v38; // [rsp+60h] [rbp-51h] BYREF
  struct UCE_RDP_HEADER *v39; // [rsp+68h] [rbp-49h] BYREF
  struct UCE_RDP_HEADER *v40; // [rsp+70h] [rbp-41h]
  __int64 v41; // [rsp+78h] [rbp-39h] BYREF
  __int64 v42; // [rsp+80h] [rbp-31h] BYREF
  struct UCE_RDP_HEADER *v43; // [rsp+88h] [rbp-29h]
  __int64 v44; // [rsp+90h] [rbp-21h] BYREF
  __int64 v45; // [rsp+98h] [rbp-19h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-9h] BYREF
  struct UCE_RDP_HEADER *v48; // [rsp+B0h] [rbp-1h]
  __int64 v49; // [rsp+B8h] [rbp+7h]
  __int64 v50; // [rsp+C0h] [rbp+Fh]
  DirectComposition::CBatchSharedMemoryPool *v51; // [rsp+C8h] [rbp+17h] BYREF
  unsigned __int64 v52[7]; // [rsp+D0h] [rbp+1Fh] BYREF

  UserModeViewAtOffset = 0;
  v4 = 0LL;
  v43 = 0LL;
  v5 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v38 = 0LL;
  v7 = 0;
  if ( !a2 )
  {
    v34 = *((_QWORD *)this + 14);
    if ( v34 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v34 + 8) + 8LL))(*(_QWORD *)(v34 + 8)) != 3 )
        v7 = 1;
    }
  }
  v37 = v7;
  while ( 1 )
  {
    v8 = *((_QWORD *)this + 14);
    if ( !v8 || v7 )
      break;
    v9 = 0;
    v36 = 0;
    if ( *((_DWORD *)this + 37) == 1 )
    {
      v10 = 1;
      DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
        (DirectComposition::CConnection *)((char *)this + 192),
        (unsigned int)(*((_DWORD *)this + 37) - 1),
        &v51,
        v52);
      v5 = (struct UCE_RDP_HEADER *)(v52[0] + *((_QWORD *)v51 + 7));
      v38 = v5;
      UserModeViewAtOffset = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(
                               v51,
                               v52[0],
                               (void **)&v39);
      if ( UserModeViewAtOffset < 0 )
        return (unsigned int)UserModeViewAtOffset;
      *((_QWORD *)v5 + 1) = 0LL;
      v9 = 0;
      *((_DWORD *)v5 + 1) = 40;
      *(_DWORD *)v5 = 5;
      *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      *((_DWORD *)v5 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 696LL);
      *((_QWORD *)v5 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 688LL);
      *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      *((_DWORD *)this + 37) = 2;
    }
    else
    {
      if ( *((_DWORD *)this + 37) != 2 )
      {
        v10 = 0;
        goto LABEL_18;
      }
      if ( (*(_BYTE *)(v8 + 32) & 1) != 0 )
      {
        if ( *(_DWORD *)(v8 + 20) == 6 )
        {
          v9 = 1;
        }
        else
        {
          v36 = 1;
          ChannelRDPHeaders = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                                *(DirectComposition::CApplicationChannel **)(v8 + 8),
                                &v38,
                                &v39);
          v5 = v38;
          UserModeViewAtOffset = ChannelRDPHeaders;
          v9 = 0;
          if ( ChannelRDPHeaders >= 0 )
          {
            *((_QWORD *)v38 + 1) = 0LL;
            *((_DWORD *)v5 + 1) = 40;
            *(_DWORD *)v5 = 5;
            *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
            *((_DWORD *)v5 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 696LL);
            *((_QWORD *)v5 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 688LL);
          }
        }
        v10 = v36;
        *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      }
      else
      {
        v10 = 1;
        if ( *(_DWORD *)(v8 + 20) != 6 )
        {
          v11 = *(_QWORD **)(v8 + 136);
          v12 = 0LL;
          UserModeViewAtOffset = 0;
          v13 = *(_QWORD *)(v8 + 144);
          v50 = *(_QWORD *)(v8 + 152);
          v49 = v11[7];
          v14 = v11[6];
          if ( v14 )
            goto LABEL_11;
          v30 = v11[2];
          v45 = 0LL;
          v44 = 0LL;
          v41 = 0LL;
          UserModeViewAtOffset = MmMapViewOfSection(
                                   v11[3],
                                   *(_QWORD *)(v30 + 16),
                                   &v41,
                                   0LL,
                                   4096LL,
                                   &v45,
                                   &v44,
                                   2,
                                   0x400000,
                                   2);
          if ( UserModeViewAtOffset >= 0 )
          {
            v14 = v41;
            v11[6] = v41;
LABEL_11:
            v12 = v14 + v13 + 40;
          }
          if ( UserModeViewAtOffset < 0 )
            return (unsigned int)UserModeViewAtOffset;
          v15 = *((_QWORD *)this + 14);
          v16 = *(_QWORD **)(v15 + 136);
          v17 = *(_QWORD *)(v15 + 144);
          v18 = v16[6];
          v5 = (struct UCE_RDP_HEADER *)(v17 + v16[7]);
          v38 = v5;
          if ( v18 )
          {
LABEL_14:
            v19 = (struct UCE_RDP_HEADER *)(v17 + v18);
            v48 = v19;
          }
          else
          {
            v35 = v16[2];
            v47 = 0LL;
            v46 = 0LL;
            v42 = 0LL;
            if ( (int)MmMapViewOfSection(v16[3], *(_QWORD *)(v35 + 16), &v42, 0LL, 4096LL, &v47, &v46, 2, 0x400000, 2) >= 0 )
            {
              v18 = v42;
              v16[6] = v42;
              goto LABEL_14;
            }
            v19 = v48;
          }
          v39 = v19;
          v20 = *(_DWORD *)(*((_QWORD *)this + 14) + 20LL);
          *((_QWORD *)v5 + 1) = 0LL;
          *(_DWORD *)v5 = v20;
          *((_DWORD *)v5 + 1) = 40;
          v21 = *((_QWORD *)this + 14);
          if ( *(_DWORD *)(v21 + 20) == 7 )
          {
            *(_QWORD *)(v21 + 72) = *((_QWORD *)this + 21);
            *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
            v31 = v50;
            *((_QWORD *)v5 + 3) = v12;
            *((_DWORD *)v5 + 8) = v31;
            EtwTraceDCompGetBatchEvent(*((_QWORD *)this + 14));
            v9 = 1;
            v7 = v37;
            v10 = 1;
          }
          else
          {
            v9 = 1;
            v7 = v37;
            v10 = 1;
            if ( *(_DWORD *)(v21 + 20) == 8 )
            {
              v22 = v49;
              *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(v21 + 8) + 28LL);
              *((_QWORD *)v5 + 3) = *(_QWORD *)(v22 + v13 + 40);
            }
          }
          goto LABEL_18;
        }
        UserModeViewAtOffset = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                                 *(DirectComposition::CApplicationChannel **)(v8 + 8),
                                 &v38,
                                 &v39);
        if ( UserModeViewAtOffset < 0 )
          return (unsigned int)UserModeViewAtOffset;
        v5 = v38;
        v9 = 1;
        *((_QWORD *)v38 + 1) = 0LL;
        *((_DWORD *)v5 + 1) = 40;
        *(_DWORD *)v5 = 6;
        *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      }
    }
LABEL_18:
    if ( UserModeViewAtOffset < 0 )
      return (unsigned int)UserModeViewAtOffset;
    if ( v9 )
    {
      v23 = **((_QWORD **)this + 14);
      if ( !a2 && v23 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 8) + 8LL))(*(_QWORD *)(v23 + 8)) != 3 )
          v7 = 1;
        v37 = v7;
      }
      v24 = *((_QWORD *)this + 14);
      *(_BYTE *)(v24 + 32) |= 4u;
      v25 = *(_QWORD *)(v24 + 8);
      if ( *(_DWORD *)(v24 + 20) != 6 )
      {
        v26 = *(struct _ERESOURCE **)(v25 + 368);
        if ( v26 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v26, 1u);
          if ( (*(_DWORD *)(v25 + 224))-- == 1 )
            KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v25 + 360) + 8LL), 1, 0);
          ExReleaseResourceLite(*(PERESOURCE *)(v25 + 368));
          KeLeaveCriticalRegion();
        }
      }
      v27 = (_QWORD *)*((_QWORD *)this + 16);
      v28 = (_QWORD *)*((_QWORD *)this + 14);
      if ( v27 )
      {
        *v27 = v28;
        v28 = (_QWORD *)*((_QWORD *)this + 14);
      }
      else
      {
        *((_QWORD *)this + 15) = v28;
      }
      *((_QWORD *)this + 16) = v28;
      *v28 = 0LL;
      *((_QWORD *)this + 14) = v23;
    }
    v7 = v37;
    v4 = v40;
    if ( v10 )
    {
      if ( v43 )
      {
        *((_QWORD *)v43 + 1) = v39;
      }
      else
      {
        v4 = v39;
        v40 = v39;
      }
      v7 = v37;
      v43 = v5;
    }
  }
  *a3 = v4;
  *((_DWORD *)this + 36) = 0;
  return (unsigned int)UserModeViewAtOffset;
}
