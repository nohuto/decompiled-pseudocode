/*
 * XREFs of DbgkpSendApiMessageLpc @ 0x140849D94
 * Callers:
 *     DbgkForwardException @ 0x1406F97B8 (DbgkForwardException.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PsThawProcess @ 0x1406A10B8 (PsThawProcess.c)
 *     LpcRequestWaitReplyPortEx @ 0x1406C9580 (LpcRequestWaitReplyPortEx.c)
 *     DbgkpSuspendProcess @ 0x14084A80C (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessageLpc(__int64 a1, int a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // si
  __int64 Process; // rbp
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _BYTE v20[688]; // [rsp+20h] [rbp-2D8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a3 )
    v4 = DbgkpSuspendProcess(CurrentThread->ApcState.Process);
  *(_DWORD *)(a1 + 44) = 259;
  v8 = LpcRequestWaitReplyPortEx(a2, a1, (__int64)v20);
  v9 = v8;
  if ( v8 == 192 )
  {
    v9 = -1073741749;
  }
  else if ( v8 >= 0 )
  {
    v10 = 2LL;
    v11 = v20;
    do
    {
      v12 = v11[1];
      *(_OWORD *)a1 = *v11;
      v13 = v11[2];
      *(_OWORD *)(a1 + 16) = v12;
      v14 = v11[3];
      *(_OWORD *)(a1 + 32) = v13;
      v15 = v11[4];
      *(_OWORD *)(a1 + 48) = v14;
      v16 = v11[5];
      *(_OWORD *)(a1 + 64) = v15;
      v17 = v11[6];
      *(_OWORD *)(a1 + 80) = v16;
      v18 = v11[7];
      v11 += 8;
      *(_OWORD *)(a1 + 96) = v17;
      a1 += 128LL;
      *(_OWORD *)(a1 - 16) = v18;
      --v10;
    }
    while ( v10 );
    *(_OWORD *)a1 = *v11;
  }
  if ( v4 )
  {
    PsThawProcess(Process, 0);
    KeLeaveCriticalRegion();
  }
  return v9;
}
