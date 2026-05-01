/*
 * XREFs of ?_GetOrientationPreferenceFromCurrentOrientation@CRotationManagerSync@@AEAAJPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18014A898
 * Callers:
 *     ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x18014A4B0 (-LockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRotationManagerSync::_GetOrientationPreferenceFromCurrentOrientation(
        CRotationManagerSync *this,
        enum ORIENTATION_PREFERENCE *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD, GUID *, GUID *, __int64 *); // rbx
  int v5; // ebx
  enum ORIENTATION_PREFERENCE v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  *a2 = ORIENTATION_PREFERENCE_NONE;
  v8 = 0LL;
  v3 = *((_QWORD *)this + 17);
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v3 + 72LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  v5 = v4(v3, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v8);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, enum ORIENTATION_PREFERENCE *))(*(_QWORD *)v8 + 80LL))(v8, &v7);
    if ( v5 >= 0 )
      *a2 = v7;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return (unsigned int)v5;
}
