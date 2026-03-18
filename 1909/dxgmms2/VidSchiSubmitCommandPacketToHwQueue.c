/*
 * XREFs of VidSchiSubmitCommandPacketToHwQueue @ 0x1C0039AC0
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004A20 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C0037930 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0037DA0 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C0038350 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00CA9E0 (VidSchEnqueueCpuEvent.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00CD2B0 (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C00088B0 (VidSchiProfilePerformanceTick.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011240 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00113C4 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C00174BC (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00358BC (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007ABE0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C007AE30 (VidSchiEnsureVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToHwQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // r9
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char *v11; // r14
  unsigned int v12; // r8d
  bool v13; // zf
  unsigned int v14; // r8d
  char v15; // dl
  int v16; // eax
  char v17; // cl
  int v18; // eax
  unsigned int v19; // r10d
  unsigned int v20; // eax
  unsigned int v21; // esi
  int v22; // r15d
  int v23; // r9d
  __int64 v24; // r10
  int v25; // r9d
  __int64 v26; // r12
  __int64 v27; // r13
  int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  VIDMM_DEVICE *v38; // rcx
  _QWORD v39[2]; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v40; // [rsp+50h] [rbp-19h]
  unsigned int v41; // [rsp+54h] [rbp-15h]
  int v42; // [rsp+58h] [rbp-11h]
  unsigned int v43; // [rsp+5Ch] [rbp-Dh]
  unsigned int v44; // [rsp+60h] [rbp-9h]
  _QWORD v45[4]; // [rsp+68h] [rbp-1h] BYREF
  __int16 v46; // [rsp+88h] [rbp+1Fh]
  __int64 v47; // [rsp+D0h] [rbp+67h]
  __int64 v48; // [rsp+D8h] [rbp+6Fh]

  v1 = *((_QWORD *)a1 + 12);
  v3 = *(_QWORD *)(v1 + 40);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v47 = v5;
  v48 = v4;
  v6 = *(_QWORD *)(v4 + 24);
  VidSchiEnsureVSyncEnabled(a1, v5);
  v46 = 0;
  v45[0] = v6 + 1648;
  AcquireSpinLock::Acquire((Acquire *)v45);
  v8 = *((_DWORD *)a1 + 12);
  if ( v8 )
  {
    v9 = v8 - 3;
    if ( v9 && (v10 = v9 - 4) != 0 )
    {
      if ( v10 == 1 )
        *(_QWORD *)(v1 + 72) = *((_QWORD *)a1 + 36);
    }
    else if ( (*((_DWORD *)a1 + 68) & 0x1000004) != 0 )
    {
      v11 = (char *)a1 + 824;
      v39[0] = v6;
      v12 = *((_DWORD *)a1 + 206);
      v39[1] = (char *)a1 + 824;
      v7 = v12 & 0x3FF;
      v13 = *(_BYTE *)(v6 + 144) == 0;
      v40 = v12 & 0x3FF;
      if ( v13 )
        v14 = 0;
      else
        v14 = (v12 >> 10) & 0x3FF;
      v42 = 0;
      v15 = -1;
      v13 = !_BitScanForward((unsigned int *)&v16, v7);
      v17 = -1;
      v41 = v14;
      if ( !v13 )
        v17 = v16;
      v13 = !_BitScanForward((unsigned int *)&v18, v14);
      v19 = v17;
      v43 = v17;
      if ( !v13 )
        v15 = v18;
      v20 = v15;
      v44 = v15;
      while ( (_DWORD)v7 || v14 )
      {
        if ( v19 < v20 )
        {
          v21 = 0;
          if ( *(_DWORD *)(v6 + 64) )
          {
            v22 = v42;
            do
            {
              v23 = *((_DWORD *)a1 + 207);
              v24 = v23 * ((8 * *((_DWORD *)a1 + 208) + 191) & 0xFFFFFFF8);
              v25 = v21 * v23;
              v26 = v24 + ((unsigned __int64)(unsigned int)(v25 + v22) << 6);
              v27 = *(_QWORD *)&v11[v26 + 48];
              if ( v27 )
              {
                if ( (*((_DWORD *)a1 + 68) & 4) == 0
                  || ((v28 = **(_DWORD **)(v27 + 96), (v28 & 0x20000000) == 0) || v28 >= 0) && (v28 & 0x80000) == 0
                  || (v28 & 0x200000) == 0 )
                {
                  if ( (*((_DWORD *)a1 + 68) & 0xC00) != 0x400 )
                  {
                    v29 = *(_QWORD *)(v27 + 96);
                    v30 = v24 + (((unsigned int)(v25 + v22) + 1LL) << 6);
                    v31 = *(_QWORD *)(v29 + 24);
                    v32 = ++*(_QWORD *)(v31 + 16);
                    *(_QWORD *)&v11[v30] = v32;
                    v33 = *(_QWORD *)(v29 + 24);
                    *(_QWORD *)&v11[v26 + 72] = ++*(_QWORD *)(v33 + 24);
                    v34 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v30, v32);
                    v34[3] = *(_QWORD *)&v11[v26 + 72];
                    v35 = *(_QWORD *)(*(_QWORD *)(v27 + 96) + 24LL);
                    if ( v35 )
                      v35 = *(_QWORD *)(v35 + 8);
                    v34[4] = v35;
                    v34[5] = a1;
                    v34[6] = v27;
                    WdLogEvent5_WdPresentTokenEvent(v34);
                  }
                }
              }
              ++v21;
            }
            while ( v21 < *(_DWORD *)(v6 + 64) );
            v5 = v47;
          }
        }
        VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v39);
        v20 = v44;
        v14 = v41;
        v19 = v43;
        v7 = v40;
      }
      v4 = v48;
    }
  }
  else
  {
    v36 = *((int *)a1 + 192);
    v7 = 3 * (v36 + 3);
    *(_QWORD *)(v1 + 24 * (v36 + 3)) = *((_QWORD *)a1 + 95);
    ++*(_QWORD *)(v5 + 1296);
  }
  VidSchiProfilePerformanceTick(4LL, v6, v4, v7, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiInsertCommandToHwQueue(a1);
  AcquireSpinLock::Release((AcquireSpinLock *)v45);
  v37 = *(_QWORD *)(v5 + 8);
  if ( v37 )
  {
    v38 = *(VIDMM_DEVICE **)(v37 + 648);
    if ( v38 )
      VIDMM_DEVICE::EnsureSchedulable(v38, 1);
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v45);
}
