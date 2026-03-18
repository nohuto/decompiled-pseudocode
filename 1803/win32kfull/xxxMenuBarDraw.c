/*
 * XREFs of xxxMenuBarDraw @ 0x1C0209284
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C0075134 (xxxDrawWindowFrame.c)
 *     xxxDWP_DoNCActivate @ 0x1C00C2AA8 (xxxDWP_DoNCActivate.c)
 * Callees:
 *     ThreadLockMenuNoModify @ 0x1C000EBFC (ThreadLockMenuNoModify.c)
 *     xxxMenuBarCompute @ 0x1C000FB5C (xxxMenuBarCompute.c)
 *     xxxMenuDraw @ 0x1C00103BC (xxxMenuDraw.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     GrePolyPatBlt @ 0x1C009F6B0 (GrePolyPatBlt.c)
 *     GetAppCompatFlags2 @ 0x1C00C3A80 (GetAppCompatFlags2.c)
 *     GetCaptionHeight @ 0x1C00F6358 (GetCaptionHeight.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0207DA4 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxMenuBarDraw(_QWORD *a1, HDC a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // rcx
  int v12; // r15d
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  _QWORD v27[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v28; // [rsp+48h] [rbp-19h]
  __int64 v29; // [rsp+50h] [rbp-11h] BYREF
  __int64 v30; // [rsp+58h] [rbp-9h]
  _DWORD v31[4]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v32; // [rsp+78h] [rbp+17h]
  int v33; // [rsp+80h] [rbp+1Fh]
  int v34; // [rsp+84h] [rbp+23h]
  int v35; // [rsp+88h] [rbp+27h]
  int v36; // [rsp+8Ch] [rbp+2Bh]
  __int64 v37; // [rsp+90h] [rbp+2Fh]
  int v38; // [rsp+C8h] [rbp+67h]

  SmartObjStackRefBase<tagMENU>::Init(v27, 0LL);
  v8 = a1[18];
  v38 = 0;
  v28 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v27, v8);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v27) )
  {
    v10 = 1;
  }
  else
  {
    if ( (*(_BYTE *)(a1[5] + 16LL) & 0x40) != 0 && (v9 = a1[2], *(_QWORD *)(v9 + 424) == gpqForeground)
      || (GetAppCompatFlags2(0x400u, v9) & 0x80u) != 0LL )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v27[0] + 40LL) + 40LL) &= ~0x10u;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v27[0] + 40LL) + 40LL) |= 0x10u;
    }
    v11 = v28;
    if ( !v28 )
      v11 = *(_QWORD *)v27[0];
    ThreadLockMenuNoModify(v11, &v29);
    v12 = GetCaptionHeight((__int64)a1) + a4;
    v13 = *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL);
    if ( a1 != *(_QWORD **)(*(_QWORD *)v27[0] + 80LL)
      || !*(_DWORD *)(*(_QWORD *)v27[0] + 64LL)
      || !*(_DWORD *)(*(_QWORD *)v27[0] + 68LL) )
    {
      xxxMenuBarCompute(
        (__int64)v27,
        (__int64)a1,
        v12,
        a3,
        *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL));
    }
    if ( *(_DWORD *)(*(_QWORD *)v27[0] + 64LL) > v13
      || v12 + *(_DWORD *)(*(_QWORD *)v27[0] + 68LL) > *(_DWORD *)(a1[5] + 100LL) - *(_DWORD *)(a1[5] + 92LL) - a4 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v38 = 1;
      GreIntersectVisRect(
        a2,
        (unsigned int)(*(_DWORD *)(a1[5] + 88LL) + a3),
        *(unsigned int *)(a1[5] + 92LL),
        a3 + *(_DWORD *)(a1[5] + 88LL) + v13,
        *(_DWORD *)(a1[5] + 100LL) - a4);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v31[0] = a3;
    v31[1] = v12;
    v31[2] = *(_DWORD *)(*(_QWORD *)v27[0] + 64LL);
    v31[3] = *(_DWORD *)(*(_QWORD *)v27[0] + 68LL);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27[0] + 40LL) + 24LL) )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27[0] + 40LL) + 24LL);
    }
    else if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
    {
      v14 = *(_QWORD *)(gpsi + 4936LL);
    }
    else
    {
      v14 = *(_QWORD *)(gpsi + 4728LL);
    }
    v32 = v14;
    v33 = a3;
    v15 = *(_QWORD *)v27[0];
    v36 = 1;
    v34 = v12 + *(_DWORD *)(v15 + 68);
    v16 = a1[5];
    v35 = *(_DWORD *)(*(_QWORD *)v27[0] + 64LL);
    if ( (*(_BYTE *)(v16 + 25) & 3) == 0 || (*(_BYTE *)(v16 + 20) & 8) != 0 )
      v17 = *(_QWORD *)(gpsi + 4744LL);
    else
      v17 = *(_QWORD *)(gpsi + 4816LL);
    v37 = v17;
    GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)v31, 2);
    v18 = a1[5];
    if ( (*(_BYTE *)(v18 + 25) & 3) == 0 || (*(_BYTE *)(v18 + 20) & 8) != 0 )
      v19 = *(_QWORD *)(gpsi + 4744LL);
    else
      v19 = *(_QWORD *)(gpsi + 4816LL);
    v20 = GreSelectBrush(a2, v19);
    v21 = v28;
    v22 = v20;
    if ( !v28 )
      v21 = *(_QWORD *)v27[0];
    xxxMenuDraw(a2, v21, 0LL);
    GreSelectBrush(a2, v22);
    if ( v38 )
      RecalcDCVisRgn(a2);
    v10 = *(_DWORD *)(*(_QWORD *)v27[0] + 68LL) + 1;
    v24 = v30;
    v25 = *(_QWORD *)(v30 + 40);
    *(_DWORD *)(v25 + 40) &= ~0x200u;
    ThreadUnlock1(v24, v25, v23);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27, v9);
  return v10;
}
