/*
 * XREFs of ?CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0080EA8
 * Callers:
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0080D80 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C01C672C (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpContextResetTrackingValues(union _LARGE_INTEGER *a1, DWORD a2)
{
  union _LARGE_INTEGER v4; // rax
  union _LARGE_INTEGER v5; // [rsp+30h] [rbp+8h] BYREF
  union _LARGE_INTEGER v6; // [rsp+40h] [rbp+18h] BYREF

  v6.QuadPart = 0LL;
  v5.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&v5, &v6);
  v4 = v6;
  a1[17].LowPart = a2;
  a1[104].LowPart = a2;
  a1[30] = v4;
  a1[103].QuadPart = MEMORY[0xFFFFF78000000014];
}
