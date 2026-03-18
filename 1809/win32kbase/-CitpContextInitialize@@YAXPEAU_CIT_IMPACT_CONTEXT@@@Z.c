/*
 * XREFs of ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0077010
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C0076F08 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C0036068 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 *     ?CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C007713C (-CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

void __fastcall CitpContextInitialize(struct _CIT_IMPACT_CONTEXT *a1)
{
  unsigned __int64 v2; // rdi
  char v3; // al
  int v4; // edx
  __int64 v5; // rax

  memset(a1, 0, 0x340uLL);
  *((_QWORD *)a1 + 2) = (char *)a1 + 8;
  *((_QWORD *)a1 + 1) = (char *)a1 + 8;
  *((_QWORD *)a1 + 4) = (char *)a1 + 24;
  *((_QWORD *)a1 + 3) = (char *)a1 + 24;
  *((_QWORD *)a1 + 6) = (char *)a1 + 40;
  *((_QWORD *)a1 + 5) = (char *)a1 + 40;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 99) = (char *)a1 + 784;
  *((_QWORD *)a1 + 98) = (char *)a1 + 784;
  v2 = MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004];
  v3 = *((_BYTE *)a1 + 112);
  *((_DWORD *)a1 + 46) = 1;
  v2 >>= 24;
  *((_BYTE *)a1 + 112) = v3 & 0xF9 | 2;
  *((_DWORD *)a1 + 48) = v2;
  *((_DWORD *)a1 + 49) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 204), 1);
  *((_DWORD *)a1 + 54) = v2;
  *((_DWORD *)a1 + 55) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 228), v4);
  *((_DWORD *)a1 + 190) = v2;
  *((_DWORD *)a1 + 191) = v2;
  memset((char *)a1 + 528, 0, 0xE8uLL);
  *((_WORD *)a1 + 264) = 210;
  v5 = MEMORY[0xFFFFF78000000014];
  *((_QWORD *)a1 + 69) = MEMORY[0xFFFFF78000000014];
  *((_QWORD *)a1 + 70) = v5;
  *((_WORD *)a1 + 265) = 232;
  CitpContextResetTrackingValues(a1, v2);
}
