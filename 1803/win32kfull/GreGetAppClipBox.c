/*
 * XREFs of GreGetAppClipBox @ 0x1C009B63C
 * Callers:
 *     NtGdiGetAppClipBox @ 0x1C009B5E0 (NtGdiGetAppClipBox.c)
 * Callees:
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008BC88 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C008BCDC (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009C1AC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     bCvtPts1 @ 0x1C00A8418 (bCvtPts1.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetAppClipBox(HDC a1, LONG *a2)
{
  DC *v3; // r14
  struct REGION *v4; // rax
  struct REGION *v5; // rsi
  __int64 v6; // r9
  LONG v7; // r8d
  LONG v8; // r10d
  __int64 v9; // rcx
  LONG v10; // edx
  LONG v11; // r8d
  LONG v12; // r10d
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rbx
  bool v19; // zf
  LONG v20; // edx
  LONG v21; // eax
  LONG x; // r9d
  LONG v23; // r11d
  LONG v24; // eax
  LONG v25; // edi
  LONG v26; // eax
  LONG v27; // eax
  LONG v28; // ecx
  LONG y; // r8d
  bool v30; // cc
  LONG v31; // r10d
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // esi
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // eax
  LONG v40; // eax
  LONG v41; // eax
  LONG v42; // eax
  LONG v43; // eax
  LONG v44; // ecx
  DC *v45; // [rsp+20h] [rbp-79h] BYREF
  __int64 v46; // [rsp+28h] [rbp-71h]
  int v47; // [rsp+30h] [rbp-69h] BYREF
  __int64 v48; // [rsp+38h] [rbp-61h] BYREF
  int v49; // [rsp+44h] [rbp-55h]
  _BYTE v50[32]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v51; // [rsp+70h] [rbp-29h]
  __int64 v52; // [rsp+78h] [rbp-21h]
  struct _POINTL v53; // [rsp+A0h] [rbp+7h] BYREF
  LONG v54; // [rsp+A8h] [rbp+Fh]
  LONG v55; // [rsp+ACh] [rbp+13h]
  LONG v56; // [rsp+B0h] [rbp+17h]
  int v57; // [rsp+B4h] [rbp+1Bh]
  LONG v58; // [rsp+B8h] [rbp+1Fh]
  int v59; // [rsp+BCh] [rbp+23h]

  v45 = 0LL;
  v46 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v45, a1);
  if ( !v45 )
  {
    EngSetLastError(6u);
    v16 = 0;
    goto LABEL_18;
  }
  v51 = 0LL;
  v52 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v50, (struct XDCOBJ *)&v45, 1);
  if ( (v50[24] & 1) != 0 )
  {
    v3 = v45;
    if ( DC::prgnRao(v45) )
      v4 = DC::prgnRao(v3);
    else
      v4 = DC::prgnVisSnap(v3);
    v5 = v4;
    *(_OWORD *)a2 = *(_OWORD *)((char *)v4 + 88);
    if ( *a2 >= a2[2] || a2[1] >= a2[3] )
    {
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      goto LABEL_26;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v48, (struct XDCOBJ *)&v45, 0x80000402);
    v6 = v48;
    if ( v48 )
    {
      v3 = v45;
      v7 = a2[2];
      v8 = a2[1];
      v9 = *((_DWORD *)v45 + 10) & 1;
      v10 = *a2 - *((_DWORD *)v45 + 2 * v9 + 356);
      *a2 = v10;
      v11 = v7 - *((_DWORD *)v3 + 2 * v9 + 356);
      a2[2] = v11;
      v12 = v8 - *((_DWORD *)v3 + 2 * v9 + 357);
      a2[1] = v12;
      v13 = a2[3] - *((_DWORD *)v3 + 2 * v9 + 357);
      a2[3] = v13;
      v14 = *(_DWORD *)(v6 + 32);
      if ( (v14 & 1) == 0 )
      {
        v53.x = v10;
        v54 = v11;
        v56 = v10;
        v57 = v13;
        v58 = v11;
        v59 = v13;
        v53.y = v12;
        v55 = v12;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v48, &v53, 4uLL);
        v20 = v54;
        v21 = v54;
        x = v53.x;
        v23 = v56;
        if ( v53.x < v54 )
          v21 = v53.x;
        if ( v21 >= v56 )
        {
          v24 = v56;
        }
        else
        {
          v24 = v54;
          if ( v53.x < v54 )
            v24 = v53.x;
        }
        v25 = v58;
        if ( v24 >= v58 )
        {
          v27 = v58;
        }
        else
        {
          v26 = v54;
          if ( v53.x < v54 )
            v26 = v53.x;
          if ( v26 >= v56 )
          {
            v27 = v56;
          }
          else
          {
            v27 = v54;
            if ( v53.x < v54 )
              v27 = v53.x;
          }
        }
        v28 = v55;
        y = v53.y;
        v30 = v53.y < v55;
        v31 = v57;
        *a2 = v27;
        v32 = v28;
        if ( v30 )
          v32 = y;
        if ( v32 >= v31 )
        {
          v33 = v31;
        }
        else
        {
          v33 = v28;
          if ( y < v28 )
            v33 = y;
        }
        v34 = v59;
        if ( v33 >= v59 )
        {
          v36 = v59;
        }
        else
        {
          v35 = v28;
          if ( y < v28 )
            v35 = y;
          if ( v35 >= v31 )
          {
            v36 = v31;
          }
          else
          {
            v36 = v28;
            if ( y < v28 )
              v36 = y;
          }
        }
        a2[1] = v36;
        v37 = v20;
        if ( x > v20 )
          v37 = x;
        if ( v37 <= v23 )
        {
          v38 = v23;
        }
        else
        {
          v38 = v20;
          if ( x > v20 )
            v38 = x;
        }
        if ( v38 <= v25 )
        {
          v20 = v25;
        }
        else
        {
          v39 = v20;
          if ( x > v20 )
            v39 = x;
          if ( v39 <= v23 )
          {
            v20 = v23;
          }
          else if ( x > v20 )
          {
            v20 = x;
          }
        }
        a2[2] = v20;
        v40 = v28;
        if ( y > v28 )
          v40 = y;
        if ( v40 <= v31 )
        {
          v41 = v31;
        }
        else
        {
          v41 = v28;
          if ( y > v28 )
            v41 = y;
        }
        if ( v41 <= v34 )
        {
          v28 = v34;
        }
        else
        {
          v42 = v28;
          if ( y > v28 )
            v42 = y;
          if ( v42 <= v31 )
          {
            v28 = v31;
          }
          else if ( y > v28 )
          {
            v28 = y;
          }
        }
        a2[3] = v28;
        v16 = 3;
        goto LABEL_16;
      }
      if ( (v14 & 0x43) == 0x43 || (v19 = (unsigned int)bCvtPts1(v6, a2, 2LL) == 0, v15 = 0, !v19) )
        v15 = 1;
      if ( v49 )
      {
        ++*a2;
        ++a2[2];
      }
      if ( v15 )
      {
        if ( *((_DWORD *)v5 + 21) != 1 )
        {
          v16 = (*((_DWORD *)v5 + 20) > 0xA0u) + 2;
LABEL_16:
          if ( (*(_DWORD *)(*((_QWORD *)v3 + 10) + 312LL) & 1) != 0 )
          {
            v43 = *a2;
            v44 = a2[2];
            if ( *a2 > v44 )
            {
              *a2 = v44;
              a2[2] = v43;
            }
          }
          goto LABEL_17;
        }
LABEL_26:
        v16 = 1;
        goto LABEL_16;
      }
    }
    goto LABEL_29;
  }
  if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)&v45) )
  {
LABEL_29:
    v16 = 0;
    goto LABEL_17;
  }
  *(_QWORD *)a2 = 0LL;
  v16 = 3;
  *((_QWORD *)a2 + 1) = 0LL;
LABEL_17:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v50);
LABEL_18:
  if ( v45 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v45);
    v47 = 0;
    v17 = *(_QWORD *)v45;
    HmgDecrementExclusiveReferenceCountEx(v45, HIDWORD(v46), &v47);
    if ( v47 )
      bDeleteDCInternalEx(v17, 0LL);
  }
  return v16;
}
