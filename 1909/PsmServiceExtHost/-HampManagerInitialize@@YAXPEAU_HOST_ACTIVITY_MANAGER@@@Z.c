/*
 * XREFs of ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042704
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004241C (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CemRcTableInitialize @ 0x180030C20 (CemRcTableInitialize.c)
 *     ?HampSystemGetQuiesceSerializationConfig@@YA?AW4_HAM_QUIESCE_SERIALIZATION@@XZ @ 0x180042970 (-HampSystemGetQuiesceSerializationConfig@@YA-AW4_HAM_QUIESCE_SERIALIZATION@@XZ.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

void __fastcall HampManagerInitialize(struct _HOST_ACTIVITY_MANAGER *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  char QuiesceSerializationConfig; // al

  memset_0((char *)a1 + 16, 0, 0x328uLL);
  memset(HampNextHandleValues, 0xFFu, 0x40uLL);
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  RtlInitializeSRWLock(a1);
  *((_DWORD *)a1 + 2) = 0;
  v2 = (_QWORD *)((char *)a1 + 16);
  v3 = 7LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 2;
    --v3;
  }
  while ( v3 );
  CemRcTableInitialize((__int64)HampActDestroy, (_QWORD *)a1 + 27);
  memset_0((char *)a1 + 128, 0, 0x58uLL);
  CemRcTableInitialize((__int64)HampSessionDestroy, (_QWORD *)a1 + 21);
  *((_QWORD *)a1 + 35) = (char *)a1 + 272;
  *((_QWORD *)a1 + 34) = (char *)a1 + 272;
  memset_0((char *)a1 + 336, 0, 0x38uLL);
  *((_QWORD *)a1 + 42) = a1;
  *((_DWORD *)a1 + 93) = 300000;
  *((_DWORD *)a1 + 94) = 600000;
  memset_0((char *)a1 + 504, 0, 0x68uLL);
  *((_QWORD *)a1 + 64) = 0LL;
  *((_QWORD *)a1 + 65) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 512);
  *((_DWORD *)a1 + 130) = 0;
  *((_QWORD *)a1 + 67) = 0LL;
  *((_QWORD *)a1 + 68) = 0LL;
  *((_QWORD *)a1 + 69) = 0LL;
  *((_QWORD *)a1 + 66) = (char *)a1 + 504;
  *((_QWORD *)a1 + 67) = 0LL;
  *((_QWORD *)a1 + 68) = 0LL;
  *((_QWORD *)a1 + 71) = (char *)a1 + 560;
  *((_QWORD *)a1 + 70) = (char *)a1 + 560;
  *((_QWORD *)a1 + 63) = a1;
  memset_0((char *)a1 + 304, 0, 0x20uLL);
  memset_0((char *)a1 + 400, 0, 0x68uLL);
  *((_QWORD *)a1 + 49) = a1;
  CemRcTableInitialize((__int64)HampWakeContextQueueDestroy, (_QWORD *)a1 + 53);
  *((_QWORD *)a1 + 59) = 0LL;
  *((_QWORD *)a1 + 60) = 0LL;
  *((_QWORD *)a1 + 51) = 0LL;
  *((_QWORD *)a1 + 52) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 408);
  *((_DWORD *)a1 + 104) = 0;
  *((_DWORD *)a1 + 122) = 10000;
  *((_DWORD *)a1 + 123) = 10000;
  memset_0((char *)a1 + 624, 0, 0x58uLL);
  CemRcTableInitialize((__int64)HampHostIdStoreSessionDestroy, (_QWORD *)a1 + 83);
  *((_QWORD *)a1 + 76) = 0LL;
  *((_QWORD *)a1 + 77) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 608);
  *((_DWORD *)a1 + 154) = 0;
  *((_QWORD *)a1 + 97) = (char *)a1 + 768;
  *((_QWORD *)a1 + 96) = (char *)a1 + 768;
  *(_OWORD *)((char *)a1 + 712) = xmmword_18008F760;
  *(_OWORD *)((char *)a1 + 728) = xmmword_18008F770;
  *((_QWORD *)a1 + 93) = 0x3E8FFFFFFFFLL;
  *((_DWORD *)a1 + 188) = 0;
  QuiesceSerializationConfig = HampSystemGetQuiesceSerializationConfig();
  *((_DWORD *)a1 + 203) &= 0xFFFFFFFC;
  *((_DWORD *)a1 + 203) |= QuiesceSerializationConfig & 3;
}
