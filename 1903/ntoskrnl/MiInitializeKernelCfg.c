/*
 * XREFs of MiInitializeKernelCfg @ 0x140A22E18
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     MiMakeZeroedPageTablesEx @ 0x14008D5B8 (MiMakeZeroedPageTablesEx.c)
 *     MiProcessKernelCfgImage @ 0x140154394 (MiProcessKernelCfgImage.c)
 *     VslInitializeSecureKernelCfg @ 0x14028FB18 (VslInitializeSecureKernelCfg.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14070EDD4 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiMarkKernelImageCfgBits @ 0x140746B78 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x1408988D0 (MiProcessKernelCfgAddressTakenImports.c)
 */

NTSTATUS MiInitializeKernelCfg()
{
  NTSTATUS result; // eax
  unsigned __int64 v1; // rbx
  ULONG_PTR v2; // rax
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *i; // rbx
  PVOID v5; // rcx
  PIMAGE_NT_HEADERS v6; // rax

  if ( (MiFlags & 0x80000) == 0 )
    return 0;
  v1 = qword_1404675A0;
  v2 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)0x20);
  if ( !v2 )
    return -1073741670;
  result = VslInitializeSecureKernelCfg(v1, (__int64)(v2 << 25) >> 16);
  if ( result >= 0 )
  {
    qword_140464838 = v1;
    qword_140464830 = 0x100000000000LL;
    if ( (unsigned int)MiMakeZeroedPageTablesEx(
                         ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         (((v1 + 0x1FFFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         4u,
                         9,
                         0) )
    {
      qword_140464840 = 0LL;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
      {
        if ( ((_DWORD)i[13] & 0x2000) == 0 )
        {
          v5 = i[6];
          if ( v5 == PsNtosImageBase )
          {
            v6 = RtlImageNtHeader(v5);
            MiMarkKernelImageCfgBits((__int64)i, (__int64)v6);
            *((_DWORD *)i + 26) |= 0x2000u;
          }
          else
          {
            MiProcessKernelCfgImageLoadConfig((__int64)i, 0LL);
            MiProcessKernelCfgImage((__int64)i, 0, 0LL);
          }
        }
      }
      MiProcessKernelCfgAddressTakenImports((PVOID *)PsLoadedModuleList);
      ExReleaseResourceLite(&PsLoadedModuleResource);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      guard_icall_bitmap = qword_140464838 - 0x3FFFE0000000000LL;
      return 0;
    }
    return -1073741670;
  }
  return result;
}
