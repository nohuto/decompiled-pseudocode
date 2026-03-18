/*
 * XREFs of ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C001843C
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C0018420 (VidSchFlushQueuePackets.c)
 *     VidSchFlushPresentReferencesAndDisableOverlays @ 0x1C00C84A0 (VidSchFlushPresentReferencesAndDisableOverlays.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C0002548 (VidSchiSetFlipDevice.c)
 *     VidSchiAcceptsIncomingWork @ 0x1C0005130 (VidSchiAcceptsIncomingWork.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiDecrementDeviceReference @ 0x1C0010F84 (VidSchiDecrementDeviceReference.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiClearFlipDevice @ 0x1C00118C8 (VidSchiClearFlipDevice.c)
 *     VidSchiFlushQueuePacket @ 0x1C002E2F4 (VidSchiFlushQueuePacket.c)
 *     ?VidSchiAbortMmIoFlipPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_DEVICE@@I@Z @ 0x1C00314F8 (-VidSchiAbortMmIoFlipPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_DEVICE@@I@Z.c)
 */

void __fastcall VidSchFlushQueuePacketsInternal(KSPIN_LOCK *a1, unsigned int a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v5; // r12d
  unsigned int v6; // r13d
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // r8
  KSPIN_LOCK *v11; // r15
  __int64 ****v12; // r14
  __int64 v13; // rdx
  __int64 ***v14; // rdi
  __int64 ***jj; // rbx
  __int64 ***kk; // rsi
  __int64 ***mm; // rsi
  __int64 ***v18; // r12
  __int64 ***v19; // rbx
  int v20; // esi
  __int64 ***i; // rdx
  signed __int64 v22; // rax
  __int64 ***v23; // rax
  __int64 **v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 ***v28; // rax
  int v29; // ebx
  __int64 v30; // rsi
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  _DWORD *v33; // rdx
  signed __int64 v34; // rtt
  _QWORD *j; // r10
  _QWORD *v36; // rbx
  _QWORD *k; // r11
  _QWORD *v38; // r11
  _QWORD *v39; // rbx
  _QWORD *m; // r11
  _QWORD *v41; // r11
  _QWORD *v42; // r10
  unsigned int v43; // r8d
  _QWORD *v44; // r15
  _QWORD *n; // r11
  _QWORD *v46; // r12
  _QWORD *ii; // rbx
  _QWORD *v48; // rax
  __int64 *v49; // rax
  __int64 *v50; // rcx
  __int64 **v51; // rcx
  __int64 ***v52; // r13
  __int64 ***v53; // rsi
  __int64 ***v54; // r15
  __int64 *v55; // [rsp+40h] [rbp-71h] BYREF
  __int64 **v56; // [rsp+48h] [rbp-69h]
  int v57; // [rsp+50h] [rbp-61h]
  _QWORD v58[2]; // [rsp+58h] [rbp-59h] BYREF
  char v59; // [rsp+68h] [rbp-49h]
  __int64 **v60; // [rsp+70h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v62[112]; // [rsp+90h] [rbp-21h] BYREF
  int v63; // [rsp+110h] [rbp+5Fh]
  unsigned int v65; // [rsp+120h] [rbp+6Fh]
  char v66; // [rsp+128h] [rbp+77h]

  v5 = -1;
  v6 = a2;
  if ( a3 < *((_DWORD *)a1 + 10) )
    v5 = a3;
  v65 = v5;
  if ( VidSchiAcceptsIncomingWork((__int64)a1) )
  {
    v11 = (KSPIN_LOCK *)(v9 + 1648);
    v12 = (__int64 ****)(v9 + 280);
    if ( v8 == 1 )
    {
      v20 = 0;
      v56 = &v55;
      v57 = 0;
      v55 = (__int64 *)&v55;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 1648), &LockHandle);
      for ( i = *v12; i != (__int64 ***)v12; i = (__int64 ***)*i )
      {
        _m_prefetchw(i - 10);
        v22 = (signed __int64)*(i - 10);
        while ( v22 )
        {
          v34 = v22;
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)i - 10, v22 + 1, v22);
          if ( v34 == v22 )
          {
            v57 = ++v20;
            goto LABEL_26;
          }
        }
        v23 = (__int64 ***)*i;
        if ( (*i)[1] != (__int64 *)i
          || (v24 = i[1], *v24 != (__int64 *)i)
          || (*v24 = (__int64 *)v23, v23[1] = v24, v25 = v56, *v56 != (__int64 *)&v55) )
        {
LABEL_71:
          __fastfail(3u);
        }
        i[1] = v56;
        *i = &v55;
        *v25 = i;
        v56 = (__int64 **)i;
