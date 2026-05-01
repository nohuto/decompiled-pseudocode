/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x180125370
 * Callers:
 *     ?GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x180250370 (-GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHe.c)
 * Callees:
 *     memcmp_0 @ 0x1800D3EEB (memcmp_0.c)
 *     CreateNewEventEntry @ 0x180124E1C (CreateNewEventEntry.c)
 *     DestroyEventEntry @ 0x1801250B4 (DestroyEventEntry.c)
 *     EnableFlushTimer @ 0x1801250E4 (EnableFlushTimer.c)
 *     RunningHash @ 0x1801256B8 (RunningHash.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int128 *a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  signed __int64 v6; // rdi
  __int64 v7; // r13
  unsigned __int8 v8; // r15
  __int64 v9; // r11
  __int64 v10; // rsi
  __int64 v11; // r11
  int v12; // r12d
  __int64 v13; // rdx
  volatile signed __int64 *i; // rsi
  unsigned int v15; // eax
  volatile signed __int64 v16; // r14
  int v17; // eax
  __int64 v18; // r13
  unsigned int j; // esi
  __int64 v20; // rcx
  unsigned int v21; // ebx
  unsigned int v22; // eax
  unsigned int v23; // r10d
  signed __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // r9d
  volatile signed __int64 *v27; // r8
  BOOL v28; // eax
  volatile signed __int64 v29; // rtt
  __int64 v31; // [rsp+30h] [rbp-28h] BYREF
  void *Buf1; // [rsp+38h] [rbp-20h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-18h]
  int v34; // [rsp+A0h] [rbp+48h] BYREF
  int v35; // [rsp+A4h] [rbp+4Ch]
  __int128 *v36; // [rsp+A8h] [rbp+50h]
  unsigned int v37; // [rsp+B0h] [rbp+58h]
  __int64 v38; // [rsp+B8h] [rbp+60h]

  v38 = a4;
  v36 = a2;
  v35 = HIDWORD(a1);
  v5 = qword_1805B8760;
  v6 = 0LL;
  Buf1 = (void *)(a4 + 16);
  v34 = 0;
  v31 = 0LL;
  v37 = 0;
  v7 = a4;
  RunningHash(&v34, a4 + 16, 8LL);
  v8 = 2;
  if ( (unsigned __int8)(a5 + 2) < 0xCu )
  {
    v9 = v7 + 16LL * (unsigned __int8)(a5 + 2);
    v10 = (unsigned __int8)(12 - (a5 + 2));
    do
    {
      RunningHash(&v34, *(_QWORD *)v9, *(unsigned int *)(v9 + 8));
      v9 = v11 + 16;
      --v10;
    }
    while ( v10 );
  }
  v12 = 32769 * ((9 * v34) ^ ((unsigned int)(9 * v34) >> 11));
  SRWLock = (PSRWLOCK)(v5 + 264);
  AcquireSRWLockShared((PSRWLOCK)(v5 + 264));
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v12 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v17 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v16 + 32) )
  {
    if ( *i )
      goto LABEL_11;
    if ( *(_DWORD *)(v5 + 256) >= 0x400u )
    {
      ++*(_DWORD *)(v5 + 300);
      v21 = 234;
      goto LABEL_47;
    }
    if ( !v6 )
    {
      v15 = CreateNewEventEntry(v36, v13, v7, a5, v12, &v31);
      v6 = v31;
      v37 = v15;
      if ( !v31 )
        break;
    }
    if ( !_InterlockedCompareExchange64(i, v6, 0LL) )
    {
      v31 = 0LL;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
        EnableFlushTimer(*(struct _TP_TIMER **)(v5 + 344), *(_DWORD *)(v5 + 352));
      v22 = *(_DWORD *)(v5 + 256);
      v6 = v31;
      if ( *(_DWORD *)(v5 + 288) < v22 )
        *(_DWORD *)(v5 + 288) = v22;
LABEL_46:
      v21 = v37;
      goto LABEL_47;
    }
    v6 = v31;
LABEL_11:
    v16 = *i;
    if ( v12 == *(_DWORD *)(*i + 40) )
    {
      v18 = *(_QWORD *)(v16 + 16);
      v17 = memcmp_0(Buf1, (const void *)(v18 + 16), 8uLL);
      if ( !v17 )
      {
        for ( j = *(unsigned __int8 *)(v16 + 45) + 2; j < 0xC; ++j )
        {
          v20 = 16LL * j;
          v17 = *(_DWORD *)(v20 + v38 + 8) - *(_DWORD *)(v20 + v18 + 8);
          if ( v17 )
            goto LABEL_20;
          v17 = memcmp_0(*(const void **)(v20 + v38), *(const void **)(v20 + v18), *(unsigned int *)(v20 + v38 + 8));
          if ( v17 )
            goto LABEL_20;
        }
        v17 = 0;
      }
LABEL_20:
      v7 = v38;
    }
    else
    {
      v17 = v12 - *(_DWORD *)(v16 + 40);
    }
    if ( !v17 )
    {
      if ( v16 )
      {
        v23 = a5 + 2;
        if ( v23 > 2 )
        {
          while ( 2 )
          {
            v24 = **(_QWORD **)(v7 + 16LL * v8);
            v25 = *(_QWORD *)(v16 + 16);
            v26 = *(unsigned __int8 *)(v25 + 16LL * v8 + 13);
            v27 = *(volatile signed __int64 **)(v25 + 16LL * v8);
            if ( v26 == 113 )
            {
              _InterlockedExchangeAdd64(v27, v24);
            }
            else if ( (unsigned int)(v26 - 114) <= 1 )
            {
              while ( (_BYTE)v26 != 114 )
              {
                if ( v24 <= *v27 )
                {
                  v28 = 0;
LABEL_40:
                  if ( !v28 )
                    goto LABEL_44;
                }
                v29 = *v27;
                if ( v29 == _InterlockedCompareExchange64(v27, v24, *v27) )
                  goto LABEL_44;
              }
              v28 = v24 < *v27;
              goto LABEL_40;
            }
LABEL_44:
            if ( ++v8 < v23 )
              continue;
            break;
          }
          v6 = v31;
        }
      }
      goto LABEL_46;
    }
  }
  if ( v15 == 8 )
    ++*(_DWORD *)(v5 + 304);
  else
    ++*(_DWORD *)(v5 + 308);
  v21 = v15;
LABEL_47:
  ReleaseSRWLockShared(SRWLock);
  if ( v6 )
    DestroyEventEntry(v6);
  return v21;
}
