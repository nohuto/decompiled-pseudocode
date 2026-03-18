/*
 * XREFs of VidSchiUpdateFlipQueueEntriesForMove @ 0x1C0030B78
 * Callers:
 *     ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1C00BBDA0 (-VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00BD4D0 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C001A9C0 (memset.c)
 */

void __fastcall VidSchiUpdateFlipQueueEntriesForMove(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  unsigned int i; // r14d
  __int64 v6; // rbx
  int v7; // esi
  unsigned int v8; // r12d
  char v9; // cl
  unsigned int v10; // r13d
  int v12; // eax
  __int64 v13; // r15
  _QWORD *v14; // rax
  __int64 *v15; // rax
  unsigned int v16; // edx
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v25[276]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+900h] [rbp+800h] BYREF
  int v27; // [rsp+908h] [rbp+808h]
  __int64 v28; // [rsp+910h] [rbp+810h]
  __int64 v29; // [rsp+918h] [rbp+818h] BYREF

  v3 = a2[18];
  v28 = a2[63];
  v4 = a2[17];
  v23 = v3;
  v29 = v3 + *(_QWORD *)(v4 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
  {
    v6 = *(_QWORD *)(a1 + 8LL * i + 2576);
    if ( v6 )
    {
      LOWORD(v7) = *(_WORD *)(v6 + 33144);
      while ( (_WORD)v7 )
      {
        v8 = *(unsigned __int16 *)(v6 + 33146);
        v9 = -1;
        v10 = 0;
        if ( _BitScanForward((unsigned int *)&v12, (unsigned __int16)v7) )
          v9 = v12;
        v27 = v9;
        if ( v8 )
        {
          v13 = 3072LL * v9;
          v26 = v9;
          v14 = (_QWORD *)(v6 + v13 + 2432);
          while ( *v14 != v28 )
          {
            ++v10;
            v14 += 6;
            if ( v10 >= v8 )
              goto LABEL_23;
          }
          memset(v25, 0, 0x858uLL);
          HIDWORD(v25[1]) = *(unsigned __int16 *)(v13 + v6 + 2456);
          v25[3] = *(_QWORD *)(v13 + v6 + 2424);
          v25[0] = a1;
          LODWORD(v25[1]) = i;
          if ( v10 )
            v15 = (__int64 *)(v6 + v13 + 2448);
          else
            v15 = &v29;
          v25[2] = *v15;
          v16 = 0;
          LODWORD(v25[4]) = v8;
          v17 = v26;
          do
          {
            if ( v16 )
            {
              v18 = 3LL * (v16 - 1);
              v19 = v16 + (v17 << 6);
              v25[v18 + 71] = *(_QWORD *)(v6 + 48 * v19 + 2424);
              LOWORD(v25[v18 + 72]) = *(_WORD *)(v6 + 48 * v19 + 2456);
              if ( v10 == v16 )
                v20 = &v23;
              else
                v20 = (__int64 *)(v6 + 48 * (v19 + 51));
              v25[3 * v16 + 70] = *v20;
              v8 = v25[4];
            }
            ++v16;
          }
          while ( v16 < v8 );
          LODWORD(v25[70]) |= 0x102u;
          v21 = *(unsigned int *)(a1 + 32);
          v22 = *(_QWORD *)(a1 + 24);
          LODWORD(v25[265]) = -1073741823;
          LOBYTE(v26) = 0;
          DpSynchronizeExecution(v22, VidSchiExecuteMmIoFlipAtISR, v25, v21, &v26);
          v9 = v27;
        }
LABEL_23:
        v7 = (unsigned __int16)v7 & ~(1 << v9);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
