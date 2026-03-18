/*
 * XREFs of ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1C00612F4
 * Callers:
 *     NtFlipObjectConsumerEndProcessPresent @ 0x1C005F1C0 (NtFlipObjectConsumerEndProcessPresent.c)
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C0060B04 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 *     ?MarkInvalid@CFlipManager@@MEAAXXZ @ 0x1C00615D0 (-MarkInvalid@CFlipManager@@MEAAXXZ.c)
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0061954 (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0061BD4 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipManager::FreeCurrentUpdates(CFlipManager *this)
{
  struct CFlipPresentUpdate *v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = (struct CFlipPresentUpdate *)*((_QWORD *)this + 25);
  if ( v1 )
  {
    CFlipManager::ReleaseKernelPresentUpdateReferences(this, v1);
    v3 = *((_QWORD *)this + 25);
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
    *((_QWORD *)this + 25) = 0LL;
  }
  v4 = *((_QWORD *)this + 26);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
    *((_QWORD *)this + 26) = 0LL;
  }
}
