/*
 * XREFs of MiInitializeKernelCfg @ 0x140A22EF8
 * Callers:
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     MiMakeZeroedPageTablesEx @ 0x1400CA488 (MiMakeZeroedPageTablesEx.c)
 *     MiProcessKernelCfgImage @ 0x140154A34 (MiProcessKernelCfgImage.c)
 *     VslInitializeSecureKernelCfg @ 0x14028F878 (VslInitializeSecureKernelCfg.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140710BB4 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiMarkKernelImageCfgBits @ 0x140748A78 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x1408980F0 (MiProcessKernelCfgAddressTakenImports.c)
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
  v1 = qword_1404672A0;
  v2 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)0x20);
  if ( !v2 )
    return -1073741670;
  result = VslInitializeSecureKernelCfg(v1, (__int64)(v2 << 25) >> 16);
  if ( result >= 0 )
  {
    qword_140464538 = v1;
    qword_140464530 = 0x100000000000LL;
    if ( (unsigned int)MiMakeZeroedPageTablesEx(
                         ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         (((v1 + 0x1FFFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         4u,
                         9,
                         0) )
    {
      qword_140464540 = 0LL;
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
      guard_icall_bitmap = qword_140464538 - 0x3FFFE0000000000LL;
      return 0;
    }
    return -1073741670;
  }
  return result;
}
