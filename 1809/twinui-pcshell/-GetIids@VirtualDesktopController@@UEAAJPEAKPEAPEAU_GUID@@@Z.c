/*
 * XREFs of ?GetIids@VirtualDesktopController@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1802D8740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopController::GetIids(
        VirtualDesktopController *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = _uuidof__AUIVirtualDesktopController_Multitasking_ComposableShell_Internal_Windows__;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_0e5cbed4_2860_48f0_a7bb_38614ac683ad;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
