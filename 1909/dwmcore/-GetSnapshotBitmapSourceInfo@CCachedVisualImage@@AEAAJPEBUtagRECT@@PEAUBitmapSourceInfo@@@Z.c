/*
 * XREFs of ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x1800AE51C
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800AE340 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x18001BAEC (-GetPrimaryAdapterLuid@CDisplaySet@@QEBA-AU_LUID@@XZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18003A6C8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18005200C (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800530F8 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800AE8B0 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  signed int CurrentDisplaySet; // eax
  __int64 v9; // rcx
  unsigned int v10; // r14d
  CDisplaySet *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r9
  bool IsEmpty; // r10
  struct CDisplay *v15; // rbx
  LONG *v16; // rcx
  LONG v17; // r8d
  void (__fastcall **v19)(struct CDisplay *); // rax
  struct CDisplay *v20; // [rsp+30h] [rbp-30h] BYREF
  struct _LUID v21; // [rsp+38h] [rbp-28h] BYREF
  CDisplaySet *v22; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v23[4]; // [rsp+48h] [rbp-18h] BYREF

  bottom = a2->bottom;
  left = a2->left;
  top = a2->top;
  right = a2->right;
  v22 = 0LL;
  v20 = 0LL;
  v23[0] = left;
  v23[1] = top;
  v23[2] = right;
  v21.LowPart = bottom;
  v23[3] = bottom;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v22);
  v10 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, CurrentDisplaySet, 0x435u, 0LL);
    goto LABEL_11;
  }
  v11 = v22;
  if ( *((_DWORD *)v22 + 18) )
  {
    IsEmpty = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v23);
    while ( 1 )
    {
      v15 = *(struct CDisplay **)(v13 + 8 * v12);
      if ( !IsEmpty
        && !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)v15 + 30)
        && right > *v16
        && v16[2] > left
        && v17 > v16[1]
        && v16[3] > top )
      {
        break;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *((_DWORD *)v11 + 18) )
        goto LABEL_8;
    }
    v19 = *(void (__fastcall ***)(struct CDisplay *))v15;
    v20 = v15;
    (*v19)(v15);
  }
  else
  {
LABEL_8:
    if ( (int)CDisplaySet::GetPrimaryDisplay(v11, &v20) < 0 )
    {
      *(_QWORD *)a3 = **(_QWORD **)&CDisplaySet::GetPrimaryAdapterLuid(v11, &v21);
      *((_DWORD *)a3 + 2) = (_DWORD)DisplayId::None;
      goto LABEL_11;
    }
    v15 = v20;
  }
  *(_QWORD *)a3 = *((_QWORD *)v15 + 29);
  *((_DWORD *)a3 + 2) = *CDisplay::GetDisplayId((__int64)v15, &v21);
LABEL_11:
  ReleaseInterface<CDisplaySet const>(&v22);
  ReleaseInterface<CD3DSurface>((__int64 *)&v20);
  return v10;
}
