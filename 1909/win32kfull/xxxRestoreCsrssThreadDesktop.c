/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x1C000D1C0
 * Callers:
 *     xxxQueryInformationThread @ 0x1C000C908 (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C000D040 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C023EA4C (xxxHardErrorControl.c)
 * Callees:
 *     CloseProtectedHandle @ 0x1C000D284 (CloseProtectedHandle.c)
 *     xxxSetThreadDesktop @ 0x1C000D458 (xxxSetThreadDesktop.c)
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     SendMsgCleanup @ 0x1C000E0A0 (SendMsgCleanup.c)
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxRestoreCsrssThreadDesktop(__int64 a1, char a2)
{
  void *v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // edi
  void *v8; // rcx
  _BYTE v10[56]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, 0x30uLL);
  v4 = *(void **)a1;
  v5 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( *(_QWORD *)a1 == v5 )
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
    v6 = xxxSetThreadDesktop(0LL);
    v4 = *(void **)a1;
    v7 = v6;
  }
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *(_QWORD *)a1 = 0LL;
  }
  v8 = *(void **)(a1 + 8);
  if ( v8 )
  {
    CloseProtectedHandle(v8);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return v7;
}
