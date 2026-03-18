/*
 * XREFs of KdpCreateRemoteFile @ 0x1409541F4
 * Callers:
 *     KdPullRemoteFileEx @ 0x140953DA0 (KdPullRemoteFileEx.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KdEnterDebugger @ 0x140954648 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140954790 (KdExitDebugger.c)
 *     KdpCopyMemoryChunks @ 0x140957144 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpCreateRemoteFile(_QWORD *a1, __int64 *a2, unsigned __int16 *a3)
{
  char v7; // si
  _QWORD *v8; // rcx
  unsigned int i; // ebx
  void *v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-79h] BYREF
  __int64 v15; // [rsp+38h] [rbp-71h] BYREF
  void *v16; // [rsp+40h] [rbp-69h]
  _QWORD v17[3]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v18[8]; // [rsp+60h] [rbp-49h] BYREF

  memset(v18, 0, sizeof(v18));
  if ( *a3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 )
    return 3221225485LL;
  if ( (_BYTE)KdDebuggerNotPresent )
    return 3221226324LL;
  v7 = KdEnterDebugger(0LL);
  v8 = KdpRemoteFiles;
  for ( i = 0; i < 0x10; ++i )
  {
    if ( !*v8 )
      break;
    ++v8;
  }
  if ( i < 0x10 )
  {
    while ( 1 )
    {
      v15 = 0LL;
      v10 = (void *)*((_QWORD *)a3 + 1);
      v16 = 0LL;
      v17[1] = v18;
      v17[0] = 4194368LL;
      v18[0] = 13360LL;
      v18[1] = 0x8000120089LL;
      LODWORD(v18[2]) = 1;
      *(_QWORD *)((char *)&v18[2] + 4) = 1LL;
      KdpCopyMemoryChunks(v10, 4, (__int64)&v14);
      LOWORD(v15) = v14 + 2;
      v16 = &KdpMessageBuffer;
      *(_WORD *)((char *)&KdpMessageBuffer + (unsigned __int16)(v14 + 2) - 2) = 0;
      KdSendPacket(11LL, v17, &v15, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
        break;
      WORD1(v15) = 4096;
      v16 = &KdpMessageBuffer;
      v11 = KdReceivePacket(11LL, v17, &v15, &v14, &KdpContext);
      v8 = &KdpMessageBuffer;
      if ( !v11 )
      {
        v12 = HIDWORD(v18[0]);
        goto LABEL_14;
      }
    }
    v12 = -1073740972;
    HIDWORD(v18[0]) = -1073740972;
LABEL_14:
    if ( v12 >= 0 )
    {
      KdpRemoteFiles[i] = v18[4];
      v8 = (_QWORD *)(i + 1);
      *a1 = v8;
      if ( a2 )
      {
        v13 = v18[5];
        if ( v18[5] >= 0x10000000uLL )
          v13 = 4096LL;
        *a2 = v13;
      }
    }
  }
  else
  {
    HIDWORD(v18[0]) = -1073741801;
  }
  LOBYTE(v8) = v7;
  KdExitDebugger(v8);
  return HIDWORD(v18[0]);
}
