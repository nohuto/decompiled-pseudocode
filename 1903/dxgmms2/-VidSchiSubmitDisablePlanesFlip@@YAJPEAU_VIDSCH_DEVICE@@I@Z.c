/*
 * XREFs of ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002BAFC
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0003A50 (VidSchiSetFlipDevice.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0008420 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000CF70 (VidSchiExecuteMmIoFlip.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011290 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011414 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0015968 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0018640 (memmove.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0029D44 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C002A07C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     VidSchIsVSyncEnabled @ 0x1C007ADA0 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiSubmitDisablePlanesFlip(struct _VIDSCH_DEVICE *a1, unsigned int a2)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  __int64 v5; // rbx
  __int64 v6; // r13
  unsigned int *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int *v11; // rdi
  void (__fastcall *v12)(_QWORD); // rax
  __int64 v13; // rcx
  unsigned int v14; // r8d
  bool v15; // zf
  int v16; // eax
  char v17; // cl
  __int64 v18; // rdi
  unsigned int *v19; // rbx
  void *v20; // rcx
  unsigned int v21; // r8d
  unsigned int *Src; // [rsp+30h] [rbp-49h]
  struct _SLIST_ENTRY *v24[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-31h] BYREF
  char v26; // [rsp+58h] [rbp-21h]
  _QWORD v27[4]; // [rsp+60h] [rbp-19h] BYREF
  __int16 v28; // [rsp+80h] [rbp+7h]
  char v29; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v30; // [rsp+E8h] [rbp+6Fh]
  int v31; // [rsp+F0h] [rbp+77h]
  int v32; // [rsp+F8h] [rbp+7Fh]

  v30 = a2;
  v2 = *((_QWORD *)a1 + 4);
  v3 = 0;
  v5 = a2;
  v6 = *(_QWORD *)(v2 + 8LL * a2 + 2576);
  if ( !v6 )
    return 0LL;
  v7 = *(unsigned int **)(v6 + 24);
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(v2 + 16);
  v24[0] = 0LL;
  v24[1] = *(struct _SLIST_ENTRY **)(v8 + 2560);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v24);
  if ( v24[0] )
  {
    v11 = (unsigned int *)(&v24[0][34].Next + 1);
    if ( !BYTE4(v24[0][22].Next) )
      v11 = (unsigned int *)(&v24[0][30].Next + 1);
    Src = v11;
    *v11 ^= (*v11 ^ (((1 << *(_DWORD *)(v2 + 140)) - 1) << 10)) & 0xFFC00;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 720));
    _InterlockedIncrement((volatile signed __int32 *)a1 + 318);
    _InterlockedIncrement((volatile signed __int32 *)a1 + v5 + 302);
    VidSchIsVSyncEnabled(v2, v30);
    if ( *(_DWORD *)(*(_QWORD *)(v2 + 8 * v5 + 2576) + 33280LL) != -1 )
    {
      v12 = *(void (__fastcall **)(_QWORD))(v2 + 2432);
      if ( v12 )
        v12(*(_QWORD *)(v2 + 2496));
    }
    v28 = 0;
    v27[0] = v2 + 1648;
    AcquireSpinLock::Acquire((Acquire *)v27);
    v26 = 0;
    v25[1] = v25;
    v25[0] = v25;
    _InterlockedAdd((volatile signed __int32 *)a1 + v5 + 286, 1u);
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)a1 + 4) + 4LL))
                    + 8 * v5
                    + 88);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8 * v5 + 5792) + 8LL), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
    ++*(_DWORD *)(v2 + 724);
    ++*((_DWORD *)a1 + 319);
    ++*(_DWORD *)(v6 + 2332);
    v14 = ((unsigned __int16)*v11 | (unsigned __int16)(*v11 >> 10)) & 0x3FF;
    v15 = !_BitScanForward((unsigned int *)&v16, v14);
    v31 = v16;
    while ( 1 )
    {
      v17 = -1;
      if ( !v15 )
        v17 = v16;
      if ( !v14 )
        break;
      ++*(_DWORD *)(216LL * v17 + *(_QWORD *)(v2 + 8 * v5 + 2576) + 180);
      v14 &= ~(1 << v17);
      v15 = !_BitScanForward((unsigned int *)&v16, v14);
      v32 = v16;
    }
    v18 = v7[8];
    v19 = &v7[328 * v18];
    VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v19 + 20));
    v19[304] |= 0x190u;
    v20 = (void *)*((_QWORD *)v19 + 158);
    *((_QWORD *)v19 + 140) = a1;
    v19[288] = 0;
    memmove(v20, Src, Src[3]);
    v7[8] = ((_BYTE)v18 + 1) & 0x3F;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 728));
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 2336));
    v21 = v30;
    v19[283] = 4;
    v29 = 0;
    VidSchiExecuteMmIoFlip(
      (__int64)v25,
      v2,
      v21,
      (struct VIDSCH_FLIP_QUEUE *)v7,
      v18,
      (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)&v29);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v25);
    AcquireSpinLock::Release((AcquireSpinLock *)v27);
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v10 + 24) = 20548LL;
    WdLogEvent5_WdLowResource(v10);
    v3 = -1073741801;
  }
  CVidSchSubmitData::~CVidSchSubmitData(v24);
  return v3;
}
