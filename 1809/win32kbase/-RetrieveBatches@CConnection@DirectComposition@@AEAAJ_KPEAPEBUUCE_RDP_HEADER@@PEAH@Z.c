/*
 * XREFs of ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C0058ED8
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1C0058BE0 (NtDCompositionGetConnectionBatch.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C016778C (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@PEAH@Z.c)
 * Callees:
 *     EtwTraceDCompGetBatchEvent @ 0x1C00593E0 (EtwTraceDCompGetBatchEvent.c)
 *     ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C00593FC (-GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z.c)
 *     ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C0059460 (-GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C005C09C (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0x @ 0x1C00EB524 (McTemplateK0x.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetrieveBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3,
        int *a4)
{
  int v4; // ebx
  int UserModeViewAtOffset; // r14d
  struct UCE_RDP_HEADER *v7; // r12
  struct UCE_RDP_HEADER *v8; // rsi
  char v9; // r15
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r15
  __int64 v17; // r12
  __int64 v18; // rax
  struct UCE_RDP_HEADER *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // r15
  struct _ERESOURCE *v25; // r12
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  int ChannelRDPHeaders; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  char v38; // [rsp+59h] [rbp-68h]
  char v39; // [rsp+5Ch] [rbp-65h]
  struct UCE_RDP_HEADER *v40; // [rsp+60h] [rbp-61h] BYREF
  struct UCE_RDP_HEADER *v41; // [rsp+68h] [rbp-59h] BYREF
  struct UCE_RDP_HEADER *v42; // [rsp+70h] [rbp-51h]
  __int64 v43; // [rsp+78h] [rbp-49h] BYREF
  __int64 v44; // [rsp+80h] [rbp-41h] BYREF
  struct UCE_RDP_HEADER *v45; // [rsp+88h] [rbp-39h]
  __int64 v46; // [rsp+90h] [rbp-31h] BYREF
  __int64 v47; // [rsp+98h] [rbp-29h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-19h] BYREF
  struct UCE_RDP_HEADER *v50; // [rsp+B0h] [rbp-11h]
  __int64 v51; // [rsp+B8h] [rbp-9h]
  __int64 v52; // [rsp+C0h] [rbp-1h]
  __int64 v53; // [rsp+C8h] [rbp+7h]
  DirectComposition::CBatchSharedMemoryPool *v54; // [rsp+D0h] [rbp+Fh] BYREF
  unsigned __int64 v55[8]; // [rsp+D8h] [rbp+17h] BYREF
  const struct UCE_RDP_HEADER **v57; // [rsp+138h] [rbp+77h]

  v57 = a3;
  v4 = 0;
  v45 = 0LL;
  UserModeViewAtOffset = 0;
  v42 = 0LL;
  v7 = 0LL;
  v40 = 0LL;
  v8 = 0LL;
  v41 = 0LL;
  if ( a2
    || (v35 = *((_QWORD *)this + 14)) == 0
    || (v9 = 1, (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v35 + 8) + 8LL))(*(_QWORD *)(v35 + 8)) == 3) )
  {
    v9 = 0;
  }
  v39 = v9;
  while ( 1 )
  {
    v10 = *((_QWORD *)this + 14);
    if ( !v10 || v9 )
      break;
    LOBYTE(a3) = 0;
    v38 = 0;
    if ( *((_DWORD *)this + 37) == 1 )
    {
      v38 = 1;
      DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
        (DirectComposition::CConnection *)((char *)this + 192),
        (unsigned int)(*((_DWORD *)this + 37) - 1),
        &v54,
        v55);
      v8 = (struct UCE_RDP_HEADER *)(v55[0] + *((_QWORD *)v54 + 7));
      v40 = v8;
      UserModeViewAtOffset = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(
                               v54,
                               v55[0],
                               (void **)&v41);
      if ( UserModeViewAtOffset < 0 )
        return (unsigned int)UserModeViewAtOffset;
      *((_DWORD *)v8 + 1) = 40;
      LOBYTE(a3) = 0;
      *(_DWORD *)v8 = 5;
      *((_QWORD *)v8 + 1) = 0LL;
      *((_DWORD *)v8 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      *((_DWORD *)v8 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 696LL);
      *((_QWORD *)v8 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 688LL);
      *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      *((_DWORD *)this + 37) = 2;
    }
    else
    {
      if ( *((_DWORD *)this + 37) != 2 )
        goto LABEL_18;
      if ( (*(_BYTE *)(v10 + 32) & 1) != 0 )
      {
        if ( *(_DWORD *)(v10 + 20) == 6 )
        {
          LOBYTE(a3) = 1;
        }
        else
        {
          v38 = 1;
          ChannelRDPHeaders = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                                *(DirectComposition::CApplicationChannel **)(v10 + 8),
                                &v40,
                                &v41);
          v8 = v40;
          UserModeViewAtOffset = ChannelRDPHeaders;
          LOBYTE(a3) = 0;
          if ( ChannelRDPHeaders >= 0 )
          {
            *((_DWORD *)v40 + 1) = 40;
            *(_DWORD *)v8 = 5;
            *((_QWORD *)v8 + 1) = 0LL;
            *((_DWORD *)v8 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
            *((_DWORD *)v8 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 696LL);
            *((_QWORD *)v8 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 688LL);
          }
        }
        *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      }
      else
      {
        v38 = 1;
        if ( *(_DWORD *)(v10 + 20) != 6 )
        {
          v11 = *(_QWORD **)(v10 + 136);
          v12 = 0LL;
          UserModeViewAtOffset = 0;
          v13 = *(_QWORD *)(v10 + 144);
          v53 = *(_QWORD *)(v10 + 152);
          v52 = v11[7];
          v14 = v11[6];
          v51 = v13;
          if ( v14 )
            goto LABEL_11;
          v30 = v11[3];
          v47 = 0LL;
          v31 = v11[2];
          v46 = 0LL;
          v43 = 0LL;
          UserModeViewAtOffset = MmMapViewOfSection(
                                   v30,
                                   *(_QWORD *)(v31 + 16),
                                   &v43,
                                   0LL,
                                   4096LL,
                                   &v47,
                                   &v46,
                                   2,
                                   0x400000,
                                   2);
          if ( UserModeViewAtOffset >= 0 )
          {
            v14 = v43;
            v11[6] = v43;
LABEL_11:
            v12 = v14 + v13 + 40;
          }
          if ( UserModeViewAtOffset < 0 )
            return (unsigned int)UserModeViewAtOffset;
          v15 = *((_QWORD *)this + 14);
          v16 = *(_QWORD **)(v15 + 136);
          v17 = *(_QWORD *)(v15 + 144);
          v18 = v16[6];
          v8 = (struct UCE_RDP_HEADER *)(v17 + v16[7]);
          v40 = v8;
          if ( v18 )
          {
LABEL_14:
            v19 = (struct UCE_RDP_HEADER *)(v17 + v18);
            v50 = v19;
          }
          else
          {
            v36 = v16[3];
            v49 = 0LL;
            v37 = v16[2];
            v48 = 0LL;
            v44 = 0LL;
            if ( (int)MmMapViewOfSection(v36, *(_QWORD *)(v37 + 16), &v44, 0LL, 4096LL, &v49, &v48, 2, 0x400000, 2) >= 0 )
            {
              v18 = v44;
              v16[6] = v44;
              goto LABEL_14;
            }
            v19 = v50;
          }
          v41 = v19;
          *(_DWORD *)v8 = *(_DWORD *)(*((_QWORD *)this + 14) + 20LL);
          *((_DWORD *)v8 + 1) = 40;
          *((_QWORD *)v8 + 1) = 0LL;
          v20 = *((_QWORD *)this + 14);
          if ( *(_DWORD *)(v20 + 20) == 7 )
          {
            *(_QWORD *)(v20 + 72) = *((_QWORD *)this + 21);
            *((_DWORD *)v8 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
            v32 = v53;
            *((_QWORD *)v8 + 3) = v12;
            *((_DWORD *)v8 + 8) = v32;
            EtwTraceDCompGetBatchEvent(*((_QWORD *)this + 14), v20, a3);
            LOBYTE(a3) = 1;
            v9 = v39;
          }
          else
          {
            LOBYTE(a3) = 1;
            v9 = v39;
            if ( *(_DWORD *)(v20 + 20) == 8 )
            {
              v21 = v51;
              *((_DWORD *)v8 + 4) = *(_DWORD *)(*(_QWORD *)(v20 + 8) + 28LL);
              *((_QWORD *)v8 + 3) = *(_QWORD *)(v52 + v21 + 40);
            }
          }
          goto LABEL_18;
        }
        UserModeViewAtOffset = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                                 *(DirectComposition::CApplicationChannel **)(v10 + 8),
                                 &v40,
                                 &v41);
        if ( UserModeViewAtOffset < 0 )
          return (unsigned int)UserModeViewAtOffset;
        v8 = v40;
        LOBYTE(a3) = 1;
        *((_DWORD *)v40 + 1) = 40;
        *(_DWORD *)v8 = 6;
        *((_QWORD *)v8 + 1) = 0LL;
        *((_DWORD *)v8 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      }
    }
LABEL_18:
    if ( UserModeViewAtOffset < 0 )
      return (unsigned int)UserModeViewAtOffset;
    if ( (_BYTE)a3 )
    {
      v22 = **((_QWORD **)this + 14);
      if ( !a2 && v22 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v22 + 8) + 8LL))(*(_QWORD *)(v22 + 8)) != 3 )
          v9 = 1;
        v39 = v9;
      }
      v23 = *((_QWORD *)this + 14);
      *(_BYTE *)(v23 + 32) |= 4u;
      v24 = *(_QWORD *)(v23 + 8);
      if ( *(_DWORD *)(v23 + 20) != 6 )
      {
        v25 = *(struct _ERESOURCE **)(v24 + 368);
        if ( v25 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v25, 1u);
          if ( (*(_DWORD *)(v24 + 224))-- == 1 )
            KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v24 + 360) + 8LL), 1, 0);
          ExReleaseResourceLite(*(PERESOURCE *)(v24 + 368));
          KeLeaveCriticalRegion();
        }
      }
      v26 = (_QWORD *)*((_QWORD *)this + 16);
      v27 = (_QWORD *)*((_QWORD *)this + 14);
      if ( v26 )
      {
        *v26 = v27;
        v27 = (_QWORD *)*((_QWORD *)this + 14);
      }
      else
      {
        *((_QWORD *)this + 15) = v27;
      }
      *((_QWORD *)this + 16) = v27;
      *v27 = 0LL;
      *((_QWORD *)this + 14) = v22;
    }
    v9 = v39;
    v7 = v42;
    if ( v38 )
    {
      if ( v45 )
      {
        *((_QWORD *)v45 + 1) = v41;
      }
      else
      {
        v7 = v41;
        v42 = v41;
      }
      v9 = v39;
      v45 = v8;
    }
  }
  *v57 = v7;
  v28 = *((_DWORD *)this + 64);
  *((_DWORD *)this + 65) = v28;
  *((_DWORD *)this + 36) = 0;
  LOBYTE(v4) = v28 > 0;
  *a4 = v4;
  if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
    McTemplateK0x(v10, &HighWorkLoadBatchCountUpdatedSubmit, a3, *((int *)this + 65));
  return (unsigned int)UserModeViewAtOffset;
}
