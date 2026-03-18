/*
 * XREFs of ?SpbApc@@YAXPEAX00@Z @ 0x1C01CE390
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveScreenBits @ 0x1C026E4A4 (GreSaveScreenBits.c)
 */

void __fastcall SpbApc(void *a1, void *a2, void *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  if ( a2 )
  {
    v9 = a2;
    HMAssignmentUnlock(&v9);
  }
  if ( a3 )
    GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 2LL, a3, 0LL);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
}
