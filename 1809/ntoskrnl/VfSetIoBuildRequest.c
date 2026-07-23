/*
 * XREFs of VfSetIoBuildRequest @ 0x1409316F0
 * Callers:
 *     IovBuildAsynchronousFsdRequest @ 0x140924AF0 (IovBuildAsynchronousFsdRequest.c)
 *     IovBuildDeviceIoControlRequest @ 0x140924B80 (IovBuildDeviceIoControlRequest.c)
 *     IovBuildSynchronousFsdRequest @ 0x140924C40 (IovBuildSynchronousFsdRequest.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x14093F224 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14093F3A4 (VfIrpDatabaseEntryReleaseLock.c)
 */

char __fastcall VfSetIoBuildRequest(__int64 a1)
{
  char v2; // di
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rdx

  v2 = 0;
  v3 = VfIrpDatabaseEntryFindAndLock(a1);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 56) |= 0x1000u;
    v2 = 1;
    v4 = *(_DWORD *)(a1 + 16);
    if ( (v4 & 0x10) != 0 && (v4 & 0x40) != 0 && (v4 & 0x20) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 184);
      if ( (unsigned __int8)(*(_BYTE *)(v5 - 72) - 14) <= 1u )
      {
        *(_QWORD *)(v3 + 200) = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(v3 + 208) = *(_DWORD *)(v5 - 64);
      }
    }
    VfIrpDatabaseEntryReleaseLock(v3);
  }
  return v2;
}
