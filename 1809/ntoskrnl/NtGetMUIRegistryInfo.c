/*
 * XREFs of NtGetMUIRegistryInfo @ 0x1406AE860
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MUIBugCheck @ 0x14031F4A8 (MUIBugCheck.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x14031F4D0 (MigrateOOBELanguageToInstallationLanguage.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
 *     MUIInitializeResourceLock @ 0x1407106FC (MUIInitializeResourceLock.c)
 */

NTSTATUS __cdecl NtGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  __int64 v5; // r14
  __int64 v6; // rax
  ULONG v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char v9; // bl
  NTSTATUS v10; // esi
  int v12; // eax
  unsigned int Length; // [rsp+50h] [rbp-A8h]
  struct _KEVENT *p_Event; // [rsp+58h] [rbp-A0h] BYREF
  void *v15; // [rsp+60h] [rbp-98h]
  __int64 v16; // [rsp+68h] [rbp-90h]
  int v17; // [rsp+70h] [rbp-88h]
  int v18; // [rsp+74h] [rbp-84h]
  int v19; // [rsp+78h] [rbp-80h]
  int v20; // [rsp+7Ch] [rbp-7Ch]
  int v21; // [rsp+80h] [rbp-78h]
  HANDLE Handle; // [rsp+88h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-68h] BYREF
  __int128 v24; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-40h]
  int v26; // [rsp+C0h] [rbp-38h]
  __int128 v27; // [rsp+C8h] [rbp-30h]
  char v28; // [rsp+118h] [rbp+20h]

  v28 = 0;
  if ( !KeGetCurrentThread()->PreviousMode || InitSafeBootMode )
    goto LABEL_46;
  if ( !DataSize )
  {
    if ( (Flags & 0xA) == 0 )
      goto LABEL_47;
    Length = 0;
    v5 = 0x7FFFFFFF0000LL;
    goto LABEL_11;
  }
  v5 = 0x7FFFFFFF0000LL;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)DataSize < 0x7FFFFFFF0000LL )
    v6 = (__int64)DataSize;
  Length = *(_DWORD *)v6;
  if ( !*(_DWORD *)v6 )
  {
LABEL_11:
    if ( Data )
      goto LABEL_47;
    goto LABEL_12;
  }
  if ( !Data )
    goto LABEL_47;
LABEL_12:
  v7 = 1;
  if ( Flags )
    v7 = Flags;
  if ( (v7 & 0xFFFFFFF4) != 0 )
    goto LABEL_47;
  if ( !MUIRegistryLock )
  {
    v10 = MUIInitializeResourceLock(&MUIRegistryLock);
    if ( (v10 & 0xC0000000) == 0xC0000000 )
      goto LABEL_27;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(MUIRegistryLock, 1u);
  v28 = 1;
  if ( MUIRegistryInfo == (PVOID)-1LL )
  {
    if ( (v7 & 2) != 0 )
    {
      MUIRegistryInfo = 0LL;
      LODWORD(MUIRegistryInfoSize) = 0;
LABEL_45:
      v10 = 0;
      goto LABEL_27;
    }
LABEL_46:
    v10 = -1073741823;
    goto LABEL_27;
  }
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 2) != 0 )
    {
      if ( MUIRegistryInfo )
      {
        ExFreePoolWithTag(MUIRegistryInfo, 0);
        MUIRegistryInfo = 0LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        if ( (v7 & 8) != 0 )
          ++MEMORY[0xFFFFF780000003A4];
      }
      goto LABEL_45;
    }
    if ( (v7 & 8) != 0 )
    {
      v12 = ++MEMORY[0xFFFFF780000003A4];
      if ( MUIRegistryInfo )
        *((_DWORD *)MUIRegistryInfo + 3) = v12;
      goto LABEL_45;
    }
LABEL_47:
    v10 = -1073741811;
    goto LABEL_27;
  }
  v9 = 0;
  if ( MUIRegistryInfo )
    goto LABEL_19;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  p_Event = &Event;
  v15 = 0LL;
  v16 = 0LL;
  v17 = WORD1(NlsMbCodePageTag);
  v18 = 0;
  v19 = (unsigned __int16)PsMachineUILanguageId;
  v20 = 0;
  v21 = -1073741823;
  LODWORD(v24) = 48;
  *((_QWORD *)&v24 + 1) = 0LL;
  v26 = 512;
  v25 = 0LL;
  v27 = 0LL;
  v10 = PsCreateSystemThreadEx(
          (__int64)&Handle,
          0x1FFFFF,
          &v24,
          0LL,
          0LL,
          (__int64)MUIRegistrySystemRoutine,
          (__int64)&p_Event,
          0LL,
          0LL);
  if ( v10 >= 0 )
  {
    ZwClose(Handle);
    v10 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( v10 >= 0 )
    {
      v10 = v21;
      if ( v21 < 0 )
      {
LABEL_54:
        MUIRegistryInfo = (PVOID)-1LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        goto LABEL_27;
      }
      MUIRegistryInfo = v15;
      LODWORD(MUIRegistryInfoSize) = v16;
      if ( !HIDWORD(v16) )
        MUIBugCheck(32770);
      if ( !v18 )
      {
        if ( PsUILanguageComitted )
          MUIBugCheck(32769);
        MigrateOOBELanguageToInstallationLanguage();
      }
      if ( !v20 )
        PsMachineUILanguageId = WORD1(NlsMbCodePageTag);
    }
  }
  if ( v10 < 0 )
    goto LABEL_54;
LABEL_19:
  if ( Length )
  {
    if ( Length < (unsigned int)MUIRegistryInfoSize )
    {
      v10 = -1073741789;
      goto LABEL_23;
    }
    v9 = 1;
  }
  v10 = 0;
LABEL_23:
  if ( (unsigned __int64)DataSize < 0x7FFFFFFF0000LL )
    v5 = (__int64)DataSize;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  *DataSize = MUIRegistryInfoSize;
  if ( v9 )
  {
    ProbeForWrite(Data, Length, 1u);
    memset(Data, 0, Length);
    memmove(Data, MUIRegistryInfo, (unsigned int)MUIRegistryInfoSize);
  }
LABEL_27:
  if ( v28 )
  {
    ExReleaseResourceLite(MUIRegistryLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v10;
}
