/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C002A118
 * Callers:
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C000BAAC (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_V.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIsExpectedVSyncCookie2(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_QUEUE_ENTRY *a2,
        struct _VIDSCH_VSYNC_COOKIE *a3)
{
  _DWORD *v3; // r9
  unsigned int v4; // edx
  bool v5; // zf
  int v6; // eax
  char v7; // cl
  char v8; // r11
  __int64 v9; // r10
  int v10; // eax

  v3 = (_DWORD *)*((_QWORD *)a2 + 146);
  if ( (*((_DWORD *)a2 + 280) & 0x10) != 0 )
    v4 = ((unsigned __int16)*v3 | (unsigned __int16)(*v3 >> 10)) & 0x3FF;
  else
    v4 = (1 << *((_DWORD *)a1 + 35)) - 1;
  v5 = !_BitScanForward((unsigned int *)&v6, v4);
  v7 = -1;
  if ( !v5 )
    v7 = v6;
  v8 = 0;
  if ( !v4 )
    return 1LL;
  while ( 1 )
  {
    v9 = *(_QWORD *)((char *)v3 + ((8 * v3[2] + 191) & 0xFFFFFFF8) * v8 + 24);
    if ( v9 )
    {
      if ( v9 != *((_QWORD *)a3 + 2 * v7 + 14) )
        break;
    }
    v10 = 1 << v7;
    v7 = -1;
    v4 &= ~v10;
    v5 = !_BitScanForward((unsigned int *)&v10, v4);
    if ( !v5 )
      v7 = v10;
    ++v8;
    if ( !v4 )
      return 1LL;
  }
  return 0LL;
}
