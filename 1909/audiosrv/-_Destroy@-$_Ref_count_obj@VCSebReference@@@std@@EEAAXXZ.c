/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCSebReference@@@std@@EEAAXXZ @ 0x1800438D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Ref_count_obj<CSebReference>::_Destroy(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // eax
  struct _TP_TIMER *v4; // rcx
  int v5; // eax
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = _Mtx_lock((_Mtx_t)(v1 + 8));
  if ( v2 )
    std::_Throw_C_error(v2);
  if ( (*(_DWORD *)v1)-- == 1 )
  {
    v4 = *(struct _TP_TIMER **)(v1 + 96);
    if ( v4 )
    {
      pftDueTime.dwLowDateTime = -200000000;
      pftDueTime.dwHighDateTime = -1;
      SetThreadpoolTimer(v4, &pftDueTime, 0, 0);
    }
  }
  v5 = _Mtx_unlock((_Mtx_t)(v1 + 8));
  if ( v5 )
    std::_Throw_C_error(v5);
}
