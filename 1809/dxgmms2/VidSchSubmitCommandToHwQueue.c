/*
 * XREFs of VidSchSubmitCommandToHwQueue @ 0x1C0036EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0002CD0 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001A680 (memmove.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003907C (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C007ED58 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 *     ?GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z @ 0x1C00B2204 (-GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00CA558 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSubmitCommandToHwQueue(__int64 a1, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  struct VIDSCH_SUBMIT_DATA2 *v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 result; // rax
  __int64 HwQueuePacket; // rbx
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rcx
  VIDMM_PROCESS *v14; // r15
  UINT v15; // r12d
  __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r9
  int v23; // eax
  char v24; // cl
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r8d
  _QWORD *v28; // rax
  void *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v34; // [rsp+44h] [rbp-35h] BYREF
  __int64 v35; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-21h] BYREF
  int v38; // [rsp+60h] [rbp-19h]
  __int64 v39; // [rsp+68h] [rbp-11h]
  _DXGKARG_SETROOTPAGETABLE v40; // [rsp+70h] [rbp-9h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0LL;
  v4 = a2;
  v39 = a1;
  v6 = *(_QWORD *)(v2 + 8);
  v7 = *(_QWORD *)(v2 + 16);
  v8 = *(_QWORD *)(v6 + 32);
  if ( *(_BYTE *)(v6 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0) )
  {
    v32 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v32 + 24) = v6;
    *(_QWORD *)(v32 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v32);
    return 3223192064LL;
  }
  v35 = *(_QWORD *)a2;
  if ( (v35 & 0x20) == 0
    || (result = VidSchValidatePresentFlags(a2, (struct _VIDSCH_DEVICE *)v6, (struct _VIDSCH_SUBMIT_FLAGS *)&v35),
        (int)result >= 0) )
  {
    LOBYTE(a2) = 1;
    HwQueuePacket = VidSchiAllocateHwQueuePacket(a1, a2);
    *(_DWORD *)HwQueuePacket = 895576406;
    v11 = (v35 & 0x40000) == 0;
    *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(HwQueuePacket + 52) = 2;
    *(_DWORD *)(HwQueuePacket + 64) = 0;
    if ( v11 )
    {
      if ( ((*((_DWORD *)v4 + 32) - 3) & 0xFFFFFFFD) != 0 )
      {
        *(_DWORD *)(HwQueuePacket + 48) = 0;
        v12 = *(_QWORD *)(v6 + 40);
        v36 = 0LL;
        v34 = 0;
        v37 = 0LL;
        v13 = *(_QWORD *)(v12 + 8);
        v33 = 0;
        v14 = *(VIDMM_PROCESS **)(v13 + 72);
        if ( v14 )
          v14 = (VIDMM_PROCESS *)*((_QWORD *)v14 + 1);
        if ( v14 )
        {
          VIDMM_PROCESS::GetPageDirectoryData(
            v14,
            *(_DWORD *)(*(_QWORD *)(v8 + 16) + 208LL),
            *(unsigned __int16 *)(v7 + 6),
            &v36,
            &v33,
            &v34,
            &v37);
          if ( *(_QWORD *)(v2 + 248) != v36 )
          {
            v15 = v33;
            if ( v33 )
            {
              *(_QWORD *)(v2 + 248) = v36;
              memset(&v40, 0, sizeof(v40));
              v16 = *(_QWORD *)(v8 + 8);
              v40.hContext = *(HANDLE *)(v2 + 48);
              v40.Address.SegmentId = v34;
              v40.Address.SegmentOffset = v37;
              v40.NumEntries = v15;
              ((void (__fastcall **)(__int64, _DXGKARG_SETROOTPAGETABLE *))DxgCoreInterface)[49](v16, &v40);
              *(_QWORD *)(v2 + 256) = v40.Address.SegmentOffset;
              VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
                *(VIDMM_GLOBAL **)(*(_QWORD *)(v8 + 8) + 552LL),
                v14,
                &v40,
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
        v19 = *((unsigned int *)v4 + 31);
        if ( (_DWORD)v19 != -1 )
        {
          v20 = *((_DWORD *)v4 + 140);
          v21 = ((unsigned __int16)v20 | (unsigned __int16)(v20 >> 10)) & 0x3FF;
          if ( (((unsigned __int16)v20 | (unsigned __int16)(v20 >> 10)) & 0x3FF) != 0 )
          {
            v22 = *(_QWORD *)(v8 + 8 * v19 + 2576);
            while ( 1 )
            {
              v11 = !_BitScanForward((unsigned int *)&v23, v21);
              v24 = -1;
              v38 = v23;
              if ( !v11 )
                v24 = v23;
              v3 = (unsigned int)v24;
              v25 = 216 * v3;
              v26 = *(int *)(216 * v3 + v22 + 164);
              if ( (int)v26 <= -1 )
              {
                v27 = 0;
              }
              else
              {
                v25 = 136 * v26;
                v27 = *(_DWORD *)(136 * v26 + *(_QWORD *)(v8 + 2704) + 112);
              }
              if ( v27 == 2 )
                break;
              v21 = ~(1 << v3) & (unsigned int)v21;
              if ( !(_DWORD)v21 )
                goto LABEL_14;
            }
            v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v21);
            v28[5] = (unsigned int)v3;
            v28[3] = 281LL;
            v28[4] = 0x100000LL;
            v28[6] = *((unsigned int *)v4 + 31);
            v28[7] = v8;
            LOBYTE(v17) = WdLogEvent5_WdCriticalError(v28);
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
    *(_QWORD *)(HwQueuePacket + 96) = v39;
    *(_QWORD *)(HwQueuePacket + 104) = KeGetCurrentThread();
    v17 = v35;
    *(_QWORD *)(HwQueuePacket + 72) = v35;
    *(_QWORD *)(HwQueuePacket + 144) = *((_QWORD *)v4 + 13);
    *(_QWORD *)(HwQueuePacket + 152) = *((_QWORD *)v4 + 14);
    *(_DWORD *)(HwQueuePacket + 160) = *((_DWORD *)v4 + 31);
    if ( (v17 & 4) != 0 )
    {
      *(_DWORD *)(HwQueuePacket + 64) ^= (*(_DWORD *)(HwQueuePacket + 64) ^ (*(_DWORD *)(v8 + 1936) >> 4)) & 4;
      if ( ((*((_DWORD *)v4 + 32) - 3) & 0xFFFFFFFD) == 0 && (v17 & 0xC00) != 0x400 )
      {
        v18 = *((unsigned int *)v4 + 31);
        *((_QWORD *)v4 + 17) = ++*(_QWORD *)(v6 + 8 * v18 + 248);
      }
      goto LABEL_34;
    }
LABEL_31:
    if ( (v17 & 0x20) != 0 )
      *(_DWORD *)(HwQueuePacket + 64) ^= (*(_DWORD *)(HwQueuePacket + 64) ^ (*(_DWORD *)(v8 + 1936) >> 5)) & 4;
    else
      *(_DWORD *)(HwQueuePacket + 64) |= 4u;
LABEL_34:
    memmove((void *)(HwQueuePacket + 272), v4, *((unsigned int *)v4 + 135));
    if ( *((_QWORD *)v4 + 3) != v3 && *(_BYTE *)(v2 + 89) == (_BYTE)v3 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(HwQueuePacket + 296) + 4LL));
    if ( *((_QWORD *)v4 + 5) != v3 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(HwQueuePacket + 312) + 4LL));
    v29 = *(void **)(HwQueuePacket + 368);
    if ( v29 )
      ObfReferenceObject(v29);
    v30 = *(_QWORD *)(HwQueuePacket + 280);
    if ( v30 && (*(_DWORD *)(HwQueuePacket + 272) & 0x8000000) != 0 && *(_QWORD *)(HwQueuePacket + 320) == v3 )
      *(_QWORD *)(HwQueuePacket + 320) = *(_QWORD *)(v30 + 96);
    VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)HwQueuePacket);
    v31 = *((unsigned int *)v4 + 31);
    if ( (unsigned int)v31 < *(_DWORD *)(v8 + 40) && (*(_BYTE *)v4 & 5) == 5 )
      _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v31 + 2576) + 66416LL), 2, 1);
    return 0LL;
  }
  return result;
}
