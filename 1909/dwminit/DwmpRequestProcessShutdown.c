/*
 * XREFs of DwmpRequestProcessShutdown @ 0x180003E4C
 * Callers:
 *     DwmpTerminateSessionProcess @ 0x180003390 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004284 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 */

int __fastcall DwmpRequestProcessShutdown(CApiPortClient *a1, __int64 a2, __int16 a3)
{
  void *v4; // [rsp+20h] [rbp-18h]
  __int16 v5; // [rsp+28h] [rbp-10h]
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  v7 = 536870913;
  return CApiPortClient::SendRequest(a1, &v7, a3, &v6, v4, v5);
}
