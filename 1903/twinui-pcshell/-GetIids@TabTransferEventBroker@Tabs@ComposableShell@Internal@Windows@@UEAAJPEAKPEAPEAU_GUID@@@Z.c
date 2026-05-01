/*
 * XREFs of ?GetIids@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18024B820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::GetIids(
        Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = GUID_4897dc3a_5143_5478_912e_a6edc7c5a2ab;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
