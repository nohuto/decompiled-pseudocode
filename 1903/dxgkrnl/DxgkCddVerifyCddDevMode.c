/*
 * XREFs of DxgkCddVerifyCddDevMode @ 0x1C014B740
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C00039F0 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00DB31C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DxgkCddVerifyCddDevMode(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  unsigned __int8 v13; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && *(_WORD *)(a1 + 70) == 24 )
  {
    v4 = *(unsigned int *)(a1 + 72);
    if ( (v4 & 0x40000) != 0 && (unsigned int)GetBitsPerPixel(*(_DWORD *)(a1 + 228)) == *(_DWORD *)(a1 + 168) )
    {
      v5 = 0LL;
      if ( (v4 & 0x200000) != 0 )
        v5 = (unsigned int)((*(_DWORD *)(a1 + 180) & 2) != 0) + 1;
      if ( *(_DWORD *)(a1 + 224) )
      {
        if ( (v4 & 0x400000) == 0 )
          return 0LL;
        v13 = 0;
        v6 = DmmMapVSyncFromRationalToInteger((const struct _D3DDDI_RATIONAL *)(a1 + 220), v5, &v13);
        v9 = *(unsigned int *)(a1 + 184);
        if ( v6 == (_DWORD)v9 || v6 + 1 == (_DWORD)v9 && v13 )
          return 0LL;
        v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v7, v8);
        v11[3] = *(unsigned int *)(a1 + 184);
        v11[4] = *(unsigned int *)(a1 + 220);
        v11[5] = *(unsigned int *)(a1 + 224);
        v11[6] = v13;
      }
      else
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, v5, v4);
        v11[3] = 3236LL;
      }
    }
    else
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, v4);
      v11[3] = *(unsigned int *)(a1 + 168);
      v11[4] = *(int *)(a1 + 228);
    }
    WdLogEvent5_WdWarning(v11);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v12 + 24) = 3192LL;
    WdLogEvent5_WdError(v12);
  }
  return 3221225473LL;
}
