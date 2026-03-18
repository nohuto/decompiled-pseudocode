/*
 * XREFs of KdpCloseRemoteFile @ 0x140953F80
 * Callers:
 *     KdPullRemoteFileEx @ 0x140953DA0 (KdPullRemoteFileEx.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KdEnterDebugger @ 0x140954648 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140954790 (KdExitDebugger.c)
 */

__int64 __fastcall KdpCloseRemoteFile(int a1)
{
  __int64 v1; // rbx
  char v3; // di
  __int64 v4; // rcx
  int v5; // eax
  int v6; // [rsp+38h] [rbp-39h] BYREF
  int v7; // [rsp+3Ch] [rbp-35h]
  _QWORD *v8; // [rsp+40h] [rbp-31h]
  __int64 v9; // [rsp+48h] [rbp-29h] BYREF
  void *v10; // [rsp+50h] [rbp-21h]
  _BYTE v11[16]; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v12[8]; // [rsp+68h] [rbp-9h] BYREF

  v1 = (unsigned int)(a1 - 1);
  memset(v12, 0, sizeof(v12));
  if ( (unsigned int)v1 >= 0x10 )
    return 3221225485LL;
  v3 = KdEnterDebugger(0LL);
  v4 = KdpRemoteFiles[v1];
  if ( v4 )
  {
    v12[1] = KdpRemoteFiles[v1];
    v7 = 0;
    HIDWORD(v12[0]) = 0;
    v9 = 0LL;
    v10 = 0LL;
    while ( 1 )
    {
      LODWORD(v12[0]) = 13363;
      v6 = 4194368;
      v8 = v12;
      KdSendPacket(11LL, &v6, 0LL, (char *)&KdDebuggerNotPresent + 5);
      if ( (_BYTE)KdDebuggerNotPresent )
      {
        v5 = -1073740972;
        HIDWORD(v12[0]) = -1073740972;
        goto LABEL_10;
      }
      WORD1(v9) = 4096;
      v10 = &KdpMessageBuffer;
      if ( !(unsigned int)KdReceivePacket(11LL, &v6, &v9, v11, (char *)&KdDebuggerNotPresent + 5) )
        break;
      v7 = 0;
      HIDWORD(v12[0]) = 0;
      v9 = 0LL;
      v10 = 0LL;
      v12[1] = KdpRemoteFiles[v1];
    }
    v5 = HIDWORD(v12[0]);
LABEL_10:
    if ( v5 >= 0 )
      KdpRemoteFiles[v1] = 0LL;
  }
  else
  {
    HIDWORD(v12[0]) = -1073741811;
  }
  LOBYTE(v4) = v3;
  KdExitDebugger(v4);
  return HIDWORD(v12[0]);
}
