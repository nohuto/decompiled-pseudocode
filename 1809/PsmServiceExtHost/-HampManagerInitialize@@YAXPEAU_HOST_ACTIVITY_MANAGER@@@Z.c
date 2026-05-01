/*
 * XREFs of ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180041954
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800415FC (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CemRcTableInitialize @ 0x18000FD80 (CemRcTableInitialize.c)
 *     RtlQueryResourcePolicy @ 0x180041B90 (RtlQueryResourcePolicy.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall HampManagerInitialize(struct _HOST_ACTIVITY_MANAGER *a1)
{
  int v2; // ebp
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  memset(HampNextHandleValues, 0xFFu, 0x40uLL);
  memset_0(a1, 0, 0x338uLL);
  RtlInitializeSRWLock(a1);
  v2 = 0;
  v3 = (_QWORD *)((char *)a1 + 16);
  *((_DWORD *)a1 + 2) = 0;
  v4 = 7LL;
  do
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  CemRcTableInitialize((__int64)HampActDestroy, (_QWORD *)a1 + 27);
  memset_0((char *)a1 + 128, 0, 0x58uLL);
  CemRcTableInitialize((__int64)HampSessionDestroy, (_QWORD *)a1 + 21);
  *((_QWORD *)a1 + 35) = (char *)a1 + 272;
  *((_QWORD *)a1 + 34) = (char *)a1 + 272;
  memset_0((char *)a1 + 352, 0, 0x38uLL);
  *((_QWORD *)a1 + 44) = a1;
  *((_DWORD *)a1 + 97) = 300000;
  *((_DWORD *)a1 + 98) = 600000;
  memset_0((char *)a1 + 520, 0, 0x68uLL);
  *((_QWORD *)a1 + 66) = 0LL;
  *((_QWORD *)a1 + 67) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 528);
  *((_DWORD *)a1 + 134) = 0;
  memset_0((char *)a1 + 544, 0, 0x20uLL);
  *((_QWORD *)a1 + 68) = (char *)a1 + 520;
  *((_QWORD *)a1 + 69) = 0LL;
  *((_QWORD *)a1 + 70) = 0LL;
  *((_QWORD *)a1 + 73) = (char *)a1 + 576;
  *((_QWORD *)a1 + 72) = (char *)a1 + 576;
  *((_QWORD *)a1 + 65) = a1;
  memset_0((char *)a1 + 312, 0, 0x20uLL);
  memset_0((char *)a1 + 408, 0, 0x70uLL);
  *((_QWORD *)a1 + 51) = a1;
  CemRcTableInitialize((__int64)HampWakeContextDestroy, (_QWORD *)a1 + 55);
  *((_QWORD *)a1 + 61) = 0LL;
  *((_QWORD *)a1 + 62) = 0LL;
  *((_QWORD *)a1 + 53) = 0LL;
  *((_QWORD *)a1 + 54) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 424);
  *((_DWORD *)a1 + 108) = 0;
  *((_DWORD *)a1 + 126) = 10000;
  *((_DWORD *)a1 + 127) = 10000;
  memset_0((char *)a1 + 640, 0, 0x58uLL);
  CemRcTableInitialize((__int64)HampHostIdStoreSessionDestroy, (_QWORD *)a1 + 85);
  *((_QWORD *)a1 + 78) = 0LL;
  *((_QWORD *)a1 + 79) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 624);
  *((_DWORD *)a1 + 158) = 0;
  *((_QWORD *)a1 + 98) = (char *)a1 + 776;
  *((_QWORD *)a1 + 97) = (char *)a1 + 776;
  *(_OWORD *)((char *)a1 + 728) = xmmword_1800816D0;
  *(_OWORD *)((char *)a1 + 744) = xmmword_1800816E0;
  *((_QWORD *)a1 + 95) = 0x3E8FFFFFFFFLL;
  if ( (int)RtlQueryResourcePolicy(2LL, v5, &v6) >= 0 )
    LOBYTE(v2) = v6 <= 10;
  *((_DWORD *)a1 + 204) &= ~1u;
  *((_DWORD *)a1 + 204) |= v2;
}
