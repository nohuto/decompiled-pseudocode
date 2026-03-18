/*
 * XREFs of ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AFE88
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AF968 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800A3850 (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x1800AF604 (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800AFD38 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x1800AFDC4 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800B071C (-GetDisplayRect@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800B0E38 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateFullScreenRenderTargets2(CDesktopRenderTarget *this)
{
  unsigned int v2; // ebx
  int v3; // esi
  int v4; // r15d
  int v5; // r14d
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // r13
  struct CDisplay *DisplayNoRef; // rax
  char v10; // cl
  struct CDisplay *v11; // r8
  char v12; // al
  signed int inited; // eax
  __int64 v14; // rcx
  int *DisplayRect; // rax
  int *v16; // rcx
  BOOL v17; // edx
  int v18; // r8d
  BOOL v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rcx
  signed int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-50h]
  struct CHwndRenderTarget *v28; // [rsp+40h] [rbp-30h] BYREF
  __int128 v29; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  CDesktopRenderTarget::ReleaseRenderTargets(this);
  v7 = *((_QWORD *)this + 49);
  if ( !v7 || !*(_DWORD *)(v7 + 56) )
    return v2;
  v8 = 0LL;
  do
  {
    v28 = *(struct CHwndRenderTarget **)(*(_QWORD *)(*(_QWORD *)(v7 + 64) + 8 * v8) + 56LL);
    DisplayNoRef = CDesktopRenderTarget::FindDisplayNoRef(this, (HMONITOR *)v28);
    v10 = *((_BYTE *)this + 360);
    v11 = DisplayNoRef;
    v12 = *((_BYTE *)this + 377);
    v29 = *(_OWORD *)((char *)this + 344);
    if ( !v11 )
    {
      inited = CHwndRenderTarget::ResetRenderTarget((__int64)v28, (__int64)this, &v29, *((_DWORD *)this + 85), v10, v12);
      v2 = inited;
      if ( inited < 0 )
      {
        v27 = 435;
        goto LABEL_46;
      }
      v23 = *((_DWORD *)this + 62);
      v24 = v23 + 1;
      if ( v23 + 1 >= v23 )
      {
        if ( v24 <= *((_DWORD *)this + 61) )
        {
          v2 = 0;
          *(_QWORD *)(*((_QWORD *)this + 28) + 8LL * *((unsigned int *)this + 62)) = v28;
          *((_DWORD *)this + 62) = v24;
LABEL_24:
          (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v28 + 8LL))(v28);
          goto LABEL_7;
        }
        v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 224, 8, 1, &v28);
        v2 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v26, 0xC3u, 0LL);
      }
      else
      {
        v2 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v2, 0x1B8u, 0LL);
        return v2;
      }
      goto LABEL_24;
    }
    inited = CHwndRenderTarget::InitFullScreen(v28, *((_DWORD *)this + 85), v10, v12);
    v2 = inited;
    if ( inited < 0 )
    {
      v27 = 425;
      goto LABEL_46;
    }
    inited = CDesktopRenderTarget::AddHwndRenderTarget(this, (CDisplay **)v28);
    v2 = inited;
    if ( inited < 0 )
    {
      v27 = 427;
LABEL_46:
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, inited, v27, 0LL);
      return v2;
    }
LABEL_7:
    DisplayRect = (int *)CHwndRenderTarget::GetDisplayRect(v28);
    v16 = DisplayRect;
    v17 = v4 <= v6 || v3 <= v5;
    v18 = DisplayRect[2];
    v19 = v18 <= *DisplayRect || DisplayRect[3] <= DisplayRect[1];
    if ( v17 )
    {
      if ( v19 )
      {
        v3 = 0;
        v4 = 0;
        v5 = 0;
        v6 = 0;
      }
      else
      {
        v29 = *(_OWORD *)v16;
        v3 = HIDWORD(v29);
        v4 = DWORD2(v29);
        v5 = DWORD1(v29);
        v6 = v29;
      }
    }
    else if ( !v19 )
    {
      if ( *v16 < v6 )
        v6 = *v16;
      if ( v16[1] < v5 )
        v5 = v16[1];
      if ( v18 > v4 )
        v4 = v18;
      if ( v16[3] > v3 )
        v3 = v16[3];
    }
    v7 = *((_QWORD *)this + 49);
    v8 = (unsigned int)(v8 + 1);
  }
  while ( (unsigned int)v8 < *(_DWORD *)(v7 + 56) );
  v20 = *((_QWORD *)this + 2);
  *((float *)this + 81) = (float)v6;
  *((float *)this + 82) = (float)v5;
  *((float *)this + 83) = (float)v4;
  *((float *)this + 84) = (float)v3;
  v21 = *(_QWORD *)(v20 + 376);
  if ( v21 )
    *(_BYTE *)(v21 + 20) = 1;
  return v2;
}
