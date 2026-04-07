/*
 * XREFs of ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x18007D144
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x18007B41C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180010DBC (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x18002A860 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_ContainsWindow@CLivePreview@@AEAA_NAEBV?$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z @ 0x18007BF6C (-_ContainsWindow@CLivePreview@@AEAA_NAEBV-$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x18007D008 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x18008E228 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180090D28 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::_StartAnimateOpaqueVisuals(__int64 this, __int64 a2, char a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v9; // r15
  unsigned int v10; // edx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rbx
  int updated; // eax
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // r8
  int v19; // eax
  int started; // eax
  __int128 i; // [rsp+30h] [rbp-20h] BYREF
  int v23; // [rsp+40h] [rbp-10h]
  __int64 v24; // [rsp+44h] [rbp-Ch]
  struct CWindowData *MDIOwner; // [rsp+80h] [rbp+30h] BYREF

  v3 = 0;
  v4 = 0;
  v23 = 0;
  v5 = 0;
  v6 = 0LL;
  v24 = 0LL;
  v9 = this;
  for ( i = 0LL; (unsigned int)v6 < *(_DWORD *)(a2 + 24); v6 = (unsigned int)(v6 + 1) )
  {
    MDIOwner = CWindowData::GetMDIOwner(*(CWindowData **)(*(_QWORD *)a2 + 8 * v6));
    if ( MDIOwner )
    {
      v10 = v5 + 1;
      if ( v5 + 1 >= v5 )
      {
        if ( v10 > v4 )
        {
          v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&i, 8, 1, &MDIOwner);
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xC0u);
          v5 = HIDWORD(v24);
          v4 = v24;
        }
        else
        {
          this = v5++;
          HIDWORD(v24) = v10;
          *(_QWORD *)(i + 8 * this) = MDIOwner;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
    }
  }
  v12 = *(_DWORD *)(v9 + 360) - 1;
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = 48LL * v12;
    do
    {
      if ( !a3 || (this = *(_QWORD *)(v9 + 336), *(_DWORD *)(this + v14 + 40)) )
      {
        v16 = *(_QWORD *)(v9 + 336);
        if ( CLivePreview::_ContainsWindow(this, a2, *(_QWORD *)(v14 + v16 + 24))
          || CLivePreview::_ContainsWindow(this, (__int64)&i, v17)
          || CLivePreview::_ContainsWindow(this, a2, *(_QWORD *)(v14 + v16 + 32))
          || CLivePreview::_ContainsWindow(this, (__int64)&i, v18) )
        {
          if ( *(_DWORD *)(v14 + v16 + 40) == 1 )
          {
            started = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v14 + v16), 4LL);
            v3 = started;
            if ( started < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x201u);
              goto LABEL_30;
            }
            *(_DWORD *)(v14 + *(_QWORD *)(v9 + 336) + 40) = 0;
          }
        }
        else if ( !*(_DWORD *)(v14 + v16 + 40) )
        {
          v19 = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v14 + v16), 3LL);
          v3 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x20Au);
            goto LABEL_30;
          }
          *(_DWORD *)(v14 + *(_QWORD *)(v9 + 336) + 40) = 1;
        }
      }
      else
      {
        updated = CVisual::UpdateOpacity(*(CVisual **)(this + v14));
        v3 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1F5u);
          goto LABEL_30;
        }
      }
      v14 -= 48LL;
      --v13;
    }
    while ( v13 >= 0 );
  }
  CLivePreview::_ShowHideImmersiveBackground((CLivePreview *)v9);
LABEL_30:
  DynArrayImpl<0>::~DynArrayImpl<0>(&i);
  return v3;
}
