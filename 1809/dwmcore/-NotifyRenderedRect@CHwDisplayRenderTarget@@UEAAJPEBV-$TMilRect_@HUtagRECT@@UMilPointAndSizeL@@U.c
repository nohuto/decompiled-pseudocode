/*
 * XREFs of ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18005B080
 * Callers:
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@WNA@EAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800F1170 (-NotifyRenderedRect@CHwDisplayRenderTarget@@WNA@EAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL.c)
 * Callees:
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x18005B20C (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::NotifyRenderedRect(CHwDisplayRenderTarget *a1, int *a2)
{
  unsigned int v3; // edi
  int v5; // r8d
  int v6; // r10d
  int v7; // edx
  int v8; // r9d
  int v9; // eax
  int v10; // r11d
  int v11; // ecx
  int v12; // esi
  char v13; // al
  int v14; // eax
  unsigned int v15; // ecx
  void *v17; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v18[3]; // [rsp+38h] [rbp-11h] BYREF
  int v19; // [rsp+44h] [rbp-5h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-1h] BYREF
  _DWORD v21[13]; // [rsp+4Ch] [rbp+3h] BYREF

  v3 = 0;
  if ( (int)CHwDisplayRenderTarget::ValidateDeviceAndSwapChain(a1) >= 0 )
  {
    v5 = *((_DWORD *)a1 + 2);
    v6 = 0;
    v7 = *((_DWORD *)a1 + 3);
    v8 = 0;
    if ( a2 )
    {
      v9 = a2[2];
      v10 = v9;
      v6 = a2[1];
      v8 = *a2;
      v11 = a2[3];
      if ( v6 <= 0 )
        v6 = 0;
      v12 = a2[3];
      if ( v8 <= 0 )
        v8 = 0;
      if ( v9 >= v5 )
        v10 = *((_DWORD *)a1 + 2);
      if ( v11 >= v7 )
        v12 = *((_DWORD *)a1 + 3);
      if ( v9 >= v5 )
        v9 = *((_DWORD *)a1 + 2);
      if ( v9 <= v8 )
        goto LABEL_29;
      v13 = 0;
      if ( v11 >= v7 )
        v11 = *((_DWORD *)a1 + 3);
      if ( v11 <= v6 )
LABEL_29:
        v13 = 1;
      v5 = v10;
      v7 = v12;
      if ( v13 )
      {
        v7 = 0;
        v5 = 0;
        v6 = 0;
        v8 = 0;
      }
    }
    if ( v5 > v8 && v7 > v6 )
    {
      v17 = v18;
      if ( v8 >= v5 || v6 >= v7 )
      {
        v18[0] = 0;
      }
      else
      {
        v19 = v6;
        v18[0] = 2;
        v18[1] = v8;
        v18[2] = v5;
        v20 = (unsigned int)&v20 + 1 + 11 - (unsigned int)&v19;
        v21[2] = v8;
        v21[3] = v5;
        v21[1] = (unsigned int)&v20 + 1 + 11 - (unsigned int)v21 + 8;
        v21[0] = v7;
      }
      v14 = (*(__int64 (__fastcall **)(CHwDisplayRenderTarget *, void **))(*(_QWORD *)a1 + 280LL))(a1, &v17);
      v3 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1DDu);
      if ( v18 != v17 )
        WPF::ProcessHeapImpl::Free(v17);
    }
  }
  return v3;
}
