/*
 * XREFs of ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003F934
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003EE1C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003FA00 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FA7C (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003FC54 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x18009353C (-OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800369B0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003DCF4 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18003DD4C (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowIconic::LoadCentralImage(CWindowIconic *this)
{
  unsigned int v1; // edi
  char v3; // r14
  int v4; // ecx
  __int64 v5; // rcx
  HICON v6; // rax
  int v7; // eax
  CBaseObject *v8; // rbx
  int v9; // eax
  int v10; // eax
  int v12; // ecx
  volatile signed __int32 *v13; // rbx
  unsigned int v14; // eax
  void *v15; // [rsp+28h] [rbp-8h]
  CBaseObject *v16; // [rsp+50h] [rbp+20h] BYREF
  HICON hIcon; // [rsp+58h] [rbp+28h] BYREF

  v1 = 0;
  hIcon = 0LL;
  v3 = 0;
  v16 = 0LL;
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    v12 = v4 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        return v1;
      v13 = (volatile signed __int32 *)*((_QWORD *)this + 3);
    }
    else
    {
      v14 = *((_DWORD *)this + 14) - 1;
      if ( v14 >= (int)*(double *)(*((_QWORD *)this + 8) + 48LL) )
        v14 = (int)*(double *)(*((_QWORD *)this + 8) + 48LL);
      v13 = *(volatile signed __int32 **)(*((_QWORD *)this + 4) + 8LL * v14);
    }
    v16 = (CBaseObject *)v13;
    if ( !v13 )
      goto LABEL_12;
    _InterlockedIncrement(v13 + 2);
  }
  else
  {
    v5 = *((_QWORD *)this + 10);
    v6 = *(HICON *)(v5 + 144);
    if ( v6 || (v6 = *(HICON *)(v5 + 136)) != 0LL )
    {
      hIcon = v6;
    }
    else
    {
      LoadIconWithScaleDown(0LL, (PCWSTR)0x7F00, 32, 32, &hIcon);
      v3 = 1;
    }
    if ( !hIcon )
      goto LABEL_12;
    v7 = CBitmapSource::Create(hIcon, &v16);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xCDu, v15);
      v8 = v16;
LABEL_10:
      if ( v8 )
        CBaseObject::Release(v8);
      goto LABEL_12;
    }
  }
  v8 = v16;
  if ( v16 )
  {
    v9 = CVisual::SetSize(*((CVisual **)this + 12), (const struct tagSIZE *)v16 + 3);
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xE5u, v15);
    }
    else
    {
      v10 = CImage::SetBitmapSource(*((CImage **)this + 12), v8);
      v1 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xE6u, v15);
    }
    goto LABEL_10;
  }
LABEL_12:
  if ( v3 )
    DestroyIcon(hIcon);
  return v1;
}
