/*
 * XREFs of ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x180082AC4
 * Callers:
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180082BE4 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x1800825D4 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSo.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x1800829E4 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::SetBitmapResource(
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *this,
        struct CBitmapSource *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // eax
  struct CBitmapSource *BitmapSourceNoRef; // [rsp+40h] [rbp+8h] BYREF
  struct CBitmapSource *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  BitmapSourceNoRef = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                        this,
                        *((_DWORD *)a2 + 6));
  if ( BitmapSourceNoRef )
    DynArray<CBitmapSource *,0>::Remove((__int64 *)this + 1, &BitmapSourceNoRef);
  v3 = *((_DWORD *)this + 8);
  v4 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    return;
  }
  if ( v4 <= *((_DWORD *)this + 7) )
  {
    *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * *((unsigned int *)this + 8)) = v7;
    *((_DWORD *)this + 8) = v4;
LABEL_7:
    _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    return;
  }
  v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 8, 8, 1, &v7);
  if ( v5 >= 0 )
    goto LABEL_7;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xC0u);
}
