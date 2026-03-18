/*
 * XREFs of MarkThreadsObjects @ 0x1C00355A0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMChangeOwnerThread @ 0x1C0069F60 (HMChangeOwnerThread.c)
 */

__int64 __fastcall MarkThreadsObjects(__int64 a1)
{
  char *v1; // rbx
  _QWORD *v3; // rdi
  char *v4; // rsi
  unsigned __int8 v5; // dl
  __int64 result; // rax
  bool v7; // zf
  struct tagTHREADINFO *v8; // rdx

  v1 = (char *)qword_1C01A0E28;
  v3 = gpKernelHandleTable;
  v4 = (char *)qword_1C01A0E28 + 32 * (unsigned int)giheLast;
  if ( qword_1C01A0E28 <= v4 )
  {
    do
    {
      v5 = v1[24];
      if ( v5 )
      {
        result = v5;
        if ( (*((_BYTE *)&unk_1C0172BBC + 24 * v5) & 2) == 0 && v3[1] == a1 )
        {
          v7 = v5 == 23;
          v8 = (struct tagTHREADINFO *)gptiModerncoreTimerThread;
          if ( !v7 )
            v8 = gptiRit;
          result = HMChangeOwnerThread(*v3, v8);
        }
      }
      v1 += 32;
      v3 += 3;
    }
    while ( v1 <= v4 );
  }
  return result;
}
