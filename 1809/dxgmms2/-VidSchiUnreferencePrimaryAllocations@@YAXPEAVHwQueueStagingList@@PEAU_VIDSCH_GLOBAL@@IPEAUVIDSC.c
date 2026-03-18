/*
 * XREFs of ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0017DA4
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0006430 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N5@Z @ 0x1C000F820 (-VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033964 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C0002948 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C00315C0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

void __fastcall VidSchiUnreferencePrimaryAllocations(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a4,
        unsigned int a5,
        unsigned int a6,
        bool a7,
        bool a8)
{
  unsigned int v8; // eax
  unsigned int v9; // edi
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v10; // rbx
  unsigned int v11; // esi
  struct _VIDSCH_GLOBAL *v12; // r13
  struct HwQueueStagingList *v13; // r12
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // r8d
  bool v18; // zf
  unsigned int v19; // edx
  int v20; // r10d
  int v21; // eax
  char v22; // cl
  int v23; // eax
  unsigned int v24; // r9d
  char v25; // cl
  unsigned int v26; // eax
  int v27; // ecx
  bool v28; // r11
  char *v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // edx
  unsigned int v37; // r8d
  unsigned int v38; // edx
  int v39; // eax
  char v40; // cl
  int v41; // eax
  unsigned int v42; // ebx
  char v43; // cl
  unsigned int v44; // eax
  __int64 v45; // r9
  unsigned int v46; // r10d
  __int64 v47; // r11
  unsigned __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // r14
  int v51; // eax
  unsigned int v52; // ebx
  int v53; // edx
  __int64 v54; // r8
  int v55; // r12d
  __int64 v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rbx
  __int64 v61; // r14
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  _QWORD *v66; // rax
  int v67; // [rsp+38h] [rbp-A1h]
  __int64 v68; // [rsp+40h] [rbp-99h]
  unsigned int v69; // [rsp+48h] [rbp-91h]
  __int64 v70; // [rsp+50h] [rbp-89h]
  struct _VIDSCH_GLOBAL *v71; // [rsp+58h] [rbp-81h] BYREF
  unsigned int *v72; // [rsp+60h] [rbp-79h]
  unsigned int v73; // [rsp+68h] [rbp-71h]
  unsigned int v74; // [rsp+6Ch] [rbp-6Dh]
  int v75; // [rsp+70h] [rbp-69h]
  unsigned int v76; // [rsp+74h] [rbp-65h]
  unsigned int v77; // [rsp+78h] [rbp-61h]
  _QWORD v78[2]; // [rsp+80h] [rbp-59h] BYREF
  unsigned int v79; // [rsp+90h] [rbp-49h]
  unsigned int v80; // [rsp+94h] [rbp-45h]
  int v81; // [rsp+98h] [rbp-41h]
  unsigned int v82; // [rsp+9Ch] [rbp-3Dh]
  unsigned int v83; // [rsp+A0h] [rbp-39h]
  int v84; // [rsp+A8h] [rbp-31h]
  int v85; // [rsp+ACh] [rbp-2Dh]
  int v86; // [rsp+B0h] [rbp-29h]
  int v87; // [rsp+B4h] [rbp-25h]
  int v88; // [rsp+B8h] [rbp-21h]
  __int64 v89; // [rsp+C0h] [rbp-19h]
  _QWORD v90[10]; // [rsp+C8h] [rbp-11h] BYREF

  v8 = a5;
  v9 = 0;
  v67 = 0;
  v10 = a4;
  v11 = a3;
  v12 = a2;
  v13 = a1;
  if ( a5 )
  {
    v14 = a6;
    do
    {
      v69 = v8;
      v15 = v8;
      if ( (v8 & 1) != 0 )
      {
        if ( (v14 & 1) != 0 )
        {
          v16 = *(_DWORD *)v10;
          v17 = *(_DWORD *)v10 & 0x3FF;
          v78[0] = v12;
          v18 = *((_BYTE *)v12 + 144) == 0;
          v78[1] = v10;
          v79 = v17;
          if ( v18 )
            v19 = 0;
          else
            v19 = (v16 >> 10) & 0x3FF;
          v20 = 0;
          v80 = v19;
          v18 = !_BitScanForward((unsigned int *)&v21, v17);
          v22 = -1;
          v81 = 0;
          v84 = v21;
          if ( !v18 )
            v22 = v21;
          v18 = !_BitScanForward((unsigned int *)&v23, v19);
          v24 = v22;
          v25 = -1;
          v85 = v23;
          if ( !v18 )
            v25 = v23;
          v82 = v24;
          v26 = v25;
          v83 = v25;
          while ( v17 || v19 )
          {
            if ( v24 < v26 )
            {
              v27 = *((_DWORD *)v10 + 1);
              v28 = a8;
              v29 = (char *)v10 + v27 * ((8 * *((_DWORD *)v10 + 2) + 191) & 0xFFFFFFF8);
              v30 = (unsigned __int64)(v20 + v9 * v27) << 6;
              v31 = *(_QWORD *)&v29[v30 + 72];
              v32 = *(_QWORD *)&v29[v30 + 64];
              v33 = *(_QWORD *)&v29[v30 + 48];
              v70 = v31;
              v68 = v32;
              if ( a8 && v31 && v11 != -1 )
              {
                v47 = *((_QWORD *)v12 + v11 + 322);
                if ( v47 )
                {
                  v48 = v9 + ((unsigned __int64)v24 << 6);
                  if ( *(_QWORD *)(v47 + 48 * v48 + 2432) == *(_QWORD *)(v33 + 96) )
                  {
                    *(_QWORD *)(v47 + 48 * v48 + 2464) = v31;
                    v28 = 0;
                  }
                  else if ( (v24 & *(_DWORD *)(v47 + 2336)) != 0 && (v49 = 0LL, *((_DWORD *)v12 + 35)) )
                  {
                    while ( 1 )
                    {
                      v45 = *(_QWORD *)(v47 + 8 * v49 + 24);
                      v46 = *(_DWORD *)(v45 + 44);
LABEL_54:
                      if ( v46 != (((unsigned __int8)*(_DWORD *)(v45 + 48) + 1) & 0x3F) )
                      {
                        v50 = 1296LL * v46;
                        v51 = *(_DWORD *)(v50 + v45 + 1108);
                        if ( v51 == 5 || v51 == 15 )
                          break;
                      }
                      v49 = (unsigned int)(v49 + 1);
                      if ( (unsigned int)v49 >= *((_DWORD *)v12 + 35) )
                      {
                        v31 = v70;
                        v13 = a1;
                        goto LABEL_57;
                      }
                    }
                    v72 = *(unsigned int **)(v50 + v45 + 1224);
                    v71 = v12;
                    v36 = *v72;
                    v37 = *v72 & 0x3FF;
                    v18 = *((_BYTE *)v12 + 144) == 0;
                    v73 = v37;
                    if ( v18 )
                      v38 = 0;
                    else
                      v38 = (v36 >> 10) & 0x3FF;
                    v75 = 0;
                    v18 = !_BitScanForward((unsigned int *)&v39, v37);
                    v40 = -1;
                    v74 = v38;
                    v86 = v39;
                    if ( !v18 )
                      v40 = v39;
                    v18 = !_BitScanForward((unsigned int *)&v41, v38);
                    v42 = v40;
                    v43 = -1;
                    v87 = v41;
                    if ( !v18 )
                      v43 = v41;
                    v76 = v42;
                    v44 = v43;
                    v77 = v43;
                    while ( 1 )
                    {
                      if ( !v37 && !v38 )
                      {
                        v46 = ((_BYTE)v46 + 1) & 0x3F;
                        goto LABEL_54;
                      }
                      if ( v42 < v44 )
                      {
                        v52 = *(_DWORD *)(v50 + v45 + 1140);
                        v53 = 0;
                        if ( v52 )
                          break;
                      }
LABEL_35:
                      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v71);
                      v44 = v77;
                      v38 = v74;
                      v37 = v73;
                      v42 = v76;
                    }
                    v54 = *(_QWORD *)(v50 + v45 + 1224);
                    v89 = *(_QWORD *)(v33 + 96);
                    v55 = *(_DWORD *)(v54 + 4);
                    v56 = v55 * ((8 * *(_DWORD *)(v54 + 8) + 191) & 0xFFFFFFF8);
                    while ( 1 )
                    {
                      v57 = (unsigned int)(v75 + v53 * v55);
                      v12 = a2;
                      if ( v89 == *(_QWORD *)(*(_QWORD *)(v56 + (v57 << 6) + v54 + 48) + 96LL) )
                        break;
                      if ( ++v53 >= v52 )
                        goto LABEL_35;
                    }
                    v13 = a1;
                    v28 = 0;
                    *(_QWORD *)(v56 + (v57 << 6) + v54 + 72) = v70;
                    v31 = v70;
                  }
                  else
                  {
LABEL_57:
                    v28 = a8;
                  }
                  v32 = v68;
                }
                else
                {
                  v28 = a8;
                }
              }
              v34 = *(_QWORD *)(v33 + 96);
              v35 = *(_QWORD *)(v34 + 24);
              _InterlockedDecrement((volatile signed __int32 *)(v33 + 104));
              if ( a7 )
              {
                v58 = *(_QWORD *)(v34 + 16);
                if ( v58 )
                  _InterlockedDecrement((volatile signed __int32 *)(v58 + 8));
              }
              if ( v28 && v35 )
              {
                v59 = 0LL;
                v90[0] = v32;
                v90[1] = v31;
                v60 = 0LL;
                v61 = 2LL;
                do
                {
                  v62 = v90[v59];
                  if ( v62 )
                  {
                    v63 = *(_QWORD *)(v33 + 96);
                    v88 = 0;
                    if ( (int)VidSchiSignalSyncObjectsFromCpu(
                                v13,
                                1u,
                                (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v63 + 24) + 8 * v60),
                                0,
                                &v90[v60]) < 0 )
                    {
                      v66 = (_QWORD *)WdLogNewEntry5_WdAssertion(v65, v64);
                      v66[3] = v60;
                      v66[4] = *(_QWORD *)(v59 * 8 + *(_QWORD *)(*(_QWORD *)(v33 + 96) + 24LL));
                      v66[5] = v62;
                      WdLogEvent5_WdAssertion(v66);
                    }
                  }
                  ++v60;
                  ++v59;
                  --v61;
                }
                while ( v61 );
              }
            }
            VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v78);
            v26 = v83;
            v19 = v80;
            v17 = v79;
            v24 = v82;
            v20 = v81;
            v10 = a4;
            v9 = v67;
            v11 = a3;
          }
          v8 = a5;
          v14 = a6;
          v15 = v69;
        }
        v67 = ++v9;
      }
      v8 >>= 1;
      v14 >>= 1;
      a5 = v8;
      a6 = v14;
    }
    while ( v15 >= 2 );
  }
}
