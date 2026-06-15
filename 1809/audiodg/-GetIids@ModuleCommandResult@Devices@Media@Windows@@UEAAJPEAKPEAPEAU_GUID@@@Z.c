/*
 * XREFs of ?GetIids@ModuleCommandResult@Devices@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x14004AA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::ModuleCommandResult::GetIids(
        Windows::Media::Devices::ModuleCommandResult *this,
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
    *v6 = GUID_520d1eb4_1374_4c7d_b1e4_39dcdf3eae4e;
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
