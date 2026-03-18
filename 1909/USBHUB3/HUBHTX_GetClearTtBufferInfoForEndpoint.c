/*
 * XREFs of HUBHTX_GetClearTtBufferInfoForEndpoint @ 0x1C0006258
 * Callers:
 *     HUBHTX_ClearTTBuffer @ 0x1C0006470 (HUBHTX_ClearTTBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHTX_GetClearTtBufferInfoForEndpoint(__int64 a1, __int64 a2, char a3, _WORD *a4)
{
  bool v5; // cc
  unsigned int v8; // r10d
  _QWORD *v9; // r8
  _QWORD *i; // rax
  _QWORD *v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  __int16 v16; // dx
  __int16 v17; // cx

  v5 = *(_DWORD *)(a1 + 172) <= 1u;
  *a4 = 0;
  v8 = -1073741823;
  if ( v5 )
  {
    if ( a2 == *(_QWORD *)(a1 + 88) )
    {
      *a4 = a3 & 0xF | (16 * (*(_WORD *)(a1 + 1648) & 0x7F));
      return 0;
    }
    else
    {
      v9 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
      for ( i = (_QWORD *)*v9; ; i = (_QWORD *)v11[1] )
      {
        v11 = i - 1;
        if ( v9 == i )
          break;
        v12 = *((_DWORD *)v11 + 6);
        v13 = 0LL;
        if ( v12 )
        {
          v14 = v11 + 5;
          while ( *v14 != a2 )
          {
            v13 = (unsigned int)(v13 + 1);
            v14 += 9;
            if ( (unsigned int)v13 >= v12 )
              goto LABEL_10;
          }
          v15 = v11[9 * v13 + 9];
          if ( (*(_BYTE *)(v15 + 3) & 3) != 0 )
          {
            if ( (*(_BYTE *)(v15 + 3) & 3) != 2 )
              return v8;
            v16 = 4096;
          }
          else
          {
            v16 = 0;
          }
          v17 = v16 | a3 & 0xF | (16 * (*(_WORD *)(a1 + 1648) & 0x7F));
          *a4 = v17;
          if ( a3 < 0 )
            *a4 = v17 | 0x8000;
          return 0;
        }
LABEL_10:
        ;
      }
    }
  }
  return v8;
}
