/*
 * XREFs of PpmParkRegisterParking @ 0x1401897F0
 * Callers:
 *     PpmCheckInitProcessors @ 0x140750028 (PpmCheckInitProcessors.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopExecuteOnTargetProcessors @ 0x1400A5E08 (PopExecuteOnTargetProcessors.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeQueryNodeActiveAffinity @ 0x1400E3CC0 (KeQueryNodeActiveAffinity.c)
 *     PpmParkApplyPolicy @ 0x140189FB0 (PpmParkApplyPolicy.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PpmParkParkingAvailable @ 0x14075050C (PpmParkParkingAvailable.c)
 *     PpmIdleInitializeConcurrency @ 0x140750EF4 (PpmIdleInitializeConcurrency.c)
 */

__int64 PpmParkRegisterParking()
{
  __int64 v0; // r12
  KIRQL v1; // al
  __int64 v2; // rdi
  __int64 v3; // r14
  KIRQL v4; // bl
  _BYTE *v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // ebx
  char *PoolWithTag; // rax
  char *v9; // r13
  unsigned __int64 v10; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v12; // rdx
  unsigned int v13; // r15d
  int v14; // edi
  unsigned __int16 Group; // r14
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  char *v18; // rbx
  unsigned __int8 v19; // di
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int8 *v22; // rdi
  unsigned int v23; // r14d
  char v24; // al
  __int64 v25; // rdx
  unsigned int v26; // esi
  unsigned __int8 *v27; // rcx
  int v28; // eax
  unsigned __int16 v29; // cx
  __int64 v30; // rdx
  char *v31; // r8
  unsigned __int8 v32; // cl
  unsigned __int8 v33; // r8
  SIZE_T v34; // rbx
  PVOID v35; // rax
  void *v36; // r15
  void *v37; // rdi
  unsigned int *v38; // rbx
  __int64 v39; // r13
  unsigned int v40; // eax
  void *v41; // rcx
  size_t v42; // r8
  size_t v43; // rdi
  size_t v44; // rdi
  unsigned __int8 *v45; // r15
  KIRQL v46; // al
  KIRQL v47; // bl
  PVOID v48; // r15
  PVOID *v49; // rbx
  __int64 v50; // r14
  __int64 v51; // rsi
  PVOID *v52; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int16 v55; // cx
  __int64 v56; // rdx
  __int64 *v57; // r15
  unsigned __int8 v58; // al
  unsigned __int16 v59; // cx
  __int64 v60; // rdx
  char *v61; // r8
  __int64 v62; // r12
  unsigned int *v63; // r14
  unsigned int *v64; // rsi
  unsigned __int8 v65; // al
  void *v66; // rcx
  unsigned int v67; // eax
  size_t v68; // r8
  size_t v69; // rdi
  size_t v70; // rdi
  struct _KPRCB *v71; // rcx
  PVOID *v72; // rbx
  __int64 v73; // r14
  __int64 v74; // rsi
  PVOID *v75; // rdi
  unsigned int v76; // [rsp+28h] [rbp-E0h]
  unsigned int v77; // [rsp+2Ch] [rbp-DCh]
  unsigned int v78; // [rsp+30h] [rbp-D8h]
  USHORT Count[2]; // [rsp+34h] [rbp-D4h] BYREF
  ULONG v80; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v81; // [rsp+3Ch] [rbp-CCh]
  __int64 v82; // [rsp+40h] [rbp-C8h]
  PVOID v83; // [rsp+48h] [rbp-C0h]
  PVOID P; // [rsp+50h] [rbp-B8h]
  char *v85; // [rsp+58h] [rbp-B0h]
  PVOID v86; // [rsp+60h] [rbp-A8h]
  unsigned __int16 *v87; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v88; // [rsp+70h] [rbp-98h]
  __int64 v89; // [rsp+78h] [rbp-90h]
  struct _GROUP_AFFINITY Affinity; // [rsp+80h] [rbp-88h] BYREF
  int v91; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v92[43]; // [rsp+9Ch] [rbp-6Ch] BYREF

  LODWORD(v0) = 0;
  P = 0LL;
  v86 = 0LL;
  v78 = 0;
  if ( PpmParkNodes )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
    v2 = (unsigned int)PpmParkNumNodes;
    v3 = PpmParkNodes;
    v4 = v1;
    v86 = (PVOID)PpmParkHistograms;
    v78 = PpmParkNumNodes;
    P = (PVOID)PpmParkNodes;
    PpmParkNumNodes = 0;
    PpmParkNodes = 0LL;
    PpmParkHistograms = 0LL;
    KxReleaseSpinLock(&PpmParkStateLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v4);
    if ( (_DWORD)v2 )
    {
      v5 = (_BYTE *)(v3 + 138);
      do
      {
        if ( *(_QWORD *)(v5 - 74) && (*v5 & 8) != 0 )
        {
          v91 = 1310721;
          memset(v92, 0, 0xA4uLL);
          v55 = *((_WORD *)v5 - 67);
          v56 = *(_QWORD *)(v5 - 130);
          if ( v55 )
            LOWORD(v91) = v55 + 1;
          *(_QWORD *)&v92[2 * v55 + 1] |= v56;
          PopExecuteOnTargetProcessors((__int64)&v91, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
        }
        v5 += 264;
        --v2;
      }
      while ( v2 );
    }
  }
  v6 = 0;
  v77 = 0;
  v7 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      KeQueryNodeActiveAffinity(v7, 0LL, Count);
      if ( Count[0] )
        ++v6;
      ++v7;
    }
    while ( v7 < (unsigned __int16)KeNumberNodes );
    v77 = v6;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 264 * v6, 0x704D5050u);
  v85 = PoolWithTag;
  v9 = PoolWithTag;
  v83 = 0LL;
  if ( !PoolWithTag )
    goto LABEL_64;
  memset(PoolWithTag, 0, 264 * v6);
  PpmParkGranularity = 1;
  PpmParkCoreMask = PpmParkUseCoreGranularity != 0;
  PpmParkUnparkCores = PpmParkUseCoreGranularity == 2;
  if ( PpmParkUseCoreGranularity )
  {
    LODWORD(v10) = 0;
    v88 = qword_140405158[0];
    LOWORD(v89) = 0;
    v87 = (unsigned __int16 *)PpmCheckRegistered;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v80, &v87) )
    {
      Prcb = KeGetPrcb(v80);
      v12 = *(_QWORD *)(Prcb + 24920) - ((*(_QWORD *)(Prcb + 24920) >> 1) & 0x5555555555555555LL);
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 != (unsigned int)((0x101010101010101LL
                                          * (((v12 & 0x3333333333333333LL)
                                            + ((v12 >> 2) & 0x3333333333333333LL)
                                            + (((v12 & 0x3333333333333333LL) + ((v12 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
          PpmParkCoreMask = 0;
      }
      else
      {
        v10 = (0x101010101010101LL
             * (((v12 & 0x3333333333333333LL)
               + ((v12 >> 2) & 0x3333333333333333LL)
               + (((v12 & 0x3333333333333333LL) + ((v12 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      }
    }
    v9 = v85;
    if ( PpmParkCoreMask )
      PpmParkGranularity = v10;
  }
  v76 = 0;
  v13 = 0;
  v14 = 0;
  v81 = 0;
  if ( !KeNumberNodes )
  {
LABEL_53:
    v34 = 8LL * v13;
    v35 = ExAllocatePoolWithTag(NonPagedPoolNx, v34, 0x704D5050u);
    v83 = v35;
    v36 = v35;
    if ( v35 )
    {
      memset(v35, 0, v34);
      v37 = v36;
      if ( v6 )
      {
        v38 = (unsigned int *)(v9 + 112);
        v39 = v6;
        v82 = v6;
        do
        {
          v40 = *((unsigned __int8 *)v38 - 106);
          v41 = v37;
          *((_QWORD *)v38 - 5) = v37;
          v42 = 8LL * ++v40;
          v43 = (size_t)v37 + v42;
          *v38 = v40;
          *((_QWORD *)v38 - 4) = v43;
          v44 = v42 + v43;
          *((_QWORD *)v38 - 3) = v44;
          v37 = (void *)(v42 + v44);
          memmove(v41, (const void *)(*((_QWORD *)v38 - 6) + 32LL), v42);
          memmove(*((void **)v38 - 4), (const void *)(*((_QWORD *)v38 - 6) + 32LL), 8LL * *v38);
          v45 = (unsigned __int8 *)(v38 + 2);
          *((_QWORD *)v38 - 2) = *(_QWORD *)(*((_QWORD *)v38 - 6) + 24LL);
          *((_QWORD *)v38 - 1) = *(_QWORD *)(*((_QWORD *)v38 - 6) + 24LL);
          if ( *((_BYTE *)v38 - 106) != *((_BYTE *)v38 + 8) )
          {
            v62 = 2LL;
            v63 = v38 + 8;
            v64 = v38 + 22;
            do
            {
              v65 = *v45;
              v66 = v37;
              if ( *v45 )
              {
                *((_QWORD *)v64 - 5) = v37;
                v67 = v65 + 1;
                v68 = 8LL * v67;
                v69 = (size_t)v37 + v68;
                *v64 = v67;
                *((_QWORD *)v64 - 4) = v69;
                v70 = v68 + v69;
                *((_QWORD *)v64 - 3) = v70;
                v37 = (void *)(v68 + v70);
                memmove(v66, (const void *)(*(_QWORD *)v63 + 32LL), v68);
                memmove(*((void **)v64 - 4), (const void *)(*(_QWORD *)v63 + 32LL), 8LL * *v64);
                *((_QWORD *)v64 - 2) = *(_QWORD *)(*(_QWORD *)v63 + 24LL);
                *((_QWORD *)v64 - 1) = *(_QWORD *)(*(_QWORD *)v63 + 24LL);
              }
              v63 += 2;
              v64 += 12;
              ++v45;
              --v62;
            }
            while ( v62 );
            v39 = v82;
          }
          v38 += 66;
          v82 = --v39;
        }
        while ( v39 );
        v9 = v85;
        v6 = v77;
        v36 = v83;
      }
      v46 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
      PpmParkNumNodes = v6;
      v47 = v46;
      PpmParkNodes = (__int64)v9;
      PpmParkHistograms = (__int64)v36;
      KxReleaseSpinLock(&PpmParkStateLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v47 < 2u )
      {
        v71 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v71->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v71);
      }
      __writecr8(v47);
      v9 = 0LL;
      v36 = 0LL;
    }
    goto LABEL_61;
  }
  while ( 1 )
  {
    KeQueryNodeActiveAffinity(v0, &Affinity, 0LL);
    Group = Affinity.Group;
    v16 = Affinity.Group >= (unsigned int)PpmCheckRegistered[0]
        ? 0LL
        : *(_QWORD *)&PpmCheckRegistered[4 * Affinity.Group + 4];
    v17 = v16 & Affinity.Mask;
    Affinity.Mask &= v16;
    if ( Affinity.Mask )
      break;
LABEL_51:
    LODWORD(v0) = v0 + 1;
    v81 = v0;
    if ( (unsigned int)v0 >= (unsigned __int16)KeNumberNodes )
    {
      v6 = v77;
      v13 = v76;
      goto LABEL_53;
    }
  }
  LODWORD(v82) = v14 + 1;
  v18 = &v9[264 * v14];
  v19 = 0;
  *((_WORD *)v18 + 2) = Affinity.Group;
  *((_QWORD *)v18 + 1) = v17;
  do
  {
    v20 = v19;
    if ( v19 )
      v20 = PpmHeteroPolicy != 0 ? v19 : 0;
    LOWORD(v89) = Group;
    v88 = v17;
    v87 = 0LL;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v80, &v87) )
    {
      v21 = KeGetPrcb(v80);
      if ( *(_BYTE *)(v21 + 24224) == v19 )
      {
        ++v18[v20 + 120];
        *(_QWORD *)&v18[8 * v20 + 16] |= *(_QWORD *)(v21 + 200);
      }
    }
    ++v19;
  }
  while ( v19 < 2u );
  v0 = v81;
  v22 = (unsigned __int8 *)(v18 + 120);
  v9 = v85;
  v23 = 0;
  v24 = v18[121];
  if ( !v18[120] )
  {
    *v22 = v24;
    *((_QWORD *)v18 + 2) = *((_QWORD *)v18 + 3);
    v24 = 0;
    v18[121] = 0;
    *((_QWORD *)v18 + 3) = 0LL;
  }
  if ( !v24 )
    v18[138] |= 4u;
  v25 = 2LL;
  v26 = 0;
  v27 = (unsigned __int8 *)(v18 + 120);
  do
  {
    v28 = *v27;
    v27[10] = v28;
    v26 += v28;
    v27[15] = v28;
    ++v27;
    --v25;
  }
  while ( v25 );
  v91 = 1310721;
  v76 += v26 + 2 * v26 + 3;
  memset(v92, 0, 0xA4uLL);
  v29 = *((_WORD *)v18 + 2);
  v30 = *((_QWORD *)v18 + 1);
  if ( v29 )
    LOWORD(v91) = v29 + 1;
  *(_QWORD *)&v92[2 * v29 + 1] |= v30;
  if ( (unsigned int)v0 < v78 )
    v31 = (char *)P + 264 * v0 + 64;
  else
    v31 = 0LL;
  if ( (int)PpmIdleInitializeConcurrency(&v91, v18 + 64, v31) < 0 )
  {
    v36 = 0LL;
    goto LABEL_61;
  }
  if ( v26 == *v22 )
  {
LABEL_48:
    v32 = PpmParkGranularity;
    v14 = v82;
    v18[6] = v26;
    v18[127] = v26;
    v18[129] = v26;
    v33 = v26 / (PpmParkMultiparkGranularity != 0);
    if ( v33 < v32 )
      v33 = v32;
    v18[137] = v33;
    goto LABEL_51;
  }
  v57 = (__int64 *)(v18 + 16);
  while ( 1 )
  {
    v58 = *v22;
    if ( *v22 )
    {
      v91 = 1310721;
      v76 += v58 + 2 * v58 + 3;
      memset(v92, 0, 0xA4uLL);
      v59 = *((_WORD *)v18 + 2);
      v60 = *v57;
      if ( v59 )
        LOWORD(v91) = v59 + 1;
      *(_QWORD *)&v92[2 * v59 + 1] |= v60;
      v61 = (unsigned int)v0 >= v78 ? 0LL : (char *)P + 264 * v0 + 8 * v23 + 144;
      if ( (int)PpmIdleInitializeConcurrency(&v91, &v18[8 * v23 + 144], v61) < 0 )
        break;
    }
    ++v57;
    ++v23;
    ++v22;
    if ( v23 >= 2 )
      goto LABEL_48;
  }
  v36 = v83;
LABEL_61:
  if ( v9 )
  {
    if ( v77 )
    {
      v72 = (PVOID *)(v9 + 64);
      v73 = v77;
      do
      {
        if ( *v72 )
          ExFreePoolWithTag(*v72, 0x704D5050u);
        v74 = 2LL;
        v75 = v72 + 10;
        do
        {
          if ( *v75 )
            ExFreePoolWithTag(*v75, 0x704D5050u);
          ++v75;
          --v74;
        }
        while ( v74 );
        v72 += 33;
        --v73;
      }
      while ( v73 );
    }
    ExFreePoolWithTag(v9, 0x704D5050u);
  }
  if ( v36 )
    ExFreePoolWithTag(v36, 0x704D5050u);
LABEL_64:
  v48 = P;
  if ( P )
  {
    if ( v78 )
    {
      v49 = (PVOID *)((char *)P + 64);
      v50 = v78;
      do
      {
        if ( *v49 )
          ExFreePoolWithTag(*v49, 0x704D5050u);
        v51 = 2LL;
        v52 = v49 + 10;
        do
        {
          if ( *v52 )
            ExFreePoolWithTag(*v52, 0x704D5050u);
          ++v52;
          --v51;
        }
        while ( v51 );
        v49 += 33;
        --v50;
      }
      while ( v50 );
    }
    ExFreePoolWithTag(v48, 0x704D5050u);
  }
  if ( v86 )
    ExFreePoolWithTag(v86, 0x704D5050u);
  PpmParkApplyPolicy();
  return PpmParkParkingAvailable();
}
