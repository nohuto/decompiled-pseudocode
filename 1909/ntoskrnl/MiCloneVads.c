/*
 * XREFs of MiCloneVads @ 0x1402E2C0C
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14089A6F4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiReturnFullProcessCharges @ 0x14001FD90 (MiReturnFullProcessCharges.c)
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140059100 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiIsVadLargePrivate @ 0x1400731FC (MiIsVadLargePrivate.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400734A0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     MiLocateLockedVadEvent @ 0x1400E8428 (MiLocateLockedVadEvent.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiLockAweVadsExclusive @ 0x1402D6C04 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1402D79FC (MiUnlockAweVadsExclusive.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiFreeForkMaps @ 0x1402E40FC (MiFreeForkMaps.c)
 *     MiInitializeForkMaps @ 0x1402E4924 (MiInitializeForkMaps.c)
 *     MiInsertClone @ 0x1402E4988 (MiInsertClone.c)
 *     MiUpdateForkMaps @ 0x1402E4DC0 (MiUpdateForkMaps.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReturnFullProcessCommitment @ 0x1405ECF80 (MiReturnFullProcessCommitment.c)
 *     MiBuildNewCloneDescriptor @ 0x14089A550 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x14089AD38 (MiFreeCloneDescriptor.c)
 */

__int64 __fastcall MiCloneVads(_QWORD *a1, struct _KPROCESS *a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  _QWORD *v7; // r14
  __int64 v8; // r12
  __int64 v9; // rdi
  unsigned __int64 *v10; // r15
  __int64 v11; // rdi
  int v12; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rsi
  struct _KTHREAD *v15; // rcx
  LONG *SharedVm; // rbx
  KIRQL v17; // al
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  struct _KTHREAD *v21; // rdi
  LONG *v22; // rbx
  unsigned __int64 j; // rdi
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // edi
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  _QWORD *v34; // rbx
  _QWORD **v35; // rax
  __int64 v36; // r15
  _QWORD *v37; // rcx
  _QWORD *v38; // rcx
  _QWORD *v39; // rax
  unsigned __int64 v40; // rdi
  unsigned __int64 Address; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // r10
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rbx
  LONG *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  LONG *v51; // r12
  int v52; // esi
  unsigned __int64 updated; // rax
  int v54; // ecx
  unsigned __int64 v55; // rcx
  bool v56; // cc
  __int64 v57; // rbx
  unsigned __int64 v58; // r15
  unsigned __int64 v59; // rsi
  int v60; // edx
  __int64 **LockedVadEvent; // rax
  __int64 v62; // r9
  size_t v63; // r8
  __int64 v64; // r12
  __int64 *v65; // rcx
  _QWORD *i; // rax
  unsigned __int64 v67; // r15
  unsigned __int64 v68; // r14
  _QWORD *v69; // rbx
  _QWORD **v70; // rax
  unsigned __int64 v71; // rcx
  _QWORD *v72; // rcx
  LONG *v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  unsigned __int64 v77; // r15
  _QWORD *v78; // rbx
  char v80; // [rsp+80h] [rbp-80h]
  int v81; // [rsp+84h] [rbp-7Ch]
  int v82; // [rsp+88h] [rbp-78h] BYREF
  int v83; // [rsp+8Ch] [rbp-74h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  unsigned __int64 v85; // [rsp+98h] [rbp-68h]
  unsigned __int64 v86; // [rsp+A0h] [rbp-60h]
  _QWORD *v87; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v88; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v89; // [rsp+B8h] [rbp-48h]
  __int64 v90; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v91; // [rsp+C8h] [rbp-38h]
  _QWORD *v92; // [rsp+D0h] [rbp-30h]
  __int64 v93; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v94; // [rsp+E0h] [rbp-20h]
  __int64 v95; // [rsp+E8h] [rbp-18h]
  _QWORD *v96; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v97; // [rsp+F8h] [rbp-8h]
  _QWORD *v98; // [rsp+100h] [rbp+0h]
  unsigned __int64 v99; // [rsp+108h] [rbp+8h]
  _QWORD *v100; // [rsp+110h] [rbp+10h]
  _DWORD *v101; // [rsp+118h] [rbp+18h]
  _QWORD v102[10]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v103[24]; // [rsp+170h] [rbp+70h] BYREF

  v89 = a3;
  v7 = a1;
  v100 = a1;
  v95 = a4;
  v101 = a6;
  memset(v102, 0, 0x48uLL);
  memset(v103, 0, 0xB8uLL);
  v83 = 0;
  v91 = 0LL;
  v85 = 0LL;
  v88 = 0LL;
  v93 = 0LL;
  v8 = 0LL;
  v94 = 0LL;
  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    v9 = v7[116];
    if ( !v9 )
      v9 = 1LL;
    v90 = MiBuildNewCloneDescriptor(v7, v9, *(_QWORD *)(v7[162] + 360LL));
    v10 = (unsigned __int64 *)v90;
    if ( !v90 )
      return 3221225626LL;
    v11 = 32 * (v9 + 1);
    v12 = PsChargeProcessNonPagedPoolQuota((__int64)a2, v11);
    if ( v12 < 0 )
    {
      v28 = v12;
      goto LABEL_90;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x64436D4Du);
    v98 = PoolWithTag;
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      PsReturnProcessNonPagedPoolQuota(a2, v11);
      v28 = -1073741670;
LABEL_90:
      MiFreeCloneDescriptor(v7, v90);
      return (unsigned int)v28;
    }
    v15 = CurrentThread;
    PoolWithTag[8] = v11;
    MiLockAweVadsExclusive((__int64)v15);
    SharedVm = MiGetSharedVm((__int64)(v7 + 160));
    v17 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    LOBYTE(v20) = v17;
    v80 = v17;
    if ( v7[116] <= v10[5] )
    {
      v21 = CurrentThread;
      *v14 = v89;
      v7[113] = v21;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 160), v20, v18, v19);
      MiUnlockAweVadsExclusive((__int64)v21);
      v22 = MiGetSharedVm((__int64)(v7 + 160));
      ExAcquireSpinLockExclusive(v22);
      j = 0LL;
      v22[1] = 0;
      v24 = v10[3];
      v99 = v24;
      if ( (unsigned int)MiInitializeForkMaps(a2, v102) )
      {
        v29 = v24;
        v86 = v24;
        v10[6] = 1LL;
        MiInsertClone(v7, v10, 1LL);
        v33 = (_QWORD *)a2[2].Affinity.Bitmap[8];
        LODWORD(v103[0]) = 1;
        v34 = 0LL;
        v103[1] = 20LL;
        WORD2(v103[0]) = 0;
        v103[2] = 0LL;
        v103[3] = 0LL;
        while ( v33 )
        {
          v34 = v33;
          v33 = (_QWORD *)*v33;
        }
        if ( v34 )
        {
          do
          {
            v35 = (_QWORD **)v34[1];
            v36 = (__int64)v34;
            v96 = v34;
            v37 = v34;
            v92 = v34;
            if ( v35 )
            {
              v38 = *v35;
              v34 = v35;
              v87 = v35;
              if ( v38 )
              {
                do
                {
                  v39 = (_QWORD *)*v38;
                  v34 = v38;
                  v87 = v38;
                  v38 = v39;
                }
                while ( v39 );
              }
            }
            else
            {
              v34 = (_QWORD *)(v34[2] & 0xFFFFFFFFFFFFFFFCuLL);
              v87 = v34;
              if ( v34 )
              {
                do
                {
                  if ( (_QWORD *)*v34 == v37 )
                    break;
                  v37 = v34;
                  v34 = (_QWORD *)(v34[2] & 0xFFFFFFFFFFFFFFFCuLL);
                }
                while ( v34 );
                v87 = v34;
              }
            }
            v40 = (*(unsigned int *)(v36 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v36 + 32) << 32)) << 12;
            Address = MiLocateAddress(v40);
            v42 = *(unsigned int *)(v36 + 52);
            LODWORD(v42) = v42 & 0x7FFFFFFF;
            v43 = (unsigned __int64)*(unsigned __int8 *)(v36 + 34) << 31;
            v89 = Address;
            v30 = v42 | v43;
            if ( v30 < 0x7FFFFFFFDLL && !MiIsVadLargePrivate(v36) )
            {
              v45 = v44 + ((v40 >> 9) & 0x7FFFFFFFF8LL);
              v46 = v44
                  + 8
                  * ((*(unsigned int *)(v36 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v36 + 33) << 32)) & 0xFFFFFFFFFLL);
              v97 = v46;
              do
              {
                MiFlushTbList((int *)v103, v30, v31, v32);
                if ( MiWorkingSetIsContended((__int64)(v7 + 160)) || KeShouldYieldProcessor() )
                {
                  v47 = MiGetSharedVm((__int64)(v7 + 160));
                  v51 = v47;
                  if ( (*v47 & 0x40000000) != 0 )
                  {
                    v81 = 1;
                    v47[1] = 1;
                  }
                  else
                  {
                    v81 = 0;
                  }
                  LOBYTE(v48) = v80;
                  MiUnlockWorkingSetExclusive((__int64)(v7 + 160), v48, v49, v50);
                  v52 = 0;
                  if ( v81 )
                  {
                    v82 = 0;
                    while ( v51[1] )
                    {
                      KeYieldProcessorEx(&v82);
                      if ( (v82 & 0x3F) == 0 )
                      {
                        v52 = 1;
                        break;
                      }
                    }
                  }
                  ExAcquireSpinLockExclusive(v51);
                  if ( !v52 )
                    v51[1] = 0;
                  v29 = v86;
                }
                updated = MiUpdateForkMaps((unsigned int)v102, v45, v46, (unsigned int)&v88, (__int64)v7, v80);
                v54 = *(_DWORD *)(v36 + 48);
                v45 = updated;
                if ( (*(_BYTE *)(v36 + 48) & 0x70) != 0x50 )
                {
                  if ( updated > v46 )
                    break;
                  v55 = v46;
                  v56 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v46;
                  v57 = v102[8];
                  if ( v56 )
                    v55 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088;
                  v58 = v102[5] - updated;
                  v59 = v55;
                  do
                  {
                    if ( MiBuildForkPte(
                           (__int64)v7,
                           (__int64)a2,
                           v45,
                           (unsigned __int64 *)(v58 + v45),
                           v95,
                           v29,
                           &v88,
                           v57,
                           (int *)v103,
                           v89,
                           (__int64)v92,
                           a5,
                           v80,
                           &v93,
                           &v83) )
                    {
                      v29 += 32LL;
                    }
                    v45 += 8LL;
                  }
                  while ( v45 <= v59 );
                  v46 = v97;
                  v36 = (__int64)v96;
                  v86 = v29;
                  v54 = *((_DWORD *)v96 + 12);
                }
              }
              while ( v45 <= v46 );
              v34 = v87;
              v30 = 3145728LL;
              if ( (v54 & 0x300000) == 0x300000 )
              {
                MiLocateLockedVadEvent(v36, 4);
                LockedVadEvent = MiLocateLockedVadEvent(v89, v60);
                memmove(*(void **)(v62 + 16), LockedVadEvent[2], v63);
              }
            }
            j = 0LL;
          }
          while ( v34 );
          v14 = v98;
          v10 = (unsigned __int64 *)v90;
        }
        MiFlushTbList((int *)v103, v30, v31, v32);
        MiFreeForkMaps(v102);
        v64 = v29 - v99;
        v65 = (__int64 *)v10[7];
        a2[1].Affinity.Bitmap[13] += v88;
        v8 = v64 >> 5;
        v88 = a2[1].Affinity.Bitmap[13];
        if ( v8 )
        {
          *v65 = v8;
          v10[6] = v8;
          v10[5] = v8;
        }
        else
        {
          RtlAvlRemoveNode(v7 + 115, v10);
        }
        for ( i = (_QWORD *)v7[115]; i; i = (_QWORD *)*i )
          j = (unsigned __int64)i;
        if ( j )
        {
          v67 = v85;
          v68 = v91;
          do
          {
            if ( *(_QWORD *)(j + 48) )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(j + 56) + 8LL));
              v69 = (_QWORD *)*v14;
              v67 += v14[8];
              v68 += *(_QWORD *)(j + 64);
              *(_OWORD *)v14 = *(_OWORD *)j;
              *((_OWORD *)v14 + 1) = *(_OWORD *)(j + 16);
              *((_OWORD *)v14 + 2) = *(_OWORD *)(j + 32);
              *((_OWORD *)v14 + 3) = *(_OWORD *)(j + 48);
              *((_OWORD *)v14 + 4) = *(_OWORD *)(j + 64);
              *((_OWORD *)v14 + 5) = *(_OWORD *)(j + 80);
              *((_OWORD *)v14 + 6) = *(_OWORD *)(j + 96);
              MiInsertClone(a2, v14, 0LL);
              v14 = v69;
            }
            v70 = *(_QWORD ***)(j + 8);
            v71 = j;
            if ( v70 )
            {
              v72 = *v70;
              for ( j = *(_QWORD *)(j + 8); v72; v72 = (_QWORD *)*v72 )
                j = (unsigned __int64)v72;
            }
            else
            {
              while ( 1 )
              {
                j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !j || *(_QWORD *)j == v71 )
                  break;
                v71 = j;
              }
            }
          }
          while ( j );
          v91 = v68;
          v7 = v100;
          v85 = v67;
          v10 = (unsigned __int64 *)v90;
        }
        v28 = 0;
      }
      else
      {
        MiFreeForkMaps(v102);
        v28 = -1073741670;
      }
      LOBYTE(v25) = v80;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 160), v25, v26, v27);
      MiLockAweVadsExclusive((__int64)CurrentThread);
      v73 = MiGetSharedVm((__int64)(v7 + 160));
      ExAcquireSpinLockExclusive(v73);
      v73[1] = 0;
      LOBYTE(v74) = v80;
      v7[113] = 0LL;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 160), v74, v75, v76);
      MiUnlockAweVadsExclusive((__int64)CurrentThread);
      if ( v14 )
      {
        v77 = v85;
        do
        {
          v77 += v14[8];
          v78 = (_QWORD *)*v14;
          ExFreePoolWithTag(v14, 0);
          v14 = v78;
        }
        while ( v78 );
        v85 = v77;
        v10 = (unsigned __int64 *)v90;
      }
      if ( v85 > v91 )
        PsReturnProcessNonPagedPoolQuota(a2, v85 - v91);
      if ( v93 )
        MiReturnFullProcessCommitment(a2, v93);
      if ( v94 )
        MiReturnFullProcessCharges((__int64)a2, v94);
      if ( !v8 || v28 < 0 )
        MiFreeCloneDescriptor(v7, v10);
      if ( v83 == 1 )
        *v101 = 1;
      return (unsigned int)v28;
    }
    MiUnlockWorkingSetExclusive((__int64)(v7 + 160), v20, v18, v19);
    MiUnlockAweVadsExclusive((__int64)CurrentThread);
    MiFreeCloneDescriptor(v7, v10);
    PsReturnProcessNonPagedPoolQuota(a2, v11);
    ExFreePoolWithTag(v14, 0);
  }
}
