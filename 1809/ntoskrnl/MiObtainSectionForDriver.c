/*
 * XREFs of MiObtainSectionForDriver @ 0x140682AB0
 * Callers:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140855628 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     MiCreateSectionForDriver @ 0x140683460 (MiCreateSectionForDriver.c)
 *     MiAllocateTempLoaderEntry @ 0x14068434C (MiAllocateTempLoaderEntry.c)
 */

__int64 __fastcall MiObtainSectionForDriver(
        PCUNICODE_STRING String1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *Object)
{
  __int64 *v5; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 *v9; // rdi
  PVOID *v12; // rbx
  int v13; // ebx
  __int64 v14; // rax
  __int16 v15; // r8
  __int64 TempLoaderEntry; // rax
  int SystemRegionType; // eax

  v5 = Object;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v9 = 0LL;
  *v5 = 0LL;
  while ( 1 )
  {
    v12 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList != &PsLoadedModuleList )
    {
      while ( !RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(v12 + 9), 1u) )
      {
        v12 = (PVOID *)*v12;
        if ( v12 == &PsLoadedModuleList )
          goto LABEL_5;
      }
      if ( v9 )
        ObDereferenceObjectDeferDelete(v9);
      SystemRegionType = MiGetSystemRegionType((unsigned __int64)v12[6]);
      if ( (a4 & 1) != 0 )
      {
        if ( SystemRegionType == 1 )
          goto LABEL_23;
      }
      else if ( SystemRegionType != 1 )
      {
LABEL_23:
        *v5 = (__int64)v12;
        return 272LL;
      }
      return 3221225496LL;
    }
LABEL_5:
    if ( v9 )
      break;
    if ( !a3 )
      MmReleaseLoadLock((__int64)CurrentThread);
    v13 = MiCreateSectionForDriver(a2, a3, a4, &Object);
    if ( !a3 )
      MmAcquireLoadLock();
    if ( v13 < 0 )
      return (unsigned int)v13;
    v9 = Object;
    v14 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)Object) + 56LL);
    if ( *(__int16 *)(v14 + 46) < v15 && *(_DWORD *)(v14 + 32) == 1 && (a4 & 1) == 0 )
    {
      v13 = -1073741800;
LABEL_15:
      ObDereferenceObjectDeferDelete(v9);
      return (unsigned int)v13;
    }
  }
  TempLoaderEntry = MiAllocateTempLoaderEntry(v9);
  if ( !TempLoaderEntry )
  {
    v13 = -1073741670;
    goto LABEL_15;
  }
  *v5 = TempLoaderEntry;
  return 0LL;
}
