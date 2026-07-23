/*
 * XREFs of PoEnergyContextUpdateComponentPower @ 0x140604FCC
 * Callers:
 *     PsUpdateComponentPower @ 0x14008F830 (PsUpdateComponentPower.c)
 *     NtSetThreadExecutionState @ 0x1405882F0 (NtSetThreadExecutionState.c)
 *     PopProcessDisplayRequiredChange @ 0x1405896FC (PopProcessDisplayRequiredChange.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     RtlTimelineBitmapUpdate @ 0x14008F944 (RtlTimelineBitmapUpdate.c)
 *     RtlStateDurationUpdate @ 0x14008FCBC (RtlStateDurationUpdate.c)
 *     KeQueryTimelineBitmapTime @ 0x1400ACED0 (KeQueryTimelineBitmapTime.c)
 *     RtlTimelineBitmapUpdateRange @ 0x14011EE08 (RtlTimelineBitmapUpdateRange.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopEtEnergyContextSetState @ 0x14060564C (PopEtEnergyContextSetState.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1406079F0 (PopEtEnergyContextProcessStateUpdate.c)
 */

void __fastcall PoEnergyContextUpdateComponentPower(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  int v5; // esi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  unsigned int v11; // eax
  int v12; // r9d
  unsigned int v13; // r10d
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // edx
  unsigned int *v17; // rcx
  unsigned int TimelineBitmapTime; // edx
  unsigned int v19; // edx
  int v20; // eax
  int v21; // edx
  unsigned int v22; // r8d
  int v23; // r9d
  __int16 v24; // r8
  unsigned int v25; // eax
  unsigned int *v26; // rcx
  __int16 v27; // dx
  unsigned int v28; // eax
  unsigned __int64 *v29; // rcx
  unsigned int v30; // r9d
  unsigned int v31; // edx
  unsigned int v32; // r8d
  __int64 v33; // rbp
  unsigned __int64 *v34; // rbp
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // r8d
  bool v38; // zf
  _QWORD *v39; // r11
  unsigned int v40; // edi
  int v41; // edx
  unsigned int v42; // r8d
  int v43; // r9d
  __int64 v44; // [rsp+20h] [rbp-D8h]
  __int64 v45; // [rsp+20h] [rbp-D8h]
  _DWORD v47[36]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(a1 + 1848);
  v4 = HIDWORD(a3);
  v5 = a3;
  if ( v3 )
  {
    PopAcquireRwLockExclusive(v3 + 432);
    if ( a2 == 9 )
    {
      LODWORD(v44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v21 = HIDWORD(*(_QWORD *)(v3 + 384));
      v22 = v44 - *(_QWORD *)(v3 + 384);
      if ( v22 > 0x3E8 )
        v22 = 1000;
      v23 = -1;
      if ( ~v22 >= (v21 & 0x7FFFFFFFu) )
        v23 = (v21 & 0x7FFFFFFF) + v22;
      HIDWORD(v44) = (v21 ^ v23) & 0x7FFFFFFF ^ v21;
      *(_QWORD *)(v3 + 384) = v44;
      TimelineBitmapTime = KeQueryTimelineBitmapTime();
      v17 = (unsigned int *)(v3 + 344);
      goto LABEL_16;
    }
    if ( a2 > 9 )
    {
      if ( a2 <= 11 )
      {
        v33 = 360LL;
        if ( a2 != 11 )
          v33 = 352LL;
        v34 = (unsigned __int64 *)(v3 + v33);
        v35 = 400LL;
        if ( a2 != 11 )
          v35 = 392LL;
        RtlStateDurationUpdate(
          (signed __int64 *)(v3 + v35),
          v5 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v36 = KeQueryTimelineBitmapTime();
        v38 = v5 == 0;
      }
      else
      {
        if ( a2 == 13 )
        {
          ++*(_DWORD *)(v3 + 424);
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          v17 = (unsigned int *)(v3 + 376);
          goto LABEL_16;
        }
        if ( a2 != 12 )
        {
          if ( a2 == 14 )
            ++*(_DWORD *)(v3 + 428);
          goto LABEL_17;
        }
        v34 = (unsigned __int64 *)(v3 + 368);
        v39 = (_QWORD *)(v3 + 408);
        if ( v5 == 3 )
        {
          if ( *(int *)(v3 + 412) < 0 )
            goto LABEL_17;
          LODWORD(v45) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v41 = HIDWORD(*v39);
          v42 = v45 - *v39;
          if ( v42 > 0x1000 )
            v42 = 4096;
          v43 = -1;
          if ( ~v42 >= (v41 & 0x7FFFFFFFu) )
            v43 = (v41 & 0x7FFFFFFF) + v42;
          HIDWORD(v45) = (v41 ^ v43) & 0x7FFFFFFF ^ v41;
          *v39 = v45;
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          v17 = (unsigned int *)(v3 + 368);
          goto LABEL_16;
        }
        if ( (unsigned int)(v5 - 1) > 1 )
          goto LABEL_17;
        v40 = *(_DWORD *)(v3 + 472);
        if ( v5 == 1 )
        {
          *(_DWORD *)(v3 + 472) = ++v40;
          if ( v40 > 1 )
            goto LABEL_17;
        }
        else if ( v40 )
        {
          *(_DWORD *)(v3 + 472) = --v40;
          if ( v40 )
            goto LABEL_17;
        }
        RtlStateDurationUpdate(
          (signed __int64 *)(v3 + 408),
          v40 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v36 = KeQueryTimelineBitmapTime();
        v38 = v40 == 0;
      }
      v17 = (unsigned int *)v34;
      TimelineBitmapTime = v36;
      if ( v38 )
      {
        RtlTimelineBitmapUpdateRange(v34, v36 - (v37 >> 12), v36);
        goto LABEL_17;
      }
      goto LABEL_16;
    }
    v8 = a2 - 4;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 2;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            memset(v47, 0, sizeof(v47));
            v47[0] = v5;
            v47[1] = v4;
            PopEtEnergyContextSetState(a1, v47);
          }
          goto LABEL_17;
        }
        v11 = KeQueryTimelineBitmapTime();
        v12 = -1;
        v13 = v11;
        if ( (_WORD)v5 )
        {
          v14 = *(_DWORD *)(v3 + 128);
          if ( ~(unsigned __int16)v5 < v14 )
            v15 = -1;
          else
            v15 = v14 + (unsigned __int16)v5;
          *(_DWORD *)(v3 + 128) = v15;
          RtlTimelineBitmapUpdate((unsigned int *)(v3 + 320), v13);
        }
        if ( WORD1(a3) )
        {
          v19 = *(_DWORD *)(v3 + 132);
          v20 = v19 + WORD1(a3);
          if ( ~WORD1(a3) < v19 )
            v20 = v12;
          *(_DWORD *)(v3 + 132) = v20;
          RtlTimelineBitmapUpdate((unsigned int *)(v3 + 328), v13);
        }
        if ( !WORD2(a3) )
        {
LABEL_17:
          PopReleaseRwLock(v3 + 432);
          return;
        }
        v16 = *(_DWORD *)(v3 + 136);
        if ( ~WORD2(a3) >= v16 )
          v12 = v16 + WORD2(a3);
        *(_DWORD *)(v3 + 136) = v12;
        v17 = (unsigned int *)(v3 + 336);
        TimelineBitmapTime = v13;
LABEL_16:
        RtlTimelineBitmapUpdate(v17, TimelineBitmapTime);
        goto LABEL_17;
      }
      RtlStateDurationUpdate(
        (signed __int64 *)(v3 + 112),
        v5 != 0,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      v27 = *(_WORD *)(v3 + 464);
      if ( v5 )
      {
        *(_WORD *)(v3 + 464) = v27 | 2;
        goto LABEL_32;
      }
      *(_WORD *)(v3 + 464) = v27 & 0xFFFD;
      v28 = KeQueryTimelineBitmapTime();
      v31 = v28 - (v32 >> 12);
    }
    else
    {
      RtlStateDurationUpdate(
        (signed __int64 *)(v3 + 104),
        v5 != 0,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      v24 = *(_WORD *)(v3 + 464);
      if ( v5 )
      {
        *(_WORD *)(v3 + 464) = v24 | 1;
LABEL_32:
        v25 = KeQueryTimelineBitmapTime();
        RtlTimelineBitmapUpdate(v26, v25);
LABEL_33:
        PopEtEnergyContextProcessStateUpdate(a1);
        goto LABEL_17;
      }
      *(_WORD *)(v3 + 464) = v24 & 0xFFFE;
      v28 = KeQueryTimelineBitmapTime();
      v31 = v28 - (v30 >> 12);
    }
    RtlTimelineBitmapUpdateRange(v29, v31, v28);
    goto LABEL_33;
  }
}
