/*
 * XREFs of ApplyPathModalityToCdsRegistryStore @ 0x1C0050B34
 * Callers:
 *     ApplyPathsModality @ 0x1C004E238 (ApplyPathsModality.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0050C84 (DrvUpdateDisplayDriverParameters.c)
 */

__int64 __fastcall ApplyPathModalityToCdsRegistryStore(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _devicemodeW *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  wchar_t *v7; // rbx
  unsigned int v8; // r14d
  __int64 v9; // rdx
  struct _devicemodeW *v10; // rbp
  __int64 v11; // rcx
  struct _devicemodeW *v12; // r9
  __int64 v13; // r8
  wchar_t *v14; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  int v18; // [rsp+20h] [rbp-18h]

  v4 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 0x73726447u, 1);
  if ( v4 )
  {
    v7 = gpGraphicsDeviceList;
    v8 = 1;
    while ( v7 )
    {
      if ( (*((_DWORD *)v7 + 40) & 0x800000) != 0 )
      {
        v9 = 0LL;
        v10 = v4;
        if ( !*(_WORD *)(a1 + 20) )
          goto LABEL_12;
        while ( 1 )
        {
          v11 = 272LL * (unsigned int)v9;
          v12 = *(struct _devicemodeW **)(v11 + a1 + 272);
          if ( v12 )
          {
            if ( (*(_QWORD *)(v11 + a1 + 48) & 0x1000000000LL) == 0
              && *((_DWORD *)v7 + 62) == *(_DWORD *)(v11 + a1 + 64)
              && *((_DWORD *)v7 + 63) == *(_DWORD *)(v11 + a1 + 68)
              && *((_DWORD *)v7 + 64) == *(_DWORD *)(v11 + a1 + 72) )
            {
              break;
            }
          }
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *(unsigned __int16 *)(a1 + 20) )
            goto LABEL_12;
        }
        v10 = *(struct _devicemodeW **)(v11 + a1 + 272);
        if ( v12 == v4 )
LABEL_12:
          v13 = 1LL;
        else
          v13 = 0LL;
        v14 = gpGraphicsDeviceList;
        if ( !gpGraphicsDeviceList )
          goto LABEL_24;
        do
        {
          if ( v14 == v7 )
            break;
          v14 = (wchar_t *)*((_QWORD *)v14 + 16);
        }
        while ( v14 );
        if ( !v14 || (int)DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)v14, v10, v13, v18) < 0 )
        {
LABEL_24:
          v17 = (_QWORD *)WdLogNewEntry5_WdError(v14, v9, v13);
          v17[3] = v7;
          v17[6] = v10 == v4;
          v17[4] = a1;
          v17[5] = v10;
          WdLogEvent5_WdError(v17);
          v8 = 0;
        }
      }
      v7 = (wchar_t *)*((_QWORD *)v7 + 16);
    }
    Win32FreePool((__int64)v4);
    return v8;
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v3, v2, v5, v6);
    *(_QWORD *)(v16 + 24) = 220LL;
    *(_QWORD *)(v16 + 32) = a1;
    WdLogEvent5_WdLowResource(v16);
    return 0LL;
  }
}
