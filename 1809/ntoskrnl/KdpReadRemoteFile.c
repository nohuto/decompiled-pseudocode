/*
 * XREFs of KdpReadRemoteFile @ 0x14091AC68
 * Callers:
 *     KdPullRemoteFile @ 0x14091A67C (KdPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KdEnterDebugger @ 0x140916D40 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140916E88 (KdExitDebugger.c)
 */

__int64 __fastcall KdpReadRemoteFile(int a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rsi
  int v6; // edi
  char v11; // r12
  __int64 v12; // rax
  unsigned int v13; // [rsp+30h] [rbp-71h] BYREF
  int v14; // [rsp+38h] [rbp-69h] BYREF
  int *v15; // [rsp+40h] [rbp-61h]
  _BYTE v16[2]; // [rsp+48h] [rbp-59h] BYREF
  __int16 v17; // [rsp+4Ah] [rbp-57h]
  __int64 v18; // [rsp+50h] [rbp-51h]
  int v19; // [rsp+60h] [rbp-41h] BYREF
  int v20; // [rsp+64h] [rbp-3Dh]
  __int64 v21; // [rsp+68h] [rbp-39h]
  __int64 v22; // [rsp+70h] [rbp-31h]
  unsigned int v23; // [rsp+78h] [rbp-29h]

  v5 = (unsigned int)(a1 - 1);
  v6 = 0;
  if ( (unsigned int)v5 >= 0x10 )
    return 3221225485LL;
  v11 = KdEnterDebugger(0LL);
  if ( KdpRemoteFiles[v5] )
  {
    v20 = 0;
    if ( a4 )
    {
      while ( 1 )
      {
        v12 = KdpRemoteFiles[v5];
        v20 = 0;
        v21 = v12;
        v19 = 13361;
        v22 = a2;
        v23 = a4 <= (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 ? a4 : KdTransportMaxPacketSize - 64;
        v14 = 4194368;
        v15 = &v19;
        KdSendPacket(11LL, &v14, 0LL, &KdpContext);
        if ( (_BYTE)KdDebuggerNotPresent )
          break;
        v17 = v23;
        v18 = a3;
        if ( !(unsigned int)KdReceivePacket(11LL, &v14, v16, &v13, &KdpContext) )
        {
          if ( v20 < 0 )
            goto LABEL_16;
          v6 += v13;
          a3 += v13;
          a2 += v13;
          a4 -= v13;
        }
        if ( !a4 )
          goto LABEL_16;
      }
      v20 = -1073740972;
    }
LABEL_16:
    *a5 = v6;
  }
  else
  {
    v20 = -1073741811;
  }
  KdExitDebugger(v11);
  return (unsigned int)v20;
}
