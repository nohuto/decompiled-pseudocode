/*
 * XREFs of ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C0100FC8
 * Callers:
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C010A818 (ndisBindReadFilterDriverFromV3Registry.c)
 * Callees:
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0100980 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C01017B8 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 */

bool __fastcall ndisBindReadFilterDriverSettingsFromV3Registry(__int64 a1, void **a2)
{
  struct MINIPORT_HOOK_DRIVER **v3; // rbx
  void *v4; // rcx
  int v5; // eax
  bool v7; // [rsp+30h] [rbp+8h] BYREF
  void **v8; // [rsp+38h] [rbp+10h] BYREF

  if ( (dword_1C00E6884 & 1) == 0 )
  {
    dword_1C00E6814 = 1;
    dword_1C00E6884 |= 1u;
    xmmword_1C00E6800 = xmmword_1C00CF9E8;
    dword_1C00E6810 = 6;
    xmmword_1C00E6818 = xmmword_1C00CFA00;
    dword_1C00E6828 = 8;
    dword_1C00E6840 = 20;
    xmmword_1C00E6830 = xmmword_1C00CF9B8;
    dword_1C00E6858 = 22;
    xmmword_1C00E6848 = xmmword_1C00CF9A0;
    dword_1C00E682C = 2;
    dword_1C00E6844 = 4;
    dword_1C00E685C = 8;
    xmmword_1C00E6860 = xmmword_1C00CF9D0;
    dword_1C00E6870 = 24;
    dword_1C00E6874 = 16;
  }
  *(_DWORD *)(a1 + 40) = 0;
  v3 = (struct MINIPORT_HOOK_DRIVER **)&xmmword_1C00E6800;
  v8 = a2;
  while ( !(unsigned int)NetSetupPropertyBag::ReadBoolean(&v8, (const struct _NETSETUPPROPKEY *)v3, &v7) )
  {
    if ( v7 )
      *(_DWORD *)(a1 + 40) |= *((_DWORD *)v3 + 5);
    v3 += 3;
    if ( v3 == &g_MiniportHookDrivers )
    {
      v4 = *(void **)(a1 + 48);
      *(_QWORD *)(a1 + 48) = 0LL;
      if ( v4 )
        ExFreePoolWithTag(v4, 0x7274534Bu);
      v5 = NetSetupPropertyBag::ReadString(&v8, &unk_1C00CC3E8, a1 + 48);
      return !v5 || v5 == -1073741772;
    }
  }
  return 0;
}
