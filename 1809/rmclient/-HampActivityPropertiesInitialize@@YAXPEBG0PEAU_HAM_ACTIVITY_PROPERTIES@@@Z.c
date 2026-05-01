/*
 * XREFs of ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180010314
 * Callers:
 *     ?HampActivityPropertiesInitializeByClass@@YAXPEBGW4_HAM_ACTIVITY_CLASS@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800103D8 (-HampActivityPropertiesInitializeByClass@@YAXPEBGW4_HAM_ACTIVITY_CLASS@@PEAU_HAM_ACTIVITY_PROPER.c)
 * Callees:
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800101EC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall HampActivityPropertiesInitialize(char *a1, char *a2, struct _HAM_ACTIVITY_PROPERTIES *a3)
{
  memset_0(a3, 0, 0x188uLL);
  *(_DWORD *)a3 = 8256;
  StringCchCopyW((char *)a3 + 12, 64LL, a1);
  StringCchCopyW((char *)a3 + 140, 64LL, a2);
  *((_DWORD *)a3 + 69) = -1;
  *((_DWORD *)a3 + 67) = 5;
  memset_0((char *)a3 + 280, 0, 0x68uLL);
  memset_0((char *)a3 + 320, 0, 0x38uLL);
  *((_DWORD *)a3 + 92) = 1;
  *((_QWORD *)a3 + 44) = -1LL;
  *((_QWORD *)a3 + 43) = -1LL;
  *((_QWORD *)a3 + 42) = -1LL;
  *((_QWORD *)a3 + 41) = -1LL;
  *((_DWORD *)a3 + 92) |= 0x20u;
  *((_QWORD *)a3 + 40) |= 0x80uLL;
}
