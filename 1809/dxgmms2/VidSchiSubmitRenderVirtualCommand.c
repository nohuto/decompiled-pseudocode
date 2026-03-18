/*
 * XREFs of VidSchiSubmitRenderVirtualCommand @ 0x1C0068800
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0086990 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00C7240 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C0003388 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0003A10 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0005150 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C00083F0 (VidSchIsTDRPending.c)
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0015A6C (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0066B38 (VidSchWaitForCompletionEvent.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C007ED58 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00C6830 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderVirtualCommand(_VIDSCH_QUEUE_PACKET *this)
{
  _QWORD *v1; // r13
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rbx
  __int64 i; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  bool v17; // cf
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  _QWORD *v23; // rdx
  __int64 v24; // rbp
  UINT v25; // ebx
  UINT v26; // r12d
  __int64 v27; // rcx
  struct VIDMM_PROCESS *v28; // r15
  unsigned __int16 v29; // r8
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // r14
  __int64 v34; // rax
  UINT64 v35; // r14
  struct _KEVENT *v36; // rcx
  int v38; // r8d
  __int64 v39; // rax
  ADAPTER_RENDER *v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  void (__fastcall *v43)(_QWORD); // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+20h] [rbp-108h]
  _DWORD v46[40]; // [rsp+30h] [rbp-F8h] BYREF
  struct _DXGKARG_SETROOTPAGETABLE v47; // [rsp+D0h] [rbp-58h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 11);
  v3 = v1[13];
  v4 = v1[12];
  v5 = *(_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(v5 + 2428) & 1) == 0
    && !VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
    && !*(_BYTE *)(v3 + 204)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0) )
  {
    v6 = *(unsigned __int16 *)(v4 + 4);
    v7 = *(__int64 **)(v5 + 616);
    if ( (unsigned int)v6 < *(_DWORD *)(v5 + 688) )
      v7 += v6;
    v8 = *v7;
    v45 = ++*(_QWORD *)(v8 + 48);
    *((_QWORD *)this + 15) = v45;
    _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer(this);
    for ( i = *(_QWORD *)(v4 + 24); ; VidSchWaitForCompletionEvent(i, (__int64)v46, (const GUID *)0x14) )
    {
      *(_QWORD *)(i + 1376) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1336));
      v10 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1656), (_QWORD **)(v4 + 11200), 0LL);
      if ( v10 )
        break;
      memset(v46, 0, sizeof(v46));
      v41 = *(unsigned __int16 *)(v4 + 4);
      v46[8] |= 0x41u;
      v46[12] = v41;
      v46[4] = 0;
      v46[5] = 1;
    }
    v11 = (__int64)(v10 - 2);
    memset(v10 - 2, 0, 0xE0uLL);
    *(_QWORD *)(v11 + 56) = this;
    *(_DWORD *)v11 = 912353622;
    *(_QWORD *)(v11 + 48) = v1;
    *(_QWORD *)(v11 + 64) = *((_QWORD *)this + 35);
    v12 = *(_QWORD *)(v11 + 56);
    *(_QWORD *)(v11 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v11 + 72) = 7;
    v13 = *(_DWORD *)(v11 + 92) ^ (*(_DWORD *)(v11 + 92) ^ (*(_DWORD *)(v12 + 72) >> 3)) & 4;
    *(_DWORD *)(v11 + 92) = v13;
    v14 = ((unsigned __int8)v13 ^ (unsigned __int8)(*(_DWORD *)(v12 + 72) >> 4)) & 8 ^ v13;
    *(_DWORD *)(v11 + 92) = v14;
    v15 = ((unsigned __int16)v14 ^ (unsigned __int16)(*(_DWORD *)(v12 + 72) >> 8)) & 0x100 ^ v14;
    *(_DWORD *)(v11 + 92) = v15;
    v16 = ((unsigned __int8)v15 ^ (unsigned __int8)(4 * *(_DWORD *)(v12 + 72))) & 0x10 ^ v15 | 0x2000;
    *(_DWORD *)(v11 + 92) = v16;
    v17 = *((_DWORD *)this + 32) != 0;
    *(_QWORD *)(v11 + 104) = v45;
    v18 = v16 & 0xFFFFBFFF | (v17 ? 0x4000 : 0);
    *(_DWORD *)(v11 + 88) = 0;
    v19 = *(_QWORD *)(v11 + 64);
    *(_DWORD *)(v11 + 92) = v18;
    *(_DWORD *)(v11 + 96) = *((_DWORD *)this + 28);
    if ( v19 )
    {
      v38 = v18 | 2;
      *(_DWORD *)(v11 + 92) = v38;
      *(_DWORD *)(v11 + 92) = v38 ^ ((unsigned __int8)v38 ^ (unsigned __int8)BYTE1(*((_DWORD *)this + 18))) & 1;
      *(_QWORD *)(v11 + 112) = *(_QWORD *)(v19 + 160);
    }
    *(_QWORD *)(v11 + 176) = *(_QWORD *)(v12 + 320);
    if ( (*(_DWORD *)(v12 + 272) & 0x8000000) != 0 )
    {
      v20 = *(_QWORD *)(v12 + 288);
      if ( v20 )
      {
        v21 = v20 + 8;
      }
      else
      {
        v39 = *(_QWORD *)(v12 + 280);
        if ( v39 )
          v21 = *(_QWORD *)(v39 + 128);
        else
          v21 = 0LL;
      }
      *(_QWORD *)(v11 + 192) = v21;
      *(_DWORD *)(v11 + 184) = *(_DWORD *)(v12 + 360);
    }
    else
    {
      *(_QWORD *)(v11 + 192) = 0LL;
    }
    *(_DWORD *)(v11 + 152) = 0;
    *(_DWORD *)(v11 + 156) = *(_DWORD *)(v12 + 356);
    *(_DWORD *)(v11 + 144) = 0;
    *(_DWORD *)(v11 + 148) = *(_DWORD *)(v12 + 332);
    v22 = *((_DWORD *)this + 18);
    if ( (v22 & 1) != 0 )
    {
      v42 = *((unsigned int *)this + 99);
      if ( (_DWORD)v42 != -1 && (v22 & 0x40000) == 0 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v5 + 8 * v42 + 2576) + 33272LL) != -1 )
        {
          v43 = *(void (__fastcall **)(_QWORD))(v5 + 2432);
          if ( v43 )
            v43(*(_QWORD *)(v5 + 2496));
        }
        *(_DWORD *)(v11 + 92) |= 0x800u;
      }
    }
    v23 = *(_QWORD **)(v11 + 48);
    v24 = 0LL;
    v25 = 0;
    v26 = 0;
    v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23[13] + 40LL) + 8LL) + 72LL);
    if ( v27 )
      v28 = *(struct VIDMM_PROCESS **)(v27 + 8);
    else
      v28 = 0LL;
    if ( !v28 )
      goto LABEL_27;
    v29 = *(_WORD *)(v4 + 6);
    v30 = *(unsigned int *)(*(_QWORD *)(v5 + 16) + 208LL);
    v31 = *(_QWORD *)(*((_QWORD *)v28 + 2) + 8 * v30);
    if ( v31 )
    {
      v32 = *(_QWORD *)(v31 + 496);
      if ( v32 )
      {
        v33 = v29;
        v34 = *(_QWORD *)(v32 + 112) + 32LL * v29;
        if ( v34 )
        {
          v30 = *(_QWORD *)v34;
          if ( *(_QWORD *)v34 )
          {
            v30 = *(_QWORD *)(v30 + 8);
            if ( v30 )
            {
              if ( *(_QWORD *)(v30 + 136) )
              {
                v24 = *(_QWORD *)(v34 + 8);
                v26 = *(_DWORD *)(v34 + 16);
                v35 = *(_QWORD *)(v30 + 144);
                v25 = *(_DWORD *)(v34 + 24);
                goto LABEL_26;
              }
            }
          }
        }
        v44 = WdLogNewEntry5_WdAssertion(v30, v31);
        *(_QWORD *)(v44 + 24) = v32;
        *(_QWORD *)(v44 + 32) = v33;
        WdLogEvent5_WdAssertion(v44);
      }
      v25 = 0;
    }
    v35 = 0LL;
LABEL_26:
    v23 = *(_QWORD **)(v11 + 48);
    if ( v23[101] != v24 )
    {
      if ( v26 )
      {
        v23[101] = v24;
        memset(&v47, 0, sizeof(v47));
        v47.hContext = *(HANDLE *)(*(_QWORD *)(v11 + 48) + 64LL);
        v40 = *(ADAPTER_RENDER **)(v5 + 8);
        v47.Address.SegmentId = v25;
        v47.Address.SegmentOffset = v35;
        v47.NumEntries = v26;
        ADAPTER_RENDER::DdiSetRootPageTable(v40, &v47);
        v1[102] = v47.Address.SegmentOffset;
        VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
          *(VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 8) + 552LL),
          v28,
          &v47,
          v1);
        v23 = *(_QWORD **)(v11 + 48);
      }
    }
LABEL_27:
    v36 = (struct _KEVENT *)v23[12];
    *(_QWORD *)(v11 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v11 + 72) = 8;
    v36[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v36 + 10);
    VidSchiSendToExecutionQueue(v11, 1);
    return 0LL;
  }
  VidSchiDiscardQueuePacket(this);
  return 3221225473LL;
}
