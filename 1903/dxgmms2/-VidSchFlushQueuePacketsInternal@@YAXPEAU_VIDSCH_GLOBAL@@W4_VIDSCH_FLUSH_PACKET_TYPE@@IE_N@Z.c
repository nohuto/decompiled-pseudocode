/*
 * XREFs of ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C00178EC
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C00178D0 (VidSchFlushQueuePackets.c)
 *     VidSchFlushPresentReferencesAndDisableOverlays @ 0x1C00CB550 (VidSchFlushPresentReferencesAndDisableOverlays.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C0003A50 (VidSchiSetFlipDevice.c)
 *     VidSchiAcceptsIncomingWork @ 0x1C00069F0 (VidSchiAcceptsIncomingWork.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0008470 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiDecrementDeviceReference @ 0x1C0010A98 (VidSchiDecrementDeviceReference.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011290 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiClearFlipDevice @ 0x1C00113A4 (VidSchiClearFlipDevice.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011414 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiFlushQueuePacket @ 0x1C002E988 (VidSchiFlushQueuePacket.c)
 *     ?VidSchiAbortMmIoFlipPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_DEVICE@@I@Z @ 0x1C0031D40 (-VidSchiAbortMmIoFlipPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_DEVICE@@I@Z.c)
 */

void __fastcall VidSchFlushQueuePacketsInternal(KSPIN_LOCK *a1, unsigned int a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v5; // r12d
  unsigned int v6; // r13d
  int v8; // edx
  __int64 v9; // rcx
  int v10; // ebx
  KSPIN_LOCK *v11; // r15
  __int64 ****v12; // rsi
  __int64 v13; // rdx
  __int64 ***v14; // rdi
  __int64 ***jj; // rbx
  __int64 ***kk; // r14
  __int64 ***mm; // r14
  __int64 ***v18; // r12
  __int64 ***v19; // rbx
  int v20; // edi
  __int64 ***i; // rdx
  signed __int64 v22; // rax
  __int64 ***v23; // rax
  __int64 **v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 ***v28; // rax
  __int64 v29; // rdi
  unsigned int v30; // r8d
  unsigned int v31; // ecx
  _DWORD *v32; // rdx
  signed __int64 v33; // rtt
  _QWORD *j; // r10
  _QWORD *v35; // rbx
  _QWORD *k; // r11
  _QWORD *v37; // r11
  _QWORD *v38; // rbx
  _QWORD *m; // r11
  _QWORD *v40; // r11
  _QWORD *v41; // r10
  unsigned int v42; // r8d
  _QWORD *v43; // r15
  _QWORD *n; // r11
  _QWORD *v45; // r12
  _QWORD *ii; // rbx
  _QWORD *v47; // rax
  __int64 *v48; // rax
  __int64 *v49; // rcx
  __int64 **v50; // rcx
  __int64 ***v51; // r13
  __int64 ***v52; // r14
  __int64 ***v53; // r15
  __int64 *v54; // [rsp+40h] [rbp-71h] BYREF
  __int64 **v55; // [rsp+48h] [rbp-69h]
  int v56; // [rsp+50h] [rbp-61h]
  _QWORD v57[2]; // [rsp+58h] [rbp-59h] BYREF
  char v58; // [rsp+68h] [rbp-49h]
  __int64 **v59; // [rsp+70h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v61[4]; // [rsp+90h] [rbp-21h] BYREF
  __int16 v62; // [rsp+B0h] [rbp-1h]
  int v63; // [rsp+110h] [rbp+5Fh]
  unsigned int v65; // [rsp+120h] [rbp+6Fh]
  char v66; // [rsp+128h] [rbp+77h]

  v5 = -1;
  v6 = a2;
  if ( a3 < *((_DWORD *)a1 + 10) )
    v5 = a3;
  v65 = v5;
  v10 = 0;
  if ( VidSchiAcceptsIncomingWork((__int64)a1) )
  {
    v11 = (KSPIN_LOCK *)(v9 + 1648);
    v12 = (__int64 ****)(v9 + 280);
    if ( v8 == 1 )
    {
      v56 = 0;
      v55 = &v54;
      v54 = (__int64 *)&v54;
      v20 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 1648), &LockHandle);
      for ( i = *v12; i != (__int64 ***)v12; i = (__int64 ***)*i )
      {
        _m_prefetchw(i - 10);
        v22 = (signed __int64)*(i - 10);
        while ( v22 )
        {
          v33 = v22;
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)i - 10, v22 + 1, v22);
          if ( v33 == v22 )
          {
            v56 = ++v20;
            goto LABEL_26;
          }
        }
        v23 = (__int64 ***)*i;
        if ( (*i)[1] != (__int64 *)i
          || (v24 = i[1], *v24 != (__int64 *)i)
          || (*v24 = (__int64 *)v23, v23[1] = v24, v25 = v55, *v55 != (__int64 *)&v54) )
        {
LABEL_71:
          __fastfail(3u);
        }
        i[1] = v55;
        *i = &v54;
        *v25 = i;
        v55 = (__int64 **)i;