LABEL_26:
        ;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v28 = *v12;
      v29 = 0;
      if ( *v12 != (__int64 ***)v12 )
      {
        do
        {
          v30 = (__int64)(v28 - 13);
          v66 = 0;
          v60 = *v28;
          v63 = v29 + 1;
          KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
          v31 = *((_DWORD *)a1 + 10);
          v32 = 0;
          if ( v31 )
          {
            v33 = a1 + 322;
            while ( v5 != v32 && v5 != -1 || *(_QWORD *)(*(_QWORD *)v33 + 16LL) != v30 )
            {
              ++v32;
              v33 += 2;
              if ( v32 >= v31 )
                goto LABEL_38;
            }
            v66 = 1;
          }
LABEL_38:
          for ( j = *(_QWORD **)(v30 + 72); j != (_QWORD *)(v30 + 72); j = (_QWORD *)*j )
          {
            v36 = j + 79;
            for ( k = (_QWORD *)j[79]; k != v36; k = (_QWORD *)*v38 )
              VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(k - 4), (struct _VIDSCH_DEVICE *)v30, v5);
            v39 = j + 81;
            for ( m = (_QWORD *)j[81]; m != v39; m = (_QWORD *)*v41 )
              VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(m - 4), (struct _VIDSCH_DEVICE *)v30, v5);
          }
          v42 = *(_QWORD **)(v30 + 88);
          if ( v42 != (_QWORD *)(v30 + 88) )
          {
            v43 = v65;
            do
            {
              v44 = v42 + 4;
              for ( n = (_QWORD *)v42[4]; n != v44; n = (_QWORD *)*n )
              {
                v46 = n + 16;
                for ( ii = (_QWORD *)n[16]; ii != v46; ii = (_QWORD *)*ii )
                  VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(ii - 4), (struct _VIDSCH_DEVICE *)v30, v43);
              }
              v42 = (_QWORD *)*v42;
            }
            while ( v42 != (_QWORD *)(v30 + 88) );
            v5 = v43;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( v66 )
          {
            if ( v5 == -1 )
              VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)a1, v30, 6u);
            else
              VidSchiSetFlipDevice((struct _VIDSCH_GLOBAL *)a1, v5, v30, 0, 6u, 0, a5);
          }
          VidSchiDecrementDeviceReference((char *)v30, 0);
          v28 = (__int64 ***)v60;
          v11 = a1 + 206;
          v29 = v63;
        }
        while ( v60 != (__int64 **)v12 );
        v20 = v57;
        v11 = a1 + 206;
      }
      if ( v29 != v20 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26);
        v48[5] = v20;
        v48[6] = v29;
        v48[3] = 281LL;
        v48[4] = 2304LL;
        v48[7] = a1;
        WdLogEvent5_WdCriticalError(v48);
        __debugbreak();
      }
      KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
      while ( 1 )
      {
        v49 = v55;
        if ( v55 == (__int64 *)&v55 )
          break;
        if ( (__int64 **)v55[1] != &v55 )
          goto LABEL_71;
        v50 = (__int64 *)*v55;
        if ( *(__int64 **)(*v55 + 8) != v55 )
          goto LABEL_71;
        v55 = (__int64 *)*v55;
        v50[1] = (__int64)&v55;
        v51 = (__int64 **)v12[1];
        if ( *v51 != (__int64 *)v12 )
          goto LABEL_71;
        *v49 = (__int64)v12;
        v49[1] = (__int64)v51;
        *v51 = v49;
        v12[1] = (__int64 ***)v49;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v62, v11, v10, 0);
      v14 = *v12;
      v58[1] = v58;
      v58[0] = v58;
      v59 = 0;
      if ( v14 == (__int64 ***)v12 )
        goto LABEL_16;
      do
      {
        for ( jj = (__int64 ***)*(v14 - 4); jj != v14 - 4; jj = (__int64 ***)*jj )
        {
          for ( kk = (__int64 ***)jj[79]; kk != jj + 79; kk = (__int64 ***)*kk )
            VidSchiFlushQueuePacket(v58, v13, kk - 4, v6);
          for ( mm = (__int64 ***)jj[81]; mm != jj + 81; mm = (__int64 ***)*mm )
            VidSchiFlushQueuePacket(v58, v13, mm - 4, v6);
        }
        v18 = v14 - 2;
        v19 = (__int64 ***)*(v14 - 2);
        if ( v19 != v14 - 2 )
        {
          do
          {
            v52 = v19 + 4;
            v53 = (__int64 ***)v19[4];
            if ( v53 != v19 + 4 )
            {
              do
              {
                v54 = (__int64 ***)v53[16];
                if ( v54 != v53 + 16 )
                {
                  do
                  {
                    VidSchiFlushQueuePacket(v58, v13, v54 - 4, a2);
                    v54 = (__int64 ***)*v54;
                  }
                  while ( v54 != v53 + 16 );
                  v52 = v19 + 4;
                }
                v53 = (__int64 ***)*v53;
              }
              while ( v53 != v52 );
              v18 = v14 - 2;
            }
            v19 = (__int64 ***)*v19;
          }
          while ( v19 != v18 );
          v6 = a2;
        }
        v14 = (__int64 ***)*v14;
      }
      while ( v14 != (__int64 ***)v12 );
      if ( !v59 )
LABEL_16:
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v58);
      AcquireSpinLock::Release((AcquireSpinLock *)v62);
    }
  }
}
