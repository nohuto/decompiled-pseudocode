/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x1C000E570
 * Callers:
 *     xxxQueryInformationThread @ 0x1C000B7BC (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C000E040 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C01FE504 (xxxHardErrorControl.c)
 * Callees:
 *     SendMsgCleanup @ 0x1C000BBC0 (SendMsgCleanup.c)
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     CloseProtectedHandle @ 0x1C000E77C (CloseProtectedHandle.c)
 *     xxxSetThreadDesktop @ 0x1C000EEA8 (xxxSetThreadDesktop.c)
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xxxRestoreCsrssThreadDesktop(_QWORD *a1, char a2)
{
  void *v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // edi
  void *v8; // rcx
  _BYTE v10[56]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, 0x30uLL);
  v4 = (void *)*a1;
  v5 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( *a1 == v5 )
  {
    v7 = 0;
  }
  else
  {
    if ( v5 )
    {
      while ( (unsigned int)xxxInternalGetMessage((int)v10, 0, 0, 0, 3, 0) )
        xxxDispatchMessage(v10);
      if ( (a2 & 1) != 0 )
        SendMsgCleanup();
    }
    v6 = xxxSetThreadDesktop(0LL, *a1);
    v4 = (void *)*a1;
    v7 = v6;
  }
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *a1 = 0LL;
  }
  v8 = (void *)a1[1];
  if ( v8 )
  {
    CloseProtectedHandle(v8);
    a1[1] = 0LL;
  }
  return v7;
}
