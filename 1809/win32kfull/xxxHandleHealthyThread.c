/*
 * XREFs of xxxHandleHealthyThread @ 0x1C01E3B40
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C0025360 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     xxxGetInputEvent @ 0x1C0025880 (xxxGetInputEvent.c)
 *     xxxSleepThread2 @ 0x1C0030BEC (xxxSleepThread2.c)
 *     xxxUpdateInputHangInfo @ 0x1C00341E0 (xxxUpdateInputHangInfo.c)
 * Callees:
 *     IsWindowGhosted @ 0x1C001C75C (IsWindowGhosted.c)
 *     xxxHandleHealthyWindow @ 0x1C01E3C00 (xxxHandleHealthyWindow.c)
 */

__int64 __fastcall xxxHandleHealthyThread(__int64 a1)
{
  int v1; // eax
  unsigned int i; // esi
  __int64 v4; // rbx
  __int64 v5; // rbp

  v1 = *(_DWORD *)(a1 + 488);
  for ( i = 0; v1 < 0; v1 = *(_DWORD *)(a1 + 488) )
  {
    *(_DWORD *)(a1 + 488) = v1 & 0x7FFFFFFF;
    v4 = 0LL;
    do
    {
      if ( *(_BYTE *)(32LL * (unsigned int)v4 + gSharedInfo[1] + 24) == 1 )
      {
        v5 = *(_QWORD *)(gpKernelHandleTable + 24 * v4);
        if ( *(_QWORD *)(v5 + 16) == a1
          && (unsigned int)IsWindowGhosted(*(_QWORD *)(gpKernelHandleTable + 24 * v4))
          && (unsigned int)xxxHandleHealthyWindow((struct tagWND *)v5) )
        {
          i = 1;
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 <= giheLast );
  }
  return i;
}
