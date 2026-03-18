/*
 * XREFs of ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x180204B50
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18002AEBC (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ?GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x18007A150 (-GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801E16E8 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x1801FE1D8 (-D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@.c)
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
  int Buffer; // eax
  __int64 v14; // rcx
  int v15; // ebx
  int appended; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // esi
  unsigned int v21; // r14d
  unsigned int v22; // r15d
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  struct DXGI_SCROLL_RECT *v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v32; // [rsp+50h] [rbp-B0h] BYREF
  struct ID3D11Texture2D *v33; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGI_SCROLL_RECT *v34[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h]
  unsigned int v36; // [rsp+78h] [rbp-88h]
  _BYTE v37[24]; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT *v38[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v39; // [rsp+B0h] [rbp-50h]
  unsigned int v40[2]; // [rsp+B4h] [rbp-4Ch]
  _BYTE v41[256]; // [rsp+C0h] [rbp-40h] BYREF

  v38[0] = (struct tagRECT *)v41;
  v33 = 0LL;
  v38[1] = (struct tagRECT *)v41;
  v39 = 16;
  v7 = 0;
  *(_QWORD *)v40 = 16LL;
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
  Buffer = CDWMSwapChain::GetBuffer(this, 0LL, &v32, &v33);
  v15 = Buffer;
  if ( Buffer < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, Buffer, 0x5Au);
  }
  else
  {
    if ( g_LockAndReadDDATarget )
      DebugInspectTexture(v33, 0);
    v40[1] = 0;
    appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(
                 (CDWMSwapChainDDA *)((char *)this + 272),
                 (__int64)v38);
    v15 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, appended, 0x69u);
    }
    else if ( v7 )
    {
      v35 = 0LL;
      v20 = 0;
      v36 = 0;
      v21 = 0;
      *(_OWORD *)v34 = 0LL;
      if ( *((_DWORD *)this + 92) )
      {
        v22 = v32;
        while ( 1 )
        {
          v23 = *((_QWORD *)this + 43);
          if ( *(_DWORD *)(v23 + 48LL * v21) == 1 )
          {
            *(_QWORD *)v37 = *(_QWORD *)(v23 + 48LL * v21 + 32);
            v24 = v20 + 1;
            if ( v20 + 1 >= v20 )
              v22 = v20 + 1;
            v15 = v24 < v20 ? 0x80070216 : 0;
            *(_OWORD *)&v37[8] = *(_OWORD *)(v23 + 48LL * v21 + 16);
            if ( v24 < v20 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(6LL * v21, 0LL, 0, v15, 0xB5u);
            }
            else if ( v22 > HIDWORD(v35) )
            {
              v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v34, 24, 1, v37);
              v15 = v28;
              if ( v28 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v28, 0xC0u);
              v20 = v36;
            }
            else
            {
              v25 = v20;
              v20 = v22;
              v36 = v22;
              v26 = 3 * v25;
              v27 = v34[0];
              *(_OWORD *)((char *)v34[0] + 8 * v26) = *(_OWORD *)v37;
              *((_QWORD *)v27 + v26 + 2) = *(_QWORD *)&v37[16];
            }
            if ( v15 < 0 )
              break;
          }
          if ( ++v21 >= *((_DWORD *)this + 92) )
            goto LABEL_27;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v15, 0x83u);
      }
      else
      {
LABEL_27:
        v29 = CD2DContext::D2DPresentDWM(
                *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
                *((struct IDXGISwapChainDWM1 **)this + 53),
                a3,
                a4,
                v40[1],
                v38[0],
                v20,
                v34[0],
                0LL,
                0);
        v15 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x8Fu);
      }
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)v34);
    }
    else
    {
      v18 = CD2DContext::D2DPresentDWM(
              *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
              *((struct IDXGISwapChainDWM1 **)this + 53),
              a3,
              a4,
              v40[1],
              v38[0],
              0,
              0LL,
              0LL,
              0);
      v15 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x75u);
    }
  }
  ReleaseInterface<IBitmapLock>((__int64 *)&v33);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)v38);
  return (unsigned int)v15;
}
