/*
 * XREFs of MiLoadHotPatch @ 0x140856C38
 * Callers:
 *     MiApplyRequiredDriverHotPatches @ 0x140682FA0 (MiApplyRequiredDriverHotPatches.c)
 *     NtManageHotPatch @ 0x1408596B0 (NtManageHotPatch.c)
 *     MmRegisterHotPatch @ 0x1409F81D0 (MmRegisterHotPatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     VslApplyHotPatch @ 0x14027AEE8 (VslApplyHotPatch.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     VslDetermineHotPatchType @ 0x140819700 (VslDetermineHotPatchType.c)
 *     MiAllocateHotPatchRecord @ 0x14085525C (MiAllocateHotPatchRecord.c)
 *     MiApplyHotPatchToDriver @ 0x140855584 (MiApplyHotPatchToDriver.c)
 *     MiHotPatchAllProcesses @ 0x1408564E8 (MiHotPatchAllProcesses.c)
 *     MiInsertHotPatchRecord @ 0x140856AF0 (MiInsertHotPatchRecord.c)
 *     MiOpenHotPatchFile @ 0x140857B4C (MiOpenHotPatchFile.c)
 *     MiPromoteControlAreaToStrongCode @ 0x140858B00 (MiPromoteControlAreaToStrongCode.c)
 */

__int64 __fastcall MiLoadHotPatch(const void **a1, int a2, int *a3, unsigned int *a4)
{
  _QWORD *HotPatchRecord; // rsi
  PVOID v10; // r15
  NTSTATUS v11; // ebx
  int v12; // edx
  struct _KTHREAD *Lock; // r15
  int v14; // edi
  char v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  int v21; // eax
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  PVOID v23; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+58h] [rbp-8h] BYREF

  if ( !dword_140439F34 )
    return 3221225485LL;
  v23 = 0LL;
  HotPatchRecord = 0LL;
  Object = 0LL;
  v10 = 0LL;
  Handle = 0LL;
  v11 = MiOpenHotPatchFile((_DWORD)a1, 1, 0, (unsigned int)&Handle, (__int64)&v23, 0LL, (__int64)&v22, 0LL);
  if ( v11 >= 0 )
  {
    v12 = HIDWORD(v22);
    *a3 = v22;
    *a4 = v12;
    if ( a2 )
    {
      HotPatchRecord = MiAllocateHotPatchRecord(*a3, v12, a1);
      if ( !HotPatchRecord )
      {
        v11 = -1073741670;
        goto LABEL_29;
      }
    }
    Lock = MmAcquireLoadLock();
    if ( HotPatchRecord )
      MiInsertHotPatchRecord((unsigned __int64 *)&MiGlobalHotPatchList, HotPatchRecord, 0);
    v14 = 1073741879;
    if ( (MiFlags & 0x8000) == 0 )
      goto LABEL_25;
    v11 = VslDetermineHotPatchType(*a3, *a4, &v22);
    if ( v11 >= 0 )
    {
      v15 = v22;
      if ( (v22 & 1) != 0 )
      {
        v11 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
        if ( v11 < 0 )
          goto LABEL_26;
        v16 = MiSectionControlArea((__int64)v23);
        v11 = MiPromoteControlAreaToStrongCode(v16, v18, v17, &v22);
        if ( v11 < 0 )
          goto LABEL_26;
        v19 = v22;
      }
      else
      {
        v19 = 0LL;
      }
      if ( (v15 & 2) == 0 )
        goto LABEL_19;
      v20 = VslApplyHotPatch(v19, (__int64)v23, 0LL, 0LL, 0LL);
      v11 = v20;
      if ( v20 >= 0 )
      {
        v14 = v20;
LABEL_19:
        v21 = MiApplyHotPatchToDriver(*a3, *a4, (__int64)a1);
        if ( v21 == -1073741515 )
        {
          v21 = 1073741879;
        }
        else if ( v21 < 0 )
        {
          v14 = v21;
        }
        if ( v14 == 1073741879 )
          v14 = v21;
LABEL_25:
        MmReleaseLoadLock((__int64)Lock);
        Lock = 0LL;
        MiHotPatchAllProcesses(*a3, *a4);
        v11 = v14;
      }
    }
LABEL_26:
    if ( Lock )
      MmReleaseLoadLock((__int64)Lock);
    v10 = Object;
  }
LABEL_29:
  if ( v23 )
    ObfDereferenceObject(v23);
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v11;
}
