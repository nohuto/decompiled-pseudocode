/*
 * XREFs of GreRestoreDCInternal @ 0x1C00BCED0
 * Callers:
 *     GreRestoreDC @ 0x1C0130560 (GreRestoreDC.c)
 * Callees:
 *     vRestoreRegion @ 0x1C0016EA0 (vRestoreRegion.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C001A294 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001AA60 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C001AAB8 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreDCSelectBrush @ 0x1C001AAE0 (GreDCSelectBrush.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001AD40 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001B230 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C001B5E0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C001B7A0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C001CAA0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C001D460 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C001DF00 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C001F0B0 (HmgPentryFromPobj.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0027830 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029F78 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreUnlockVisRgn @ 0x1C002A8A0 (GreUnlockVisRgn.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002B778 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreLockVisRgn @ 0x1C002BA20 (GreLockVisRgn.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C003A5E0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003FD3C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreSelectPalette @ 0x1C0076B30 (GreSelectPalette.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0077098 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     HmgLockAllOwners @ 0x1C0077200 (HmgLockAllOwners.c)
 *     GreDCSelectPen @ 0x1C007E2F0 (GreDCSelectPen.c)
 *     hbmSelectBitmap @ 0x1C0085340 (hbmSelectBitmap.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 */

__int64 __fastcall GreRestoreDCInternal(HDC a1, int a2, int a3)
{
  __int64 v6; // r8
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
  __int64 v20; // r8
  DC *v21; // rcx
  int v22; // edx
  __int64 v23; // r8
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // r8
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
  v9 = *((_QWORD *)v7 + 122);
  v10 = *(_DWORD *)(v9 + 152);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush((__int64)v7, *(_QWORD *)(v9 + 160));
    v7 = v32[0];
  }
  if ( (v10 & 0x2000) != 0 )
  {
    GreDCSelectPen((struct HOBJ__ ***)v7, *(struct HOBJ__ **)(*((_QWORD *)v7 + 122) + 168LL));
    v7 = v32[0];
  }
  if ( a2 < 0 )
    a2 += *((_DWORD *)v7 + 26);
  if ( a2 < 1 || a2 >= *((_DWORD *)v7 + 26) )
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
  v13 = *(_DWORD *)(*((_QWORD *)v7 + 122) + 104LL);
  while ( 1 )
  {
    v33[1] = 0LL;
    v33[0] = 0LL;
    v33[0] = (DC *)HmgLockAllOwners(*((_QWORD *)v7 + 14), 1);
    if ( !v33[0] )
      break;
    DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v32[0] + 17));
    DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v32[0] + 18));
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)v32[0] + 19));
    DEC_SHARE_REF_CNT(*((struct OBJECT **)v32[0] + 12));
    vRestoreRegion((__int64)v32);
    if ( (int)IsvRestorePathSupported() >= 0 )
      vRestorePathWrap(v32, (unsigned int)(*((_DWORD *)v32[0] + 26) - 1));
    v14 = *((_QWORD *)v32[0] + 62);
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
    if ( *((_QWORD *)v32[0] + 10) != *((_QWORD *)v33[0] + 10) )
    {
      GreSelectPalette(a1, *((HPALETTE *)v33[0] + 10), 1);
      v17 = v32[0];
      v16 = v33[0];
    }
    if ( *((_QWORD *)v17 + 11) != *((_QWORD *)v16 + 11) )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v34, *((HPALETTE *)v17 + 10));
      *((_QWORD *)v33[0] + 11) = v34;
      EPALOBJ::~EPALOBJ(&v34);
      v16 = v33[0];
    }
    v18 = *((_QWORD *)v16 + 11);
    if ( (struct PALETTE *)v18 != ppalDefault )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v18 + 56));
      v16 = v33[0];
    }
    DC::vCopyTo(v16, (struct XDCOBJ *)v32);
    XDCOBJ::bDeleteDC(v33, 0);
    SEMOBJ::vUnlock(&v31, v19, v20);
    if ( v33[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v33);
    v7 = v32[0];
    if ( a2 >= *((_DWORD *)v32[0] + 26) )
      goto LABEL_40;
  }
  EngSetLastError(6u);
  v8 = 0;
  if ( v33[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v33);
  v7 = v32[0];
LABEL_40:
  if ( v13 != *(_DWORD *)(*((_QWORD *)v7 + 122) + 104LL) )
  {
    *((_DWORD *)v7 + 63) |= 1u;
    v7 = v32[0];
  }
  if ( v12 )
  {
    DC::bMakeInfoDC(v7, 1);
    v7 = v32[0];
  }
  DC::vReleaseRao(v7);
  DC::vUpdate_VisRect(v32[0], *((struct REGION **)v32[0] + 140));
  *(_DWORD *)(*((_QWORD *)v32[0] + 122) + 152LL) |= 0x12001Fu;
  v21 = v32[0];
  if ( *((_DWORD *)v32[0] + 8) == 1 )
  {
    DC::bSetDefaultRegion(v32[0]);
    v21 = v32[0];
  }
  v22 = *((_DWORD *)v21 + 9);
  v23 = *((_QWORD *)v21 + 62);
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
