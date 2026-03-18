/*
 * XREFs of IopCallDriverReference @ 0x1400BAD70
 * Callers:
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 * Callees:
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     ObpIncrPointerCount @ 0x1400476A0 (ObpIncrPointerCount.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140065650 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 */

__int64 __fastcall IopCallDriverReference(PDEVICE_OBJECT DeviceObject, PIRP Irp, char a3, _QWORD *a4, int a5)
{
  __int64 v9; // rax
  int v10; // r8d
  struct _KTHREAD *CurrentThread; // r9
  unsigned int v12; // eax
  ULONG v13; // ecx
  int v14; // eax
  ULONG v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // edi
  PETHREAD v21; // rcx
  ULONG Flags; // eax
  PETHREAD Thread; // rcx
  struct _KTHREAD *v24; // rax
  PVOID SparePtr; // rbx
  __int128 v26; // [rsp+20h] [rbp-48h] BYREF

  if ( !a3 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)a4 - 48);
    ObpIncrPointerCount(a4 - 6);
  }
  v9 = a4[26];
  v10 = 2;
  if ( v9 && *(_DWORD *)(v9 + 80) )
  {
    v13 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v13;
    v14 = *(_DWORD *)(v9 + 80) << 17;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v12 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v12 = 0;
    if ( v12 < 2 && CurrentThread == KeGetCurrentThread() && CurrentThread[1].Timer.DueTime.LowPart )
      v12 = 2;
    v13 = Irp->Flags & 0xFFF1FFFF;
    v14 = (v12 << 17) + 0x20000;
  }
  v15 = v13 | v14;
  Irp->Flags = v15;
  v16 = (v15 >> 17) & 7;
  if ( !v16 )
  {
    v17 = 2;
LABEL_9:
    v10 = v17;
    goto LABEL_10;
  }
  v17 = v16 - 1;
  if ( v17 >= 2 )
    goto LABEL_9;
  Thread = Irp->Tail.Overlay.Thread;
  if ( !Thread || !Thread[1].Timer.DueTime.LowPart )
    goto LABEL_9;
LABEL_10:
  if ( !Irp->RequestorMode )
  {
    if ( v10 >= 2 )
      goto LABEL_12;
    v21 = Irp->Tail.Overlay.Thread;
    if ( !v21 || (v21->MiscFlags & 0x400) == 0 && (*((_DWORD *)&v21[1].SwapListEntry + 3) & 0x80u) == 0 )
    {
      Flags = Irp->Flags;
      ++IoKernelIssuedIoBoostedCount;
      Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
      goto LABEL_12;
    }
  }
  if ( v10 < 2 )
  {
    if ( a5 )
    {
      if ( a5 == 1 )
        ++IoLowPriorityWriteOperationCount;
    }
    else
    {
      ++IoLowPriorityReadOperationCount;
    }
  }
LABEL_12:
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v18 = *((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0
    && (*(_BYTE *)v18 & 2) != 0 )
  {
    v26 = 0uLL;
    v26 = *(_OWORD *)(v18 + 24);
    v24 = KeGetCurrentThread();
    SparePtr = v24[1].WaitBlock[0].SparePtr;
    v24[1].WaitBlock[0].SparePtr = &v26;
    v19 = IofCallDriver(DeviceObject, Irp);
    KeGetCurrentThread()[1].WaitBlock[0].SparePtr = SparePtr;
  }
  else
  {
    v19 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a3 )
    ObDereferenceObjectDeferDeleteWithTag(a4, 0x746C6644u);
  return v19;
}
