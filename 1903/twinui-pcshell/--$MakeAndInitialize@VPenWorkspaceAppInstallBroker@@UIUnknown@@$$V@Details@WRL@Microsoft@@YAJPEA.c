/*
 * XREFs of ??$MakeAndInitialize@VPenWorkspaceAppInstallBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800940D0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPenWorkspaceAppInstallBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180094A50 (-CreateInstance@-$SimpleClassFactory@VPenWorkspaceAppInstallBroker@@$0A@@WRL@Microsoft@@UEAAJPEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008C940 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0PenWorkspaceAppInstallBroker@@QEAA@XZ @ 0x1800944A4 (--0PenWorkspaceAppInstallBroker@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspaceAppInstallBroker,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  unsigned int v3; // edi
  PenWorkspaceAppInstallBroker *v4; // rbx
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  PenWorkspaceAppInstallBroker *v7; // [rsp+48h] [rbp+10h]
  void *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (PenWorkspaceAppInstallBroker *)v2;
  if ( v2 )
  {
    v8 = v2;
    v4 = PenWorkspaceAppInstallBroker::PenWorkspaceAppInstallBroker((PenWorkspaceAppInstallBroker *)v2);
    v7 = v4;
    v6 = 0LL;
    v3 = (**(__int64 (__fastcall ***)(PenWorkspaceAppInstallBroker *, GUID *, _QWORD *))v4)(
           v4,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    (*(void (__fastcall **)(PenWorkspaceAppInstallBroker *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return v3;
}
