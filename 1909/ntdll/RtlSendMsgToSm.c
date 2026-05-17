/*
 * XREFs of RtlSendMsgToSm @ 0x18008B690
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcSendWaitReceivePort @ 0x18009DFC0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall RtlSendMsgToSm(__int64 a1, _WORD *a2)
{
  __int64 v4; // rbx
  int v5; // edi
  __int16 v6; // ax
  int v7; // edi
  _WORD *v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+78h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 10) > 8u )
    return 3221225474LL;
  v4 = 2LL * *((int *)a2 + 10);
  v5 = *((_DWORD *)&RtlpSmMessageInfo + 4 * *((int *)a2 + 10) + 2);
  memset(a2, 0, 0x28uLL);
  v6 = *((_WORD *)&RtlpSmMessageInfo + 4 * v4) + 8;
  v10 = 328LL;
  *a2 = v6;
  a2[1] = v6 + 40;
  v7 = v5 & 1;
  v8 = a2;
  if ( v7 )
    v8 = 0LL;
  result = ZwAlpcSendWaitReceivePort(a1, (v7 ^ 1u) << 17, a2, 0LL, v8, &v10, 0LL, 0LL);
  if ( (int)result >= 0 )
    return *((unsigned int *)a2 + 11);
  return result;
}
