/*
 * XREFs of VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C000CCE0
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000AEB0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000CFC0 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C002AC24 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_VSYNC_COMPLETED_E.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002DC20 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C00315C0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

__int64 __fastcall VidSchiReferenceDisplayingAllocationsForThisEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4)
{
  _DWORD *v4; // rax
  unsigned int v5; // r12d
  unsigned int v8; // ebx
  int v9; // r13d
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ecx
  __int64 result; // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // r15
  _WORD *v17; // r10
  __int16 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  struct _VIDSCH_SYNC_OBJECT **v24; // r8
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  _WORD *v31; // [rsp+40h] [rbp-68h]
  unsigned __int64 v32; // [rsp+48h] [rbp-60h] BYREF
  __int64 v33; // [rsp+50h] [rbp-58h]
  unsigned int v35; // [rsp+B8h] [rbp+10h]
  unsigned int v36; // [rsp+C0h] [rbp+18h]

  v4 = *(_DWORD **)(a4 + 1168);
  v5 = 0;
  v8 = *v4 & 0x3FF;
  if ( *(_BYTE *)(a2 + 144) )
    v5 = (*v4 >> 10) & 0x3FF;
  v9 = 0;
  v10 = !_BitScanForward((unsigned int *)&v11, v8);
  v36 = v5;
  if ( v10 )
    LOBYTE(v11) = -1;
  v12 = (char)v11;
  v10 = !_BitScanForward((unsigned int *)&v11, v5);
  if ( v10 )
    LOBYTE(v11) = -1;
  v13 = (char)v11;
  v35 = (char)v11;
  while ( v8 || v5 )
  {
    if ( v12 >= v13 )
      goto LABEL_32;
    v15 = 0LL;
    if ( *(_DWORD *)(a4 + 1084) )
    {
      v16 = (unsigned __int64)v12 << 6;
      do
      {
        v17 = &a3[24 * v16 + 24 * v15];
        v31 = v17;
        *((_QWORD *)v17 + 304) = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)(unsigned int)(v15
                                                                                         * *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 4LL)
                                                                                         + v9) << 6)
                                                       + *(_QWORD *)(a4 + 1168)
                                                       + *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 4LL)
                                                       * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 8LL) + 191) & 0xFFFFFFF8)
                                                       + 48)
                                           + 96LL);
        *((_QWORD *)v17 + 303) = *(_QWORD *)(((unsigned __int64)(unsigned int)(v9
                                                                             + v15
                                                                             * *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 4LL)) << 6)
                                           + *(_QWORD *)(a4 + 1168)
                                           + *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 4LL)
                                           * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 8LL) + 191) & 0xFFFFFFF8)
                                           + 24);
        v18 = a3[16574];
        if ( *(_QWORD *)(((unsigned __int64)(unsigned int)(v9 + v15 * *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 4LL)) << 6)
                       + *(_QWORD *)(a4 + 1168)
                       + *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 4LL)
                       * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 8LL) + 191) & 0xFFFFFFF8)
                       + 56) )
        {
          a3[16574] = v18 | (1 << v12);
          *((_QWORD *)v17 + 305) = *(_QWORD *)(((unsigned __int64)(unsigned int)(v9
                                                                               + v15
                                                                               * *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 4LL)) << 6)
                                             + *(_QWORD *)(a4 + 1168)
                                             + *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 4LL)
                                             * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 8LL) + 191) & 0xFFFFFFF8)
                                             + 56);
        }
        else
        {
          a3[16574] = v18 & ~(1 << v12);
        }
        v17[1228] = *(_WORD *)(((unsigned __int64)(unsigned int)(v9 + v15 * *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 4LL)) << 6)
                             + *(_QWORD *)(a4 + 1168)
                             + *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 4LL)
                             * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1168) + 8LL) + 191) & 0xFFFFFFF8)
                             + 32);
        v19 = *(_QWORD *)(a4 + 1168);
        *(_QWORD *)&a3[24 * (unsigned int)v15 + 1224 + 24 * v16] = *(_QWORD *)(((unsigned __int64)(unsigned int)(v15 * *(_DWORD *)(v19 + 4) + v9) << 6)
                                                                             + v19
                                                                             + *(_DWORD *)(v19 + 4)
                                                                             * ((8 * *(_DWORD *)(v19 + 8) + 191) & 0xFFFFFFF8)
                                                                             + 40);
        v20 = *(_QWORD *)(a4 + 1168);
        v21 = ((unsigned __int64)(unsigned int)(v15 * *(_DWORD *)(v20 + 4) + v9) << 6)
            + *(_DWORD *)(v20 + 4) * ((8 * *(_DWORD *)(v20 + 8) + 191) & 0xFFFFFFF8);
        v22 = *(_QWORD *)(v20 + v21 + 64);
        v33 = *(_QWORD *)(v21 + v20 + 72);
        v23 = *((_QWORD *)v17 + 304);
        v32 = v22;
        v24 = *(struct _VIDSCH_SYNC_OBJECT ***)(v23 + 24);
        if ( v24 )
        {
          if ( v22 )
          {
            if ( (int)VidSchiSignalSyncObjectsFromCpu(a1, 1u, v24, 0, &v32) < 0 )
            {
              v29 = WdLogNewEntry5_WdAssertion(v28, v27);
              *(_QWORD *)(v29 + 24) = **(_QWORD **)(*((_QWORD *)v31 + 304) + 24LL);
              *(_QWORD *)(v29 + 32) = v32;
              WdLogEvent5_WdAssertion(v29);
            }
            v17 = v31;
          }
          *((_QWORD *)v17 + 308) = v33;
        }
        else
        {
          v25 = *(_QWORD *)(v23 + 16);
          if ( v25 )
            _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
        }
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < *(_DWORD *)(a4 + 1084) );
      v5 = v36;
      v13 = v35;
    }
    a3[16572] |= 1 << v12;
    if ( v12 >= v13 )
    {
LABEL_32:
      v30 = 1 << v13;
      LOBYTE(v13) = -1;
      v5 &= ~v30;
      v10 = !_BitScanForward((unsigned int *)&v30, v5);
      v36 = v5;
      if ( !v10 )
        LOBYTE(v13) = v30;
      v13 = (char)v13;
      v35 = (char)v13;
    }
    else
    {
      v8 &= ~(1 << v12);
      v10 = !_BitScanForward((unsigned int *)&v26, v8);
      if ( v10 )
        LOBYTE(v26) = -1;
      v13 = v35;
      v12 = (char)v26;
    }
    ++v9;
  }
  result = *(unsigned __int16 *)(a4 + 1084);
  a3[16573] = result;
  return result;
}
