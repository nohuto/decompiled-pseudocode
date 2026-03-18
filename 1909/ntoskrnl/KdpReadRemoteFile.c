/*
 * XREFs of KdpReadRemoteFile @ 0x14095441C
 * Callers:
 *     KdPullRemoteFileEx @ 0x140953DA0 (KdPullRemoteFileEx.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KdEnterDebugger @ 0x140954648 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140954790 (KdExitDebugger.c)
 */

__int64 __fastcall KdpReadRemoteFile(int a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx
  int v9; // esi
  char v11; // al
  _QWORD *v12; // rcx
  char v13; // r12
  unsigned int v14; // [rsp+30h] [rbp-71h] BYREF
  _DWORD v15[2]; // [rsp+38h] [rbp-69h] BYREF
  _QWORD *v16; // [rsp+40h] [rbp-61h]
  __int64 v17; // [rsp+48h] [rbp-59h] BYREF
  __int64 v18; // [rsp+50h] [rbp-51h]
  _QWORD v19[8]; // [rsp+60h] [rbp-41h] BYREF

  v5 = (unsigned int)(a1 - 1);
  memset(v19, 0, sizeof(v19));
  v9 = 0;
  if ( (unsigned int)v5 >= 0x10 )
    return 3221225485LL;
  v11 = KdEnterDebugger(0LL);
  v12 = KdpRemoteFiles;
  v13 = v11;
  if ( KdpRemoteFiles[v5] )
  {
    if ( a4 )
    {
      while ( 1 )
      {
        v15[1] = 0;
        v17 = 0LL;
        v18 = 0LL;
        v19[1] = KdpRemoteFiles[v5];
        v19[0] = 13361LL;
        v19[2] = a2;
        LODWORD(v19[3]) = a4 <= (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64
                        ? a4
                        : KdTransportMaxPacketSize - 64;
        v15[0] = 4194368;
        v16 = v19;
        KdSendPacket(11LL, v15, 0LL, (char *)&KdDebuggerNotPresent + 5);
        if ( (_BYTE)KdDebuggerNotPresent )
          break;
        WORD1(v17) = v19[3];
        v18 = a3;
        if ( !(unsigned int)KdReceivePacket(11LL, v15, &v17, &v14, (char *)&KdDebuggerNotPresent + 5) )
        {
          if ( v19[0] < 0 )
            goto LABEL_16;
          v9 += v14;
          a3 += v14;
          a2 += v14;
          a4 -= v14;
        }
        v12 = KdpRemoteFiles;
        if ( !a4 )
          goto LABEL_16;
      }
      HIDWORD(v19[0]) = -1073740972;
    }
LABEL_16:
    *a5 = v9;
  }
  else
  {
    HIDWORD(v19[0]) = -1073741811;
  }
  LOBYTE(v12) = v13;
  KdExitDebugger(v12);
  return HIDWORD(v19[0]);
}
