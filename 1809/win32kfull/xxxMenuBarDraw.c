/*
 * XREFs of xxxMenuBarDraw @ 0x1C0232510
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C0078D80 (xxxDrawWindowFrame.c)
 *     xxxDWP_DoNCActivate @ 0x1C00A7B84 (xxxDWP_DoNCActivate.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     GrePolyPatBlt @ 0x1C007B620 (GrePolyPatBlt.c)
 *     ThreadLockMenuNoModify @ 0x1C00A6E2C (ThreadLockMenuNoModify.c)
 *     GetCaptionHeight @ 0x1C00A7388 (GetCaptionHeight.c)
 *     xxxMenuDraw @ 0x1C00AA7E0 (xxxMenuDraw.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 *     xxxMenuBarCompute @ 0x1C00ACA90 (xxxMenuBarCompute.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0230F98 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxMenuBarDraw(_QWORD *a1, HDC a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // r15d
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 *v28[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v29; // [rsp+48h] [rbp-19h]
  __int64 v30; // [rsp+50h] [rbp-11h] BYREF
  __int64 v31; // [rsp+58h] [rbp-9h]
  _DWORD v32[4]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v33; // [rsp+78h] [rbp+17h]
  int v34; // [rsp+80h] [rbp+1Fh]
  unsigned int v35; // [rsp+84h] [rbp+23h]
  int v36; // [rsp+88h] [rbp+27h]
  int v37; // [rsp+8Ch] [rbp+2Bh]
  __int64 v38; // [rsp+90h] [rbp+2Fh]
  int v39; // [rsp+C8h] [rbp+67h]

  SmartObjStackRefBase<tagMENU>::Init(v28, 0LL);
  v8 = a1[18];
  v39 = 0;
  v29 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v28, v8);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v28) )
  {
    v10 = 1;
  }
  else
  {
    if ( (*(_BYTE *)(a1[5] + 16LL) & 0x40) != 0 && (v9 = a1[2], *(_QWORD *)(v9 + 432) == gpqForeground)
      || (GetAppCompatFlags2(1024LL, v9) & 0x80u) != 0LL )
    {
      *(_DWORD *)(*(_QWORD *)(*v28[0] + 40) + 40LL) &= ~0x10u;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(*v28[0] + 40) + 40LL) |= 0x10u;
    }
    v11 = v29;
    if ( !v29 )
      v11 = *v28[0];
    ThreadLockMenuNoModify(v11, &v30);
    v14 = GetCaptionHeight((__int64)a1, v12, v13) + a4;
    v15 = *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL);
    if ( a1 != *(_QWORD **)(*v28[0] + 80) || !*(_DWORD *)(*v28[0] + 64) || !*(_DWORD *)(*v28[0] + 68) )
      xxxMenuBarCompute(v28, (ULONG_PTR)a1, v14, a3, *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL));
    if ( *(_DWORD *)(*v28[0] + 64) > v15
      || (int)(v14 + *(_DWORD *)(*v28[0] + 68)) > *(_DWORD *)(a1[5] + 100LL) - *(_DWORD *)(a1[5] + 92LL) - a4 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v39 = 1;
      GreIntersectVisRect(
        a2,
        (unsigned int)(*(_DWORD *)(a1[5] + 88LL) + a3),
        *(unsigned int *)(a1[5] + 92LL),
        a3 + *(_DWORD *)(a1[5] + 88LL) + v15,
        *(_DWORD *)(a1[5] + 100LL) - a4);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v32[0] = a3;
    v32[1] = v14;
    v32[2] = *(_DWORD *)(*v28[0] + 64);
    v32[3] = *(_DWORD *)(*v28[0] + 68);
    if ( *(_QWORD *)(*(_QWORD *)(*v28[0] + 40) + 24LL) )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(*v28[0] + 40) + 24LL);
    }
    else if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
    {
      v16 = *(_QWORD *)(gpsi + 4936LL);
    }
    else
    {
      v16 = *(_QWORD *)(gpsi + 4728LL);
    }
    v33 = v16;
    v34 = a3;
    v17 = *v28[0];
    v37 = 1;
    v35 = v14 + *(_DWORD *)(v17 + 68);
    v18 = a1[5];
    v36 = *(_DWORD *)(*v28[0] + 64);
    if ( (*(_BYTE *)(v18 + 25) & 3) == 0 || (*(_BYTE *)(v18 + 20) & 8) != 0 )
      v19 = *(_QWORD *)(gpsi + 4744LL);
    else
      v19 = *(_QWORD *)(gpsi + 4816LL);
    v38 = v19;
    GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v32, 2);
    v20 = a1[5];
    if ( (*(_BYTE *)(v20 + 25) & 3) == 0 || (*(_BYTE *)(v20 + 20) & 8) != 0 )
      v21 = *(_QWORD *)(gpsi + 4744LL);
    else
      v21 = *(_QWORD *)(gpsi + 4816LL);
    v22 = GreSelectBrush(a2, v21);
    v23 = v29;
    v24 = v22;
    if ( !v29 )
      v23 = *v28[0];
    xxxMenuDraw(a2, v23, 0LL);
    GreSelectBrush(a2, v24);
    if ( v39 )
      RecalcDCVisRgn(a2);
    v10 = *(_DWORD *)(*v28[0] + 68) + 1;
    v25 = v31;
    v26 = *(_QWORD *)(v31 + 40);
    *(_DWORD *)(v26 + 40) &= ~0x200u;
    ThreadUnlock1(v25, v26);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v28, v9);
  return v10;
}
