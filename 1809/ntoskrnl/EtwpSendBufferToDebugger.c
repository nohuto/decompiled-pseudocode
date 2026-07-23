/*
 * XREFs of EtwpSendBufferToDebugger @ 0x1408BED90
 * Callers:
 *     EtwpSendDbgId @ 0x1408BEEA8 (EtwpSendDbgId.c)
 * Callees:
 *     EtwpGetNextEventOffsetType @ 0x140315694 (EtwpGetNextEventOffsetType.c)
 *     KdSendTraceData @ 0x140916FB4 (KdSendTraceData.c)
 */

__int64 __fastcall EtwpSendBufferToDebugger(__int128 *a1)
{
  unsigned int v2; // ecx
  __int64 result; // rax
  __int128 v4; // xmm0
  unsigned int v5; // edi
  __int128 v6; // xmm1
  unsigned int v7; // esi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // r9d
  int v11; // r14d
  _OWORD *v12; // [rsp+20h] [rbp-29h] BYREF
  int v13; // [rsp+28h] [rbp-21h]
  __int64 v14; // [rsp+30h] [rbp-19h]
  int v15; // [rsp+38h] [rbp-11h]
  _OWORD v16[3]; // [rsp+40h] [rbp-9h] BYREF
  __int128 v17; // [rsp+70h] [rbp+27h]
  __int64 v18; // [rsp+80h] [rbp+37h]
  unsigned int v19; // [rsp+B0h] [rbp+67h] BYREF

  v2 = *((_DWORD *)a1 + 12);
  if ( v2 > KdTransportMaxPacketSize - 64 )
  {
    v4 = *a1;
    v5 = 72;
    v6 = a1[1];
    v7 = KdTransportMaxPacketSize - 136;
    v12 = v16;
    v16[0] = v4;
    v8 = a1[2];
    v13 = 72;
    v16[1] = v6;
    v9 = a1[3];
    v16[2] = v8;
    v18 = *((_QWORD *)a1 + 8);
    v17 = v9;
    do
    {
      v14 = (__int64)a1 + v5;
      result = EtwpGetNextEventOffsetType((unsigned int *)a1, v5, &v19);
      v11 = result;
      if ( !(_DWORD)result )
        break;
      while ( 1 )
      {
        result = v19 + v10;
        if ( (unsigned int)result > v7 )
          break;
        v5 += v19;
        result = EtwpGetNextEventOffsetType((unsigned int *)a1, v5, &v19);
        v11 = result;
        if ( !(_DWORD)result )
          goto LABEL_10;
      }
      if ( v19 > v7 )
        v5 += v19;
LABEL_10:
      if ( v10 )
      {
        v15 = v10;
        LODWORD(v17) = v10 + 72;
        LODWORD(v16[0]) = v10 + 72;
        result = KdSendTraceData(&v12, 2LL);
      }
    }
    while ( v11 );
  }
  else
  {
    v13 = v2;
    v12 = a1;
    return KdSendTraceData(&v12, 1LL);
  }
  return result;
}
