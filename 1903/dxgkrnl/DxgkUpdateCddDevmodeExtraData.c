/*
 * XREFs of DxgkUpdateCddDevmodeExtraData @ 0x1C014B580
 * Callers:
 *     <none>
 * Callees:
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00DB31C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DxgkUpdateCddDevmodeExtraData(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  __int64 v12; // rax
  unsigned __int8 v13; // [rsp+30h] [rbp+8h] BYREF

  if ( (a1[18] & 0x40000) != 0 )
  {
    v5 = (unsigned int)a1[42];
    if ( (_DWORD)v5 )
    {
      switch ( (_DWORD)v5 )
      {
        case 0x20:
          v6 = 21;
          break;
        case 8:
          v6 = 41;
          break;
        case 0x10:
          v6 = 23;
          break;
        case 0x18:
          v6 = 20;
          break;
        default:
          v12 = WdLogNewEntry5_WdError(a1, a2, a3);
          *(_QWORD *)(v12 + 24) = v5;
          WdLogEvent5_WdError(v12);
          v6 = 0;
          break;
      }
      *(_DWORD *)(a2 + 228) = v6;
    }
  }
  v7 = a1[18];
  if ( (v7 & 0x400000) != 0 && (v7 & 0x200000) != 0 )
  {
    v8 = a1[45];
    v13 = 0;
    v9 = DmmMapVSyncFromRationalToInteger(
           (const struct _D3DDDI_RATIONAL *)(a2 + 220),
           (unsigned int)((v8 & 2) != 0) + 1,
           &v13);
    v10 = a1[46];
    if ( v9 != v10 && (v9 + 1 != v10 || !v13) )
    {
      *(_DWORD *)(a2 + 220) = v10;
      *(_DWORD *)(a2 + 224) = 1;
    }
  }
  return 0LL;
}
