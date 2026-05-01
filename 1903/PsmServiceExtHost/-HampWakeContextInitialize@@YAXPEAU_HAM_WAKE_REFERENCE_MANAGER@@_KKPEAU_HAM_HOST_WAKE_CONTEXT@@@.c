/*
 * XREFs of ?HampWakeContextInitialize@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KKPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003A2C4
 * Callers:
 *     ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x18003A024 (-HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@.c)
 * Callees:
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

void __fastcall HampWakeContextInitialize(
        struct _HAM_WAKE_REFERENCE_MANAGER *a1,
        __int64 a2,
        int a3,
        struct _HAM_HOST_WAKE_CONTEXT *a4)
{
  memset_0((char *)a4 + 56, 0, 0x88uLL);
  *(_QWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 1) = 0LL;
  *((_QWORD *)a4 + 4) = (char *)a1 + 32;
  *((_QWORD *)a4 + 3) = 1LL;
  *((_QWORD *)a4 + 2) = -1LL;
  *((_QWORD *)a4 + 5) = 0LL;
  *((_QWORD *)a4 + 6) = 0LL;
  RtlInitializeSRWLock((char *)a4 + 40);
  *((_DWORD *)a4 + 12) = 0;
  *((_QWORD *)a4 + 8) = 0LL;
  *((_QWORD *)a4 + 9) = 0LL;
  *((_QWORD *)a4 + 10) = -1LL;
  *((_BYTE *)a4 + 184) &= 0xCFu;
  *((_BYTE *)a4 + 184) |= 0x40u;
  *((_QWORD *)a4 + 7) = a1;
  *((_QWORD *)a4 + 21) = a2;
  *((_DWORD *)a4 + 44) = a3;
  *((_QWORD *)a4 + 11) = -1LL;
  memset_0((char *)a4 + 128, 0, 0x28uLL);
}
