/*
 * XREFs of PoEnergyContextUpdateComponentPower @ 0x140687604
 * Callers:
 *     PsUpdateComponentPower @ 0x1400EA990 (PsUpdateComponentPower.c)
 *     NtSetThreadExecutionState @ 0x1406B3A40 (NtSetThreadExecutionState.c)
 *     PopProcessDisplayRequiredChange @ 0x1406F0DAC (PopProcessDisplayRequiredChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     KeQueryTimelineBitmapTime @ 0x14000E550 (KeQueryTimelineBitmapTime.c)
 *     RtlTimelineBitmapUpdate @ 0x140013280 (RtlTimelineBitmapUpdate.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     RtlStateDurationUpdate @ 0x1400EAE40 (RtlStateDurationUpdate.c)
 *     RtlTimelineBitmapUpdateRange @ 0x14011ED54 (RtlTimelineBitmapUpdateRange.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopEtEnergyContextSetState @ 0x140687B58 (PopEtEnergyContextSetState.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x14068A2D8 (PopEtEnergyContextProcessStateUpdate.c)
 */

void __fastcall PoEnergyContextUpdateComponentPower(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // ebp
  int v7; // esi
  int v8; // esi
  int v9; // esi
  unsigned int v10; // eax
  int v11; // r9d
  unsigned int v12; // r10d
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // edx
  __int64 *v16; // rcx
  unsigned int TimelineBitmapTime; // edx
  unsigned int v18; // edx
  int v19; // eax
  int v20; // r8d
  unsigned int v21; // edx
  int v22; // r9d
  __int16 v23; // r8
  unsigned int v24; // eax
  unsigned int *v25; // rcx
  __int16 v26; // dx
  unsigned int v27; // eax
  __int64 *v28; // rcx
  unsigned int v29; // r9d
  unsigned int v30; // edx
  unsigned int v31; // r8d
  bool v32; // zf
  __int64 v33; // rbp
  bool v34; // bl
  __int64 *v35; // rbp
  __int64 v36; // rcx
  unsigned int v37; // eax
  unsigned int v38; // r8d
  bool v39; // zf
  _QWORD *v40; // r11
  unsigned int v41; // ebx
  int v42; // r8d
  unsigned int v43; // edx
  int v44; // r9d
  __int64 v45; // [rsp+20h] [rbp-D8h]
  __int64 v46; // [rsp+20h] [rbp-D8h]
  _DWORD v48[36]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(a1 + 1896);
  v4 = a3;
  memset(v48, 0, sizeof(v48));
  if ( v3 )
  {
    PopAcquireRwLockExclusive(v3 + 432);
    if ( a2 == 9 )
    {
      v20 = HIDWORD(*(_QWORD *)(v3 + 384));
      v21 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *(_QWORD *)(v3 + 384);
      if ( v21 > 0x3E8 )
        v21 = 1000;
      v22 = -1;
      if ( ~v21 >= (v20 & 0x7FFFFFFFu) )
        v22 = (v20 & 0x7FFFFFFF) + v21;
      HIDWORD(v45) = (v20 ^ v22) & 0x7FFFFFFF ^ v20;
      LODWORD(v45) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_QWORD *)(v3 + 384) = v45;
      TimelineBitmapTime = KeQueryTimelineBitmapTime();
      v16 = (__int64 *)(v3 + 344);
      goto LABEL_16;
    }
    if ( a2 > 9 )
    {
      if ( a2 <= 11 )
      {
        v32 = v4 == 0;
        v33 = 360LL;
        v34 = !v32;
        if ( a2 != 11 )
          v33 = 352LL;
        v35 = (__int64 *)(v3 + v33);
        v36 = 400LL;
        if ( a2 != 11 )
          v36 = 392LL;
        RtlStateDurationUpdate(
          (unsigned __int64 *)(v3 + v36),
          !v32,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v37 = KeQueryTimelineBitmapTime();
        v39 = !v34;
        v16 = v35;
      }
      else
      {
        if ( a2 == 13 )
        {
          ++*(_DWORD *)(v3 + 424);
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          v16 = (__int64 *)(v3 + 376);
          goto LABEL_16;
        }
        if ( a2 != 12 )
        {
          if ( a2 == 14 )
            ++*(_DWORD *)(v3 + 428);
          goto LABEL_17;
        }
        v40 = (_QWORD *)(v3 + 408);
        if ( v4 == 3 )
        {
          if ( *(int *)(v3 + 412) < 0 )
            goto LABEL_17;
          v42 = HIDWORD(*v40);
          v43 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *v40;
          if ( v43 > 0x1000 )
            v43 = 4096;
          v44 = -1;
          if ( ~v43 >= (v42 & 0x7FFFFFFFu) )
            v44 = (v42 & 0x7FFFFFFF) + v43;
          HIDWORD(v46) = (v42 ^ v44) & 0x7FFFFFFF ^ v42;
          LODWORD(v46) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *v40 = v46;
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          v16 = (__int64 *)(v3 + 368);
          goto LABEL_16;
        }
        if ( (unsigned int)(v4 - 1) > 1 )
          goto LABEL_17;
        v41 = *(_DWORD *)(v3 + 472);
        if ( v4 == 1 )
        {
          *(_DWORD *)(v3 + 472) = ++v41;
          if ( v41 > 1 )
            goto LABEL_17;
        }
        else if ( v41 )
        {
          *(_DWORD *)(v3 + 472) = --v41;
          if ( v41 )
            goto LABEL_17;
        }
        RtlStateDurationUpdate(
          (unsigned __int64 *)(v3 + 408),
          v41 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v37 = KeQueryTimelineBitmapTime();
        v39 = v41 == 0;
        v16 = (__int64 *)(v3 + 368);
      }
      TimelineBitmapTime = v37;
      if ( v39 )
      {
        RtlTimelineBitmapUpdateRange(v16, v37 - (v38 >> 12), v37);
        goto LABEL_17;
      }
      goto LABEL_16;
    }
    v7 = a2 - 4;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 2;
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            memset(&v48[2], 0, 0x88uLL);
            v48[1] = HIDWORD(a3);
            v48[0] = v4;
            PopEtEnergyContextSetState(a1, v48);
          }
          goto LABEL_17;
        }
        v10 = KeQueryTimelineBitmapTime();
        v11 = -1;
        v12 = v10;
        if ( (_WORD)v4 )
        {
          v13 = *(_DWORD *)(v3 + 128);
          if ( ~(unsigned __int16)v4 < v13 )
            v14 = -1;
          else
            v14 = v13 + (unsigned __int16)v4;
          *(_DWORD *)(v3 + 128) = v14;
          RtlTimelineBitmapUpdate((unsigned int *)(v3 + 320), v12);
        }
        if ( WORD1(a3) )
        {
          v18 = *(_DWORD *)(v3 + 132);
          v19 = v18 + WORD1(a3);
          if ( ~WORD1(a3) < v18 )
            v19 = v11;
          *(_DWORD *)(v3 + 132) = v19;
          RtlTimelineBitmapUpdate((unsigned int *)(v3 + 328), v12);
        }
        if ( !WORD2(a3) )
        {
LABEL_17:
          PopReleaseRwLock(v3 + 432);
          return;
        }
        v15 = *(_DWORD *)(v3 + 136);
        if ( ~WORD2(a3) >= v15 )
          v11 = v15 + WORD2(a3);
        *(_DWORD *)(v3 + 136) = v11;
        v16 = (__int64 *)(v3 + 336);
        TimelineBitmapTime = v12;
LABEL_16:
        RtlTimelineBitmapUpdate((unsigned int *)v16, TimelineBitmapTime);
        goto LABEL_17;
      }
      RtlStateDurationUpdate(
        (unsigned __int64 *)(v3 + 112),
        v4 != 0,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      v26 = *(_WORD *)(v3 + 464);
      if ( v4 )
      {
        *(_WORD *)(v3 + 464) = v26 | 2;
        goto LABEL_32;
      }
      *(_WORD *)(v3 + 464) = v26 & 0xFFFD;
      v27 = KeQueryTimelineBitmapTime();
      v30 = v27 - (v31 >> 12);
    }
    else
    {
      RtlStateDurationUpdate(
        (unsigned __int64 *)(v3 + 104),
        v4 != 0,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      v23 = *(_WORD *)(v3 + 464);
      if ( v4 )
      {
        *(_WORD *)(v3 + 464) = v23 | 1;
LABEL_32:
        v24 = KeQueryTimelineBitmapTime();
        RtlTimelineBitmapUpdate(v25, v24);
LABEL_33:
        PopEtEnergyContextProcessStateUpdate(a1);
        goto LABEL_17;
      }
      *(_WORD *)(v3 + 464) = v23 & 0xFFFE;
      v27 = KeQueryTimelineBitmapTime();
      v30 = v27 - (v29 >> 12);
    }
    RtlTimelineBitmapUpdateRange(v28, v30, v27);
    goto LABEL_33;
  }
}
