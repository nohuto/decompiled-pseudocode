/*
 * XREFs of ?GetPropertyValue@CFallbackWindow@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180123D10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180124574 (-_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFallbackWindow::GetPropertyValue(CFallbackWindow *this, int a2, struct tagVARIANT *a3)
{
  SHORT v6; // ax
  BSTR v7; // rax
  int VisibleApp; // eax
  BSTR v9; // rax
  struct IImmersiveApplication *v11[2]; // [rsp+20h] [rbp-238h] BYREF
  WCHAR Buffer[264]; // [rsp+30h] [rbp-228h] BYREF

  v11[1] = (struct IImmersiveApplication *)-2LL;
  VariantInit(a3);
  if ( a2 == 30003 )
  {
    a3->vt = 3;
    a3->lVal = 50000;
    return 0LL;
  }
  if ( a2 == 30010 )
  {
    a3->vt = 11;
    v6 = -(*((_DWORD *)this + 7) != 1);
LABEL_15:
    a3->iVal = v6;
    return 0LL;
  }
  if ( ((a2 - 30009) & 0xFFFFFFF7) == 0 )
  {
    a3->vt = 11;
    v6 = -1;
    goto LABEL_15;
  }
  if ( a2 == 30011 )
  {
    v7 = SysAllocString(L"ImmersiveBackground");
    if ( v7 )
    {
      a3->vt = 8;
      a3->llVal = (LONGLONG)v7;
    }
  }
  else if ( a2 == 30005 )
  {
    v11[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v11);
    VisibleApp = CFallbackWindow::_GetVisibleApp((CFallbackWindow *)((char *)this - 88), v11);
    if ( LoadStringW(&_ImageBase, (VisibleApp >= 0) + 9102, Buffer, 260) )
    {
      v9 = SysAllocString(Buffer);
      if ( v9 )
      {
        a3->vt = 8;
        a3->llVal = (LONGLONG)v9;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v11);
  }
  return 0LL;
}
