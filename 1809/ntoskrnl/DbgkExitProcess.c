/*
 * XREFs of DbgkExitProcess @ 0x140812648
 * Callers:
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     DbgkpSendApiMessage @ 0x140811DB4 (DbgkpSendApiMessage.c)
 */

struct _KTHREAD *__fastcall DbgkExitProcess(int a1)
{
  _KPROCESS *Process; // rcx
  struct _KTHREAD *result; // rax
  int v4; // edx
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  result = KeGetCurrentThread();
  v4 = *((_DWORD *)&result[1].SwapListEntry + 2);
  if ( (v4 & 4) == 0 && Process[1].ActiveProcessors.Bitmap[6] && (v4 & 2) != 0 )
  {
    v5[12] = a1;
    Process[2].Affinity.Bitmap[17] = MEMORY[0xFFFFF78000000014];
    v5[0] = 3407884;
    v5[1] = 8;
    v5[10] = 4;
    return (struct _KTHREAD *)DbgkpSendApiMessage(Process, 0, (__int64)v5);
  }
  return result;
}
