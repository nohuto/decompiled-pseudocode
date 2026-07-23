/*
 * XREFs of KdpFillMemory @ 0x140917100
 * Callers:
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x1409199A8 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpFillMemory(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // r14d
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v7; // eax
  __int64 v8; // rbp
  int v9; // edi
  int v10; // r15d
  __int16 v11; // dx
  __int64 v12; // r12
  char *v13; // rsi
  __int64 v14; // rcx
  bool v15; // zf
  __int16 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+90h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a1 + 24);
  v4 = a1;
  v5 = *(unsigned __int16 *)(a1 + 30);
  v7 = 0;
  v8 = v2;
  v9 = 0;
  v10 = 5;
  v11 = *(_WORD *)(v4 + 28);
  v12 = v5 + v2;
  if ( (v11 & 2) != 0 )
  {
    v10 = 7;
  }
  else if ( (v11 & 1) == 0 )
  {
    v7 = -1073741811;
  }
  if ( !(_WORD)v5 || *(_WORD *)a2 < (unsigned __int16)v5 )
    v7 = -1073741811;
  if ( v7 >= 0 )
  {
    v13 = *(char **)(v4 + 16);
    if ( v3 )
    {
      do
      {
        --v3;
        v7 = KdpCopyMemoryChunks(v13, v10, (__int64)&v20);
        if ( v7 < 0 )
          break;
        v14 = v8 + 1;
        ++v13;
        ++v9;
        v15 = v8 + 1 == v12;
        v8 = v2;
        if ( !v15 )
          v8 = v14;
      }
      while ( v3 );
      if ( v9 )
        v7 = 0;
      v4 = a1;
    }
  }
  *(_DWORD *)(v4 + 8) = v7;
  *(_DWORD *)(v4 + 24) = v9;
  v17 = 56;
  v18 = v4;
  return KdSendPacket(2LL, &v17, 0LL, &KdpContext);
}
