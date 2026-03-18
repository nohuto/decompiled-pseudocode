/*
 * XREFs of AlpcInitializeMessageAttribute @ 0x140004C30
 * Callers:
 *     PopUmpoProcessMessages @ 0x140004B48 (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x140810DEC (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x140004C90 (AlpcGetHeaderSize.c)
 */

__int64 __fastcall AlpcInitializeMessageAttribute(__int64 a1, _DWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  int v7; // ebp
  unsigned int HeaderSize; // eax

  v7 = a1;
  HeaderSize = AlpcGetHeaderSize(a1);
  *a4 = HeaderSize;
  if ( HeaderSize > a3 )
    return 3221225507LL;
  if ( a2 )
  {
    a2[1] = 0;
    *a2 = v7;
  }
  return 0LL;
}