LABEL_26:
        ;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v28 = *v12;
      if ( *v12 != (__int64 ***)v12 )
      {
        do
        {
          v29 = (__int64)(v28 - 13);
          v66 = 0;
          v59 = *v28;
          v63 = v10 + 1;
          KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
          v30 = *((_DWORD *)a1 + 10);
          v31 = 0;
          if ( v30 )
          {
            v32 = a1 + 322;
            while ( v5 != v31 && v5 != -1 || *(_QWORD *)(*(_QWORD *)v32 + 16LL) != v29 )
            {
              ++v31;
              v32 += 2;
              if ( v31 >= v30 )
                goto LABEL_38;
            }
            v66 = 1;
          }
LABEL_38:
          for ( j = *(_QWORD **)(v29 + 72); j != (_QWORD *)(v29 + 72); j = (_QWORD *)*j )
          {
            v35 = j + 79;
            for ( k = (_QWORD *)j[79]; k != v35; k = (_QWORD *)*v37 )
              VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(k - 4), (struct _VIDSCH_DEVICE *)v29, v5);
            v38 = j + 81;
            for ( m = (_QWORD *)j[81]; m != v38; m = (_QWORD *)*v40 )
              VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(m - 4), (struct _VIDSCH_DEVICE *)v29, v5);
          }
          v41 = *(_QWORD **)(v29 + 88);
          if ( v41 != (_QWORD *)(v29 + 88) )
          {
            v42 = v65;
            do
            {
              v43 = v41 + 4;
              for ( n = (_QWORD *)v41[4]; n != v43; n = (_QWORD *)*n )
              {
                v45 = n + 16;
                for ( ii = (_QWORD *)n[16]; ii != v45; ii = (_QWORD *)*ii )
                  VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(ii - 4), (struct _VIDSCH_DEVICE *)v29, v42);
              }
              v41 = (_QWORD *)*v41;
            }
            while ( v41 != (_QWORD *)(v29 + 88) );
            v5 = v42;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( v66 )
          {
            if ( v5 == -1 )
              VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)a1, v29, 6u);
            else
              VidSchiSetFlipDevice((struct _VIDSCH_GLOBAL *)a1, v5, v29, 0, 6u, 0, a5);
          }
          VidSchiDecrementDeviceReference((char *)v29, 0);
          v28 = (__int64 ***)v59;
          v11 = a1 + 206;
          v10 = v63;
        }
        while ( v59 != (__int64 **)v12 );
        v20 = v56;
        v11 = a1 + 206;
      }
      if ( v10 != v20 )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26);
        v47[5] = v20;
        v47[6] = v10;
        v47[3] = 281LL;
        v47[4] = 2304LL;
        v47[7] = a1;
        WdLogEvent5_WdCriticalError(v47);
        __debugbreak();
      }
      KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
      while ( 1 )
      {
        v48 = v54;
        if ( v54 == (__int64 *)&v54 )
          break;
        if ( (__int64 **)v54[1] != &v54 )
          goto LABEL_71;
        v49 = (__int64 *)*v54;
        if ( *(__int64 **)(*v54 + 8) != v54 )
          goto LABEL_71;
        v54 = (__int64 *)*v54;
        v49[1] = (__int64)&v54;
        v50 = (__int64 **)v12[1];
        if ( *v50 != (__int64 *)v12 )
          goto LABEL_71;
        *v48 = (__int64)v12;
        v48[1] = (__int64)v50;
        *v50 = v48;
        v12[1] = (__int64 ***)v48;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      v61[0] = v9 + 1648;
      v62 = 0;
      AcquireSpinLock::Acquire((Acquire *)v61);
      v14 = *v12;
      v57[1] = v57;
      v57[0] = v57;
      v58 = 0;
      if ( v14 == (__int64 ***)v12 )
        goto LABEL_16;
      do
      {
        for ( jj = (__int64 ***)*(v14 - 4); jj != v14 - 4; jj = (__int64 ***)*jj )
        {
          for ( kk = (__int64 ***)jj[79]; kk != jj + 79; kk = (__int64 ***)*kk )
            VidSchiFlushQueuePacket(v57, v13, kk - 4, v6);
          for ( mm = (__int64 ***)jj[81]; mm != jj + 81; mm = (__int64 ***)*mm )
            VidSchiFlushQueuePacket(v57, v13, mm - 4, v6);
        }
        v18 = v14 - 2;
        v19 = (__int64 ***)*(v14 - 2);
        if ( v19 != v14 - 2 )
        {
          do
          {
            v51 = v19 + 4;
            v52 = (__int64 ***)v19[4];
            if ( v52 != v19 + 4 )
            {
              do
              {
                v53 = (__int64 ***)v52[16];
                if ( v53 != v52 + 16 )
                {
                  do
                  {
                    VidSchiFlushQueuePacket(v57, v13, v53 - 4, a2);
                    v53 = (__int64 ***)*v53;
                  }
                  while ( v53 != v52 + 16 );
                  v51 = v19 + 4;
                }
                v52 = (__int64 ***)*v52;
              }
              while ( v52 != v51 );
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
      if ( !v58 )
LABEL_16:
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v57);
      AcquireSpinLock::Release((AcquireSpinLock *)v61);
    }
  }
}
