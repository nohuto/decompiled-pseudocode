/*
 * XREFs of _lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___ @ 0x180093660
 * Callers:
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x180094310 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___(
        _QWORD **a1,
        int **a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // rcx
  bool v4; // zf
  int v5; // edx

  v2 = (_DWORD *)(*a1)[1];
  v3 = (_DWORD *)**a1;
  v4 = v3 == v2;
  if ( v3 != v2 )
  {
    v5 = **a2;
    do
    {
      if ( *v3 == v5 )
        break;
      ++v3;
    }
    while ( v3 != v2 );
    v4 = v3 == v2;
  }
  return !v4;
}
