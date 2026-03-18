/*
 * XREFs of ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C0064400
 * Callers:
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C00640A8 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00641C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 * Callees:
 *     McTemplateK0pppxqpq @ 0x1C0027620 (McTemplateK0pppxqpq.c)
 *     McTemplateK0pppxqq @ 0x1C00276DC (McTemplateK0pppxqq.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007ABE0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1C00B6B8C (-GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::AppendReadyPacket(
        VIDMM_PAGING_QUEUE *this,
        struct VIDMM_PAGING_QUEUE_PACKET *a2,
        unsigned __int64 *a3)
{
  bool v4; // zf
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  const GUID *v10; // r8
  unsigned __int64 v11; // rax
  VIDMM_PAGING_QUEUE **v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  VIDMM_DEVICE *v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  struct VIDMM_DEVICE *VidMmDevice; // rax
  __int64 v21; // rdx
  const GUID *v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  VIDMM_PAGING_QUEUE *v26; // rax
  VIDMM_PAGING_QUEUE **v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax

  v4 = *((_BYTE *)a2 + 24) == 0;
  *((_QWORD *)a2 + 2) = KeGetCurrentThread();
  if ( !v4 )
  {
    v7 = *((_QWORD *)a2 + 8);
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 160));
  }
  v8 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8 + 128, 0LL);
  *(_QWORD *)(v8 + 136) = KeGetCurrentThread();
  if ( *((_BYTE *)a2 + 25) )
  {
    *((_QWORD *)this + 12) += *((unsigned int *)this + 33);
    v11 = *((_QWORD *)this + 12);
    if ( !*((_BYTE *)this + 130) )
    {
      *((_DWORD *)this + 25) = 0;
      v11 = *((_QWORD *)this + 12);
    }
    *((_QWORD *)a2 + 4) = v11;
    *a3 = v11;
  }
  v12 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 5);
  if ( *v12 != (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
    goto LABEL_39;
  *(_QWORD *)a2 = (char *)this + 32;
  *((_QWORD *)a2 + 1) = v12;
  *v12 = a2;
  *((_QWORD *)this + 5) = a2;
  if ( *((_BYTE *)a2 + 24) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      VidMmDevice = VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(a2);
      McTemplateK0pppxqpq(
        *((_QWORD *)a2 + 5),
        v21,
        v22,
        *((_QWORD *)VidMmDevice + 3),
        this,
        a2,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)a2 + 12),
        *((_QWORD *)a2 + 8),
        *((_DWORD *)this + 29));
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
      v23[3] = a2;
      v23[4] = *((int *)a2 + 12);
      v23[5] = *((_QWORD *)a2 + 8);
      v23[6] = *((_QWORD *)a2 + 7);
      v23[7] = *((_QWORD *)a2 + 4);
    }
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pppxqq(
        (__int64)v12,
        v9,
        v10,
        *(_QWORD *)(**((_QWORD **)this + 10) + 24LL),
        this,
        a2,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)a2 + 12),
        *((_DWORD *)this + 29));
    if ( g_IsInternalReleaseOrDbg )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
      v24[3] = a2;
      v24[4] = *((int *)a2 + 12);
      v24[5] = *((unsigned __int8 *)a2 + 25);
      v24[6] = *((_QWORD *)a2 + 4);
    }
  }
  v13 = *((unsigned int *)this + 28);
  if ( !(_DWORD)v13 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
      v25[3] = this;
      v25[4] = *((int *)this + 28);
      v25[5] = 1LL;
      LODWORD(v13) = *((_DWORD *)this + 28);
    }
    if ( (_DWORD)v13 == 2 )
    {
      v26 = *(VIDMM_PAGING_QUEUE **)this;
      if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)this + 8LL) != this )
        goto LABEL_39;
      v27 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 1);
      if ( *v27 != this )
        goto LABEL_39;
      *v27 = v26;
      *((_QWORD *)v26 + 1) = v27;
      *(_QWORD *)this = 0LL;
      *((_QWORD *)this + 1) = 0LL;
    }
    v14 = *((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 1;
    if ( *((_BYTE *)this + 128) )
    {
      if ( *((_DWORD *)this + 29) == 3 )
      {
        v18 = *(_QWORD **)(v14 + 72);
        v15 = v14 + 64;
        if ( *v18 == v15 )
        {
LABEL_31:
          *(_QWORD *)this = v15;
          *((_QWORD *)this + 1) = v18;
          *v18 = this;
          *(_QWORD *)(v15 + 8) = this;
          KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 10) + 152LL), 0, 0);
          if ( *((_BYTE *)a2 + 24) )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              v28 = WdLogNewEntry5_WdTrace(v19);
              *(_QWORD *)(v28 + 24) = this;
              *(_QWORD *)(v28 + 32) = *((_QWORD *)a2 + 7);
            }
          }
          else if ( g_IsInternalReleaseOrDbg )
          {
            v29 = WdLogNewEntry5_WdTrace(v19);
            *(_QWORD *)(v29 + 24) = this;
            *(_QWORD *)(v29 + 32) = **((_QWORD **)this + 17);
          }
          goto LABEL_27;
        }
LABEL_39:
        __fastfail(3u);
      }
      v15 = v14 + 96;
    }
    else if ( *((_BYTE *)this + 129) )
    {
      v15 = v14 + 80;
    }
    else
    {
      v15 = v14 + 64;
    }
    v18 = *(_QWORD **)(v15 + 8);
    if ( *v18 == v15 )
      goto LABEL_31;
    goto LABEL_39;
  }
LABEL_27:
  v16 = (VIDMM_DEVICE *)*((_QWORD *)this + 17);
  ++*((_DWORD *)v16 + 16);
  VIDMM_DEVICE::EnsureSchedulable(v16, 1);
  ++*(_DWORD *)(*((_QWORD *)this + 10) + 144LL);
  v17 = *((_QWORD *)this + 10) + 128LL;
  *(_QWORD *)(v17 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v17, 0LL);
  KeLeaveCriticalRegion();
}
