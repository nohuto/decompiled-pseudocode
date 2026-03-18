/*
 * XREFs of GreGetClipBox @ 0x1C0017FA0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C004C7E0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0017A44 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0019F30 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C001AA8C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C001AD7C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001D060 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0020EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00258B0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003FD3C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C00783F4 (bCvtPts1.c)
 */

__int64 __fastcall GreGetClipBox(HDC a1, int *a2, int a3)
{
  unsigned int v5; // edi
  DC *v6; // r10
  struct REGION *v7; // rax
  DC *v8; // r10
  struct REGION *v9; // rsi
  int v10; // r8d
  int v11; // r9d
  int v12; // r11d
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  DC *v17; // rax
  int v18; // eax
  int v19; // ecx
  DC *v20[2]; // [rsp+28h] [rbp-29h] BYREF
  __int64 v21; // [rsp+38h] [rbp-19h] BYREF
  int v22; // [rsp+40h] [rbp-11h]
  int v23; // [rsp+44h] [rbp-Dh]
  _BYTE v24[32]; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v25[2]; // [rsp+68h] [rbp+17h] BYREF
  __int16 v26; // [rsp+78h] [rbp+27h]

  v20[0] = 0LL;
  v20[1] = 0LL;
  v5 = 0;
  XDCOBJ::vLock((XDCOBJ *)v20, a1);
  if ( v20[0] )
  {
    v5 = 1;
    v25[0] = 0LL;
    v25[1] = 0LL;
    v26 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v24, (struct XDCOBJ *)v20, 1);
    if ( (v24[24] & 1) != 0 )
    {
      if ( DC::prgnRao(v20[0]) )
        v7 = DC::prgnRao(v6);
      else
        v7 = DC::prgnVisSnap(v6);
      v9 = v7;
      *(_OWORD *)a2 = *(_OWORD *)((char *)v7 + 88);
      v10 = a2[2];
      if ( *a2 >= v10 || (v11 = a2[1], v12 = a2[3], v11 >= v12) )
      {
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
      }
      else
      {
        v13 = (_DWORD *)((char *)v8 + 1024);
        if ( (*((_DWORD *)v8 + 10) & 1) == 0 )
          v13 = (_DWORD *)((char *)v8 + 1016);
        *a2 -= *v13;
        a2[2] = v10 - *v13;
        a2[1] = v11 - v13[1];
        a2[3] = v12 - v13[1];
        if ( a3 )
        {
          v14 = *((_QWORD *)v8 + 122);
          v22 = *(_DWORD *)(v14 + 208);
          v23 = *(_DWORD *)(v14 + 108) & 1;
          EXFORMOBJ::vInit((EXFORMOBJ *)&v21, (struct XDCOBJ *)v20, 0x402u, 0x80000000);
          if ( v21 )
          {
            if ( (*(_BYTE *)(v21 + 32) & 0x43) != 0x43 )
              bCvtPts1(v21, a2, 2LL);
            if ( v23 )
            {
              ++*a2;
              ++a2[2];
            }
          }
          v8 = v20[0];
        }
        if ( (*(_DWORD *)(*((_QWORD *)v8 + 122) + 108LL) & 1) != 0 )
        {
          v18 = *a2;
          v19 = a2[2];
          if ( *a2 > v19 )
          {
            *a2 = v19;
            a2[2] = v18;
          }
        }
      }
      if ( *((_DWORD *)v9 + 21) != 1 )
        v5 = (*((_DWORD *)v9 + 20) > 0xA0u) + 2;
    }
    else
    {
      v17 = v20[0];
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      if ( *((_QWORD *)v17 + 62) )
        v5 = (*((_DWORD *)v17 + 9) & 0x5000) == 4096;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
    v15 = v25[0];
    if ( v25[0] )
    {
      if ( (_BYTE)v26 )
      {
        *(_DWORD *)(v25[0] + 40LL) &= ~2u;
        v15 = v25[0];
        LOBYTE(v26) = 0;
      }
      if ( v15 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v25);
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v20);
  return v5;
}
