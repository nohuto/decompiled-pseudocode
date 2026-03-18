/*
 * XREFs of ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0080D80
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C0080C78 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C00388EC (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 *     ?CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0080EA8 (-CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

void __fastcall CitpContextInitialize(struct _CIT_IMPACT_CONTEXT *a1)
{
  unsigned __int64 v2; // rbx
  char v3; // al
  int v4; // edx
  __int64 v5; // rax

  memset(a1, 0, 0x358uLL);
  *((_QWORD *)a1 + 2) = (char *)a1 + 8;
  *((_QWORD *)a1 + 1) = (char *)a1 + 8;
  *((_QWORD *)a1 + 4) = (char *)a1 + 24;
  *((_QWORD *)a1 + 3) = (char *)a1 + 24;
  *((_QWORD *)a1 + 6) = (char *)a1 + 40;
  *((_QWORD *)a1 + 5) = (char *)a1 + 40;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 102) = (char *)a1 + 808;
  *((_QWORD *)a1 + 101) = (char *)a1 + 808;
  v2 = MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004];
  v3 = *((_BYTE *)a1 + 112);
  *((_DWORD *)a1 + 47) = 1;
  v2 >>= 24;
  *((_BYTE *)a1 + 112) = v3 & 0xF9 | 2;
  *((_DWORD *)a1 + 49) = v2;
  *((_DWORD *)a1 + 50) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 208), 1);
  *((_DWORD *)a1 + 55) = v2;
  *((_DWORD *)a1 + 56) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 232), v4);
  *((_DWORD *)a1 + 196) = v2;
  *((_DWORD *)a1 + 197) = v2;
  memset((char *)a1 + 554, 0, 0xE6uLL);
  *((_WORD *)a1 + 276) = 210;
  v5 = MEMORY[0xFFFFF78000000014];
  *((_QWORD *)a1 + 72) = MEMORY[0xFFFFF78000000014];
  *((_QWORD *)a1 + 73) = v5;
  *((_WORD *)a1 + 277) = 232;
  CitpContextResetTrackingValues(a1, v2);
}
