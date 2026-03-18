/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x1C000DD50
 * Callers:
 *     xxxQueryInformationThread @ 0x1C000D498 (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C000DBD0 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C023F06C (xxxHardErrorControl.c)
 * Callees:
 *     CloseProtectedHandle @ 0x1C000DE14 (CloseProtectedHandle.c)
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     SendMsgCleanup @ 0x1C000E9F0 (SendMsgCleanup.c)
 *     xxxSetThreadDesktop @ 0x1C00189F8 (xxxSetThreadDesktop.c)
 *     xxxDispatchMessage @ 0x1C0024958 (xxxDispatchMessage.c)
 *     memset @ 0x1C0166840 (memset.c)
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
      while ( (unsigned int)xxxInternalGetMessage((unsigned int)v10, 0, 0, 0, 3, 0) )
        xxxDispatchMessage(v10);
      if ( (a2 & 1) != 0 )
        SendMsgCleanup(gptiCurrent);
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
