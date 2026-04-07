/*
 * XREFs of ?GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180082318
 * Callers:
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x18008299C (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x180082274 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSo.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x1800823D0 (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetIconicRepresentationTypeClosestToSize(
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *a1,
        int a2,
        unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int *v6; // rdi
  int v8; // ebp
  __int64 v9; // rbx
  int ImmersiveIconContainerSize; // eax
  struct CBitmapSource *BitmapSourceNoRef; // rax
  signed int v12; // eax
  _DWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 5;
  v14[0] = 2;
  v14[2] = 4;
  v6 = v14;
  v8 = 0x7FFFFFFF;
  v9 = 3LL;
  v14[1] = 3;
  do
  {
    ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(a3, *v6);
    BitmapSourceNoRef = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                          a1,
                          ImmersiveIconContainerSize);
    if ( BitmapSourceNoRef )
    {
      v12 = abs32(*((_DWORD *)BitmapSourceNoRef + 6) - a2);
      if ( v12 < v8 )
      {
        v3 = *v6;
        v8 = v12;
      }
    }
    ++v6;
    --v9;
  }
  while ( v9 );
  return v3;
}
