/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x1C00BB8C0
 * Callers:
 *     xxxQueryInformationThread @ 0x1C00BB038 (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00BB740 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C02273E0 (xxxHardErrorControl.c)
 * Callees:
 *     xxxDispatchMessage @ 0x1C002DDC0 (xxxDispatchMessage.c)
 *     xxxSetThreadDesktop @ 0x1C00B0F18 (xxxSetThreadDesktop.c)
 *     CloseProtectedHandle @ 0x1C00BB984 (CloseProtectedHandle.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     SendMsgCleanup @ 0x1C00BC690 (SendMsgCleanup.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxRestoreCsrssThreadDesktop(__int64 *a1, char a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // edi
  void *v11; // rcx
  _BYTE v13[56]; // [rsp+30h] [rbp-38h] BYREF

  memset(v13, 0, 0x30uLL);
  v6 = (void *)*a1;
  v7 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( *a1 == v7 )
  {
    v10 = 0;
  }
  else
  {
    if ( v7 )
    {
      while ( (unsigned int)xxxInternalGetMessage((unsigned int)v13, 0, 0, 0, 3, 0) )
        xxxDispatchMessage((__int64)v13, v8);
      if ( (a2 & 1) != 0 )
        SendMsgCleanup(gptiCurrent);
    }
    v9 = xxxSetThreadDesktop(0LL, *a1, v4, v5);
    v6 = (void *)*a1;
    v10 = v9;
  }
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *a1 = 0LL;
  }
  v11 = (void *)a1[1];
  if ( v11 )
  {
    CloseProtectedHandle(v11);
    a1[1] = 0LL;
  }
  return v10;
}
