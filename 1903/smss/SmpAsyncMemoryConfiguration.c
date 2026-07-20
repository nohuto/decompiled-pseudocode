/*
 * XREFs of SmpAsyncMemoryConfiguration @ 0x14000B740
 * Callers:
 *     <none>
 * Callees:
 *     SmpNtSerializeBoot @ 0x140008D24 (SmpNtSerializeBoot.c)
 *     SmpCreatePagingFiles @ 0x14000AC40 (SmpCreatePagingFiles.c)
 *     SmpCheckMemoryCoolingCompatibility @ 0x14000B808 (SmpCheckMemoryCoolingCompatibility.c)
 *     SmpPagefileInitialize @ 0x14000B8B8 (SmpPagefileInitialize.c)
 *     SmpIsRamdiskBoot @ 0x14001070C (SmpIsRamdiskBoot.c)
 */

char __fastcall SmpAsyncMemoryConfiguration(__int64 a1)
{
  char v1; // bl
  int v2; // eax
  _DWORD SystemInformation[6]; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+58h] [rbp+20h] BYREF

  SystemInformation[0] = 0;
  v1 = 1;
  v2 = SmpPagefileInitialize(a1);
  if ( v2 >= 0 )
  {
    SmpNtSerializeBoot();
    LOBYTE(v2) = SmpHostSmss;
    if ( !SmpHostSmss )
      goto LABEL_6;
    if ( !SmpUseDedicatedDumpFile )
    {
      NtSetSystemInformation(SystemCrashDumpStateInformation, SystemInformation, 4u);
      LOBYTE(v2) = SmpHostSmss;
    }
    if ( !(_BYTE)v2 )
    {
LABEL_6:
      v1 = 0;
      SmpPagefileOnOsVolume = 0;
    }
    if ( SmpMiniNTBoot == 1 )
    {
      v5 = 0;
      LOBYTE(v2) = SmpIsRamdiskBoot(&v5);
      if ( v5 == 1 )
        v1 = 0;
      else
        SmpPagefileOnOsVolume = 1;
    }
    if ( !SmpMiniNTBoot )
      LOBYTE(v2) = SmpCheckMemoryCoolingCompatibility();
    if ( v1 == 1 )
    {
      SmpCreatePagingFiles();
      LOBYTE(v2) = NtInitializeRegistry(2u);
    }
    if ( SmpCrashDumpKey )
      LOBYTE(v2) = NtClose(SmpCrashDumpKey);
  }
  return v2;
}
