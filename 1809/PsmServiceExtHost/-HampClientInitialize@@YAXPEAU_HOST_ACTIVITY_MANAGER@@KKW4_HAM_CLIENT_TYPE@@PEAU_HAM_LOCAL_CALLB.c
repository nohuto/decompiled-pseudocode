/*
 * XREFs of ?HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KKW4_HAM_CLIENT_TYPE@@PEAU_HAM_LOCAL_CALLBACKS@@PEAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000FCB4
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HAM_LOCAL_CALLBACKS@@2PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000F994 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HA.c)
 * Callees:
 *     CemRcTableInitialize @ 0x18000FD80 (CemRcTableInitialize.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

_OWORD *__fastcall HampClientInitialize(__int64 a1, int a2, int a3, int a4, _OWORD *a5, _OWORD *a6, _QWORD *a7)
{
  _OWORD *result; // rax
  __int128 v12; // xmm0

  memset_0(a7, 0, 0xA0uLL);
  a7[3] = 0LL;
  a7[4] = 0LL;
  RtlInitializeSRWLock(a7 + 3);
  *((_DWORD *)a7 + 8) = 0;
  a7[6] = a7 + 5;
  a7[5] = a7 + 5;
  CemRcTableInitialize(HampClientPkgDestroy, a7 + 7);
  result = a5;
  *a7 = a1;
  *((_DWORD *)a7 + 33) = a4;
  *((_DWORD *)a7 + 34) = a2;
  *((_DWORD *)a7 + 35) = a3;
  if ( a5 )
  {
    v12 = *a5;
    result = a6;
    *((_DWORD *)a7 + 32) |= 2u;
    *(_OWORD *)(a7 + 13) = v12;
    a7[15] = a6;
  }
  return result;
}
