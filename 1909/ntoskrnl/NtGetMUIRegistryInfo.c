/*
 * XREFs of NtGetMUIRegistryInfo @ 0x1406CFA90
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MUIBugCheck @ 0x14033E780 (MUIBugCheck.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x14033E7A8 (MigrateOOBELanguageToInstallationLanguage.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     PsCreateSystemThreadEx @ 0x1406725D0 (PsCreateSystemThreadEx.c)
 *     MUIInitializeResourceLock @ 0x140788CAC (MUIInitializeResourceLock.c)
 */

NTSTATUS __cdecl NtGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  __int64 v6; // r14
  __int64 v7; // rax
  ULONG v8; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char v10; // bl
  NTSTATUS SystemThread; // edi
  int v13; // eax
  unsigned int Length; // [rsp+50h] [rbp-A8h]
  _QWORD v15[6]; // [rsp+58h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-68h] BYREF
  __int128 v18[3]; // [rsp+A8h] [rbp-50h] BYREF
  char v19; // [rsp+118h] [rbp+20h]

  memset(v18, 0, sizeof(v18));
  memset(&Event, 0, sizeof(Event));
  memset(v15, 0, sizeof(v15));
  v19 = 0;
  if ( !KeGetCurrentThread()->PreviousMode || InitSafeBootMode )
    goto LABEL_46;
  if ( !DataSize )
  {
    if ( (Flags & 0xA) == 0 )
      goto LABEL_47;
    Length = 0;
    v6 = 0x7FFFFFFF0000LL;
    goto LABEL_11;
  }
  v6 = 0x7FFFFFFF0000LL;
  v7 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)DataSize < 0x7FFFFFFF0000LL )
    v7 = (__int64)DataSize;
  Length = *(_DWORD *)v7;
  if ( !*(_DWORD *)v7 )
  {
LABEL_11:
    if ( Data )
      goto LABEL_47;
    goto LABEL_12;
  }
  if ( !Data )
    goto LABEL_47;
LABEL_12:
  v8 = 1;
  if ( Flags )
    v8 = Flags;
  if ( (v8 & 0xFFFFFFF4) != 0 )
    goto LABEL_47;
  if ( !MUIRegistryLock )
  {
    SystemThread = MUIInitializeResourceLock(&MUIRegistryLock);
    if ( (SystemThread & 0xC0000000) == 0xC0000000 )
      goto LABEL_27;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(MUIRegistryLock, 1u);
  v19 = 1;
  if ( MUIRegistryInfo == (PVOID)-1LL )
  {
    if ( (v8 & 2) != 0 )
    {
      MUIRegistryInfo = 0LL;
      LODWORD(MUIRegistryInfoSize) = 0;
LABEL_45:
      SystemThread = 0;
      goto LABEL_27;
    }
LABEL_46:
    SystemThread = -1073741823;
    goto LABEL_27;
  }
  if ( (v8 & 1) == 0 )
  {
    if ( (v8 & 2) != 0 )
    {
      if ( MUIRegistryInfo )
      {
        ExFreePoolWithTag(MUIRegistryInfo, 0);
        MUIRegistryInfo = 0LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        if ( (v8 & 8) != 0 )
          ++MEMORY[0xFFFFF780000003A4];
      }
      goto LABEL_45;
    }
    if ( (v8 & 8) != 0 )
    {
      v13 = ++MEMORY[0xFFFFF780000003A4];
      if ( MUIRegistryInfo )
        *((_DWORD *)MUIRegistryInfo + 3) = v13;
      goto LABEL_45;
    }
LABEL_47:
    SystemThread = -1073741811;
    goto LABEL_27;
  }
  v10 = 0;
  if ( MUIRegistryInfo )
    goto LABEL_19;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v15[0] = &Event;
  v15[1] = 0LL;
  v15[2] = 0LL;
  v15[3] = (unsigned __int16)PsInstallUILanguageId;
  v15[4] = (unsigned __int16)PsMachineUILanguageId;
  LODWORD(v15[5]) = -1073741823;
  LODWORD(v18[0]) = 48;
  *((_QWORD *)&v18[0] + 1) = 0LL;
  DWORD2(v18[1]) = 512;
  *(_QWORD *)&v18[1] = 0LL;
  v18[2] = 0LL;
  SystemThread = PsCreateSystemThreadEx(
                   (__int64)&Handle,
                   0x1FFFFF,
                   v18,
                   0LL,
                   0LL,
                   (__int64)MUIRegistrySystemRoutine,
                   (__int64)v15,
                   0LL,
                   0LL);
  if ( SystemThread >= 0 )
  {
    ZwClose(Handle);
    SystemThread = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( SystemThread >= 0 )
    {
      SystemThread = v15[5];
      if ( SLODWORD(v15[5]) < 0 )
      {
LABEL_54:
        MUIRegistryInfo = (PVOID)-1LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        goto LABEL_27;
      }
      MUIRegistryInfo = (PVOID)v15[1];
      LODWORD(MUIRegistryInfoSize) = v15[2];
      if ( !HIDWORD(v15[2]) )
        MUIBugCheck(32770);
      if ( !HIDWORD(v15[3]) )
      {
        if ( PsUILanguageComitted )
          MUIBugCheck(32769);
        MigrateOOBELanguageToInstallationLanguage();
      }
      if ( !HIDWORD(v15[4]) )
        PsMachineUILanguageId = PsInstallUILanguageId;
    }
  }
  if ( SystemThread < 0 )
    goto LABEL_54;
LABEL_19:
  if ( Length )
  {
    if ( Length < (unsigned int)MUIRegistryInfoSize )
    {
      SystemThread = -1073741789;
      goto LABEL_23;
    }
    v10 = 1;
  }
  SystemThread = 0;
LABEL_23:
  if ( (unsigned __int64)DataSize < 0x7FFFFFFF0000LL )
    v6 = (__int64)DataSize;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  *DataSize = MUIRegistryInfoSize;
  if ( v10 )
  {
    ProbeForWrite(Data, Length, 1u);
    memset(Data, 0, Length);
    memmove(Data, MUIRegistryInfo, (unsigned int)MUIRegistryInfoSize);
  }
LABEL_27:
  if ( v19 )
  {
    ExReleaseResourceLite(MUIRegistryLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return SystemThread;
}
