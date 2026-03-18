/*
 * XREFs of ?Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C014A120
 * Callers:
 *     UserProcessMITInput @ 0x1C01530AC (UserProcessMITInput.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall IOCPDispatcher::Wait(
        IOCPDispatcher *this,
        union _LARGE_INTEGER *a2,
        char a3,
        struct _FILE_IO_COMPLETION_INFORMATION *a4)
{
  int v9; // [rsp+28h] [rbp-20h]
  char v10; // [rsp+28h] [rbp-20h]
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  memset(a4, 0, sizeof(struct _FILE_IO_COMPLETION_INFORMATION));
  if ( PsIsThreadTerminating(KeGetCurrentThread()) )
  {
    v9 = -1073741749;
    WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0x16u, (__int64)&WPP_0652932e8e25336fb557d9c15dc128bf_Traceguids, v9);
    return 3221225547LL;
  }
  else
  {
    v10 = a3;
    return ZwRemoveIoCompletionEx(*((_QWORD *)this + 343), a4, 1LL, v11, a2, v10);
  }
}
