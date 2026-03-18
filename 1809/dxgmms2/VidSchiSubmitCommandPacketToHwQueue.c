/*
 * XREFs of VidSchiSubmitCommandPacketToHwQueue @ 0x1C003907C
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0003AA0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C0036EF0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0037360 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C0037910 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00C7C90 (VidSchEnqueueCpuEvent.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00CA810 (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C0002948 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034EB8 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0069330 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C0069580 (VidSchiEnsureVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToHwQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  char *v12; // r14
  unsigned int v13; // r8d
  bool v14; // zf
  unsigned int v15; // r8d
  char v16; // dl
  int v17; // eax
  char v18; // cl
  int v19; // eax
  unsigned int v20; // r10d
  unsigned int v21; // eax
  unsigned int v22; // esi
  int v23; // r15d
  int v24; // r9d
  __int64 v25; // r10
  int v26; // r9d
  __int64 v27; // r12
  __int64 v28; // r13
  int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  VIDMM_DEVICE *v39; // rcx
  _QWORD v40[2]; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v41; // [rsp+50h] [rbp-19h]
  unsigned int v42; // [rsp+54h] [rbp-15h]
  int v43; // [rsp+58h] [rbp-11h]
  unsigned int v44; // [rsp+5Ch] [rbp-Dh]
  unsigned int v45; // [rsp+60h] [rbp-9h]
  _BYTE v46[88]; // [rsp+68h] [rbp-1h] BYREF
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
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v46, (unsigned __int64 *)(v6 + 1648), v7, 0);
  v9 = *((_DWORD *)a1 + 12);
  if ( v9 )
  {
    v10 = v9 - 3;
    if ( v10 && (v11 = v10 - 4) != 0 )
    {
      if ( v11 == 1 )
        *(_QWORD *)(v1 + 72) = *((_QWORD *)a1 + 36);
    }
    else if ( (*((_DWORD *)a1 + 68) & 0x1000004) != 0 )
    {
      v12 = (char *)a1 + 832;
      v40[0] = v6;
      v13 = *((_DWORD *)a1 + 208);
      v40[1] = (char *)a1 + 832;
      v8 = v13 & 0x3FF;
      v14 = *(_BYTE *)(v6 + 144) == 0;
      v41 = v13 & 0x3FF;
      if ( v14 )
        v15 = 0;
      else
        v15 = (v13 >> 10) & 0x3FF;
      v43 = 0;
      v16 = -1;
      v14 = !_BitScanForward((unsigned int *)&v17, v8);
      v18 = -1;
      v42 = v15;
      if ( !v14 )
        v18 = v17;
      v14 = !_BitScanForward((unsigned int *)&v19, v15);
      v20 = v18;
      v44 = v18;
      if ( !v14 )
        v16 = v19;
      v21 = v16;
      v45 = v16;
      while ( (_DWORD)v8 || v15 )
      {
        if ( v20 < v21 )
        {
          v22 = 0;
          if ( *(_DWORD *)(v6 + 64) )
          {
            v23 = v43;
            do
            {
              v24 = *((_DWORD *)a1 + 209);
              v25 = v24 * ((8 * *((_DWORD *)a1 + 210) + 191) & 0xFFFFFFF8);
              v26 = v22 * v24;
              v27 = v25 + ((unsigned __int64)(unsigned int)(v26 + v23) << 6);
              v28 = *(_QWORD *)&v12[v27 + 48];
              if ( v28 )
              {
                if ( (*((_DWORD *)a1 + 68) & 4) == 0
                  || ((v29 = **(_DWORD **)(v28 + 96), (v29 & 0x20000000) == 0) || v29 >= 0) && (v29 & 0x80000) == 0
                  || (v29 & 0x200000) == 0 )
                {
                  if ( (*((_DWORD *)a1 + 68) & 0xC00) != 0x400 )
                  {
                    v30 = *(_QWORD *)(v28 + 96);
                    v31 = v25 + (((unsigned int)(v26 + v23) + 1LL) << 6);
                    v32 = *(_QWORD *)(v30 + 24);
                    v33 = ++*(_QWORD *)(v32 + 16);
                    *(_QWORD *)&v12[v31] = v33;
                    v34 = *(_QWORD *)(v30 + 24);
                    *(_QWORD *)&v12[v27 + 72] = ++*(_QWORD *)(v34 + 24);
                    v35 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v31, v33);
                    v35[3] = *(_QWORD *)&v12[v27 + 72];
                    v36 = *(_QWORD *)(*(_QWORD *)(v28 + 96) + 24LL);
                    if ( v36 )
                      v36 = *(_QWORD *)(v36 + 8);
                    v35[4] = v36;
                    v35[5] = a1;
                    v35[6] = v28;
                    WdLogEvent5_WdPresentTokenEvent(v35);
                  }
                }
              }
              ++v22;
            }
            while ( v22 < *(_DWORD *)(v6 + 64) );
            v5 = v47;
          }
        }
        VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v40);
        v21 = v45;
        v15 = v42;
        v20 = v44;
        v8 = v41;
      }
      v4 = v48;
    }
  }
  else
  {
    v37 = *((int *)a1 + 192);
    v8 = 3 * (v37 + 3);
    *(_QWORD *)(v1 + 24 * (v37 + 3)) = *((_QWORD *)a1 + 95);
    ++*(_QWORD *)(v5 + 1288);
  }
  VidSchiProfilePerformanceTick(4LL, v6, v4, v8, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiInsertCommandToHwQueue(a1);
  AcquireSpinLock::Release((AcquireSpinLock *)v46);
  v38 = *(_QWORD *)(v5 + 8);
  if ( v38 )
  {
    v39 = *(VIDMM_DEVICE **)(v38 + 648);
    if ( v39 )
      VIDMM_DEVICE::EnsureSchedulable(v39, 1);
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v46);
}
