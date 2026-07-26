/*
 * XREFs of ndisPopulateRssProcessorSet @ 0x1C0021540
 * Callers:
 *     NdisGetRssProcessorInformation @ 0x1C0021390 (NdisGetRssProcessorInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPopulateRssProcessorSet(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  bool v5; // bp
  unsigned int v6; // ebx
  __int64 *v7; // r12
  unsigned int i; // esi
  int v9; // edx
  _PROCESSOR_NUMBER v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // eax
  _PROCESSOR_NUMBER *v14; // r14
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v16; // rcx
  unsigned __int16 v17; // cx
  unsigned int v18; // eax
  __int64 result; // rax
  __int64 v20; // r8
  __int64 v21; // r11
  __int64 *v22; // r9
  __int64 v23; // r10
  __int64 *v24; // rdx
  __int64 v25; // [rsp+50h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 32);
  v5 = v2 <= 6u && (v2 != 6 || *(_BYTE *)(a1 + 33) < 0x14u);
  v6 = 0;
  v7 = (__int64 *)(a2 + 40);
  for ( i = 0; i < *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5); ++i )
  {
    if ( !v5 || !*((_WORD *)ndisRssProcessors + 2 * i) )
    {
      v9 = *(_DWORD *)(a2 + 8);
      v10 = (_PROCESSOR_NUMBER)*((_DWORD *)ndisRssProcessors + i);
      if ( v10.Group >= (unsigned __int16)v9 && (v10.Group > (unsigned __int16)v9 || v10.Number >= BYTE2(v9)) )
      {
        v11 = *(_DWORD *)(a2 + 32);
        if ( v10.Group < (unsigned __int16)v11 )
        {
          v13 = HIWORD(*(unsigned int *)&v10);
LABEL_13:
          if ( !v5 || !v10.Group && (unsigned __int8)v13 < 0x20u )
          {
            v14 = (_PROCESSOR_NUMBER *)&v7[v6];
            *v14 = v10;
            ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v14);
            v16 = *(_QWORD *)(a1 + 4440);
            if ( v16 )
              v17 = *(_WORD *)(v16 + 2LL * ProcessorIndexFromNumber);
            else
              v17 = 0;
            v14[1].Group = v17;
            ++v6;
          }
          continue;
        }
        if ( v10.Group <= (unsigned __int16)v11 )
        {
          v12 = HIWORD(v11);
          v13 = HIWORD(*(unsigned int *)&v10);
          if ( v10.Number < (unsigned __int8)v12 || v10.Number <= (unsigned __int8)v12 )
            goto LABEL_13;
        }
      }
    }
  }
  v18 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 24) = v6;
  if ( v18 >= v6 )
    v18 = v6;
  *(_DWORD *)(a2 + 20) = 40;
  *(_DWORD *)(a2 + 12) = v18;
  result = 0xFFFFLL;
  *(_DWORD *)(a2 + 28) = 8;
  if ( *(_WORD *)(a2 + 16) != 0xFFFF && (int)v6 > 0 )
  {
    v20 = -1LL;
    v21 = v6;
    v22 = v7;
    do
    {
      result = *v22;
      v23 = v20;
      v25 = *v22;
      if ( v20 >= 0 )
      {
        v24 = v22;
        do
        {
          if ( WORD2(v25) >= *((_WORD *)v24 - 2) )
            break;
          *v24 = *(v24 - 1);
          --v24;
          --v23;
        }
        while ( v23 >= 0 );
      }
      ++v22;
      v7[v23 + 1] = result;
      ++v20;
      --v21;
    }
    while ( v21 );
  }
  return result;
}
