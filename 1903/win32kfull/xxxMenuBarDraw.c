/*
 * XREFs of xxxMenuBarDraw @ 0x1C024B184
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C000C8BC (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x1C0028040 (xxxDrawWindowFrame.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     GrePolyPatBlt @ 0x1C008DA64 (GrePolyPatBlt.c)
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     GetCaptionHeight @ 0x1C0093074 (GetCaptionHeight.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxMenuDraw @ 0x1C00F9420 (xxxMenuDraw.c)
 *     xxxMenuBarCompute @ 0x1C00FC124 (xxxMenuBarCompute.c)
 *     ThreadLockMenuNoModify @ 0x1C00FC34C (ThreadLockMenuNoModify.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0249BD8 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxMenuBarDraw(_QWORD *a1, HDC a2, unsigned int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r15d
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 *v34[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v35; // [rsp+48h] [rbp-19h]
  __int64 v36; // [rsp+50h] [rbp-11h] BYREF
  __int64 v37; // [rsp+58h] [rbp-9h]
  __int64 v38; // [rsp+60h] [rbp-1h]
  _DWORD v39[4]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v40; // [rsp+78h] [rbp+17h]
  unsigned int v41; // [rsp+80h] [rbp+1Fh]
  unsigned int v42; // [rsp+84h] [rbp+23h]
  int v43; // [rsp+88h] [rbp+27h]
  int v44; // [rsp+8Ch] [rbp+2Bh]
  __int64 v45; // [rsp+90h] [rbp+2Fh]
  int v46; // [rsp+C8h] [rbp+67h]

  SmartObjStackRefBase<tagMENU>::Init(v34, 0LL);
  v8 = a1[21];
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v46 = 0;
  v35 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v34, v8);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v34) )
  {
    v12 = 1;
  }
  else
  {
    if ( (*(_BYTE *)(a1[5] + 16LL) & 0x40) != 0 && (v9 = a1[2], *(_QWORD *)(v9 + 424) == gpqForeground)
      || (GetAppCompatFlags2(1024LL, v9, v10, v11) & 0x80u) != 0LL )
    {
      *(_DWORD *)(*(_QWORD *)(*v34[0] + 40) + 40LL) &= ~0x10u;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(*v34[0] + 40) + 40LL) |= 0x10u;
    }
    v13 = v35;
    if ( !v35 )
      v13 = *v34[0];
    ThreadLockMenuNoModify(v13, &v36, v10, v11);
    v16 = GetCaptionHeight((__int64)a1) + a4;
    v17 = *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL);
    v18 = *v34[0];
    if ( a1 != *(_QWORD **)(*v34[0] + 80) || !*(_DWORD *)(*v34[0] + 64) || !*(_DWORD *)(*v34[0] + 68) )
      xxxMenuBarCompute(v34, (__int64)a1, v16, a3, *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL));
    if ( *(_DWORD *)(*v34[0] + 64) > v17
      || (v14 = *v34[0],
          v18 = (unsigned int)(*(_DWORD *)(a1[5] + 100LL) - *(_DWORD *)(a1[5] + 92LL) - a4),
          (int)(v16 + *(_DWORD *)(*v34[0] + 68)) > (int)v18) )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v18, v14, v15);
      v46 = 1;
      GreIntersectVisRect(
        a2,
        *(_DWORD *)(a1[5] + 88LL) + a3,
        *(unsigned int *)(a1[5] + 92LL),
        a3 + *(_DWORD *)(a1[5] + 88LL) + v17,
        *(_DWORD *)(a1[5] + 100LL) - a4);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v39[0] = a3;
    v39[1] = v16;
    v39[2] = *(_DWORD *)(*v34[0] + 64);
    v39[3] = *(_DWORD *)(*v34[0] + 68);
    if ( *(_QWORD *)(*(_QWORD *)(*v34[0] + 40) + 24LL) )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(*v34[0] + 40) + 24LL);
    }
    else if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
    {
      v19 = *(_QWORD *)(gpsi + 4936LL);
    }
    else
    {
      v19 = *(_QWORD *)(gpsi + 4728LL);
    }
    v40 = v19;
    v41 = a3;
    v20 = *v34[0];
    v44 = 1;
    v42 = v16 + *(_DWORD *)(v20 + 68);
    v21 = a1[5];
    v43 = *(_DWORD *)(*v34[0] + 64);
    if ( (*(_BYTE *)(v21 + 25) & 3) == 0 || (*(_BYTE *)(v21 + 20) & 8) != 0 )
      v22 = *(_QWORD *)(gpsi + 4744LL);
    else
      v22 = *(_QWORD *)(gpsi + 4816LL);
    v45 = v22;
    GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)v39, 2);
    v23 = a1[5];
    if ( (*(_BYTE *)(v23 + 25) & 3) == 0 || (*(_BYTE *)(v23 + 20) & 8) != 0 )
      v24 = *(_QWORD *)(gpsi + 4744LL);
    else
      v24 = *(_QWORD *)(gpsi + 4816LL);
    v25 = GreSelectBrush(a2, v24);
    v26 = v35;
    v27 = v25;
    if ( !v35 )
      v26 = *v34[0];
    xxxMenuDraw(a2, v26, 0LL);
    GreSelectBrush(a2, v27);
    if ( v46 )
      RecalcDCVisRgn(a2, v28, v29, v30);
    v12 = *(_DWORD *)(*v34[0] + 68) + 1;
    v31 = v37;
    v32 = *(_QWORD *)(v37 + 40);
    *(_DWORD *)(v32 + 40) &= ~0x200u;
    ThreadUnlock1(v31, v32, v29);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34, v9, v10, v11);
  return v12;
}
