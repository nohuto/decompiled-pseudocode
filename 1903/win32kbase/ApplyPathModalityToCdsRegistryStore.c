/*
 * XREFs of ApplyPathModalityToCdsRegistryStore @ 0x1C004CD80
 * Callers:
 *     ApplyPathsModality @ 0x1C0044F44 (ApplyPathsModality.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C004D5D8 (DrvUpdateDisplayDriverParameters.c)
 */

__int64 __fastcall ApplyPathModalityToCdsRegistryStore(__int64 a1)
{
  struct _devicemodeW *v2; // rsi
  wchar_t *v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // rdx
  struct _devicemodeW *v6; // rbp
  __int64 v7; // rcx
  struct _devicemodeW *v8; // r9
  __int64 v9; // r8
  wchar_t *v10; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rax
  int v14; // [rsp+20h] [rbp-18h]

  v2 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 0x73726447u, 1);
  if ( v2 )
  {
    v3 = gpGraphicsDeviceList;
    v4 = 1;
    while ( v3 )
    {
      if ( (*((_DWORD *)v3 + 40) & 0x800000) != 0 )
      {
        v5 = 0LL;
        v6 = v2;
        if ( !*(_WORD *)(a1 + 20) )
          goto LABEL_12;
        while ( 1 )
        {
          v7 = 272LL * (unsigned int)v5;
          v8 = *(struct _devicemodeW **)(v7 + a1 + 272);
          if ( v8 )
          {
            if ( (*(_QWORD *)(v7 + a1 + 48) & 0x1000000000LL) == 0
              && *((_DWORD *)v3 + 62) == *(_DWORD *)(v7 + a1 + 64)
              && *((_DWORD *)v3 + 63) == *(_DWORD *)(v7 + a1 + 68)
              && *((_DWORD *)v3 + 64) == *(_DWORD *)(v7 + a1 + 72) )
            {
              break;
            }
          }
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= *(unsigned __int16 *)(a1 + 20) )
            goto LABEL_12;
        }
        v6 = *(struct _devicemodeW **)(v7 + a1 + 272);
        if ( v8 == v2 )
LABEL_12:
          v9 = 1LL;
        else
          v9 = 0LL;
        v10 = gpGraphicsDeviceList;
        if ( !gpGraphicsDeviceList )
          goto LABEL_24;
        do
        {
          if ( v10 == v3 )
            break;
          v10 = (wchar_t *)*((_QWORD *)v10 + 16);
        }
        while ( v10 );
        if ( !v10 || (int)DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)v10, v6, v9, v14) < 0 )
        {
LABEL_24:
          v13 = (_QWORD *)WdLogNewEntry5_WdError(v10, v5, v9);
          v13[3] = v3;
          v13[6] = v6 == v2;
          v13[4] = a1;
          v13[5] = v6;
          WdLogEvent5_WdError(v13);
          v4 = 0;
        }
      }
      v3 = (wchar_t *)*((_QWORD *)v3 + 16);
    }
    Win32FreePool((__int64)v2);
    return v4;
  }
  else
  {
    v12 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v12 + 24) = 220LL;
    *(_QWORD *)(v12 + 32) = a1;
    WdLogEvent5_WdLowResource(v12);
    return 0LL;
  }
}
