/*
 * XREFs of GreGetClipBox @ 0x1C00197D0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0057430 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C001A750 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00225E0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0022CF8 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0025760 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C002684C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C00290B0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002AB40 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 *     bCvtPts1 @ 0x1C0062918 (bCvtPts1.c)
 */

__int64 __fastcall GreGetClipBox(HDC a1, int *a2, int a3)
{
  unsigned int v5; // edi
  DC *v6; // r10
  struct REGION *v7; // rax
  DC *v8; // r10
  struct REGION *v9; // rsi
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rcx
  HDC v15; // rbx
  DC *v17; // rax
  int v18; // eax
  int v19; // ecx
  DC *v20; // [rsp+28h] [rbp-29h] BYREF
  __int64 v21; // [rsp+30h] [rbp-21h]
  __int64 v22; // [rsp+38h] [rbp-19h] BYREF
  int v23; // [rsp+40h] [rbp-11h]
  int v24; // [rsp+44h] [rbp-Dh]
  _BYTE v25[32]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v26; // [rsp+68h] [rbp+17h]
  __int64 v27; // [rsp+70h] [rbp+1Fh]
  int v28; // [rsp+D0h] [rbp+7Fh] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v5 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v20, a1);
  if ( v20 )
  {
    v5 = 1;
    v26 = 0LL;
    v27 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v25, (struct XDCOBJ *)&v20, 1);
    if ( (v25[24] & 1) != 0 )
    {
      if ( DC::prgnRao(v20) )
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
        v13 = *((_DWORD *)v8 + 10) & 1LL;
        *a2 -= *((_DWORD *)v8 + 2 * v13 + 356);
        a2[2] = v10 - *((_DWORD *)v8 + 2 * v13 + 356);
        a2[1] = v11 - *((_DWORD *)v8 + 2 * v13 + 357);
        a2[3] = v12 - *((_DWORD *)v8 + 2 * v13 + 357);
        if ( a3 )
        {
          v14 = *((_QWORD *)v8 + 10);
          v23 = *(_DWORD *)(v14 + 68);
          v24 = *(_DWORD *)(v14 + 312) & 1;
          EXFORMOBJ::vInit((EXFORMOBJ *)&v22, (struct XDCOBJ *)&v20, 0x402u, 0x80000000);
          if ( v22 )
          {
            if ( (*(_BYTE *)(v22 + 32) & 0x43) != 0x43 )
              bCvtPts1(v22, a2, 2LL);
            if ( v24 )
            {
              ++*a2;
              ++a2[2];
            }
          }
          v8 = v20;
        }
        if ( (*(_DWORD *)(*((_QWORD *)v8 + 10) + 312LL) & 1) != 0 )
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
      v17 = v20;
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      if ( *((_QWORD *)v17 + 63) )
        v5 = (*((_DWORD *)v17 + 9) & 0x5000) == 4096;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25);
    if ( v20 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v20);
      v28 = 0;
      v15 = *(HDC *)v20;
      HmgDecrementExclusiveReferenceCountEx(v20, HIDWORD(v21), &v28);
      if ( v28 )
        bDeleteDCInternalEx(v15, 0LL);
    }
  }
  return v5;
}
