/*
 * XREFs of ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x18002E130
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18002D874 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x18001D9CC (-GetPrimaryAdapterLuid@CDisplaySet@@QEBA-AU_LUID@@XZ.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18002E32C (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x180042658 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x180042DC8 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180079B34 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetSnapshotBitmapSourceInfo(
        CCachedVisualImage *this,
        const struct tagRECT *a2,
        struct BitmapSourceInfo *a3)
{
  LONG bottom; // eax
  LONG left; // r15d
  LONG top; // r12d
  LONG right; // r13d
  int CurrentDisplaySet; // eax
  unsigned int v9; // ecx
  __int64 v10; // r8
  unsigned int v11; // r14d
  CDisplaySet *v12; // rdi
  char IsEmpty; // al
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 LowPart; // r8
  char v17; // r10
  struct CDisplay *v18; // rbx
  LONG *v19; // rcx
  void (__fastcall **v21)(struct CDisplay *); // rax
  struct CDisplay *v22; // [rsp+30h] [rbp-30h] BYREF
  struct _LUID v23; // [rsp+38h] [rbp-28h] BYREF
  CDisplaySet *v24; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v25[4]; // [rsp+48h] [rbp-18h] BYREF

  bottom = a2->bottom;
  left = a2->left;
  top = a2->top;
  right = a2->right;
  v24 = 0LL;
  v22 = 0LL;
  v25[0] = left;
  v25[1] = top;
  v25[2] = right;
  v23.LowPart = bottom;
  v25[3] = bottom;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v24);
  v11 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, CurrentDisplaySet, 0x435u, 0LL);
    goto LABEL_11;
  }
  v12 = v24;
  if ( *((_DWORD *)v24 + 18) )
  {
    IsEmpty = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v25, 0LL, v10, *((_QWORD *)v24 + 6));
    LowPart = v23.LowPart;
    v17 = IsEmpty;
    while ( 1 )
    {
      v18 = *(struct CDisplay **)(v15 + 8 * v14);
      if ( !v17
        && !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(
                               (char *)v18 + 120,
                               v14,
                               LowPart,
                               v15)
        && right > *v19
        && v19[2] > left
        && (int)LowPart > v19[1]
        && v19[3] > top )
      {
        break;
      }
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *((_DWORD *)v12 + 18) )
        goto LABEL_8;
    }
    v21 = *(void (__fastcall ***)(struct CDisplay *))v18;
    v22 = v18;
    (*v21)(v18);
  }
  else
  {
LABEL_8:
    if ( (int)CDisplaySet::GetPrimaryDisplay(v12, &v22) < 0 )
    {
      *(_QWORD *)a3 = **(_QWORD **)&CDisplaySet::GetPrimaryAdapterLuid(v12, &v23);
      *((_DWORD *)a3 + 2) = (_DWORD)DisplayId::None;
      goto LABEL_11;
    }
    v18 = v22;
  }
  *(_QWORD *)a3 = *((_QWORD *)v18 + 29);
  *((_DWORD *)a3 + 2) = *(_DWORD *)CDisplay::GetDisplayId(v18, &v23);
LABEL_11:
  ReleaseInterface<CDisplaySet const>(&v24);
  ReleaseInterface<CD3DSurface>((__int64 *)&v22);
  return v11;
}
