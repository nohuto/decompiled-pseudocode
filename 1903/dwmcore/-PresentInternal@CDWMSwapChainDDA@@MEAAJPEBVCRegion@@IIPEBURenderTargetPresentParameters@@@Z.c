/*
 * XREFs of ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x180164E50
 * Callers:
 *     <none>
 * Callees:
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18000CD68 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x1800E51B0 (-GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x1801604F8 (-D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18021BE8C (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CDWMSwapChainDDA::PresentInternal(
        CDWMSwapChainDDA *this,
        const struct CRegion *a2,
        unsigned int a3,
        unsigned int a4)
{
  int v7; // esi
  unsigned int v8; // eax
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  bool v11; // zf
  int v12; // eax
  signed int Buffer; // eax
  __int64 v14; // rcx
  signed int v15; // ebx
  signed int appended; // eax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // esi
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int128 v23; // xmm0
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  struct DXGI_SCROLL_RECT *v28; // rax
  signed int v29; // eax
  signed int v30; // eax
  __int64 v31; // rcx
  struct ID3D11Texture2D *v33; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGI_SCROLL_RECT *v34[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h]
  unsigned int v36; // [rsp+70h] [rbp-90h]
  unsigned int v37; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v38[24]; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT *v39[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v40; // [rsp+B0h] [rbp-50h]
  unsigned int v41[2]; // [rsp+B4h] [rbp-4Ch]
  _BYTE v42[256]; // [rsp+C0h] [rbp-40h] BYREF

  v39[0] = (struct tagRECT *)v42;
  v33 = 0LL;
  v39[1] = (struct tagRECT *)v42;
  v40 = 16;
  v7 = 0;
  *(_QWORD *)v41 = 16LL;
  v8 = *((_DWORD *)this + 92);
  if ( v8 )
  {
    v9 = (_DWORD *)*((_QWORD *)this + 43);
    v10 = v8;
    do
    {
      v11 = *v9 == 1;
      v12 = v7 + 1;
      v9 += 12;
      if ( !v11 )
        v12 = v7;
      v7 = v12;
      --v10;
    }
    while ( v10 );
  }
  Buffer = CDWMSwapChain::GetBuffer(this, 0LL, &v37, &v33);
  v15 = Buffer;
  if ( Buffer < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, Buffer, 0x57u, 0LL);
    goto LABEL_30;
  }
  if ( g_LockAndReadDDATarget )
    DebugInspectTexture(v33, 0);
  v41[1] = 0;
  appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(
               (CDWMSwapChainDDA *)((char *)this + 272),
               (__int64)v39);
  v15 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, appended, 0x66u, 0LL);
    goto LABEL_30;
  }
  if ( !v7 )
  {
    v18 = CD2DContext::D2DPresentDWM(
            *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
            *((struct IDXGISwapChainDWM1 **)this + 53),
            a3,
            a4,
            v41[1],
            v39[0],
            0,
            0LL,
            0LL,
            0);
    v15 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x72u, 0LL);
    goto LABEL_30;
  }
  v35 = 0LL;
  v20 = 0;
  v36 = 0;
  v21 = 0;
  for ( *(_OWORD *)v34 = 0LL; v21 < *((_DWORD *)this + 92); ++v21 )
  {
    v22 = *((_QWORD *)this + 43);
    if ( *(_DWORD *)(v22 + 48LL * v21) == 1 )
    {
      *(_QWORD *)v38 = *(_QWORD *)(v22 + 48LL * v21 + 32);
      v23 = *(_OWORD *)(v22 + 48LL * v21 + 16);
      v24 = v20 + 1;
      *(_OWORD *)&v38[8] = v23;
      if ( v20 + 1 >= v20 )
      {
        if ( v24 <= HIDWORD(v35) )
        {
          v26 = v20++;
          v36 = v24;
          v27 = 3 * v26;
          v28 = v34[0];
          *(_OWORD *)((char *)v34[0] + 8 * v27) = *(_OWORD *)v38;
          *((_QWORD *)v28 + v27 + 2) = *(_QWORD *)&v38[16];
          continue;
        }
        v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v34, 24, 1, v38);
        v15 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v29, 0xC3u, 0LL);
        v20 = v36;
      }
      else
      {
        v15 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(6LL * v21, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v15, 0x80u, 0LL);
        goto LABEL_27;
      }
    }
  }
  v30 = CD2DContext::D2DPresentDWM(
          *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
          *((struct IDXGISwapChainDWM1 **)this + 53),
          a3,
          a4,
          v41[1],
          v39[0],
          v20,
          v34[0],
          0LL,
          0);
  v15 = v30;
  if ( v30 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x8Cu, 0LL);
LABEL_27:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v34);
LABEL_30:
  ReleaseInterface<IBitmapLock>((__int64 *)&v33);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v39);
  return (unsigned int)v15;
}
