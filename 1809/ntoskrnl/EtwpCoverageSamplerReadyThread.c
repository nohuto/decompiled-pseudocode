/*
 * XREFs of EtwpCoverageSamplerReadyThread @ 0x140317E64
 * Callers:
 *     EtwTraceReadyThread @ 0x140310544 (EtwTraceReadyThread.c)
 * Callees:
 *     EtwpCovSampCaptureSample @ 0x1403170B4 (EtwpCovSampCaptureSample.c)
 */

char __fastcall EtwpCoverageSamplerReadyThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v3; // r9
  unsigned int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // r10
  int v7; // r8d
  int v8; // ebx
  int v9; // ecx
  int v10; // r11d
  unsigned int v11; // r11d
  unsigned int v12; // r11d
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // ecx

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)qword_14040AE48 != CurrentThread && *(_QWORD *)qword_14040AE48 != a1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread != CurrentPrcb->IdleThread || CurrentPrcb->NestingLevel > 1u )
    {
      v3 = (*(_QWORD *)(qword_14040AE48 + 8) >> 4) & 0x1FFLL;
      v4 = ((unsigned int)*(_QWORD *)(qword_14040AE48 + 8) >> 13) & 0x3FFFF;
      _BitScanReverse(&v5, v4);
      v6 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v5 - 2) + 8LL * (v4 ^ (1 << v5)) + 8);
      if ( !*(_DWORD *)(v6 + 8 * v3 + 224) )
      {
LABEL_15:
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8 * v3 + 328));
        LOBYTE(CurrentThread) = EtwpCovSampCaptureSample(0LL, 0x30000008u);
        return (char)CurrentThread;
      }
      v7 = MEMORY[0xFFFFF78000000320];
      LODWORD(CurrentThread) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v6 + 8 * v3 + 228);
      if ( (unsigned int)CurrentThread > *(_DWORD *)(v6 + 8 * v3 + 232) )
      {
        v8 = *(_DWORD *)(v6 + 8 * v3 + 224);
        *(_DWORD *)(v6 + 8 * v3 + 244) += v8;
        v9 = *(_DWORD *)(v6 + 8 * v3 + 244);
        v10 = *(_DWORD *)(v6 + 8 * v3 + 240);
        LODWORD(CurrentThread) = 2 * v8;
        if ( v9 > *(_DWORD *)(v6 + 8 * v3 + 236) )
          v9 = *(_DWORD *)(v6 + 8 * v3 + 236);
        *(_DWORD *)(v6 + 8 * v3 + 228) = v7;
        v11 = *(_DWORD *)(v6 + 8 * v3 + 252) + v10;
        *(_DWORD *)(v6 + 8 * v3 + 240) = 0;
        v12 = v11 >> 1;
        *(_DWORD *)(v6 + 8 * v3 + 244) = v9;
        *(_DWORD *)(v6 + 8 * v3 + 252) = v12;
        if ( v12 >= (unsigned int)CurrentThread )
        {
          v13 = v12 / (v8 + 1);
          v14 = 16777619 * (*(_DWORD *)(v6 + 8 * v3 + 260) ^ v7);
          *(_DWORD *)(v6 + 8 * v3 + 256) = v13;
          LODWORD(CurrentThread) = v14 & (2 * v13);
          *(_DWORD *)(v6 + 8 * v3 + 260) = v14;
          *(_DWORD *)(v6 + 8 * v3 + 248) = (_DWORD)CurrentThread;
        }
        else
        {
          *(_DWORD *)(v6 + 8 * v3 + 256) = 1;
          *(_DWORD *)(v6 + 8 * v3 + 248) = 1;
        }
      }
      ++*(_DWORD *)(v6 + 8 * v3 + 240);
      v15 = *(_DWORD *)(v6 + 8 * v3 + 244);
      if ( v15 > 0 )
      {
        LODWORD(CurrentThread) = --*(_DWORD *)(v6 + 8 * v3 + 248);
        if ( (int)CurrentThread <= 0 )
        {
          *(_DWORD *)(v6 + 8 * v3 + 244) = v15 - 1;
          *(_DWORD *)(v6 + 8 * v3 + 248) = *(_DWORD *)(v6 + 8 * v3 + 256);
          goto LABEL_15;
        }
      }
    }
  }
  return (char)CurrentThread;
}
