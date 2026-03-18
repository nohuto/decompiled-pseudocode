/*
 * XREFs of KdpFillMemory @ 0x140954A20
 * Callers:
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x140957144 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpFillMemory(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // eax
  int v4; // r14d
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v8; // r15d
  __int16 v9; // dx
  __int64 v10; // r12
  __int64 v11; // rbp
  int v12; // edi
  char *v13; // rsi
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+90h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 24);
  v5 = a1;
  v6 = *(unsigned __int16 *)(a1 + 30);
  v17 = 0LL;
  v18 = 0LL;
  v8 = 5;
  v9 = *(_WORD *)(v5 + 28);
  v10 = v6 + v2;
  v11 = v2;
  v12 = 0;
  if ( (v9 & 2) != 0 )
  {
    v8 = 7;
  }
  else if ( (v9 & 1) == 0 )
  {
    v3 = -1073741811;
  }
  if ( !(_WORD)v6 || *(_WORD *)a2 < (unsigned __int16)v6 )
    v3 = -1073741811;
  if ( v3 >= 0 )
  {
    v13 = *(char **)(v5 + 16);
    if ( v4 )
    {
      do
      {
        --v4;
        v3 = KdpCopyMemoryChunks(v13, v8, (__int64)&v20);
        if ( v3 < 0 )
          break;
        v14 = v11 + 1;
        ++v13;
        ++v12;
        v15 = v11 + 1 == v10;
        v11 = v2;
        if ( !v15 )
          v11 = v14;
      }
      while ( v4 );
      if ( v12 )
        v3 = 0;
      v5 = a1;
    }
  }
  *(_DWORD *)(v5 + 8) = v3;
  *(_DWORD *)(v5 + 24) = v12;
  LOWORD(v17) = 56;
  v18 = v5;
  return KdSendPacket(2LL, &v17, 0LL, (char *)&KdDebuggerNotPresent + 5);
}
