/*
 * XREFs of PfSnGetCompletedTrace @ 0x1406BBD1C
 * Callers:
 *     PfSnQueryPrefetcherInformation @ 0x1406BBADC (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 */

__int64 __fastcall PfSnGetCompletedTrace(void *a1, SIZE_T Length, unsigned int *a3)
{
  unsigned int v4; // r12d
  char v6; // r15
  unsigned int *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // edi

  v4 = Length;
  v6 = 1;
  ExAcquireFastMutex(&FastMutex);
  dword_14043D324 = 2;
  v7 = (unsigned int *)qword_14043D2D8;
  if ( qword_14043D2D8 == &qword_14043D2D8 )
  {
    v10 = -2147483622;
  }
  else
  {
    v8 = *((_DWORD *)qword_14043D2D8 + 6);
    if ( v8 > v4 )
    {
      *a3 = v8;
      v10 = -1073741789;
    }
    else
    {
      v9 = *(_QWORD *)qword_14043D2D8;
      if ( *((PVOID **)qword_14043D2D8 + 1) != &qword_14043D2D8 || *(PVOID *)(v9 + 8) != qword_14043D2D8 )
        __fastfail(3u);
      qword_14043D2D8 = *(PVOID *)qword_14043D2D8;
      *(_QWORD *)(v9 + 8) = &qword_14043D2D8;
      --dword_14043D320;
      KeReleaseGuardedMutex(&FastMutex);
      v6 = 0;
      if ( KeGetCurrentThread()->PreviousMode )
        ProbeForWrite(a1, v4, 8u);
      memmove(a1, v7 + 4, v7[6]);
      *a3 = v7[6];
      ExFreePoolWithTag(v7, 0);
      v10 = 0;
    }
  }
  if ( v6 )
    KeReleaseGuardedMutex(&FastMutex);
  return v10;
}
