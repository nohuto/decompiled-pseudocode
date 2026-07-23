/*
 * XREFs of EtwpRealtimeDeliverBuffer @ 0x1405C2890
 * Callers:
 *     EtwpRealtimeFlushSavedBuffers @ 0x1405C22F0 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpFlushBufferToRealtime @ 0x1405C2C70 (EtwpFlushBufferToRealtime.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x14065C014 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x14076066C (EtwpRealtimeUpdateReferenceTime.c)
 * Callees:
 *     EtwpRealtimeInjectEtwBuffer @ 0x1405C29BC (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpDisassociateConsumer @ 0x1406CFFE0 (EtwpDisassociateConsumer.c)
 */

__int64 __fastcall EtwpRealtimeDeliverBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  __int16 v7; // r15
  _QWORD *v8; // rsi
  int v9; // eax
  unsigned __int8 v10; // cl
  char v11; // dl
  __int16 v13; // ax
  bool v14; // zf
  char v15; // [rsp+60h] [rbp+8h]
  char v16; // [rsp+70h] [rbp+18h]

  v2 = *(_DWORD *)(a1 + 464);
  v15 = 0;
  v16 = 0;
  v5 = 0LL;
  if ( v2 )
  {
    if ( v2 == 3 )
    {
      v13 = 8;
    }
    else
    {
      v14 = v2 == 2;
      v13 = 4;
      if ( !v14 )
        v13 = 2;
    }
    v16 = 1;
    *(_WORD *)(a2 + 52) |= v13;
  }
  v6 = *(_QWORD **)(a1 + 344);
  if ( v6 == (_QWORD *)(a1 + 344) )
    return 3221225473LL;
  do
  {
    v7 = *(_WORD *)(a2 + 52);
    v8 = v6;
    v6 = (_QWORD *)*v6;
    if ( (*((_BYTE *)v8 + 90) & 2) != 0 )
      *(_WORD *)(a2 + 52) = v7 | 4;
    v9 = EtwpRealtimeInjectEtwBuffer(a1, v8, a2, 2LL);
    *(_WORD *)(a2 + 52) = v7;
    if ( v9 < 0 )
    {
      if ( v9 == -1073741764 )
      {
        v8[4] = v5;
        v5 = v8;
      }
      else
      {
LABEL_17:
        EtwpDisassociateConsumer(a1, v8, 0LL);
      }
      v11 = v15;
      continue;
    }
    v10 = *((_BYTE *)v8 + 90);
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      *((_BYTE *)v8 + 90) = v10;
      v7 = *(_WORD *)(a2 + 52);
    }
    v11 = 1;
    v15 = 1;
    if ( (v10 & ((v7 & 1) != 0)) != 0 )
      goto LABEL_17;
  }
  while ( v6 != (_QWORD *)(a1 + 344) );
  if ( !v11 )
    return 3221225473LL;
  if ( v16 )
    *(_DWORD *)(a1 + 464) = 0;
  if ( *(_WORD *)(a2 + 54) != 6 )
    ++*(_DWORD *)(a1 + 272);
  while ( v5 )
  {
    *((_BYTE *)v5 + 90) |= 2u;
    ++*((_DWORD *)v5 + 20);
    v5 = (_QWORD *)v5[4];
  }
  return 0LL;
}
