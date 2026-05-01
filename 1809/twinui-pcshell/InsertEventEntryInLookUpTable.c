/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1800E3D40
 * Callers:
 *     ?GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x1801DD7D0 (-GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHe.c)
 * Callees:
 *     free @ 0x180085090 (free.c)
 *     memcmp_0 @ 0x18009B2CB (memcmp_0.c)
 *     CreateNewEventEntry @ 0x1800E37E8 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1800E3AB4 (EnableFlushTimer.c)
 *     RunningHash @ 0x1800E428C (RunningHash.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int128 *a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  signed __int64 v6; // rdi
  __int128 *v8; // r12
  unsigned __int8 v9; // r15
  unsigned __int8 v10; // cl
  __int64 v11; // r11
  __int64 v12; // rsi
  __int64 v13; // r11
  int v14; // r13d
  __int64 v15; // rdx
  volatile signed __int64 *i; // rsi
  unsigned int v17; // eax
  unsigned __int16 *v18; // r14
  int v19; // ecx
  unsigned int v20; // esi
  __int64 v21; // r12
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // r10d
  signed __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // r9d
  volatile signed __int64 *v30; // r8
  BOOL v31; // eax
  volatile signed __int64 v32; // rtt
  __int64 v34; // [rsp+30h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-10h]
  int v36; // [rsp+90h] [rbp+48h] BYREF
  int v37; // [rsp+94h] [rbp+4Ch]
  __int128 *v38; // [rsp+98h] [rbp+50h]
  unsigned int v39; // [rsp+A0h] [rbp+58h]
  __int64 v40; // [rsp+A8h] [rbp+60h]

  v40 = a4;
  v38 = a2;
  v37 = HIDWORD(a1);
  v5 = qword_1805064D8;
  v6 = 0LL;
  v36 = 0;
  v8 = a2;
  v34 = 0LL;
  v39 = 0;
  v9 = 2;
  RunningHash(&v36, a2, 2LL);
  v10 = a5 + 2;
  if ( (unsigned __int8)(a5 + 2) < 0xCu )
  {
    v11 = a4 + 16LL * v10;
    v12 = (unsigned __int8)(12 - v10);
    do
    {
      RunningHash(&v36, *(_QWORD *)v11, *(unsigned int *)(v11 + 8));
      v11 = v13 + 16;
      --v12;
    }
    while ( v12 );
  }
  v14 = 32769 * ((9 * v36) ^ ((unsigned int)(9 * v36) >> 11));
  SRWLock = (PSRWLOCK)(v5 + 264);
  AcquireSRWLockShared((PSRWLOCK)(v5 + 264));
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v14 & 0x1F));
        ;
        i = (volatile signed __int64 *)((char *)v18 + (((__int64)v19 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + 32) )
  {
    if ( *i )
      goto LABEL_11;
    if ( *(_DWORD *)(v5 + 256) >= 0x400u )
    {
      ++*(_DWORD *)(v5 + 300);
      v24 = 234;
      goto LABEL_48;
    }
    if ( !v6 )
    {
      v17 = CreateNewEventEntry(v8, v15, v40, a5, v14, &v34);
      v6 = v34;
      v39 = v17;
      if ( !v34 )
      {
        if ( v17 == 8 )
          ++*(_DWORD *)(v5 + 304);
        else
          ++*(_DWORD *)(v5 + 308);
        v24 = v17;
        goto LABEL_48;
      }
    }
    if ( !_InterlockedCompareExchange64(i, v6, 0LL) )
      break;
    v6 = v34;
LABEL_11:
    v18 = (unsigned __int16 *)*i;
    if ( v14 != *(_DWORD *)(*i + 40) )
    {
      v19 = v14 - *((_DWORD *)v18 + 10);
LABEL_21:
      v22 = v40;
      goto LABEL_22;
    }
    if ( *(_WORD *)v8 != *v18 )
    {
      v19 = *(unsigned __int16 *)v8 - *v18;
      goto LABEL_21;
    }
    v20 = *((unsigned __int8 *)v18 + 45) + 2;
    if ( v20 >= 0xC )
    {
LABEL_20:
      v19 = 0;
      goto LABEL_21;
    }
    v21 = *((_QWORD *)v18 + 2);
    while ( 1 )
    {
      v22 = v40;
      v23 = 16LL * v20;
      v19 = *(_DWORD *)(v23 + v40 + 8) - *(_DWORD *)(v23 + v21 + 8);
      if ( v19 )
        break;
      v19 = memcmp_0(*(const void **)(v23 + v40), *(const void **)(v23 + v21), *(unsigned int *)(v23 + v40 + 8));
      if ( v19 )
        goto LABEL_21;
      if ( ++v20 >= 0xC )
        goto LABEL_20;
    }
LABEL_22:
    if ( !v19 )
    {
      if ( !v18 )
        goto LABEL_47;
      v26 = a5 + 2;
      if ( v26 <= 2 )
        goto LABEL_47;
      while ( 1 )
      {
        v27 = **(_QWORD **)(v22 + 16LL * v9);
        v28 = *((_QWORD *)v18 + 2);
        v29 = *(unsigned __int8 *)(v28 + 16LL * v9 + 13);
        v30 = *(volatile signed __int64 **)(v28 + 16LL * v9);
        if ( v29 == 113 )
        {
          _InterlockedExchangeAdd64(v30, v27);
        }
        else if ( (unsigned int)(v29 - 114) <= 1 )
        {
          while ( (_BYTE)v29 != 114 )
          {
            if ( v27 <= *v30 )
            {
              v31 = 0;
LABEL_41:
              if ( !v31 )
                goto LABEL_45;
            }
            v32 = *v30;
            if ( v32 == _InterlockedCompareExchange64(v30, v27, *v30) )
              goto LABEL_45;
          }
          v31 = v27 < *v30;
          goto LABEL_41;
        }
LABEL_45:
        v22 = v40;
        if ( ++v9 >= v26 )
        {
          v6 = v34;
          goto LABEL_47;
        }
      }
    }
    v8 = v38;
  }
  v34 = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(struct _TP_TIMER **)(v5 + 344), *(_DWORD *)(v5 + 352));
  v25 = *(_DWORD *)(v5 + 256);
  v6 = v34;
  if ( *(_DWORD *)(v5 + 288) < v25 )
    *(_DWORD *)(v5 + 288) = v25;
LABEL_47:
  v24 = v39;
LABEL_48:
  ReleaseSRWLockShared(SRWLock);
  if ( v6 )
    free(*(void **)(v6 + 16));
  return v24;
}
