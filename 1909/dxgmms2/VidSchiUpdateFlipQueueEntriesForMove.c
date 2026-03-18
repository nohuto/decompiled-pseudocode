/*
 * XREFs of VidSchiUpdateFlipQueueEntriesForMove @ 0x1C00313B0
 * Callers:
 *     ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1C00BE930 (-VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00C00D0 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
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
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-A8h]
  int v27; // [rsp+5Ch] [rbp-A4h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  unsigned int v30; // [rsp+70h] [rbp-90h]
  _DWORD v31[543]; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v32; // [rsp+900h] [rbp+800h] BYREF
  int v33; // [rsp+908h] [rbp+808h]
  __int64 v34; // [rsp+910h] [rbp+810h]
  __int64 v35; // [rsp+918h] [rbp+818h] BYREF

  v3 = a2[18];
  v34 = a2[63];
  v4 = a2[17];
  v23 = v3;
  v35 = v3 + *(_QWORD *)(v4 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
  {
    v6 = *(_QWORD *)(a1 + 8LL * i + 2576);
    if ( v6 )
    {
      LOWORD(v7) = *(_WORD *)(v6 + 33152);
      while ( (_WORD)v7 )
      {
        v8 = *(unsigned __int16 *)(v6 + 33154);
        v9 = -1;
        v10 = 0;
        if ( _BitScanForward((unsigned int *)&v12, (unsigned __int16)v7) )
          v9 = v12;
        v33 = v9;
        if ( v8 )
        {
          v13 = 3072LL * v9;
          v32 = v9;
          v14 = (_QWORD *)(v6 + v13 + 2440);
          while ( *v14 != v34 )
          {
            ++v10;
            v14 += 6;
            if ( v10 >= v8 )
              goto LABEL_23;
          }
          memset(v31, 0, 0x834uLL);
          v27 = *(unsigned __int16 *)(v13 + v6 + 2464);
          v29 = *(_QWORD *)(v13 + v6 + 2432);
          v25 = a1;
          v26 = i;
          if ( v10 )
            v15 = (__int64 *)(v6 + v13 + 2456);
          else
            v15 = &v35;
          v28 = *v15;
          v16 = 0;
          v30 = v8;
          v17 = v32;
          do
          {
            if ( v16 )
            {
              v18 = 3LL * (v16 - 1);
              v19 = 48 * (v16 + (v17 << 6));
              *(_QWORD *)&v31[2 * v18 + 133] = *(_QWORD *)(v19 + v6 + 2432);
              LOWORD(v31[2 * v18 + 135]) = *(_WORD *)(v19 + v6 + 2464);
              if ( v10 == v16 )
                v20 = &v23;
              else
                v20 = (__int64 *)(v19 + v6 + 2456);
              *(_QWORD *)&v31[6 * v16 + 131] = *v20;
              v8 = v30;
            }
            ++v16;
          }
          while ( v16 < v8 );
          v31[131] |= 0x102u;
          v21 = *(unsigned int *)(a1 + 32);
          v22 = *(_QWORD *)(a1 + 24);
          v31[521] = -1073741823;
          LOBYTE(v32) = 0;
          DpSynchronizeExecution(v22, VidSchiExecuteMmIoFlipAtISR, &v25, v21, &v32);
          v9 = v33;
        }
LABEL_23:
        v7 = (unsigned __int16)v7 & ~(1 << v9);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
