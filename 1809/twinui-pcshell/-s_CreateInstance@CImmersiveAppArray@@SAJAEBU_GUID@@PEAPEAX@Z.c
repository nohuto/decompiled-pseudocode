/*
 * XREFs of ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FD2FC
 * Callers:
 *     ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1800EEA50 (-GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationA.c)
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x1800FFB80 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800ED150 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CImmersiveAppArray@@QEAA@XZ @ 0x1800FCF0C (--0CImmersiveAppArray@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveAppArray::s_CreateInstance(const struct _GUID *a1, void **a2)
{
  CImmersiveAppArray *v3; // rbx
  CImmersiveAppArray *v4; // rax
  const struct _GUID *v5; // rdx
  __int64 v6; // rcx
  CImmersiveAppArray *v7; // rdi
  CImmersiveAppArray *v8; // rsi
  CImmersiveAppArray *v9; // r8
  signed int Instance; // edi

  *a2 = 0LL;
  v3 = 0LL;
  v4 = (CImmersiveAppArray *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  v8 = 0LL;
  v9 = 0LL;
  if ( v4 )
  {
    memset_0(v4, 0, 0x20uLL);
    v3 = CImmersiveAppArray::CImmersiveAppArray(v7);
    v8 = v3;
    v9 = v3;
  }
  Instance = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    Instance = CEnumerableObjectCollection::CreateInstance(v6, v5, (void **)v9 + 3);
    if ( Instance >= 0 )
      Instance = (**(__int64 (__fastcall ***)(CImmersiveAppArray *, GUID *, void **))v3)(
                   v3,
                   &GUID_05581915_c410_44c8_819a_f310f6c0ffee,
                   a2);
  }
  if ( v8 )
    (*(void (__fastcall **)(CImmersiveAppArray *, const struct _GUID *, CImmersiveAppArray *))(*(_QWORD *)v8 + 16LL))(
      v8,
      v5,
      v9);
  return (unsigned int)Instance;
}
