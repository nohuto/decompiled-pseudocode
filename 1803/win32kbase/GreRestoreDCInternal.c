/*
 * XREFs of GreRestoreDCInternal @ 0x1C0077D70
 * Callers:
 *     GreRestoreDC @ 0x1C0071730 (GreRestoreDC.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001DB74 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0024EAC (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0026880 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0026B90 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0026E40 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00271A0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00274B0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0028A00 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0028CD0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029280 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C0029460 (HmgPentryFromPobj.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C002A644 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002AAF0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002D39C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreLockVisRgn @ 0x1C00333D0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     GreSelectPalette @ 0x1C003F790 (GreSelectPalette.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F93C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003F968 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreDCSelectPen @ 0x1C0059C10 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C0059E10 (GreDCSelectBrush.c)
 *     HmgLockAllOwners @ 0x1C005E6E0 (HmgLockAllOwners.c)
 *     vRestoreRegion @ 0x1C005FF10 (vRestoreRegion.c)
 *     hbmSelectBitmap @ 0x1C00638E0 (hbmSelectBitmap.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 */

__int64 __fastcall GreRestoreDCInternal(HDC a1, int a2, int a3)
{
  int v6; // r8d
  DC *v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rbx
  int v12; // r15d
  int v13; // r13d
  __int64 v14; // rcx
  int v15; // eax
  DC *v16; // rcx
  DC *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // r8d
  DC *v21; // rcx
  int v22; // edx
  __int64 v23; // r8
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // ecx
  __int64 v27; // rdx
  int v28; // r8d
  ULONG v29; // ecx
  struct _ERESOURCE *v31; // [rsp+20h] [rbp-30h] BYREF
  DC *v32[2]; // [rsp+28h] [rbp-28h] BYREF
  DC *v33[3]; // [rsp+38h] [rbp-18h] BYREF
  struct OBJECT *v34; // [rsp+98h] [rbp+48h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v32, a1);
  v7 = v32[0];
  v8 = 1;
  if ( !v32[0] || !a3 && (*(_DWORD *)(HmgPentryFromPobj((_DWORD *)v32[0]) + 8) & 0xFFFFFFFE) == 0 )
  {
    v29 = 6;
    goto LABEL_61;
  }
  v9 = *((_QWORD *)v7 + 10);
  v10 = *(_DWORD *)(v9 + 8);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush((__int64)v7, *(_QWORD *)(v9 + 16));
    v7 = v32[0];
  }
  if ( (v10 & 0x2000) != 0 )
  {
    GreDCSelectPen((struct HOBJ__ ***)v7, *(struct HOBJ__ **)(*((_QWORD *)v7 + 10) + 24LL));
    v7 = v32[0];
  }
  if ( a2 < 0 )
    a2 += *((_DWORD *)v7 + 28);
  if ( a2 < 1 || a2 >= *((_DWORD *)v7 + 28) )
  {
    v29 = 87;
LABEL_61:
    EngSetLastError(v29);
    v8 = 0;
    goto LABEL_62;
  }
  v11 = *((_QWORD *)v7 + 6);
  if ( (*(_DWORD *)(v11 + 40) & 1) != 0 )
  {
    GreLockVisRgn(*((_QWORD *)v7 + 6), v9, v6);
    v7 = v32[0];
  }
  v12 = *((_DWORD *)v7 + 9) & 0x800;
  if ( v12 )
  {
    DC::bMakeInfoDC(v7, 0);
    v7 = v32[0];
  }
  v13 = *(_DWORD *)(*((_QWORD *)v7 + 10) + 308LL);
  while ( 1 )
  {
    v33[1] = 0LL;
    v33[0] = 0LL;
    v33[0] = (DC *)HmgLockAllOwners(*((_QWORD *)v7 + 15), 1);
    if ( !v33[0] )
      break;
    DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v32[0] + 18));
    DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v32[0] + 19));
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)v32[0] + 20));
    DEC_SHARE_REF_CNT(*((struct OBJECT **)v32[0] + 13));
    vRestoreRegion((__int64)v32);
    if ( (int)IsvRestorePathSupported() >= 0 )
      vRestorePathWrap(v32, (unsigned int)(*((_DWORD *)v32[0] + 28) - 1));
    v14 = *((_QWORD *)v32[0] + 63);
    if ( v14 )
    {
      if ( *((_DWORD *)v32[0] + 8) == 1 )
      {
        hbmSelectBitmap(a1);
      }
      else
      {
        v15 = *(_DWORD *)(v14 + 112);
        if ( (v15 & 0x800) != 0 )
        {
          DEC_SHARE_REF_CNT((struct OBJECT *)v14);
        }
        else if ( v15 >= 0 )
        {
          SURFACE::vDec_cRef((SURFACE *)v14);
        }
      }
    }
    v31 = (struct _ERESOURCE *)ghsemPalette;
    EngAcquireSemaphore(ghsemPalette);
    v16 = v33[0];
    v17 = v32[0];
    if ( *((_QWORD *)v32[0] + 11) != *((_QWORD *)v33[0] + 11) )
    {
      GreSelectPalette(a1, *((HPALETTE *)v33[0] + 11), 1);
      v17 = v32[0];
      v16 = v33[0];
    }
    if ( *((_QWORD *)v17 + 12) != *((_QWORD *)v16 + 12) )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v34, *((HPALETTE *)v17 + 11));
      *((_QWORD *)v33[0] + 12) = v34;
      EPALOBJ::~EPALOBJ(&v34);
      v16 = v33[0];
    }
    v18 = *((_QWORD *)v16 + 12);
    if ( (struct PALETTE *)v18 != ppalDefault )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v18 + 56));
      v16 = v33[0];
    }
    DC::vCopyTo(v16, v32);
    XDCOBJ::bDeleteDC((XDCOBJ *)v33, 0);
    SEMOBJ::vUnlock(&v31, v19, v20);
    if ( v33[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v33);
    v7 = v32[0];
    if ( a2 >= *((_DWORD *)v32[0] + 28) )
      goto LABEL_40;
  }
  EngSetLastError(6u);
  v8 = 0;
  if ( v33[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v33);
  v7 = v32[0];
LABEL_40:
  if ( v13 != *(_DWORD *)(*((_QWORD *)v7 + 10) + 308LL) )
  {
    *((_DWORD *)v7 + 65) |= 1u;
    v7 = v32[0];
  }
  if ( v12 )
  {
    DC::bMakeInfoDC(v7, 1);
    v7 = v32[0];
  }
  DC::vReleaseRao(v7);
  DC::vUpdate_VisRect(v32[0], *((struct REGION **)v32[0] + 191));
  *(_DWORD *)(*((_QWORD *)v32[0] + 10) + 8LL) |= 0x12001Fu;
  v21 = v32[0];
  if ( *((_DWORD *)v32[0] + 8) == 1 )
  {
    DC::bSetDefaultRegion(v32[0]);
    v21 = v32[0];
  }
  v22 = *((_DWORD *)v21 + 9);
  v23 = *((_QWORD *)v21 + 63);
  if ( (v22 & 1) != 0
    || *((_DWORD *)v21 + 8) == 1
    && v23
    && ((v24 = *(_DWORD *)(v23 + 112), (v24 & 0x4000) != 0) || (v24 & 0x800000) != 0 && (*(_DWORD *)(v11 + 40) & 1) != 0) )
  {
    *((_DWORD *)v21 + 9) = v22 | 0x200;
    v25 = *((_DWORD *)v32[0] + 9);
    if ( (*(_DWORD *)(v23 + 112) & 0x200) != 0 )
      v26 = v25 | 0x8000;
    else
      v26 = v25 & 0xFFFF7FFF;
    *((_DWORD *)v32[0] + 9) = v26;
  }
  else
  {
    *((_DWORD *)v21 + 9) = v22 & 0xFFFFFDFF;
  }
  DC::vCalcFillOrigin(v32[0]);
  if ( (*(_DWORD *)(v11 + 40) & 1) != 0 )
    GreUnlockVisRgn(v11, v27, v28);
LABEL_62:
  if ( v32[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v32);
  return v8;
}
