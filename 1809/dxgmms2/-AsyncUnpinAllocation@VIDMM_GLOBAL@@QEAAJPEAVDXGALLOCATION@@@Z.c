/*
 * XREFs of ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0081774
 * Callers:
 *     VidMmAsyncUnpinAllocation @ 0x1C0017D10 (VidMmAsyncUnpinAllocation.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002A70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ @ 0x1C0017D24 (-AcquireInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C005F428 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0070FA4 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AsyncUnpinAllocation(VIDMM_GLOBAL *this, struct DXGALLOCATION *a2)
{
  __int64 v2; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rax
  _BYTE v14[8]; // [rsp+20h] [rbp-68h] BYREF
  DXGPUSHLOCK *v15; // [rsp+28h] [rbp-60h]
  int v16; // [rsp+30h] [rbp-58h]
  LIST_ENTRY v17; // [rsp+40h] [rbp-48h] BYREF
  int v18; // [rsp+60h] [rbp-28h]
  VIDMM_GLOBAL *v19; // [rsp+68h] [rbp-20h]
  struct DXGALLOCATION *v20; // [rsp+70h] [rbp-18h]

  v2 = *((_QWORD *)a2 + 3);
  v5 = 0;
  if ( VIDMM_GLOBAL::IsTdrPending(this) || *(_BYTE *)(v7 + 7072) )
  {
    v13 = WdLogNewEntry5_WdEvent(v7, v6);
    *(_QWORD *)(v13 + 24) = a2;
    WdLogEvent5_WdEvent(v13);
    return 3221225473LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)(v7 + 41392), 0);
    DXGPUSHLOCK::AcquireExclusive(v15);
    v8 = *(_BYTE *)(v2 + 25);
    v16 = 2;
    if ( (v8 & 2) != 0 )
    {
      *(_BYTE *)(v2 + 25) = v8 & 0xFB;
      DxgkUnreferenceDxgResource(*((struct DXGRESOURCE **)a2 + 5));
      DxgkUnreferenceDxgAllocation(a2);
    }
    else
    {
      v18 = 3;
      v19 = this;
      v20 = a2;
      if ( (unsigned int)VidMmQueueAsyncOperation(&v17) )
      {
        v11 = WdLogNewEntry5_WdEvent(v10, v9);
        *(_QWORD *)(v11 + 24) = v2;
        *(_QWORD *)(v11 + 32) = a2;
        WdLogEvent5_WdEvent(v11);
        *(_BYTE *)(v2 + 25) = *(_BYTE *)(v2 + 25) & 0xF9 | 2;
        DXGINVERSESEMAPHORE::AcquireInverseSemaphore((VIDMM_GLOBAL *)((char *)this + 41152));
      }
      else
      {
        v5 = -1073741801;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
    return v5;
  }
}
