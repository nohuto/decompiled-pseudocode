/*
 * XREFs of ?SpbApc@@YAXPEAX00@Z @ 0x1C0208960
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveScreenBits @ 0x1C0298BE8 (GreSaveScreenBits.c)
 */

void __fastcall SpbApc(void *a1, void *a2, void *a3)
{
  __int64 v5; // rcx
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  if ( a2 )
  {
    v6 = a2;
    HMAssignmentUnlock(&v6);
  }
  if ( a3 )
    GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 2LL, a3, 0LL);
  UserSessionSwitchLeaveCrit(v5);
}
