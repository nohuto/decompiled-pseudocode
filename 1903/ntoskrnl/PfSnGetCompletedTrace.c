/*
 * XREFs of PfSnGetCompletedTrace @ 0x1406DBA30
 * Callers:
 *     PfSnQueryPrefetcherInformation @ 0x1406DB7E0 (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
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
  dword_140467D24 = 2;
  v7 = (unsigned int *)qword_140467CD8;
  if ( qword_140467CD8 == &qword_140467CD8 )
  {
    v10 = -2147483622;
  }
  else
  {
    v8 = *((_DWORD *)qword_140467CD8 + 6);
    if ( v8 > v4 )
    {
      *a3 = v8;
      v10 = -1073741789;
    }
    else
    {
      v9 = *(_QWORD *)qword_140467CD8;
      if ( *((PVOID **)qword_140467CD8 + 1) != &qword_140467CD8 || *(PVOID *)(v9 + 8) != qword_140467CD8 )
        __fastfail(3u);
      qword_140467CD8 = *(PVOID *)qword_140467CD8;
      *(_QWORD *)(v9 + 8) = &qword_140467CD8;
      --dword_140467D20;
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
