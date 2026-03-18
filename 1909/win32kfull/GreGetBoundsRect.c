/*
 * XREFs of GreGetBoundsRect @ 0x1C0127818
 * Callers:
 *     NtGdiGetBoundsRect @ 0x1C01277B0 (NtGdiGetBoundsRect.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A3D3C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A8A00 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C01256C4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269334 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetBoundsRect(__int64 a1, struct _POINTL *a2, __int16 a3)
{
  struct _POINTL *v4; // rsi
  DC *v5; // r9
  struct _DC_ATTR *UserAttr; // rax
  unsigned int v7; // edi
  char *v8; // rbx
  struct _DC_ATTR *v9; // rax
  __int64 v10; // rbx
  __m128i v12; // xmm1
  char *v13; // rcx
  __int32 v14; // edx
  signed __int32 v15; // r8d
  int v16; // eax
  LONG v17; // ecx
  LONG v18; // r9d
  LONG v19; // eax
  LONG v20; // eax
  LONG v21; // eax
  LONG v22; // eax
  __int128 v23; // xmm0
  LONG v24; // ecx
  LONG v25; // eax
  LONG v26; // edx
  LONG v27; // r8d
  LONG v28; // eax
  LONG v29; // r9d
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // edx
  LONG v36; // r8d
  LONG v37; // ecx
  LONG v38; // eax
  LONG v39; // eax
  LONG v40; // r9d
  LONG v41; // eax
  LONG v42; // eax
  LONG v43; // eax
  LONG v44; // eax
  LONG v45; // eax
  DC *v46; // [rsp+20h] [rbp-79h] BYREF
  __int64 v47; // [rsp+28h] [rbp-71h]
  int v48; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v49[3]; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v50[32]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v51[2]; // [rsp+70h] [rbp-29h] BYREF
  __int16 v52; // [rsp+80h] [rbp-19h]
  struct _POINTL v53[2]; // [rsp+A0h] [rbp+7h] BYREF
  LONG x; // [rsp+B0h] [rbp+17h]
  LONG y; // [rsp+B4h] [rbp+1Bh]
  LONG v56; // [rsp+B8h] [rbp+1Fh]
  LONG v57; // [rsp+BCh] [rbp+23h]

  v4 = a2;
  v47 = 0LL;
  LOBYTE(a2) = 1;
  v46 = (DC *)HmgLockEx(a1, a2, 0LL);
  v5 = v46;
  if ( !v46 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_53;
  }
  if ( (*((_DWORD *)v46 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v46);
    if ( UserAttr && !DC::SaveAttributes(v46, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v46 + 3);
      v5 = 0LL;
      v46 = 0LL;
      goto LABEL_48;
    }
    *((_DWORD *)v46 + 11) |= 2u;
    v5 = v46;
    LODWORD(v47) = 1;
  }
  if ( (*((_DWORD *)v5 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v5);
LABEL_53:
    v5 = v46;
  }
  v7 = 3;
  if ( !v5 )
  {
LABEL_48:
    v7 = 0;
    goto LABEL_11;
  }
  v8 = 0LL;
  if ( a3 < 0 )
  {
    v8 = (char *)v5 + 1064;
    if ( *((_DWORD *)v5 + 266) < *((_DWORD *)v5 + 268) && *((_DWORD *)v5 + 267) < *((_DWORD *)v5 + 269) )
      goto LABEL_23;
    goto LABEL_10;
  }
  if ( (a3 & 0x4000) != 0 )
  {
    v8 = (char *)v5 + 1080;
    if ( !IsRectEmptyInl((const struct tagRECT *)((char *)v5 + 1080)) )
    {
LABEL_23:
      *(_OWORD *)&v4->x = *(_OWORD *)v8;
LABEL_24:
      if ( (a3 & 1) != 0 )
      {
        *((_DWORD *)v8 + 1) = 0x7FFFFFFF;
        *(_DWORD *)v8 = 0x7FFFFFFF;
        *((_DWORD *)v8 + 3) = 0x80000000;
        *((_DWORD *)v8 + 2) = 0x80000000;
        v5 = v46;
      }
      goto LABEL_11;
    }
LABEL_10:
    v7 = 1;
    goto LABEL_11;
  }
  if ( IsRectEmptyInl((const struct tagRECT *)((char *)v5 + 1096)) )
    goto LABEL_10;
  v51[0] = 0LL;
  v51[1] = 0LL;
  v52 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v50, (struct XDCOBJ *)&v46, 0);
  if ( (v50[24] & 1) != 0 )
  {
    v12 = *(__m128i *)((char *)XDCOBJ::prgnEffRao(&v46) + 88);
    v8 = (char *)v46 + 1096;
    v13 = (char *)v46 + 1024;
    if ( (*((_DWORD *)v46 + 10) & 1) == 0 )
      v13 = (char *)v46 + 1016;
    v14 = v12.m128i_i32[0] - *(_DWORD *)v13;
    v15 = _mm_srli_si128(v12, 8).m128i_u32[0] - *(_DWORD *)v13;
    v16 = *((_DWORD *)v13 + 1);
    v17 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4)) - v16;
    v18 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12)) - v16;
    v19 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 <= v14 )
      v19 = v14;
    v4->x = v19;
    v20 = *((_DWORD *)v8 + 2);
    if ( v20 >= v15 )
      v20 = v15;
    v4[1].x = v20;
    v21 = *((_DWORD *)v8 + 1);
    if ( v21 <= v17 )
      v21 = v17;
    v4->y = v21;
    v22 = *((_DWORD *)v8 + 3);
    if ( v22 >= v18 )
      v22 = v18;
    v4[1].y = v22;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v49, (struct XDCOBJ *)&v46, 1026);
    if ( !v49[0] )
      goto LABEL_46;
    if ( (*(_DWORD *)(v49[0] + 32LL) & 1) != 0 )
    {
      if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v49, v4, 2LL) )
        goto LABEL_42;
      goto LABEL_46;
    }
    v23 = *(_OWORD *)&v4->x;
    x = v4->x;
    y = v4[1].y;
    v56 = v4[1].x;
    v57 = v4->y;
    *(_OWORD *)&v53[0].x = v23;
    if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v49, v53, 4LL) )
    {
LABEL_46:
      v7 = 0;
      goto LABEL_42;
    }
    v24 = v53[1].x;
    v25 = v53[1].x;
    v26 = v53[0].x;
    v27 = x;
    if ( v53[0].x < v53[1].x )
      v25 = v53[0].x;
    if ( v25 >= x )
    {
      v28 = x;
    }
    else
    {
      v28 = v53[1].x;
      if ( v53[0].x < v53[1].x )
        v28 = v53[0].x;
    }
    v29 = v56;
    if ( v28 >= v56 )
    {
      v31 = v56;
    }
    else
    {
      v30 = v53[1].x;
      if ( v53[0].x < v53[1].x )
        v30 = v53[0].x;
      if ( v30 >= x )
      {
        v31 = x;
      }
      else
      {
        v31 = v53[1].x;
        if ( v53[0].x < v53[1].x )
          v31 = v53[0].x;
      }
    }
    v4->x = v31;
    v32 = v24;
    if ( v26 > v24 )
      v32 = v26;
    if ( v32 <= v27 )
    {
      v33 = v27;
    }
    else
    {
      v33 = v24;
      if ( v26 > v24 )
        v33 = v26;
    }
    if ( v33 <= v29 )
    {
      v24 = v29;
    }
    else
    {
      v34 = v24;
      if ( v26 > v24 )
        v34 = v26;
      if ( v34 <= v27 )
      {
        v24 = v27;
      }
      else if ( v26 > v24 )
      {
        v24 = v26;
      }
    }
    v35 = v53[0].y;
    v36 = y;
    v4[1].x = v24;
    v37 = v53[1].y;
    v38 = v53[1].y;
    if ( v35 < v53[1].y )
      v38 = v35;
    if ( v38 >= v36 )
    {
      v39 = v36;
    }
    else
    {
      v39 = v53[1].y;
      if ( v35 < v53[1].y )
        v39 = v35;
    }
    v40 = v57;
    if ( v39 >= v57 )
    {
      v42 = v57;
    }
    else
    {
      v41 = v53[1].y;
      if ( v35 < v53[1].y )
        v41 = v35;
      if ( v41 >= v36 )
      {
        v42 = v36;
      }
      else
      {
        v42 = v53[1].y;
        if ( v35 < v53[1].y )
          v42 = v35;
      }
    }
    v4->y = v42;
    v43 = v37;
    if ( v35 > v37 )
      v43 = v35;
    if ( v43 <= v36 )
    {
      v44 = v36;
    }
    else
    {
      v44 = v37;
      if ( v35 > v37 )
        v44 = v35;
    }
    if ( v44 <= v40 )
    {
      v37 = v40;
    }
    else
    {
      v45 = v37;
      if ( v35 > v37 )
        v45 = v35;
      if ( v45 <= v36 )
      {
        v37 = v36;
      }
      else if ( v35 > v37 )
      {
        v37 = v35;
      }
    }
    v4[1].y = v37;
  }
  else
  {
    v7 = XDCOBJ::bFullScreen((XDCOBJ *)&v46) != 0;
  }
LABEL_42:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v50);
  if ( v51[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v51);
  v5 = v46;
  if ( v7 == 3 )
    goto LABEL_24;
LABEL_11:
  if ( v5 )
  {
    if ( (_DWORD)v47 && (*((_DWORD *)v5 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v47) )
      {
        v9 = XDCOBJ::GetUserAttr((XDCOBJ *)&v46);
        if ( v9 )
          DC::RestoreAttributes(v46, v9);
        v5 = v46;
      }
      *((_DWORD *)v5 + 11) &= ~2u;
      v5 = v46;
      LODWORD(v47) = 0;
    }
    v48 = 0;
    v10 = *(_QWORD *)v5;
    HmgDecrementExclusiveReferenceCountEx(v5, HIDWORD(v47), &v48);
    if ( v48 )
      bDeleteDCInternalEx(v10, 0LL);
  }
  return v7;
}
