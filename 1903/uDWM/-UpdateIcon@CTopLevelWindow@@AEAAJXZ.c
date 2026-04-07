/*
 * XREFs of ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x18000C918
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B210 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18000C9F4 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18000CCD0 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     IsOpenThemeDataPresent @ 0x18004E888 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateIcon(CTopLevelWindow *this)
{
  struct CBitmapSource *v1; // rbx
  unsigned int v3; // edi
  CImage *v4; // rcx
  char v6; // r14
  __int64 v7; // rax
  char v8; // bp
  int v9; // eax
  int v10; // eax
  void *v11; // [rsp+28h] [rbp-20h]
  CBaseObject *v12; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v12 = 0LL;
  v3 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v3;
  v4 = (CImage *)*((_QWORD *)this + 65);
  if ( !v4 )
    return v3;
  v6 = *((_DWORD *)v4 + 68) == 0;
  if ( (*((_DWORD *)this + 146) & 0x10000) == 0 || (v7 = *((_QWORD *)this + 90), !*(_QWORD *)(v7 + 136)) )
  {
    v8 = 1;
LABEL_8:
    v10 = CImage::SetBitmapSource(v4, v1);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1321u, v11);
    }
    else if ( v8 != v6 )
    {
      CVisual::SetDirtyFlags(this, 0x1000u);
    }
    goto LABEL_11;
  }
  v8 = 0;
  v9 = CBitmapSource::Create(*(HICON *)(v7 + 136), &v12);
  v3 = v9;
  if ( v9 >= 0 )
  {
    v4 = (CImage *)*((_QWORD *)this + 65);
    v1 = v12;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x131Eu, v11);
  v1 = v12;
LABEL_11:
  if ( v1 )
    CBaseObject::Release(v1);
  return v3;
}
