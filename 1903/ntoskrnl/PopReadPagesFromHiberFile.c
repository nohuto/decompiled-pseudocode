/*
 * XREFs of PopReadPagesFromHiberFile @ 0x1408A80FC
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 *     PopReadResumeContext @ 0x1408A835C (PopReadResumeContext.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x14008E960 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
 *     IoPageRead @ 0x140170DF0 (IoPageRead.c)
 *     RtlLongLongAdd @ 0x1402F7CA0 (RtlLongLongAdd.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopReadPagesFromHiberFile(unsigned int a1, unsigned int a2, PVOID *a3)
{
  struct _MDL *v4; // rdi
  char v5; // r14
  unsigned __int64 v6; // rax
  ULONG v7; // r15d
  signed int Status; // ebx
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r10
  SIZE_T v12; // r11
  PVOID PoolWithTag; // rax
  struct _MDL *Mdl; // rax
  LARGE_INTEGER StartingOffset; // [rsp+30h] [rbp-58h] BYREF
  struct _MDL *v17; // [rsp+38h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( !BYTE8(PopCapabilities)
    || (unsigned __int64)(*(_QWORD *)&PopHiberInfo - 1LL) > 0xFFFFFFFFFFFFFFFDuLL
    || (char *)FileObject - 1 > (char *)0xFFFFFFFFFFFFFFFDLL
    || qword_140443410 < 0x1000 )
  {
    Status = -1073741637;
    goto LABEL_26;
  }
  v6 = (unsigned __int64)a2 << 12;
  v7 = -1;
  if ( v6 <= 0xFFFFFFFF )
    v7 = a2 << 12;
  Status = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v6 <= 0xFFFFFFFF )
  {
    v9 = a1 * (unsigned __int128)0x1000u;
    v10 = -1LL;
    if ( (v9 & 0x8000000000000000uLL) == 0LL )
    {
      if ( !*((_QWORD *)&v9 + 1) )
      {
LABEL_13:
        v10 = v9;
        StartingOffset.QuadPart = v9;
        Status = 0;
        goto LABEL_14;
      }
    }
    else if ( *((_QWORD *)&v9 + 1) == -1LL )
    {
      goto LABEL_13;
    }
    StartingOffset.QuadPart = -1LL;
    Status = -1073741675;
LABEL_14:
    if ( Status >= 0 )
    {
      Status = RtlLongLongAdd(v10, v7, (unsigned __int64 *)&v17);
      if ( Status >= 0 )
      {
        if ( (unsigned __int64)v17 <= v11 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x206D654Du);
          *a3 = PoolWithTag;
          if ( PoolWithTag )
          {
            Mdl = IoAllocateMdl(PoolWithTag, v7, 0, 0, 0LL);
            v4 = Mdl;
            v17 = Mdl;
            if ( Mdl )
            {
              MmProbeAndLockPages(Mdl, 0, IoReadAccess);
              v5 = 1;
              KeInitializeEvent(&Event, NotificationEvent, 0);
              IoStatusBlock.Pointer = 0LL;
              IoStatusBlock.Information = 0LL;
              Status = IoPageRead((PFILE_OBJECT)FileObject, v4, &StartingOffset, &Event, &IoStatusBlock);
              if ( Status == 259 )
              {
                Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                if ( Status >= 0 )
                  Status = IoStatusBlock.Status;
              }
            }
            else
            {
              Status = -1073741670;
            }
          }
          else
          {
            Status = -1073741801;
          }
        }
        else
        {
          Status = -1073741807;
        }
      }
    }
  }
LABEL_26:
  if ( v5 )
    MmUnlockPages(v4);
  if ( v4 )
    IoFreeMdl(v4);
  if ( Status < 0 && *a3 )
  {
    ExFreePoolWithTag(*a3, 0x206D654Du);
    *a3 = 0LL;
  }
  return (unsigned int)Status;
}
