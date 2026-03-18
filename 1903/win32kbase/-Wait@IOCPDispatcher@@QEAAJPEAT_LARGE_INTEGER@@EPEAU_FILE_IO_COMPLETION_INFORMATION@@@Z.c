/*
 * XREFs of ?Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C0179280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall IOCPDispatcher::Wait(
        IOCPDispatcher *this,
        union _LARGE_INTEGER *a2,
        char a3,
        struct _FILE_IO_COMPLETION_INFORMATION *a4)
{
  int v8; // edx
  char v10; // [rsp+28h] [rbp-20h]
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  memset(a4, 0, sizeof(struct _FILE_IO_COMPLETION_INFORMATION));
  if ( PsIsThreadTerminating(KeGetCurrentThread()) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v8, 3, 22, (__int64)&WPP_44b8ec6d33df3f9b1bf122fa07e6f557_Traceguids);
    }
    return 3221225547LL;
  }
  else
  {
    v10 = a3;
    return ZwRemoveIoCompletionEx(*((_QWORD *)this + 343), a4, 1LL, v11, a2, v10);
  }
}
