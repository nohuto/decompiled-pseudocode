/*
 * XREFs of ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C00C6ABC
 * Callers:
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C00C8244 (ndisBindReadFilterDriverFromV3Registry.c)
 * Callees:
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C5000 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C00C71E4 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

bool __fastcall ndisBindReadFilterDriverSettingsFromV3Registry(__int64 a1, __int64 a2)
{
  struct MINIPORT_HOOK_DRIVER **v3; // rbx
  void *v4; // rcx
  int String; // eax
  bool v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( (dword_1C00A0868 & 1) == 0 )
  {
    dword_1C00A07F4 = 1;
    dword_1C00A0868 |= 1u;
    xmmword_1C00A07E0 = xmmword_1C008A908;
    dword_1C00A07F0 = 6;
    xmmword_1C00A07F8 = xmmword_1C008A920;
    dword_1C00A0808 = 8;
    dword_1C00A0820 = 20;
    xmmword_1C00A0810 = xmmword_1C008A8D8;
    dword_1C00A0838 = 22;
    xmmword_1C00A0828 = xmmword_1C008A8C0;
    dword_1C00A080C = 2;
    dword_1C00A0824 = 4;
    dword_1C00A083C = 8;
    xmmword_1C00A0840 = xmmword_1C008A8F0;
    dword_1C00A0850 = 24;
    dword_1C00A0854 = 16;
  }
  *(_DWORD *)(a1 + 40) = 0;
  v3 = (struct MINIPORT_HOOK_DRIVER **)&xmmword_1C00A07E0;
  v8 = a2;
  while ( !(unsigned int)NetSetupPropertyBag::ReadBoolean(
                           (NetSetupPropertyBag *)&v8,
                           (const struct _NETSETUPPROPKEY *)v3,
                           &v7) )
  {
    if ( v7 )
      *(_DWORD *)(a1 + 40) |= *((_DWORD *)v3 + 5);
    v3 += 3;
    if ( v3 == &g_MiniportHookDrivers )
    {
      v4 = *(void **)(a1 + 48);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0x7274534Bu);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
      String = NetSetupPropertyBag::ReadString(
                 (NetSetupPropertyBag *)&v8,
                 (const struct _NETSETUPPROPKEY *)&unk_1C0088948,
                 (void **)(a1 + 48));
      return !String || String == -1073741772;
    }
  }
  return 0;
}
