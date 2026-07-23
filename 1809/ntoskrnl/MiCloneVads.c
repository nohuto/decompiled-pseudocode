/*
 * XREFs of MiCloneVads @ 0x1402C8D58
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14085F284 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068560 (PsReturnProcessNonPagedPoolQuota.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiVadMapsLargeImage @ 0x140074A00 (MiVadMapsLargeImage.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140076C00 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiReturnFullProcessCharges @ 0x14007FF00 (MiReturnFullProcessCharges.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MiLockAweVadsExclusive @ 0x1402B14CC (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1402B22FC (MiUnlockAweVadsExclusive.c)
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 *     MiFreeForkMaps @ 0x1402CA24C (MiFreeForkMaps.c)
 *     MiInitializeForkMaps @ 0x1402CAA68 (MiInitializeForkMaps.c)
 *     MiInsertClone @ 0x1402CAACC (MiInsertClone.c)
 *     MiUpdateForkMaps @ 0x1402CADF8 (MiUpdateForkMaps.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiReturnFullProcessCommitment @ 0x1405F3998 (MiReturnFullProcessCommitment.c)
 *     MiBuildNewCloneDescriptor @ 0x14085F0E0 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x14085F8B8 (MiFreeCloneDescriptor.c)
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
  struct _KTHREAD *v20; // rdi
  LONG *v21; // rbx
  unsigned __int64 j; // rdi
  unsigned __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // edi
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  _QWORD *v32; // rbx
  _QWORD **v33; // rax
  __int64 v34; // r15
  _QWORD *v35; // rcx
  _QWORD *v36; // rcx
  _QWORD *v37; // rax
  unsigned __int64 v38; // rdi
  unsigned __int64 Address; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 v42; // r10
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  LONG *v48; // r12
  __int64 v49; // rdx
  __int64 v50; // r8
  int v51; // esi
  unsigned __int64 updated; // rax
  int v53; // ecx
  unsigned __int64 v54; // rcx
  bool v55; // cc
  __int64 v56; // rbx
  __int64 v57; // r15
  unsigned __int64 v58; // rsi
  int v59; // edx
  __int64 **VadEvent; // rax
  __int64 v61; // r9
  size_t v62; // r8
  __int64 v63; // r12
  __int64 *v64; // rcx
  _QWORD *i; // rax
  unsigned __int64 v66; // r15
  unsigned __int64 v67; // r14
  _QWORD *v68; // rbx
  _QWORD **v69; // rax
  unsigned __int64 v70; // rcx
  _QWORD *v71; // rcx
  LONG *v72; // rbx
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int64 v75; // r15
  _QWORD *v76; // rbx
  KIRQL v78; // [rsp+80h] [rbp-80h]
  int v79; // [rsp+84h] [rbp-7Ch] BYREF
  int v80; // [rsp+88h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  unsigned __int64 v82; // [rsp+98h] [rbp-68h]
  unsigned __int64 v83; // [rsp+A0h] [rbp-60h]
  _QWORD *v84; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v85; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-48h]
  int v87; // [rsp+C0h] [rbp-40h]
  __int64 v88; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v89; // [rsp+D0h] [rbp-30h]
  _QWORD *v90; // [rsp+D8h] [rbp-28h]
  __int64 v91; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v92; // [rsp+E8h] [rbp-18h]
  __int64 v93; // [rsp+F0h] [rbp-10h]
  _QWORD *v94; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v95; // [rsp+100h] [rbp+0h]
  _QWORD *v96; // [rsp+108h] [rbp+8h]
  unsigned __int64 v97; // [rsp+110h] [rbp+10h]
  _QWORD *v98; // [rsp+118h] [rbp+18h]
  _DWORD *v99; // [rsp+120h] [rbp+20h]
  _BYTE v100[40]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v101; // [rsp+158h] [rbp+58h]
  __int64 v102; // [rsp+170h] [rbp+70h]
  int v103; // [rsp+180h] [rbp+80h] BYREF
  __int16 v104; // [rsp+184h] [rbp+84h]
  __int64 v105; // [rsp+188h] [rbp+88h]
  __int64 v106; // [rsp+190h] [rbp+90h]
  __int64 v107; // [rsp+198h] [rbp+98h]

  v99 = a6;
  v7 = a1;
  v93 = a4;
  v80 = 0;
  v89 = 0LL;
  v82 = 0LL;
  v85 = 0LL;
  v91 = 0LL;
  v8 = 0LL;
  v92 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v86 = a3;
  v98 = a1;
  while ( 1 )
  {
    v9 = v7[115];
    if ( !v9 )
      v9 = 1LL;
    v88 = MiBuildNewCloneDescriptor(v7, v9, *(_QWORD *)(v7[162] + 312LL));
    v10 = (unsigned __int64 *)v88;
    if ( !v88 )
      return 3221225626LL;
    v11 = 32 * (v9 + 1);
    v12 = PsChargeProcessNonPagedPoolQuota((__int64)a2, v11);
    if ( v12 < 0 )
    {
      v26 = v12;
      goto LABEL_90;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x64436D4Du);
    v96 = PoolWithTag;
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      PsReturnProcessNonPagedPoolQuota(a2, v11);
      v26 = -1073741670;
LABEL_90:
      MiFreeCloneDescriptor(v7, v88);
      return (unsigned int)v26;
    }
    v15 = CurrentThread;
    PoolWithTag[8] = v11;
    MiLockAweVadsExclusive((__int64)v15);
    SharedVm = MiGetSharedVm((__int64)(v7 + 160));
    v17 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v78 = v17;
    if ( v7[115] <= v10[5] )
    {
      v20 = CurrentThread;
      *v14 = v86;
      v7[112] = v20;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 160), v17, v18, v19);
      MiUnlockAweVadsExclusive((__int64)v20);
      v21 = MiGetSharedVm((__int64)(v7 + 160));
      ExAcquireSpinLockExclusive(v21);
      j = 0LL;
      v21[1] = 0;
      v23 = v10[3];
      v97 = v23;
      if ( (unsigned int)MiInitializeForkMaps(a2, v100) )
      {
        v27 = v23;
        v83 = v23;
        v10[6] = 1LL;
        MiInsertClone(v7, v10, 1LL);
        v31 = (_QWORD *)a2[2].Affinity.Bitmap[4];
        v103 = 1;
        v32 = 0LL;
        v105 = 20LL;
        v104 = 0;
        v106 = 0LL;
        v107 = 0LL;
        while ( v31 )
        {
          v32 = v31;
          v31 = (_QWORD *)*v31;
        }
        if ( v32 )
        {
          do
          {
            v33 = (_QWORD **)v32[1];
            v34 = (__int64)v32;
            v94 = v32;
            v35 = v32;
            v90 = v32;
            if ( v33 )
            {
              v36 = *v33;
              v32 = v33;
              v84 = v33;
              if ( v36 )
              {
                do
                {
                  v37 = (_QWORD *)*v36;
                  v32 = v36;
                  v84 = v36;
                  v36 = v37;
                }
                while ( v37 );
              }
            }
            else
            {
              v32 = (_QWORD *)(v32[2] & 0xFFFFFFFFFFFFFFFCuLL);
              v84 = v32;
              if ( v32 )
              {
                do
                {
                  if ( (_QWORD *)*v32 == v35 )
                    break;
                  v35 = v32;
                  v32 = (_QWORD *)(v32[2] & 0xFFFFFFFFFFFFFFFCuLL);
                }
                while ( v32 );
                v84 = v32;
              }
            }
            v38 = (*(unsigned int *)(v34 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 32) << 32)) << 12;
            Address = MiLocateAddress(v38);
            v40 = *(unsigned int *)(v34 + 52);
            LODWORD(v40) = v40 & 0x7FFFFFFF;
            v41 = (unsigned __int64)*(unsigned __int8 *)(v34 + 34) << 31;
            v86 = Address;
            v28 = v40 | v41;
            if ( v28 < 0x7FFFFFFFDLL && !MiVadMapsLargeImage(v34) && (*(_BYTE *)(v34 + 48) & 7) != 5 )
            {
              v43 = v42 + ((v38 >> 9) & 0x7FFFFFFFF8LL);
              v44 = v42
                  + 8
                  * ((*(unsigned int *)(v34 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 33) << 32)) & 0xFFFFFFFFFLL);
              v95 = v44;
              do
              {
                MiFlushTbList(&v103, v28, v29, v30);
                if ( MiWorkingSetIsContended((__int64)(v7 + 160)) || KeShouldYieldProcessor() )
                {
                  v48 = MiGetSharedVm((__int64)(v7 + 160));
                  v87 = *v48 & 0x40000000;
                  if ( v87 )
                    v48[1] = 1;
                  MiUnlockWorkingSetExclusive(v45, v78, v46, v47);
                  v51 = 0;
                  if ( v87 )
                  {
                    v79 = 0;
                    while ( v48[1] )
                    {
                      KeYieldProcessorEx(&v79, v49, v50);
                      if ( (v79 & 0x3F) == 0 )
                      {
                        v51 = 1;
                        break;
                      }
                    }
                  }
                  ExAcquireSpinLockExclusive(v48);
                  if ( !v51 )
                    v48[1] = 0;
                  v27 = v83;
                }
                updated = MiUpdateForkMaps((unsigned int)v100, v43, v44, (unsigned int)&v85, (__int64)v7, v78);
                v53 = *(_DWORD *)(v34 + 48);
                v43 = updated;
                if ( (*(_BYTE *)(v34 + 48) & 7) != 7 )
                {
                  if ( updated > v44 )
                    break;
                  v54 = v44;
                  v55 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v44;
                  v56 = v102;
                  if ( v55 )
                    v54 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088;
                  v57 = v101 - updated;
                  v58 = v54;
                  do
                  {
                    if ( MiBuildForkPte(
                           (__int64)v7,
                           (__int64)a2,
                           v43,
                           (_QWORD *)(v57 + v43),
                           v93,
                           v27,
                           &v85,
                           v56,
                           &v103,
                           v86,
                           (__int64)v90,
                           a5,
                           v78,
                           &v91,
                           &v80) )
                    {
                      v27 += 32LL;
                    }
                    v43 += 8LL;
                  }
                  while ( v43 <= v58 );
                  v44 = v95;
                  v34 = (__int64)v94;
                  v83 = v27;
                  v53 = *((_DWORD *)v94 + 12);
                }
              }
              while ( v43 <= v44 );
              v32 = v84;
              v28 = 4LL;
              if ( (v53 & 7) == 4 )
              {
                MiLocateVadEvent(v34, 4);
                VadEvent = MiLocateVadEvent(v86, v59);
                memmove(*(void **)(v61 + 16), VadEvent[2], v62);
              }
            }
            j = 0LL;
          }
          while ( v32 );
          v14 = v96;
          v10 = (unsigned __int64 *)v88;
        }
        MiFlushTbList(&v103, v28, v29, v30);
        MiFreeForkMaps(v100);
        v63 = v27 - v97;
        v64 = (__int64 *)v10[7];
        a2[1].Affinity.Bitmap[13] += v85;
        v8 = v63 >> 5;
        v85 = a2[1].Affinity.Bitmap[13];
        if ( v8 )
        {
          *v64 = v8;
          v10[6] = v8;
          v10[5] = v8;
        }
        else
        {
          RtlAvlRemoveNode(v7 + 114, v10);
        }
        for ( i = (_QWORD *)v7[114]; i; i = (_QWORD *)*i )
          j = (unsigned __int64)i;
        if ( j )
        {
          v66 = v82;
          v67 = v89;
          do
          {
            if ( *(_QWORD *)(j + 48) )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(j + 56) + 8LL));
              v68 = (_QWORD *)*v14;
              v66 += v14[8];
              v67 += *(_QWORD *)(j + 64);
              *(_OWORD *)v14 = *(_OWORD *)j;
              *((_OWORD *)v14 + 1) = *(_OWORD *)(j + 16);
              *((_OWORD *)v14 + 2) = *(_OWORD *)(j + 32);
              *((_OWORD *)v14 + 3) = *(_OWORD *)(j + 48);
              *((_OWORD *)v14 + 4) = *(_OWORD *)(j + 64);
              *((_OWORD *)v14 + 5) = *(_OWORD *)(j + 80);
              *((_OWORD *)v14 + 6) = *(_OWORD *)(j + 96);
              MiInsertClone(a2, v14, 0LL);
              v14 = v68;
            }
            v69 = *(_QWORD ***)(j + 8);
            v70 = j;
            if ( v69 )
            {
              v71 = *v69;
              for ( j = *(_QWORD *)(j + 8); v71; v71 = (_QWORD *)*v71 )
                j = (unsigned __int64)v71;
            }
            else
            {
              while ( 1 )
              {
                j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !j || *(_QWORD *)j == v70 )
                  break;
                v70 = j;
              }
            }
          }
          while ( j );
          v89 = v67;
          v7 = v98;
          v82 = v66;
          v10 = (unsigned __int64 *)v88;
        }
        v26 = 0;
      }
      else
      {
        MiFreeForkMaps(v100);
        v26 = -1073741670;
      }
      MiUnlockWorkingSetExclusive((__int64)(v7 + 160), v78, v24, v25);
      MiLockAweVadsExclusive((__int64)CurrentThread);
      v72 = MiGetSharedVm((__int64)(v7 + 160));
      ExAcquireSpinLockExclusive(v72);
      v72[1] = 0;
      v7[112] = 0LL;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 160), v78, v73, v74);
      MiUnlockAweVadsExclusive((__int64)CurrentThread);
      if ( v14 )
      {
        v75 = v82;
        do
        {
          v75 += v14[8];
          v76 = (_QWORD *)*v14;
          ExFreePoolWithTag(v14, 0);
          v14 = v76;
        }
        while ( v76 );
        v82 = v75;
        v10 = (unsigned __int64 *)v88;
      }
      if ( v82 > v89 )
        PsReturnProcessNonPagedPoolQuota(a2, v82 - v89);
      if ( v91 )
        MiReturnFullProcessCommitment(a2);
      if ( v92 )
        MiReturnFullProcessCharges((__int64)a2, v92);
      if ( !v8 || v26 < 0 )
        MiFreeCloneDescriptor(v7, v10);
      if ( v80 == 1 )
        *v99 = 1;
      return (unsigned int)v26;
    }
    MiUnlockWorkingSetExclusive((__int64)(v7 + 160), v17, v18, v19);
    MiUnlockAweVadsExclusive((__int64)CurrentThread);
    MiFreeCloneDescriptor(v7, v10);
    PsReturnProcessNonPagedPoolQuota(a2, v11);
    ExFreePoolWithTag(v14, 0);
  }
}
