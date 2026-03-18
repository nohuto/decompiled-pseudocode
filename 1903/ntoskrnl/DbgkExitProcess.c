/*
 * XREFs of DbgkExitProcess @ 0x14084AE44
 * Callers:
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     DbgkpSendApiMessage @ 0x14084A5AC (DbgkpSendApiMessage.c)
 */

struct _KTHREAD *__fastcall DbgkExitProcess(int a1)
{
  _KPROCESS *Process; // rcx
  struct _KTHREAD *result; // rax
  int v4; // edx
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  memset(v5, 0, sizeof(v5));
  Process = KeGetCurrentThread()->ApcState.Process;
  result = KeGetCurrentThread();
  v4 = *((_DWORD *)&result[1].SwapListEntry + 2);
  if ( (v4 & 4) == 0 && Process[1].ActiveProcessors.Bitmap[5] && (v4 & 2) != 0 )
  {
    Process[2].ReadyListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
    v5[12] = a1;
    v5[0] = 3407884;
    v5[1] = 8;
    v5[10] = 4;
    return (struct _KTHREAD *)DbgkpSendApiMessage(Process, 0, (__int64)v5);
  }
  return result;
}
