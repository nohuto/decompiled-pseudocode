/*
 * XREFs of PpmHeteroComputeRelativePerformance @ 0x1407510BC
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140750624 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x14018A430 (KeIsEqualAffinityEx.c)
 */

char PpmHeteroComputeRelativePerformance()
{
  char v0; // di
  __int64 *v1; // rcx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
  char v4; // bl
  char v5; // cl
  unsigned int v6; // ebx
  __int64 v7; // r11
  unsigned int v8; // r9d
  unsigned __int64 v9; // r8
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  unsigned int i; // edx
  __int64 v13; // r10
  __int64 v14; // rax
  int v15; // edx
  char v16; // r8
  unsigned __int64 v17; // r10
  __int64 *v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r9
  __int64 j; // rax
  int v22; // r9d
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  __int64 k; // rcx

  v0 = 0;
  if ( !(unsigned int)KeIsEmptyAffinityEx(PpmCheckRegistered) )
  {
    if ( (unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, (unsigned __int16 *)PpmCheckRegistered) )
    {
      if ( PpmPerfDomainCount != 1 )
      {
        v1 = (__int64 *)PpmPerfDomainHead;
        v2 = 0LL;
        if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
        {
          do
          {
            v3 = v2;
            v2 = v1[42];
            v1 = (__int64 *)*v1;
            if ( v3 > v2 )
              v2 = v3;
          }
          while ( v1 != &PpmPerfDomainHead );
          if ( v2 )
          {
            v4 = 0;
            v5 = 0;
            if ( v2 >= 0x7FFFFFFFFFFFLL )
            {
              _BitScanReverse(&v6, HIDWORD(v2) + 0xFFFF);
              v4 = v6 - 14;
              v5 = v4;
            }
            v7 = PpmPerfDomainHead;
            v8 = -1;
            v9 = v2 >> v5;
            while ( (__int64 *)v7 != &PpmPerfDomainHead )
            {
              v10 = *(_QWORD *)(v7 + 336) >> v4;
              *(_BYTE *)(v7 + 344) = 100 * v10 / v9;
              if ( v10 == v9 )
              {
                v11 = 0x10000LL;
              }
              else
              {
                v11 = ((v10 << 16) + (v9 >> 1)) / v9;
                if ( v11 <= 1 )
                  v11 = 1LL;
              }
              for ( i = 0; i < *(_DWORD *)(v7 + 200); ++i )
              {
                v13 = *(_QWORD *)(v7 + 208);
                v14 = 136LL * i;
                if ( !*(_BYTE *)(v14 + v13 + 16) )
                  *(_DWORD *)(*(_QWORD *)(v14 + v13) + 24240LL) = v11;
              }
              v7 = *(_QWORD *)v7;
              if ( v8 >= v11 )
                v8 = v11;
            }
            v15 = PpmPerfDomainCount;
            v16 = 0;
            v17 = 0LL;
            PpmHeteroMinRelativePerformance = v8;
            while ( v15 )
            {
              v18 = (__int64 *)PpmPerfDomainHead;
              v19 = -1LL;
              while ( v18 != &PpmPerfDomainHead )
              {
                v20 = v18[42];
                if ( v20 > v17 && v19 >= v20 )
                  v19 = v18[42];
                v18 = (__int64 *)*v18;
              }
              for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
              {
                if ( *(_QWORD *)(j + 336) == v19 )
                {
                  *(_BYTE *)(j + 205) = v16;
                  --v15;
                }
              }
              v17 = v19;
              ++v16;
            }
            v22 = PpmPerfDomainCount;
            v23 = 0LL;
            PpmHeteroNominalPerformanceClasses = v16;
            while ( v22 )
            {
              v24 = PpmPerfDomainHead;
              v25 = 0xFFFFFFFFLL;
              while ( (__int64 *)v24 != &PpmPerfDomainHead )
              {
                v26 = *(_QWORD *)(v24 + 336) * *(unsigned int *)(v24 + 312);
                if ( v26 > v23 && v25 >= v26 )
                  v25 = *(_QWORD *)(v24 + 336) * *(unsigned int *)(v24 + 312);
                v24 = *(_QWORD *)v24;
              }
              for ( k = PpmPerfDomainHead; (__int64 *)k != &PpmPerfDomainHead; k = *(_QWORD *)k )
              {
                if ( *(_QWORD *)(k + 336) * *(unsigned int *)(k + 312) == v25 )
                {
                  if ( *(_BYTE *)(k + 206) != (_BYTE)v15 )
                  {
                    v0 = 1;
                    *(_BYTE *)(k + 206) = v15;
                  }
                  --v22;
                }
              }
              v23 = v25;
              LOBYTE(v15) = v15 + 1;
            }
            PpmHeteroHighestPerformanceClasses = v15;
          }
        }
      }
    }
  }
  return v0;
}
