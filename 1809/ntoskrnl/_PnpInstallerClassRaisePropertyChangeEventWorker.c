/*
 * XREFs of _PnpInstallerClassRaisePropertyChangeEventWorker @ 0x1408FC1C8
 * Callers:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1406E6D84 (_PnpObjectRaisePropertyChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpInstallerClassRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64))
{
  __int64 result; // rax
  __int64 v9; // rdx
  DEVPROPKEY *v10; // r8
  __int64 v11; // rcx

  result = a6(a1, a2, 2LL);
  v9 = 0LL;
  while ( 1 )
  {
    v10 = off_140402E10[v9];
    if ( *(_DWORD *)(a5 + 16) == v10->pid )
    {
      v11 = *(_QWORD *)a5 - *(_QWORD *)&v10->fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&v10->fmtid.Data1 )
        v11 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v10->fmtid.Data4;
      if ( !v11 )
        break;
    }
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 2 )
      return result;
  }
  return a6(a1, a2, 2LL);
}
