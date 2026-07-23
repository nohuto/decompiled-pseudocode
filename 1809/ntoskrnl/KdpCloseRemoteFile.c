/*
 * XREFs of KdpCloseRemoteFile @ 0x14091A914
 * Callers:
 *     KdPullRemoteFile @ 0x14091A67C (KdPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KdEnterDebugger @ 0x140916D40 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140916E88 (KdExitDebugger.c)
 */

__int64 __fastcall KdpCloseRemoteFile(int a1)
{
  __int64 v1; // rbx
  char v3; // di
  int v4; // eax
  int v5; // [rsp+38h] [rbp-39h] BYREF
  int *v6; // [rsp+40h] [rbp-31h]
  _BYTE v7[8]; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v8[2]; // [rsp+50h] [rbp-21h] BYREF
  __int16 v9; // [rsp+52h] [rbp-1Fh]
  void *v10; // [rsp+58h] [rbp-19h]
  int v11; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v12; // [rsp+6Ch] [rbp-5h]
  __int64 i; // [rsp+70h] [rbp-1h]

  v1 = (unsigned int)(a1 - 1);
  if ( (unsigned int)v1 >= 0x10 )
    return 3221225485LL;
  v3 = KdEnterDebugger(0LL);
  if ( KdpRemoteFiles[v1] )
  {
    for ( i = KdpRemoteFiles[v1]; ; i = KdpRemoteFiles[v1] )
    {
      v12 = 0;
      v11 = 13363;
      v5 = 4194368;
      v6 = &v11;
      KdSendPacket(11LL, &v5, 0LL, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
      {
        v4 = -1073740972;
        v12 = -1073740972;
        goto LABEL_10;
      }
      v9 = 4096;
      v10 = &KdpMessageBuffer;
      if ( !(unsigned int)KdReceivePacket(11LL, &v5, v8, v7, &KdpContext) )
        break;
    }
    v4 = v12;
LABEL_10:
    if ( v4 >= 0 )
      KdpRemoteFiles[v1] = 0LL;
  }
  else
  {
    v12 = -1073741811;
  }
  KdExitDebugger(v3);
  return v12;
}
