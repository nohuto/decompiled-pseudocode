/*
 * XREFs of PfSnGetCompletedTrace @ 0x1406DC6B8
 * Callers:
 *     PfSnQueryPrefetcherInformation @ 0x1406DC468 (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
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
  ExAcquireFastMutex(&stru_1404679E8);
  dword_140467A24 = 2;
  v7 = (unsigned int *)qword_1404679D8;
  if ( qword_1404679D8 == &qword_1404679D8 )
  {
    v10 = -2147483622;
  }
  else
  {
    v8 = *((_DWORD *)qword_1404679D8 + 6);
    if ( v8 > v4 )
    {
      *a3 = v8;
      v10 = -1073741789;
    }
    else
    {
      v9 = *(_QWORD *)qword_1404679D8;
      if ( *((PVOID **)qword_1404679D8 + 1) != &qword_1404679D8 || *(PVOID *)(v9 + 8) != qword_1404679D8 )
        __fastfail(3u);
      qword_1404679D8 = *(PVOID *)qword_1404679D8;
      *(_QWORD *)(v9 + 8) = &qword_1404679D8;
      --dword_140467A20;
      KeReleaseGuardedMutex(&stru_1404679E8);
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
    KeReleaseGuardedMutex(&stru_1404679E8);
  return v10;
}
