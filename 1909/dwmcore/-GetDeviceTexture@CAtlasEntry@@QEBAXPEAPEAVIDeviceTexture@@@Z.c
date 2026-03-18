/*
 * XREFs of ?GetDeviceTexture@CAtlasEntry@@QEBAXPEAPEAVIDeviceTexture@@@Z @ 0x18001E184
 * Callers:
 *     ?GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18001E130 (-GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CAtlasEntry::GetDeviceTexture(CAtlasEntry *this, struct IDeviceTexture **a2, __int64 a3)
{
  __int64 v4; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 1) )
    ModuleFailFastForHRESULT(2291662981LL, retaddr, a3);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 8LL) + 104LL))(*(_QWORD *)(*(_QWORD *)this + 8LL));
  (**(void (__fastcall ***)(__int64))v4)(v4);
  *a2 = (struct IDeviceTexture *)(v4 + 120);
}
