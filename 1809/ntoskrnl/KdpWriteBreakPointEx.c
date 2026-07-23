/*
 * XREFs of KdpWriteBreakPointEx @ 0x140918CD0
 * Callers:
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x1409199A8 (KdpCopyMemoryChunks.c)
 *     KdpAddBreakpoint @ 0x140919BE4 (KdpAddBreakpoint.c)
 *     KdpDeleteBreakpoint @ 0x140919D78 (KdpDeleteBreakpoint.c)
 */

__int64 __fastcall KdpWriteBreakPointEx(_DWORD *a1, PVOID *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r8
  _DWORD *v8; // rdi
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-E0h]
  __int64 v15; // [rsp+28h] [rbp-D8h]
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v17; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v18; // [rsp+40h] [rbp-C0h]
  _BYTE v19[504]; // [rsp+58h] [rbp-A8h] BYREF

  v2 = (unsigned int)a1[4];
  v17 = 56;
  v18 = a1;
  if ( (unsigned int)v2 > 0x20 || (v5 = 16LL * (unsigned int)v2, v6 = (unsigned int)v2, *(unsigned __int16 *)a2 != v5) )
  {
    a1[2] = -1073741823;
    goto LABEL_19;
  }
  KdpCopyMemoryChunks(a2[1], 4, (__int64)&v16);
  if ( (unsigned int)v16 != v5 )
  {
    a1[2] = -1073741823;
LABEL_19:
    KdSendPacket(2LL, &v17, a2, &KdpContext);
    return (unsigned int)a1[2];
  }
  a1[2] = 0;
  if ( (_DWORD)v2 )
  {
    v8 = v19;
    do
    {
      v9 = (unsigned int)*v8;
      if ( (_DWORD)v9 )
      {
        if ( !(unsigned __int8)KdpDeleteBreakpoint(v9) )
          a1[2] = -1073741823;
        *v8 = 0;
      }
      v8 += 4;
      --v2;
    }
    while ( v2 );
    v10 = v19;
    do
    {
      v11 = *((_QWORD *)v10 - 1);
      if ( v11 )
      {
        LOBYTE(v7) = 1;
        v12 = KdpAddBreakpoint(v11, 204LL, v7, 0LL, v14, v15);
        *v10 = v12;
        if ( !v12 )
          a1[2] = -1073741823;
      }
      v10 += 4;
      --v6;
    }
    while ( v6 );
  }
  KdpCopyMemoryChunks(a2[1], 5, (__int64)&v16);
  KdSendPacket(2LL, &v17, a2, &KdpContext);
  return (unsigned int)a1[5];
}
