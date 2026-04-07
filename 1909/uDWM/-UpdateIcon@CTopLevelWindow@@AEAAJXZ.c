/*
 * XREFs of ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x18003DC18
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003DCF4 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18003DD4C (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 *     IsOpenThemeDataPresent @ 0x18004E738 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateIcon(CImage **this, __int64 a2)
{
  CBaseObject *v2; // rbx
  unsigned int v4; // edi
  CImage *v5; // rcx
  char v7; // r14
  CImage *v8; // rax
  char v9; // bp
  int v10; // eax
  int v11; // eax
  void *v12; // [rsp+28h] [rbp-20h]
  CBaseObject *v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  v13 = 0LL;
  v4 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent(this, a2) )
    return v4;
  v5 = this[65];
  if ( !v5 )
    return v4;
  v7 = *((_DWORD *)v5 + 68) == 0;
  if ( ((_DWORD)this[73] & 0x10000) == 0 || (v8 = this[90], !*((_QWORD *)v8 + 17)) )
  {
    v9 = 1;
LABEL_8:
    v11 = CImage::SetBitmapSource(v5, v2);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x12C0u, v12);
    }
    else if ( v9 != v7 )
    {
      CVisual::SetDirtyFlags((CVisual *)this, 4096);
    }
    goto LABEL_11;
  }
  v9 = 0;
  v10 = CBitmapSource::Create(*((HICON *)v8 + 17), &v13);
  v4 = v10;
  if ( v10 >= 0 )
  {
    v5 = this[65];
    v2 = v13;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x12BDu, v12);
  v2 = v13;
LABEL_11:
  if ( v2 )
    CBaseObject::Release(v2);
  return v4;
}
