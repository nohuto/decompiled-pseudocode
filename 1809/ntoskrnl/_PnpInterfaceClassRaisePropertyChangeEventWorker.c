/*
 * XREFs of _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x1408FC290
 * Callers:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1406E6D84 (_PnpObjectRaisePropertyChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpInterfaceClassRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64))
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx

  result = a6(a1, a2, 4LL);
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (__int64)*(&off_140402E20 + v9);
    if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v10 + 16) )
    {
      v11 = *(_QWORD *)a5 - *(_QWORD *)v10;
      if ( *(_QWORD *)a5 == *(_QWORD *)v10 )
        v11 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v10 + 8);
      if ( !v11 )
        break;
    }
    v9 = (unsigned int)(v9 + 1);
    if ( (_DWORD)v9 )
      return result;
  }
  return a6(a1, a2, 4LL);
}
