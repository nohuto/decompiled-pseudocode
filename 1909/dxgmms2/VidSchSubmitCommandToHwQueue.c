/*
 * XREFs of VidSchSubmitCommandToHwQueue @ 0x1C0037930
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004258 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0018640 (memmove.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0039AC0 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C00827D0 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 *     ?GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z @ 0x1C00B52B0 (-GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00CCFF8 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSubmitCommandToHwQueue(__int64 a1, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  struct VIDSCH_SUBMIT_DATA2 *v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 result; // rax
  __int64 HwQueuePacket; // rbx
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rcx
  VIDMM_PROCESS *v13; // r15
  UINT v14; // ecx
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // eax
  char v22; // cl
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r8d
  _QWORD *v26; // rax
  void *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-35h] BYREF
  __int64 v33; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-21h] BYREF
  int v36; // [rsp+60h] [rbp-19h]
  __int64 v37; // [rsp+68h] [rbp-11h]
  _DXGKARG_SETROOTPAGETABLE v38; // [rsp+70h] [rbp-9h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0LL;
  v4 = a2;
  v6 = *(_QWORD *)(v2 + 8);
  v37 = *(_QWORD *)(v2 + 16);
  v7 = *(_QWORD *)(v6 + 32);
  if ( *(_BYTE *)(v6 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0) )
  {
    v30 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v30 + 24) = v6;
    *(_QWORD *)(v30 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v30);
    return 3223192064LL;
  }
  v33 = *(_QWORD *)a2;
  if ( (v33 & 0x20) == 0
    || (result = VidSchValidatePresentFlags(a2, (struct _VIDSCH_DEVICE *)v6, (struct _VIDSCH_SUBMIT_FLAGS *)&v33),
        (int)result >= 0) )
  {
    LOBYTE(a2) = 1;
    HwQueuePacket = VidSchiAllocateHwQueuePacket(a1, a2);
    *(_DWORD *)HwQueuePacket = 895576406;
    v10 = (v33 & 0x40000) == 0;
    *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(HwQueuePacket + 52) = 2;
    *(_DWORD *)(HwQueuePacket + 64) = 0;
    if ( v10 )
    {
      if ( ((*((_DWORD *)v4 + 32) - 3) & 0xFFFFFFFD) != 0 )
      {
        *(_DWORD *)(HwQueuePacket + 48) = 0;
        v11 = *(_QWORD *)(v6 + 40);
        v34 = 0LL;
        v32 = 0;
        v35 = 0LL;
        v12 = *(_QWORD *)(v11 + 8);
        v31 = 0;
        v13 = *(VIDMM_PROCESS **)(v12 + 72);
        if ( v13 )
          v13 = (VIDMM_PROCESS *)*((_QWORD *)v13 + 1);
        if ( v13 )
        {
          VIDMM_PROCESS::GetPageDirectoryData(
            v13,
            *(_DWORD *)(*(_QWORD *)(v7 + 16) + 208LL),
            *(unsigned __int16 *)(v37 + 6),
            &v34,
            &v31,
            &v32,
            &v35);
          if ( *(_QWORD *)(v2 + 248) != v34 )
          {
            v14 = v31;
            if ( v31 )
            {
              *(&v38.Address.SegmentId + 1) = 0;
              *(&v38.NumEntries + 1) = 0;
              *(_QWORD *)(v2 + 248) = v34;
              v38.hContext = *(HANDLE *)(v2 + 48);
              v38.Address.SegmentId = v32;
              v38.Address.SegmentOffset = v35;
              v38.NumEntries = v14;
              ((void (__fastcall **)(__int64, _DXGKARG_SETROOTPAGETABLE *))DxgCoreInterface)[49](
                *(_QWORD *)(v7 + 8),
                &v38);
              *(_QWORD *)(v2 + 256) = v38.Address.SegmentOffset;
              VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
                *(VIDMM_GLOBAL **)(*(_QWORD *)(v7 + 8) + 552LL),
                v13,
                &v38,
                (void *)v2);
            }
          }
        }
LABEL_14:
        v3 = 0LL;
      }
      else
      {
        *(_DWORD *)(HwQueuePacket + 48) = 3;
        v17 = *((unsigned int *)v4 + 31);
        if ( (_DWORD)v17 != -1 )
        {
          v18 = *((_DWORD *)v4 + 138);
          v19 = ((unsigned __int16)v18 | (unsigned __int16)(v18 >> 10)) & 0x3FF;
          if ( (((unsigned __int16)v18 | (unsigned __int16)(v18 >> 10)) & 0x3FF) != 0 )
          {
            v20 = *(_QWORD *)(v7 + 8 * v17 + 2576);
            while ( 1 )
            {
              v10 = !_BitScanForward((unsigned int *)&v21, v19);
              v22 = -1;
              v36 = v21;
              if ( !v10 )
                v22 = v21;
              v3 = (unsigned int)v22;
              v23 = 216 * v3;
              v24 = *(int *)(216 * v3 + v20 + 172);
              if ( (int)v24 <= -1 )
              {
                v25 = 0;
              }
              else
              {
                v23 = 136 * v24;
                v25 = *(_DWORD *)(136 * v24 + *(_QWORD *)(v7 + 2704) + 112);
              }
              if ( v25 == 2 )
                break;
              v19 = ~(1 << v3) & (unsigned int)v19;
              if ( !(_DWORD)v19 )
                goto LABEL_14;
            }
            v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v19);
            v26[5] = (unsigned int)v3;
            v26[3] = 281LL;
            v26[4] = 0x100000LL;
            v26[6] = *((unsigned int *)v4 + 31);
            v26[7] = v7;
            LOBYTE(v15) = WdLogEvent5_WdCriticalError(v26);
            __debugbreak();
            goto LABEL_31;
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(HwQueuePacket + 48) = 7;
    }
    *(_QWORD *)(HwQueuePacket + 96) = a1;
    *(_QWORD *)(HwQueuePacket + 104) = KeGetCurrentThread();
    v15 = v33;
    *(_QWORD *)(HwQueuePacket + 72) = v33;
    *(_QWORD *)(HwQueuePacket + 144) = *((_QWORD *)v4 + 13);
    *(_QWORD *)(HwQueuePacket + 152) = *((_QWORD *)v4 + 14);
    *(_DWORD *)(HwQueuePacket + 160) = *((_DWORD *)v4 + 31);
    if ( (v15 & 4) != 0 )
    {
      *(_DWORD *)(HwQueuePacket + 64) ^= (*(_DWORD *)(HwQueuePacket + 64) ^ (*(_DWORD *)(v7 + 1936) >> 4)) & 4;
      if ( ((*((_DWORD *)v4 + 32) - 3) & 0xFFFFFFFD) == 0 && (v15 & 0xC00) != 0x400 )
      {
        v16 = *((unsigned int *)v4 + 31);
        *((_QWORD *)v4 + 17) = ++*(_QWORD *)(v6 + 8 * v16 + 248);
      }
LABEL_35:
      memmove((void *)(HwQueuePacket + 272), v4, *((unsigned int *)v4 + 135));
      if ( *((_QWORD *)v4 + 3) != v3 && *(_BYTE *)(v2 + 89) == (_BYTE)v3 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(HwQueuePacket + 296) + 4LL));
      if ( *((_QWORD *)v4 + 5) != v3 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(HwQueuePacket + 312) + 4LL));
      v27 = *(void **)(HwQueuePacket + 368);
      if ( v27 )
        ObfReferenceObject(v27);
      v28 = *(_QWORD *)(HwQueuePacket + 280);
      if ( v28 && (*(_DWORD *)(HwQueuePacket + 272) & 0x8000000) != 0 && *(_QWORD *)(HwQueuePacket + 320) == v3 )
        *(_QWORD *)(HwQueuePacket + 320) = *(_QWORD *)(v28 + 96);
      VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)HwQueuePacket);
      v29 = *((unsigned int *)v4 + 31);
      if ( (unsigned int)v29 < *(_DWORD *)(v7 + 40) && (*(_BYTE *)v4 & 5) == 5 )
        _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v7 + 8 * v29 + 2576) + 66432LL), 2, 1);
      return 0LL;
    }
LABEL_31:
    if ( (v15 & 0x20) != 0 )
    {
      *(_DWORD *)(HwQueuePacket + 64) ^= (*(_DWORD *)(HwQueuePacket + 64) ^ (*(_DWORD *)(v7 + 1936) >> 5)) & 4;
    }
    else if ( *(_DWORD *)(HwQueuePacket + 48) != 7 )
    {
      *(_DWORD *)(HwQueuePacket + 64) |= 4u;
    }
    goto LABEL_35;
  }
  return result;
}
