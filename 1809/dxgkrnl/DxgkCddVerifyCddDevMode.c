/*
 * XREFs of DxgkCddVerifyCddDevMode @ 0x1C013AEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C0006578 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00E3D10 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DxgkCddVerifyCddDevMode(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rax
  unsigned __int8 v12; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && *(_WORD *)(a1 + 70) == 24 )
  {
    v3 = *(unsigned int *)(a1 + 72);
    if ( (v3 & 0x40000) != 0 && (unsigned int)GetBitsPerPixel(*(_DWORD *)(a1 + 228)) == *(_DWORD *)(a1 + 168) )
    {
      v4 = 0LL;
      if ( (v3 & 0x200000) != 0 )
        v4 = (unsigned int)((*(_DWORD *)(a1 + 180) & 2) != 0) + 1;
      if ( *(_DWORD *)(a1 + 224) )
      {
        if ( (v3 & 0x400000) == 0 )
          return 0LL;
        v12 = 0;
        v5 = DmmMapVSyncFromRationalToInteger(
               (const struct _D3DDDI_RATIONAL *)(a1 + 220),
               (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)v4,
               &v12);
        v8 = *(unsigned int *)(a1 + 184);
        if ( v5 == (_DWORD)v8 || v5 + 1 == (_DWORD)v8 && v12 )
          return 0LL;
        v10 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v6, v7);
        v10[3] = *(unsigned int *)(a1 + 184);
        v10[4] = *(unsigned int *)(a1 + 220);
        v10[5] = *(unsigned int *)(a1 + 224);
        v10[6] = v12;
      }
      else
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, v4, v3);
        v10[3] = 3283LL;
      }
    }
    else
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, v3);
      v10[3] = *(unsigned int *)(a1 + 168);
      v10[4] = *(int *)(a1 + 228);
    }
    WdLogEvent5_WdWarning(v10);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v11 + 24) = 3239LL;
    WdLogEvent5_WdError(v11);
  }
  return 3221225473LL;
}
