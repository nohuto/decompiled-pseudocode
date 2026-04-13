/*
 * XREFs of ??1_Init_locks@std@@QEAA@XZ @ 0x1800AEA98
 * Callers:
 *     std::_dynamic_atexit_destructor_for__initlocks__ @ 0x1800D5EA0 (std--_dynamic_atexit_destructor_for__initlocks__.c)
 *     std::_dynamic_atexit_destructor_for__initlocks___0 @ 0x1800D5FC0 (std--_dynamic_atexit_destructor_for__initlocks___0.c)
 * Callees:
 *     _Mtxdst @ 0x1800B6934 (_Mtxdst.c)
 */

void __fastcall std::_Init_locks::~_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v2; // rdi

  if ( _InterlockedDecrement(&dword_18018E1D0) < 0 )
  {
    v1 = &stru_18018E360;
    v2 = 4LL;
    do
    {
      Mtxdst(v1++);
      --v2;
    }
    while ( v2 );
  }
}
