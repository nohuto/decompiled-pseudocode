/*
 * XREFs of GreGetAppClipBox @ 0x1C00A29F8
 * Callers:
 *     NtGdiGetAppClipBox @ 0x1C00A2990 (NtGdiGetAppClipBox.c)
 * Callees:
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A3D3C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A6F14 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A8A4C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00AAE4C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C00BC6A0 (bCvtPts1.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C01256C4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetAppClipBox(HDC a1, LONG *a2)
{
  DC *v3; // rsi
  struct REGION *v4; // rax
  __int128 v5; // xmm0
  __int64 v6; // r9
  LONG v7; // r8d
  LONG v8; // r10d
  char *v9; // rcx
  LONG v10; // edx
  LONG v11; // r8d
  LONG v12; // r10d
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  bool v18; // zf
  LONG v19; // edx
  LONG v20; // eax
  LONG x; // r9d
  LONG v22; // r11d
  LONG v23; // eax
  LONG v24; // edi
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // ecx
  LONG y; // r8d
  bool v29; // cc
  LONG v30; // r10d
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // eax
  LONG v40; // eax
  LONG v41; // eax
  LONG v42; // ecx
  DC *v43[2]; // [rsp+20h] [rbp-79h] BYREF
  struct REGION *v44; // [rsp+30h] [rbp-69h] BYREF
  __int64 v45; // [rsp+38h] [rbp-61h] BYREF
  int v46; // [rsp+44h] [rbp-55h]
  _BYTE v47[32]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v48[2]; // [rsp+70h] [rbp-29h] BYREF
  __int16 v49; // [rsp+80h] [rbp-19h]
  struct _POINTL v50; // [rsp+A0h] [rbp+7h] BYREF
  LONG v51; // [rsp+A8h] [rbp+Fh]
  LONG v52; // [rsp+ACh] [rbp+13h]
  LONG v53; // [rsp+B0h] [rbp+17h]
  int v54; // [rsp+B4h] [rbp+1Bh]
  LONG v55; // [rsp+B8h] [rbp+1Fh]
  int v56; // [rsp+BCh] [rbp+23h]

  v43[0] = 0LL;
  v43[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v43, a1);
  if ( !v43[0] )
  {
    EngSetLastError(6u);
    v16 = 0;
    goto LABEL_21;
  }
  v48[0] = 0LL;
  v48[1] = 0LL;
  v49 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v47, (struct XDCOBJ *)v43, 1);
  if ( (v47[24] & 1) != 0 )
  {
    v3 = v43[0];
    if ( DC::prgnRao(v43[0]) )
      v4 = DC::prgnRao(v3);
    else
      v4 = DC::prgnVisSnap(v3);
    v5 = *(_OWORD *)((char *)v4 + 88);
    v44 = v4;
    *(_OWORD *)a2 = v5;
    if ( *a2 >= a2[2] || a2[1] >= a2[3] )
    {
      *(_QWORD *)a2 = 0LL;
      v16 = 1;
      *((_QWORD *)a2 + 1) = 0LL;
LABEL_17:
      if ( v16 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v3 + 122) + 108LL) & 1) != 0 )
        {
          v41 = *a2;
          v42 = a2[2];
          if ( *a2 > v42 )
          {
            *a2 = v42;
            a2[2] = v41;
          }
        }
      }
      goto LABEL_19;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v45, (struct XDCOBJ *)v43, 0x80000402);
    v6 = v45;
    if ( v45 )
    {
      v3 = v43[0];
      v7 = a2[2];
      v8 = a2[1];
      v9 = (char *)v43[0] + 1024;
      if ( (*((_DWORD *)v43[0] + 10) & 1) == 0 )
        v9 = (char *)v43[0] + 1016;
      v10 = *a2 - *(_DWORD *)v9;
      *a2 = v10;
      v11 = v7 - *(_DWORD *)v9;
      a2[2] = v11;
      v12 = v8 - *((_DWORD *)v9 + 1);
      a2[1] = v12;
      v13 = a2[3] - *((_DWORD *)v9 + 1);
      a2[3] = v13;
      v14 = *(_DWORD *)(v6 + 32);
      if ( (v14 & 1) != 0 )
      {
        if ( (v14 & 0x43) == 0x43 || (v18 = (unsigned int)bCvtPts1(v6, a2, 2LL) == 0, v15 = 0, !v18) )
          v15 = 1;
        if ( v46 )
        {
          ++*a2;
          ++a2[2];
        }
        if ( v15 )
          v16 = RGNOBJ::iComplexity((RGNOBJ *)&v44);
        else
          v16 = 0;
      }
      else
      {
        v50.x = v10;
        v51 = v11;
        v53 = v10;
        v54 = v13;
        v55 = v11;
        v56 = v13;
        v50.y = v12;
        v52 = v12;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v45, &v50, 4uLL);
        v19 = v51;
        v20 = v51;
        x = v50.x;
        v22 = v53;
        if ( v50.x < v51 )
          v20 = v50.x;
        if ( v20 >= v53 )
        {
          v23 = v53;
        }
        else
        {
          v23 = v51;
          if ( v50.x < v51 )
            v23 = v50.x;
        }
        v24 = v55;
        if ( v23 >= v55 )
        {
          v26 = v55;
        }
        else
        {
          v25 = v51;
          if ( v50.x < v51 )
            v25 = v50.x;
          if ( v25 >= v53 )
          {
            v26 = v53;
          }
          else
          {
            v26 = v51;
            if ( v50.x < v51 )
              v26 = v50.x;
          }
        }
        v27 = v52;
        y = v50.y;
        v29 = v50.y < v52;
        v30 = v54;
        *a2 = v26;
        v31 = v27;
        if ( v29 )
          v31 = y;
        if ( v31 >= v30 )
        {
          v32 = v30;
        }
        else
        {
          v32 = v27;
          if ( y < v27 )
            v32 = y;
        }
        if ( v32 >= v56 )
        {
          v34 = v56;
        }
        else
        {
          v33 = v27;
          if ( y < v27 )
            v33 = y;
          if ( v33 >= v30 )
          {
            v34 = v30;
          }
          else
          {
            v34 = v27;
            if ( y < v27 )
              v34 = y;
          }
        }
        a2[1] = v34;
        v35 = v19;
        if ( x > v19 )
          v35 = x;
        if ( v35 <= v22 )
        {
          v36 = v22;
        }
        else
        {
          v36 = v19;
          if ( x > v19 )
            v36 = x;
        }
        if ( v36 <= v24 )
        {
          v19 = v24;
        }
        else
        {
          v37 = v19;
          if ( x > v19 )
            v37 = x;
          if ( v37 <= v22 )
          {
            v19 = v22;
          }
          else if ( x > v19 )
          {
            v19 = x;
          }
        }
        a2[2] = v19;
        v38 = v27;
        if ( y > v27 )
          v38 = y;
        if ( v38 <= v30 )
        {
          v39 = v30;
        }
        else
        {
          v39 = v27;
          if ( y > v27 )
            v39 = y;
        }
        if ( v39 <= v56 )
        {
          v27 = v56;
        }
        else
        {
          v40 = v27;
          if ( y > v27 )
            v40 = y;
          if ( v40 <= v30 )
          {
            v27 = v30;
          }
          else if ( y > v27 )
          {
            v27 = y;
          }
        }
        a2[3] = v27;
        v16 = 3;
      }
      goto LABEL_17;
    }
  }
  else if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v43) )
  {
    *(_QWORD *)a2 = 0LL;
    v16 = 3;
    *((_QWORD *)a2 + 1) = 0LL;
    goto LABEL_19;
  }
  v16 = 0;
LABEL_19:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v47);
  if ( v48[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v48);
LABEL_21:
  if ( v43[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v43);
  return v16;
}
