/*
 * XREFs of GreExtTextOutRect @ 0x1C00C05C0
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C00BECE0 (NtGdiExtTextOutW.c)
 * Callees:
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A3D3C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C00A59CC (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreExtTextOutRect(HDC a1, struct tagRECT *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int v5; // eax
  _QWORD v7[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h]
  int v10; // [rsp+48h] [rbp-38h]
  _QWORD v11[2]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  __int64 v14; // [rsp+70h] [rbp-10h]
  __int64 v15; // [rsp+78h] [rbp-8h]

  v7[0] = 0LL;
  v7[1] = 0LL;
  v3 = 0;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  v4 = v7[0];
  if ( v7[0] )
  {
    if ( (*(_DWORD *)(v7[0] + 36LL) & 0x10000) == 0 )
    {
      v11[1] = 0LL;
      v8 = 0LL;
      v12 = 256;
      v9 = 0LL;
      v10 = 0;
      v11[0] = 0LL;
      v15 = 0LL;
      v14 = 0LL;
      v13 = 0LL;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v8, (struct XDCOBJ *)v7, 0) )
        v5 = ExtTextOutRect((struct XDCOBJ *)v7, a2);
      else
        v5 = XDCOBJ::bFullScreen((XDCOBJ *)v7);
      v3 = v5;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v8);
      if ( v11[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v11);
      v4 = v7[0];
    }
    if ( v4 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v3;
}
