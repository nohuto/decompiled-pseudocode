/*
 * XREFs of PpmInstallNewIdleStates @ 0x14018B470
 * Callers:
 *     PpmIdleInstallDefaultStates @ 0x14018B450 (PpmIdleInstallDefaultStates.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     PpmDeepestHardwareIdleState @ 0x14018B9A8 (PpmDeepestHardwareIdleState.c)
 *     PpmResetIdlePolicy @ 0x14018B9E0 (PpmResetIdlePolicy.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x14018BB6C (PpmUpdateProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmInstallNewIdleStates(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // rbp
  int v7; // esi
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // r12d
  unsigned int v13; // ecx
  unsigned int v14; // r13d
  _QWORD *PoolWithTag; // rax
  _DWORD *v16; // rdi
  char *v17; // rdx
  char *v18; // rsi
  unsigned int v19; // r13d
  unsigned int *v20; // r12
  __int64 v21; // r14
  char *v22; // rsi
  char *v23; // r15
  unsigned int *v24; // rcx
  char *v25; // rsi
  _DWORD *v26; // r14
  unsigned int v27; // eax
  __int64 v28; // rbp
  __int64 v29; // r13
  __int64 v30; // rcx
  __int64 v32; // rdx
  unsigned int v33; // r8d
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  char *v37; // rcx
  char v38; // [rsp+20h] [rbp-138h]
  unsigned int v39; // [rsp+24h] [rbp-134h]
  unsigned int v40; // [rsp+30h] [rbp-128h]
  _QWORD *v43; // [rsp+48h] [rbp-110h]
  __int64 v44; // [rsp+50h] [rbp-108h]
  _DWORD v45[44]; // [rsp+60h] [rbp-F8h] BYREF

  v3 = *(_QWORD *)(a1 + 23808);
  v4 = 0;
  v44 = a1 + 23808;
  if ( a3 == 1 )
  {
    if ( v3 )
      return v4;
    goto LABEL_3;
  }
  if ( !v3 )
  {
LABEL_3:
    v38 = 0;
    goto LABEL_4;
  }
  v38 = *(_BYTE *)(v3 + 1);
  PpmUpdateProcessorIdleAccounting(a1 + 23808);
LABEL_4:
  v6 = *(unsigned int *)(a2 + 116);
  if ( (_DWORD)v6 )
  {
    v7 = 0;
    if ( *(_BYTE *)(a2 + 19) == 1 )
    {
      v8 = (_DWORD *)(a2 + 120);
      v9 = (unsigned int)v6;
      do
      {
        v10 = (*v8 & 0x100) == 0;
        v11 = v7 + 1;
        v8 += 8;
        if ( !v10 )
          v11 = v7;
        v7 = v11;
        --v9;
      }
      while ( v9 );
    }
    v12 = (248 * v6 + 819) & 0xFFFFFFFC;
    v39 = v12 + 8 * *(_DWORD *)(a2 + 112);
    v40 = v39 + 24 * v7;
    v13 = (((v40 + 1000 * v6 + 47) & 0xFFFFFFF8) + 4 * v6 + 15) & 0xFFFFFFF8;
    if ( PpmIdleVetoList )
      v13 += (*(_DWORD *)PpmIdleVetoList * (_DWORD)v6) << 6;
    v14 = v13;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x694D5050u);
    v43 = PoolWithTag;
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v14);
      v16[9] = a3;
      *((_QWORD *)v16 + 5) = *(_QWORD *)(a2 + 72);
      *(_BYTE *)v16 = *(_BYTE *)(a2 + 19);
      *((_BYTE *)v16 + 2) = *(_BYTE *)(a2 + 16);
      *((_BYTE *)v16 + 8) = *(_BYTE *)(a2 + 18);
      v16[16] = 0;
      v16[8] = v6;
      *((_QWORD *)v16 + 51) = *(_QWORD *)(a2 + 24);
      *((_QWORD *)v16 + 54) = *(_QWORD *)(a2 + 40);
      *((_QWORD *)v16 + 55) = *(_QWORD *)(a2 + 48);
      *((_QWORD *)v16 + 56) = *(_QWORD *)(a2 + 56);
      *((_QWORD *)v16 + 53) = *(_QWORD *)(a2 + 80);
      *((_QWORD *)v16 + 52) = *(_QWORD *)(a2 + 64);
      *((_QWORD *)v16 + 57) = *(_QWORD *)(a2 + 88);
      *((_QWORD *)v16 + 58) = *(_QWORD *)(a2 + 32);
      *((_QWORD *)v16 + 59) = *(_QWORD *)(a2 + 96);
      *((_QWORD *)v16 + 60) = *(_QWORD *)(a2 + 104);
      *((_QWORD *)v16 + 61) = *(_QWORD *)(a2 + 8);
      v16[136] = *(_DWORD *)(a2 + 112);
      v16[198] = 1;
      *((_QWORD *)v16 + 69) = (char *)v16 + v12;
      *((_QWORD *)v16 + 101) = v16 + 200;
      if ( v7 )
      {
        v17 = (char *)v16 + v39;
        v16[190] = v7;
        *((_QWORD *)v16 + 96) = v17;
        v18 = &v17[24 * v7];
      }
      else
      {
        v18 = 0LL;
      }
      *((_QWORD *)v16 + 9) = 1310740LL;
      memset(v16 + 20, 0, 0xA0uLL);
      v19 = 0;
      v20 = (unsigned int *)(v18 + 4);
      v21 = a2 + 120;
      v22 = (char *)(v16 + 246);
      v23 = (char *)v16 + ((((v40 + 1000 * (_DWORD)v6 + 47) & 0xFFFFFFF8) + 4 * (_DWORD)v6 + 15) & 0xFFFFFFF8);
      do
      {
        *(_OWORD *)v22 = *(_OWORD *)(v21 + 16);
        *((_QWORD *)v22 - 21) = 1310721LL;
        memset(v22 - 160, 0, 0xA0uLL);
        v22[72] = (*(_DWORD *)v21 >> 3) & 0xF;
        v22[74] = *(_BYTE *)v21 & 1;
        v22[75] = (*(_DWORD *)v21 & 4) != 0;
        v22[76] = (*(_DWORD *)v21 & 2) != 0;
        if ( *(int *)v21 < 0 )
        {
          *((_DWORD *)v22 + 7) = 1;
          v22[73] = 1;
        }
        v22[77] = (*(_DWORD *)v21 & 0x80) != 0;
        v22[78] = BYTE1(*(_DWORD *)v21) & 1;
        v22[79] = (*(_DWORD *)v21 & 0x40000000) != 0;
        *((_DWORD *)v22 + 4) = *(_DWORD *)(v21 + 4);
        *((_DWORD *)v22 + 6) = *(_DWORD *)(v21 + 12);
        *((_DWORD *)v22 + 5) = *(_DWORD *)(v21 + 8);
        *((_QWORD *)v22 + 6) = v22 + 40;
        *((_QWORD *)v22 + 5) = v22 + 40;
        if ( v19 && PpmIdleDisableStatesAtBoot == 2 )
          *((_DWORD *)v22 + 8) = 0x80000000;
        v24 = (unsigned int *)PpmIdleVetoList;
        if ( PpmIdleVetoList )
        {
          *((_DWORD *)v22 + 15) = *(_DWORD *)PpmIdleVetoList;
          *((_QWORD *)v22 + 8) = v23;
          v23 += 64 * (unsigned __int64)*v24;
        }
        if ( v20 != (unsigned int *)4 && (*(_DWORD *)v21 & 0x100) == 0 )
        {
          v20 -= 6;
          *((_BYTE *)v20 - 3) = 1;
          *v20 = v19;
        }
        ++v19;
        v22 += 248;
        v21 += 32LL;
      }
      while ( v19 < (unsigned int)v6 );
      v25 = (char *)v43 + v40;
      v10 = PpmIdleVetoList == 0;
      v43[93] = (char *)v43 + ((v40 + 1000 * (_DWORD)v6 + 47) & 0xFFFFFFF8);
      *(_DWORD *)v25 = v6;
      if ( !v10 )
      {
        v35 = v25 + 200;
        v36 = v6;
        v37 = (char *)(v43 + 127);
        do
        {
          *v35 = v37;
          v37 += 248;
          v35 += 125;
          --v36;
        }
        while ( v36 );
      }
      KxAcquireSpinLock(&PpmIdleVetoLock);
      v26 = *(_DWORD **)v44;
      *(_QWORD *)v44 = v43;
      KxReleaseSpinLock(&PpmIdleVetoLock);
      if ( v38 )
        *((_DWORD *)v43 + 7) = v26[7];
      if ( !v26 || (v27 = v26[4], v27 >= (unsigned int)v6) )
        v27 = 0;
      *((_DWORD *)v43 + 4) = v27;
      *((_BYTE *)v43 + 1) = v38;
      v28 = *(_QWORD *)(v44 + 8);
      *(_QWORD *)(v44 + 8) = v25;
      if ( v28 )
      {
        v32 = *(_QWORD *)(v28 + 24);
        v33 = 0;
        for ( *((_QWORD *)v25 + 3) = v32; v33 < *(_DWORD *)v28; *((_QWORD *)v25 + 3) = v32 )
        {
          v34 = v33++;
          v32 += *(_QWORD *)(1000 * v34 + v28 + 40);
        }
        v29 = a1;
      }
      else
      {
        v29 = a1;
        *((_QWORD *)v25 + 3) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 652LL);
      }
      PpmResetIdlePolicy(v44);
      if ( v28 )
        *((_DWORD *)v25 + 2) = *(_DWORD *)(v28 + 8) + 1;
      v45[0] = 1310721;
      memset(&v45[1], 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v45, *(_DWORD *)(v29 + 36));
      LOBYTE(v30) = PpmDeepestHardwareIdleState(v43);
      ((void (__fastcall *)(__int64, _DWORD *))off_1403FF3E8[0])(v30, v45);
      if ( *((_DWORD *)v43 + 9) != 1 && *(_BYTE *)v43 == 1 )
        PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
      if ( v26 )
        ExFreePoolWithTag(v26, 0x694D5050u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
