/*
 * XREFs of xxxMenuBarDraw @ 0x1C024AA44
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C002E4B0 (xxxDrawWindowFrame.c)
 *     xxxDWP_DoNCActivate @ 0x1C012EEEC (xxxDWP_DoNCActivate.c)
 * Callees:
 *     GetCaptionHeight @ 0x1C0033D9C (GetCaptionHeight.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMenuDraw @ 0x1C01294A0 (xxxMenuDraw.c)
 *     GrePolyPatBlt @ 0x1C012BFB4 (GrePolyPatBlt.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 *     xxxMenuBarCompute @ 0x1C012DEE0 (xxxMenuBarCompute.c)
 *     ThreadLockMenuNoModify @ 0x1C012F8A4 (ThreadLockMenuNoModify.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0249498 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxMenuBarDraw(_QWORD *a1, HDC a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 v12; // rcx
  unsigned int v13; // r15d
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 *v28[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v29; // [rsp+48h] [rbp-19h]
  __int64 v30; // [rsp+50h] [rbp-11h] BYREF
  __int64 v31; // [rsp+58h] [rbp-9h]
  __int64 v32; // [rsp+60h] [rbp-1h]
  _DWORD v33[4]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v34; // [rsp+78h] [rbp+17h]
  int v35; // [rsp+80h] [rbp+1Fh]
  unsigned int v36; // [rsp+84h] [rbp+23h]
  int v37; // [rsp+88h] [rbp+27h]
  int v38; // [rsp+8Ch] [rbp+2Bh]
  __int64 v39; // [rsp+90h] [rbp+2Fh]
  int v40; // [rsp+C8h] [rbp+67h]

  SmartObjStackRefBase<tagMENU>::Init(v28, 0LL);
  v8 = a1[21];
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v40 = 0;
  v29 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v28, v8);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v28) )
  {
    v11 = 1;
  }
  else
  {
    if ( (*(_BYTE *)(a1[5] + 16LL) & 0x40) != 0 && (v9 = a1[2], *(_QWORD *)(v9 + 424) == gpqForeground)
      || (GetAppCompatFlags2(1024LL, v9) & 0x80u) != 0LL )
    {
      *(_DWORD *)(*(_QWORD *)(*v28[0] + 40) + 40LL) &= ~0x10u;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(*v28[0] + 40) + 40LL) |= 0x10u;
    }
    v12 = v29;
    if ( !v29 )
      v12 = *v28[0];
    ThreadLockMenuNoModify(v12, &v30, v10);
    v13 = GetCaptionHeight((__int64)a1) + a4;
    v14 = *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL);
    if ( a1 != *(_QWORD **)(*v28[0] + 80) || !*(_DWORD *)(*v28[0] + 64) || !*(_DWORD *)(*v28[0] + 68) )
      xxxMenuBarCompute(v28, (ULONG_PTR)a1, v13, a3, *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL));
    if ( *(_DWORD *)(*v28[0] + 64) > v14
      || (int)(v13 + *(_DWORD *)(*v28[0] + 68)) > *(_DWORD *)(a1[5] + 100LL) - *(_DWORD *)(a1[5] + 92LL) - a4 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v40 = 1;
      GreIntersectVisRect(
        a2,
        (unsigned int)(*(_DWORD *)(a1[5] + 88LL) + a3),
        *(unsigned int *)(a1[5] + 92LL),
        a3 + *(_DWORD *)(a1[5] + 88LL) + v14,
        *(_DWORD *)(a1[5] + 100LL) - a4);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v33[0] = a3;
    v33[1] = v13;
    v33[2] = *(_DWORD *)(*v28[0] + 64);
    v33[3] = *(_DWORD *)(*v28[0] + 68);
    if ( *(_QWORD *)(*(_QWORD *)(*v28[0] + 40) + 24LL) )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(*v28[0] + 40) + 24LL);
    }
    else if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
    {
      v15 = *(_QWORD *)(gpsi + 4936LL);
    }
    else
    {
      v15 = *(_QWORD *)(gpsi + 4728LL);
    }
    v34 = v15;
    v35 = a3;
    v16 = *v28[0];
    v38 = 1;
    v36 = v13 + *(_DWORD *)(v16 + 68);
    v17 = a1[5];
    v37 = *(_DWORD *)(*v28[0] + 64);
    if ( (*(_BYTE *)(v17 + 25) & 3) == 0 || (*(_BYTE *)(v17 + 20) & 8) != 0 )
      v18 = *(_QWORD *)(gpsi + 4744LL);
    else
      v18 = *(_QWORD *)(gpsi + 4816LL);
    v39 = v18;
    GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)v33, 2);
    v19 = a1[5];
    if ( (*(_BYTE *)(v19 + 25) & 3) == 0 || (*(_BYTE *)(v19 + 20) & 8) != 0 )
      v20 = *(_QWORD *)(gpsi + 4744LL);
    else
      v20 = *(_QWORD *)(gpsi + 4816LL);
    v21 = GreSelectBrush(a2, v20);
    v22 = v29;
    v23 = v21;
    if ( !v29 )
      v22 = *v28[0];
    xxxMenuDraw(a2, v22, 0LL);
    GreSelectBrush(a2, v23);
    if ( v40 )
      RecalcDCVisRgn(a2);
    v11 = *(_DWORD *)(*v28[0] + 68) + 1;
    v25 = v31;
    v26 = *(_QWORD *)(v31 + 40);
    *(_DWORD *)(v26 + 40) &= ~0x200u;
    ThreadUnlock1(v25, v26, v24);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v28, v9, v10);
  return v11;
}
