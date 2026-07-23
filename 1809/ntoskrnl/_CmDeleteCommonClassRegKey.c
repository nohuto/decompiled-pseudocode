/*
 * XREFs of _CmDeleteCommonClassRegKey @ 0x1408F7560
 * Callers:
 *     _CmDeleteInstallerClassWorker @ 0x1408F8FAC (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x1408F937C (_CmDeleteInterfaceClassWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408F76AC (_CmDeleteCommonClassRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteCommonClassRegKey(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // esi
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD, __int64, int, _DWORD *); // rdi
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-61h]
  _DWORD v14[24]; // [rsp+40h] [rbp-41h] BYREF

  memset(v14, 0, 0x58uLL);
  if ( (unsigned __int8)a3 == 32 )
  {
    v6 = 2;
  }
  else
  {
    if ( (unsigned __int8)a3 != 64 )
      return (unsigned int)-1073741811;
    v6 = 4;
  }
  v7 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _DWORD *))(a1 + 504);
  v14[5] = 0;
  v14[7] = 0;
  v14[4] = a3;
  LOBYTE(v14[6]) = 1;
  if ( v7 )
  {
    v8 = v7(a1, a2, v6, 12LL, 1, v14);
    if ( v8 == -1073741822 )
    {
      v7 = 0LL;
    }
    else
    {
      if ( v8 == -1073741536 )
        return v14[0];
      if ( v8 )
        return (unsigned int)-1073741595;
    }
  }
  LOBYTE(v13) = v14[6];
  v9 = CmDeleteCommonClassRegKeyWorker(a1, a2, v14[4], v14[5], v13);
  v10 = v9;
  if ( !v7 )
    return v10;
  v14[0] = v9;
  v11 = v7(a1, a2, v6, 12LL, 2, v14);
  if ( v11 == -1073741822 )
    return v10;
  if ( v11 == -1073741536 )
    return v14[0];
  if ( v11 )
    return (unsigned int)-1073741595;
  return v10;
}
