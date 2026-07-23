/*
 * XREFs of PspReadDfssConfigurationValues @ 0x1402E95A0
 * Callers:
 *     PspIsDfssEnabled @ 0x140734FD0 (PspIsDfssEnabled.c)
 *     PspDfssConfigurationChangeHandler @ 0x140887890 (PspDfssConfigurationChangeHandler.c)
 * Callees:
 *     KeUpdateGroupSchedulingConstants @ 0x1401914F8 (KeUpdateGroupSchedulingConstants.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwNotifyChangeKey @ 0x1401BA550 (ZwNotifyChangeKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlQueryImageFileKeyOption @ 0x1406BC640 (RtlQueryImageFileKeyOption.c)
 */

void PspReadDfssConfigurationValues()
{
  NTSTATUS v0; // ecx
  _DWORD *v1; // rbx
  __int64 v2; // rdi
  int ImageFileKeyOption; // eax
  _DWORD *v4; // rcx
  PIO_APC_ROUTINE v5; // r8
  HANDLE v6; // rcx
  OBJECT_ATTRIBUTES v7; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF

  if ( PspDfssConfigurationKey )
  {
    v0 = 0;
    Handle = PspDfssConfigurationKey;
  }
  else
  {
    v7.Length = 48;
    v7.RootDirectory = 0LL;
    v7.Attributes = 576;
    v7.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames;
    *(_OWORD *)&v7.SecurityDescriptor = 0LL;
    v0 = ZwOpenKey(&Handle, 0x11u, &v7);
  }
  if ( v0 >= 0 )
  {
    v1 = &PspDfssConfigValues;
    v2 = 4LL;
    do
    {
      ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, 4, 0LL);
      v4 = *(_DWORD **)v1;
      if ( ImageFileKeyOption >= 0 )
      {
        if ( !*v4 )
          *v4 = 1;
      }
      else
      {
        *v4 = v1[4];
      }
      v1 += 6;
      --v2;
    }
    while ( v2 );
    if ( PspDfssConfigurationNotify )
    {
      KeUpdateGroupSchedulingConstants(0);
    }
    else
    {
      PspDfssConfigurationNotify = (PIO_APC_ROUTINE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x73736644u);
      if ( !PspDfssConfigurationNotify )
      {
        ZwClose(Handle);
        return;
      }
      PspDfssConfigurationKey = Handle;
    }
    v5 = PspDfssConfigurationNotify;
    v6 = PspDfssConfigurationKey;
    *((_QWORD *)PspDfssConfigurationNotify + 3) = 0LL;
    *(_QWORD *)v5 = 0LL;
    *((_QWORD *)v5 + 2) = PspDfssConfigurationChangeHandler;
    if ( ZwNotifyChangeKey(v6, 0LL, v5, (PVOID)1, (PIO_STATUS_BLOCK)v5 + 2, 4u, 0, 0LL, 0, 1u) < 0 )
    {
      ZwClose(PspDfssConfigurationKey);
      PspDfssConfigurationKey = 0LL;
      ExFreePoolWithTag(PspDfssConfigurationNotify, 0x73736644u);
      PspDfssConfigurationNotify = 0LL;
    }
  }
}
