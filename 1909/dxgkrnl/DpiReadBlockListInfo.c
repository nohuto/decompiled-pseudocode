/*
 * XREFs of DpiReadBlockListInfo @ 0x1C0157020
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EA0DC (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0025100 (memmove.c)
 */

__int64 __fastcall DpiReadBlockListInfo(__int64 a1, unsigned int *a2, __int64 a3, char a4)
{
  __int64 v4; // r10
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  const void *v11; // rdx
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v6 = (unsigned int)a3;
  if ( !v4 || *(_DWORD *)(v4 + 16) != 1953656900 || *(_DWORD *)(v4 + 20) != 2 )
    return 3221225485LL;
  if ( a4 )
  {
    if ( !*(_BYTE *)(v4 + 5740) )
    {
LABEL_6:
      v7 = *a2;
      v8 = -1;
      v9 = (unsigned int)(v7 + 4);
      if ( (unsigned int)v9 >= (unsigned int)v7 )
        v8 = v7 + 4;
      if ( (unsigned int)a3 < v8 || (unsigned int)v9 < (unsigned int)v7 )
      {
        v15 = WdLogNewEntry5_WdWarning(v7, v9, a3);
        *(_QWORD *)(v15 + 32) = -1073741789LL;
      }
      else
      {
        if ( a4 )
        {
          v10 = *(_DWORD *)(v4 + 5736);
          v11 = *(const void **)(v4 + 5728);
        }
        else
        {
          v10 = *(_DWORD *)(v4 + 5752);
          v11 = *(const void **)(v4 + 5744);
        }
        if ( !(_DWORD)v7 )
          goto LABEL_13;
        if ( v10 <= (unsigned int)v7 )
        {
          if ( v10 )
            memmove(a2 + 1, v11, v10);
LABEL_13:
          *a2 = v10;
          return 0LL;
        }
        v15 = WdLogNewEntry5_WdWarning(v7, v11, a3);
        *(_QWORD *)(v15 + 32) = -1073741811LL;
      }
      *(_QWORD *)(v15 + 24) = v6;
      WdLogEvent5_WdWarning(v15);
      v14 = -1073741789;
      goto LABEL_24;
    }
  }
  else if ( !*(_BYTE *)(v4 + 5756) )
  {
    goto LABEL_6;
  }
  v13 = WdLogNewEntry5_WdWarning(a1, a2, a3);
  v14 = -1073741637;
  *(_QWORD *)(v13 + 24) = -1073741637LL;
  WdLogEvent5_WdWarning(v13);
LABEL_24:
  *a2 = 0;
  return v14;
}
