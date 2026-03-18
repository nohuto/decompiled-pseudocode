/*
 * XREFs of ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0017314
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0007280 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N6@Z @ 0x1C00130D0 (-VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_H.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034380 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C00174BC (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C0031E10 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
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
  unsigned int v9; // esi
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v10; // rdi
  unsigned int v11; // r14d
  struct _VIDSCH_GLOBAL *v12; // rbx
  struct HwQueueStagingList *v13; // r15
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rdx
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
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r11
  unsigned __int64 v36; // rcx
  __int64 v37; // r10
  __int64 v38; // rax
  unsigned int v39; // r14d
  __int64 v40; // r9
  unsigned int v41; // r10d
  __int64 v42; // rsi
  int v43; // eax
  unsigned int *v44; // rax
  unsigned int v45; // edx
  unsigned int v46; // r8d
  __int64 v47; // rdx
  char v48; // cl
  int v49; // eax
  int v50; // eax
  unsigned int v51; // ebx
  char v52; // cl
  unsigned int v53; // eax
  unsigned int v54; // ebx
  __int64 v55; // r8
  int v56; // r15d
  __int64 v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // r14
  __int64 v63; // rsi
  __int64 v64; // rcx
  _QWORD *v65; // rax
  int v66; // [rsp+38h] [rbp-A1h]
  __int64 v67; // [rsp+40h] [rbp-99h]
  unsigned int v68; // [rsp+48h] [rbp-91h]
  __int64 v69; // [rsp+50h] [rbp-89h]
  _QWORD v70[2]; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v71; // [rsp+68h] [rbp-71h]
  unsigned int v72; // [rsp+6Ch] [rbp-6Dh]
  int v73; // [rsp+70h] [rbp-69h]
  unsigned int v74; // [rsp+74h] [rbp-65h]
  unsigned int v75; // [rsp+78h] [rbp-61h]
  _QWORD v76[2]; // [rsp+80h] [rbp-59h] BYREF
  unsigned int v77; // [rsp+90h] [rbp-49h]
  unsigned int v78; // [rsp+94h] [rbp-45h]
  int v79; // [rsp+98h] [rbp-41h]
  unsigned int v80; // [rsp+9Ch] [rbp-3Dh]
  unsigned int v81; // [rsp+A0h] [rbp-39h]
  int v82; // [rsp+A8h] [rbp-31h]
  int v83; // [rsp+ACh] [rbp-2Dh]
  int v84; // [rsp+B0h] [rbp-29h]
  int v85; // [rsp+B4h] [rbp-25h]
  __int64 v86; // [rsp+B8h] [rbp-21h]
  _QWORD v87[11]; // [rsp+C0h] [rbp-19h] BYREF

  v8 = a5;
  v9 = 0;
  v66 = 0;
  v10 = a4;
  v11 = a3;
  v12 = a2;
  v13 = a1;
  if ( !a5 )
    return;
  v14 = a6;
  do
  {
    v68 = v8;
    v15 = v8;
    if ( (v8 & 1) == 0 )
      goto LABEL_16;
    if ( (v14 & 1) == 0 )
      goto LABEL_15;
    v16 = *(_DWORD *)v10;
    v17 = *(_DWORD *)v10 & 0x3FF;
    v76[0] = v12;
    v18 = *((_BYTE *)v12 + 144) == 0;
    v76[1] = v10;
    v77 = v17;
    if ( v18 )
      v19 = 0LL;
    else
      v19 = (v16 >> 10) & 0x3FF;
    v20 = 0;
    v78 = v19;
    v18 = !_BitScanForward((unsigned int *)&v21, v17);
    v22 = -1;
    v79 = 0;
    v82 = v21;
    if ( !v18 )
      v22 = v21;
    v18 = !_BitScanForward((unsigned int *)&v23, v19);
    v24 = v22;
    v25 = -1;
    v83 = v23;
    if ( !v18 )
      v25 = v23;
    v80 = v24;
    v26 = v25;
    v81 = v25;
    while ( v17 || (_DWORD)v19 )
    {
      if ( v24 >= v26 )
        goto LABEL_25;
      v27 = *((_DWORD *)v10 + 1);
      v28 = a8;
      v29 = (char *)v10 + v27 * ((8 * *((_DWORD *)v10 + 2) + 191) & 0xFFFFFFF8);
      v30 = (unsigned __int64)(v20 + v9 * v27) << 6;
      v31 = *(_QWORD *)&v29[v30 + 72];
      v19 = *(_QWORD *)&v29[v30 + 64];
      v32 = *(_QWORD *)&v29[v30 + 48];
      v69 = v31;
      v67 = v19;
      if ( a8 && v31 && v11 != -1 )
      {
        v35 = *((_QWORD *)v12 + v11 + 322);
        if ( v35 )
        {
          v36 = v9 + ((unsigned __int64)v24 << 6);
          v37 = v24;
          v38 = *(_QWORD *)(v32 + 96);
          v86 = v24;
          if ( *(_QWORD *)(v35 + 48 * v36 + 2440) == v38 )
          {
            *(_QWORD *)(v35 + 48 * v36 + 2472) = v31;
            v28 = 0;
            goto LABEL_21;
          }
          if ( (v24 & *(_DWORD *)(v35 + 2344)) != 0 )
          {
            v39 = 0;
            while ( 1 )
            {
              v40 = v39 ? *(_QWORD *)(v35 + 8 * v37 + 32) : *(_QWORD *)(v35 + 24);
              v41 = *(_DWORD *)(v40 + 44);
              ++v39;
LABEL_37:
              if ( v41 != (((unsigned __int8)*(_DWORD *)(v40 + 48) + 1) & 0x3F) )
              {
                v42 = 1312LL * v41;
                v43 = *(_DWORD *)(v42 + v40 + 1132);
                if ( v43 == 5 || v43 == 15 )
                  break;
              }
              if ( v39 >= 2 )
              {
                v31 = v69;
                v13 = a1;
                goto LABEL_61;
              }
              v37 = v86;
            }
            v44 = *(unsigned int **)(v42 + v40 + 1264);
            v70[0] = v12;
            v70[1] = v44;
            v45 = *v44;
            v46 = *v44 & 0x3FF;
            v18 = *((_BYTE *)v12 + 144) == 0;
            v71 = v46;
            if ( v18 )
              v47 = 0LL;
            else
              v47 = (v45 >> 10) & 0x3FF;
            v73 = 0;
            v48 = -1;
            v18 = !_BitScanForward((unsigned int *)&v49, v46);
            v72 = v47;
            v84 = v49;
            if ( !v18 )
              v48 = v49;
            v18 = !_BitScanForward((unsigned int *)&v50, v47);
            v51 = v48;
            v52 = -1;
            v85 = v50;
            if ( !v18 )
              v52 = v50;
            v74 = v51;
            v53 = v52;
            v75 = v52;
            while ( 1 )
            {
              if ( !v46 && !(_DWORD)v47 )
              {
                v12 = a2;
                v41 = ((_BYTE)v41 + 1) & 0x3F;
                goto LABEL_37;
              }
              if ( v51 < v53 )
              {
                v54 = *(_DWORD *)(v42 + v40 + 1176);
                v47 = 0LL;
                if ( v54 )
                  break;
              }
LABEL_58:
              VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v70, v47);
              v53 = v75;
              v47 = v72;
              v46 = v71;
              v51 = v74;
            }
            v55 = *(_QWORD *)(v42 + v40 + 1264);
            v56 = *(_DWORD *)(v55 + 4);
            v57 = v56 * ((8 * *(_DWORD *)(v55 + 8) + 191) & 0xFFFFFFF8);
            while ( 1 )
            {
              v58 = (unsigned int)(v73 + v47 * v56);
              if ( *(_QWORD *)(v32 + 96) == *(_QWORD *)(*(_QWORD *)(v57 + (v58 << 6) + v55 + 48) + 96LL) )
                break;
              v47 = (unsigned int)(v47 + 1);
              if ( (unsigned int)v47 >= v54 )
                goto LABEL_58;
            }
            v19 = v67;
            v13 = a1;
            v28 = 0;
            *(_QWORD *)(v57 + (v58 << 6) + v55 + 72) = v69;
            v31 = v69;
            goto LABEL_21;
          }
LABEL_61:
          v19 = v67;
        }
        v28 = a8;
      }
LABEL_21:
      v33 = *(_QWORD *)(v32 + 96);
      v34 = *(_QWORD *)(v33 + 24);
      _InterlockedDecrement((volatile signed __int32 *)(v32 + 104));
      if ( a7 )
      {
        v59 = *(_QWORD *)(v33 + 16);
        if ( v59 )
          _InterlockedDecrement((volatile signed __int32 *)(v59 + 8));
      }
      if ( v28 && v34 )
      {
        v60 = 0LL;
        v87[0] = v19;
        v87[1] = v31;
        v61 = 0LL;
        v62 = 2LL;
        do
        {
          v63 = v87[v60];
          if ( v63 )
          {
            if ( (int)VidSchiSignalSyncObjectsFromCpu(
                        v13,
                        1u,
                        (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*(_QWORD *)(v32 + 96) + 24LL) + 8 * v61),
                        0,
                        &v87[v61]) < 0 )
            {
              v65 = (_QWORD *)WdLogNewEntry5_WdAssertion(v64, v19);
              v65[3] = v61;
              v65[4] = *(_QWORD *)(v60 * 8 + *(_QWORD *)(*(_QWORD *)(v32 + 96) + 24LL));
              v65[5] = v63;
              WdLogEvent5_WdAssertion(v65);
            }
          }
          ++v61;
          ++v60;
          --v62;
        }
        while ( v62 );
      }
      v12 = a2;
LABEL_25:
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v76, v19);
      v26 = v81;
      v19 = v78;
      v17 = v77;
      v24 = v80;
      v20 = v79;
      v10 = a4;
      v9 = v66;
      v11 = a3;
    }
    v8 = a5;
    v14 = a6;
    v15 = v68;
LABEL_15:
    v66 = ++v9;
LABEL_16:
    v8 >>= 1;
    v14 >>= 1;
    a5 = v8;
    a6 = v14;
  }
  while ( v15 >= 2 );
}
