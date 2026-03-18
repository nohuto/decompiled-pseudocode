/*
 * XREFs of VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C000E260
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000C010 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000CF70 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002E490 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C002F47C (VidSchiProcessVsyncCompletedFlipEntry.c)
 * Callees:
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C0031E10 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

__int64 __fastcall VidSchiReferenceDisplayingAllocationsForThisEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4)
{
  _DWORD *v4; // rax
  unsigned int v5; // r15d
  unsigned int v8; // ebx
  int v9; // r12d
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ecx
  __int64 result; // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  _WORD *v17; // r10
  __int16 v18; // r9
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  struct _VIDSCH_SYNC_OBJECT **v23; // r8
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  _WORD *v30; // [rsp+40h] [rbp-68h]
  unsigned __int64 v31; // [rsp+48h] [rbp-60h] BYREF
  __int64 v32; // [rsp+50h] [rbp-58h]
  unsigned int v34; // [rsp+B8h] [rbp+10h]
  unsigned int v35; // [rsp+C0h] [rbp+18h]

  v4 = *(_DWORD **)(a4 + 1184);
  v5 = 0;
  v8 = *v4 & 0x3FF;
  if ( *(_BYTE *)(a2 + 144) )
    v5 = (*v4 >> 10) & 0x3FF;
  v9 = 0;
  v10 = !_BitScanForward((unsigned int *)&v11, v8);
  v35 = v5;
  if ( v10 )
    LOBYTE(v11) = -1;
  v12 = (char)v11;
  v10 = !_BitScanForward((unsigned int *)&v11, v5);
  if ( v10 )
    LOBYTE(v11) = -1;
  v13 = (char)v11;
  v34 = (char)v11;
  while ( v8 || v5 )
  {
    if ( v12 >= v13 )
      goto LABEL_32;
    v15 = 0LL;
    if ( *(_DWORD *)(a4 + 1096) )
    {
      v16 = (unsigned __int64)v12 << 6;
      do
      {
        v17 = &a3[24 * v16 + 24 * v15];
        v30 = v17;
        *((_QWORD *)v17 + 305) = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)(unsigned int)(v9
                                                                                         + v15
                                                                                         * *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 4LL)) << 6)
                                                       + *(_QWORD *)(a4 + 1184)
                                                       + *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 4LL)
                                                       * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 8LL) + 191) & 0xFFFFFFF8)
                                                       + 48)
                                           + 96LL);
        *((_QWORD *)v17 + 304) = *(_QWORD *)(((unsigned __int64)(unsigned int)(v9
                                                                             + v15
                                                                             * *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 4LL)) << 6)
                                           + *(_QWORD *)(a4 + 1184)
                                           + *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 4LL)
                                           * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 8LL) + 191) & 0xFFFFFFF8)
                                           + 24);
        v18 = a3[16578];
        if ( *(_QWORD *)(((unsigned __int64)(unsigned int)(v9 + v15 * *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 4LL)) << 6)
                       + *(_QWORD *)(a4 + 1184)
                       + *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 4LL)
                       * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 8LL) + 191) & 0xFFFFFFF8)
                       + 56) )
        {
          a3[16578] = v18 | (1 << v12);
          *(_QWORD *)&a3[24 * (unsigned int)v15 + 1224 + 24 * v16] = *(_QWORD *)(((unsigned __int64)(unsigned int)(v9 + v15 * *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 4LL)) << 6)
                                                                               + *(_QWORD *)(a4 + 1184)
                                                                               + *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 4LL)
                                                                               * ((8
                                                                                 * *(_DWORD *)(*(_QWORD *)(a4 + 1184)
                                                                                             + 8LL)
                                                                                 + 191) & 0xFFFFFFF8)
                                                                               + 56);
        }
        else
        {
          a3[16578] = v18 & ~(1 << v12);
        }
        v17[1232] = *(_WORD *)(((unsigned __int64)(unsigned int)(v9 + v15 * *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 4LL)) << 6)
                             + *(_QWORD *)(a4 + 1184)
                             + *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 4LL)
                             * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 8LL) + 191) & 0xFFFFFFF8)
                             + 32);
        *((_QWORD *)v17 + 307) = *(_QWORD *)(((unsigned __int64)(unsigned int)(v9
                                                                             + v15
                                                                             * *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 4LL)) << 6)
                                           + *(_QWORD *)(a4 + 1184)
                                           + *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 4LL)
                                           * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1184) + 8LL) + 191) & 0xFFFFFFF8)
                                           + 40);
        v19 = *(_QWORD *)(a4 + 1184);
        v20 = ((unsigned __int64)(unsigned int)(v9 + v15 * *(_DWORD *)(v19 + 4)) << 6)
            + *(_DWORD *)(v19 + 4) * ((8 * *(_DWORD *)(v19 + 8) + 191) & 0xFFFFFFF8);
        v21 = *(_QWORD *)(v19 + v20 + 64);
        v32 = *(_QWORD *)(v20 + v19 + 72);
        v22 = *((_QWORD *)v17 + 305);
        v31 = v21;
        v23 = *(struct _VIDSCH_SYNC_OBJECT ***)(v22 + 24);
        if ( v23 )
        {
          if ( v21 )
          {
            if ( (int)VidSchiSignalSyncObjectsFromCpu(a1, 1u, v23, 0, &v31) < 0 )
            {
              v28 = WdLogNewEntry5_WdAssertion(v27, v26);
              *(_QWORD *)(v28 + 24) = **(_QWORD **)(*((_QWORD *)v30 + 305) + 24LL);
              *(_QWORD *)(v28 + 32) = v31;
              WdLogEvent5_WdAssertion(v28);
            }
            v17 = v30;
          }
          *((_QWORD *)v17 + 309) = v32;
        }
        else
        {
          v24 = *(_QWORD *)(v22 + 16);
          if ( v24 )
            _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
        }
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < *(_DWORD *)(a4 + 1096) );
      v5 = v35;
      v13 = v34;
    }
    a3[16576] |= 1 << v12;
    if ( v12 >= v13 )
    {
LABEL_32:
      v29 = 1 << v13;
      LOBYTE(v13) = -1;
      v5 &= ~v29;
      v10 = !_BitScanForward((unsigned int *)&v29, v5);
      v35 = v5;
      if ( !v10 )
        LOBYTE(v13) = v29;
      v13 = (char)v13;
      v34 = (char)v13;
    }
    else
    {
      v8 &= ~(1 << v12);
      v10 = !_BitScanForward((unsigned int *)&v25, v8);
      if ( v10 )
        LOBYTE(v25) = -1;
      v13 = v34;
      v12 = (char)v25;
    }
    ++v9;
  }
  result = *(unsigned __int16 *)(a4 + 1096);
  a3[16577] = result;
  return result;
}
