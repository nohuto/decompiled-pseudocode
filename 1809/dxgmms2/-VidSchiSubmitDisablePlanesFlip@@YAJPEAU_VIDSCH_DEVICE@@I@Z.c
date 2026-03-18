/*
 * XREFs of ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002B418
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002548 (VidSchiSetFlipDevice.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000CFC0 (VidSchiExecuteMmIoFlip.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0016618 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001A680 (memmove.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0029204 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C00294F0 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     VidSchIsVSyncEnabled @ 0x1C0069EB0 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiSubmitDisablePlanesFlip(struct _VIDSCH_DEVICE *a1, unsigned int a2)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int *v11; // r12
  __int64 v12; // r8
  void (__fastcall *v13)(_QWORD); // rax
  __int64 v14; // rcx
  unsigned int v15; // r8d
  bool v16; // zf
  int v17; // eax
  char v18; // cl
  __int64 v19; // rdi
  __int64 v20; // rbx
  void *v21; // rcx
  unsigned int v22; // r8d
  __int64 v24; // [rsp+30h] [rbp-49h]
  struct _SLIST_ENTRY *v25[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-31h] BYREF
  char v27; // [rsp+58h] [rbp-21h]
  _BYTE v28[112]; // [rsp+60h] [rbp-19h] BYREF
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
  v7 = *(_QWORD *)(v6 + 24);
  v24 = v7;
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(v2 + 16);
  v25[0] = 0LL;
  v25[1] = *(struct _SLIST_ENTRY **)(v8 + 2528);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v25);
  if ( v25[0] )
  {
    v11 = (unsigned int *)&v25[0][35];
    if ( !BYTE4(v25[0][22].Next) )
      v11 = (unsigned int *)(&v25[0][30].Next + 1);
    *v11 ^= (*v11 ^ (((1 << *(_DWORD *)(v2 + 140)) - 1) << 10)) & 0xFFC00;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 720));
    _InterlockedIncrement((volatile signed __int32 *)a1 + 317);
    _InterlockedIncrement((volatile signed __int32 *)a1 + v5 + 301);
    VidSchIsVSyncEnabled(v2, v30);
    if ( *(_DWORD *)(*(_QWORD *)(v2 + 8 * v5 + 2576) + 33272LL) != -1 )
    {
      v13 = *(void (__fastcall **)(_QWORD))(v2 + 2432);
      if ( v13 )
        v13(*(_QWORD *)(v2 + 2496));
    }
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v28, (unsigned __int64 *)(v2 + 1648), v12, 0);
    v27 = 0;
    v26[1] = v26;
    v26[0] = v26;
    _InterlockedAdd((volatile signed __int32 *)a1 + v5 + 285, 1u);
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)a1 + 4) + 4LL))
                    + 8 * v5
                    + 88);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8 * v5 + 5792) + 8LL), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
    ++*(_DWORD *)(v2 + 724);
    ++*((_DWORD *)a1 + 318);
    ++*(_DWORD *)(v6 + 2324);
    v15 = ((unsigned __int16)*v11 | (unsigned __int16)(*v11 >> 10)) & 0x3FF;
    v16 = !_BitScanForward((unsigned int *)&v17, v15);
    v31 = v17;
    while ( 1 )
    {
      v18 = -1;
      if ( !v16 )
        v18 = v17;
      if ( !v15 )
        break;
      ++*(_DWORD *)(216LL * v18 + *(_QWORD *)(v2 + 8 * v5 + 2576) + 172);
      v15 &= ~(1 << v18);
      v16 = !_BitScanForward((unsigned int *)&v17, v15);
      v32 = v17;
    }
    v19 = *(unsigned int *)(v7 + 32);
    v20 = v24 + 1296 * v19;
    VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v20 + 56));
    *(_DWORD *)(v20 + 1176) |= 0x190u;
    v21 = *(void **)(v20 + 1224);
    *(_QWORD *)(v20 + 1096) = a1;
    *(_DWORD *)(v20 + 1116) = 0;
    memmove(v21, v11, v11[3]);
    *(_DWORD *)(v24 + 32) = ((_BYTE)v19 + 1) & 0x3F;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 728));
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 2328));
    v22 = v30;
    *(_DWORD *)(v20 + 1108) = 4;
    v29 = 0;
    VidSchiExecuteMmIoFlip((struct HwQueueStagingList *)v26, v2, v22, 0, v19, &v29);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v26);
    AcquireSpinLock::Release((AcquireSpinLock *)v28);
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v10 + 24) = 20378LL;
    WdLogEvent5_WdLowResource(v10);
    v3 = -1073741801;
  }
  CVidSchSubmitData::~CVidSchSubmitData(v25);
  return v3;
}
