/*
 * XREFs of ?GetIids@UniqueExtendedExecutionSession@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18007CF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UniqueExtendedExecutionSession::GetIids(
        UniqueExtendedExecutionSession *this,
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
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
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
