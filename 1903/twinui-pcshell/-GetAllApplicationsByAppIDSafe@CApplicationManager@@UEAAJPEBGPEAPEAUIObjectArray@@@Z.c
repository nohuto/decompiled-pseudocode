/*
 * XREFs of ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801114E0
 * Callers:
 *     ?GetAllApplicationsByAppID@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180111450 (-GetAllApplicationsByAppID@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?HandleNewApplicationProcess@CApplicationManager@@UEAAXPEBGPEAX@Z @ 0x180113440 (-HandleNewApplicationProcess@CApplicationManager@@UEAAXPEBGPEAX@Z.c)
 * Callees:
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x18001B680 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetAllApplicationsByAppIDSafe(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  int ImmersiveApplicationArraySafe; // ebx
  struct IImmersiveApplicationArray *v8; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  ImmersiveApplicationArraySafe = CApplicationManager::GetImmersiveApplicationArraySafe(this, &v8);
  if ( ImmersiveApplicationArraySafe >= 0 )
    ImmersiveApplicationArraySafe = (*(__int64 (__fastcall **)(struct IImmersiveApplicationArray *, const unsigned __int16 *, struct IObjectArray **))(*(_QWORD *)v8 + 48LL))(
                                      v8,
                                      a2,
                                      a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return (unsigned int)ImmersiveApplicationArraySafe;
}
