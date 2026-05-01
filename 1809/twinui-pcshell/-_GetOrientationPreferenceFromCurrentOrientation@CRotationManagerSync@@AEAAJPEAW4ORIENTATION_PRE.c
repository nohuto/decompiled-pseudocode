/*
 * XREFs of ?_GetOrientationPreferenceFromCurrentOrientation@CRotationManagerSync@@AEAAJPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18010565C
 * Callers:
 *     ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x180105270 (-LockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRotationManagerSync::_GetOrientationPreferenceFromCurrentOrientation(
        CRotationManagerSync *this,
        enum ORIENTATION_PREFERENCE *a2)
{
  __int64 v3; // rbx
  int v4; // ebx
  enum ORIENTATION_PREFERENCE v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  *a2 = ORIENTATION_PREFERENCE_NONE;
  v7 = 0LL;
  v3 = *((_QWORD *)this + 17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v3 + 72LL))(
         v3,
         0LL,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &v7);
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, enum ORIENTATION_PREFERENCE *))(*(_QWORD *)v7 + 80LL))(v7, &v6);
    if ( v4 >= 0 )
      *a2 = v6;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return (unsigned int)v4;
}
