/*
 * XREFs of PopPluginRequestComponentPerfState @ 0x1402DACC4
 * Callers:
 *     PopFxIssueComponentPerfStateChanges @ 0x1402D8818 (PopFxIssueComponentPerfStateChanges.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 */

char __fastcall PopPluginRequestComponentPerfState(__int64 a1, int a2, int a3, __int64 a4, char *a5)
{
  ULONG_PTR v5; // r14
  char v10; // dl
  char result; // al
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  memset(v12, 0, 0x20uLL);
  v12[0] = *(_QWORD *)(a1 + 72);
  LODWORD(v12[1]) = a2;
  LODWORD(v12[2]) = a3;
  v12[3] = a4;
  if ( v5 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(v5 + 96))(33LL, v12) )
      PopFxBugCheck(0x605uLL, 0x21uLL, v5, 0LL);
    v10 = BYTE5(v12[1]);
    result = BYTE4(v12[1]);
  }
  else
  {
    v10 = 1;
    result = 1;
  }
  if ( result )
    *a5 = v10;
  return result;
}
