/*
 * XREFs of DpiPdoHandleQueryCapabilities @ 0x1C015C6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003E4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

__int64 __fastcall DpiPdoHandleQueryCapabilities(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r10
  __int64 v4; // r8
  int v5; // r11d
  unsigned int v6; // edx
  int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  int v10; // eax

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v5 = 1;
  if ( *(_WORD *)(v4 + 2) == 1 && *(_WORD *)v4 >= 0x40u )
  {
    *(_DWORD *)(v4 + 4) &= 0xFFFFC3FC;
    *(_DWORD *)(v4 + 20) = 1;
    *(_DWORD *)(v4 + 24) = 1;
    *(_QWORD *)(v4 + 28) = 0x400000004LL;
    *(_QWORD *)(v4 + 36) = 0x400000004LL;
    v6 = *(_DWORD *)(v4 + 4) & 0xFFFFBFB7;
    *(_QWORD *)(v4 + 44) = 0LL;
    v7 = v6 | 0x280;
    *(_QWORD *)(v4 + 52) = 0LL;
    *(_DWORD *)(v4 + 4) = v7;
    *(_DWORD *)(v4 + 60) = 0;
    if ( *(_DWORD *)(v3 + 496) != 1
      || IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(v3 + 936) + 4LL)) )
    {
      v8 = v7 & 0xFFFFFFEF;
    }
    else
    {
      v8 = v7 | 0x10;
    }
    *(_DWORD *)(v4 + 4) = v8;
    if ( *(_DWORD *)(v3 + 496) == v5 )
      v9 = v8 | 0x100;
    else
      v9 = v8 & 0xFFFFFEFF | (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL) + 1120LL) != 2 ? 0x100 : 0);
    *(_DWORD *)(v4 + 4) = v9;
    v10 = *(_DWORD *)(v3 + 500);
    if ( !v10 )
      v10 = *(_DWORD *)(v3 + 504);
    *(_DWORD *)(v4 + 8) = v10;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
