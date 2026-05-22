/*
 * XREFs of ?SetHapticsWaveForm@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@GE@Z @ 0x1800A5ACC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a8bf174a58f89e727d2f8f2640ee39aa__void_unsigned_char_::_Do_call @ 0x18012A0F0 (std--_Func_impl_no_alloc__lambda_a8bf174a58f89e727d2f8f2640ee39aa__void_unsigned_char_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HIDSetInteger@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGI@Z @ 0x1800A91A8 (-HIDSetInteger@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGI@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInteractionDevices::SetHapticsWaveForm(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        unsigned __int8 a3)
{
  unsigned __int16 v4; // r14
  int v6; // ebx
  __int64 v7; // rdx
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rbp
  size_t v13; // r8
  void *v14; // rcx
  struct SpatialInteractionDevices::HID_REPORT *v15; // r8
  int v16; // edi
  struct SpatialInteractionDevices::HID_REPORT *v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // [rsp+28h] [rbp-20h]
  unsigned int v20; // [rsp+28h] [rbp-20h]
  unsigned int v21; // [rsp+30h] [rbp-18h] BYREF
  void *v22; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned __int16)a2;
  if ( a3 > 0x64u )
  {
    v6 = -2147024809;
    v7 = 998LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *((unsigned __int16 *)this + 59);
  v10 = 0LL;
  if ( !*((_WORD *)this + 59) )
    return 0LL;
  v11 = *((_QWORD *)this + 20);
  while ( 1 )
  {
    v12 = 9 * v10;
    if ( *(_WORD *)(v11 + 72 * v10) == 14 )
      break;
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= v9 )
      return 0LL;
  }
  v13 = *((unsigned __int16 *)this + 35);
  v14 = (void *)*((_QWORD *)this + 28);
  v21 = *((unsigned __int16 *)this + 35);
  v22 = v14;
  memset_0(v14, 0, v13);
  **((_BYTE **)this + 28) = *(_BYTE *)(v11 + 8 * v12 + 2);
  v16 = SpatialInteractionDevices::Internal::HIDSetInteger(
          this,
          (struct SpatialInteractionDevices::HID_HANDLE *)&v21,
          v15,
          0x21u,
          v4,
          v19);
  if ( v16 >= 0 )
  {
    v16 = SpatialInteractionDevices::Internal::HIDSetInteger(
            this,
            (struct SpatialInteractionDevices::HID_HANDLE *)&v21,
            v17,
            0x23u,
            a3,
            v20);
    if ( v16 < 0 )
    {
      v18 = 1011LL;
      goto LABEL_11;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this, v22, v21);
    if ( v6 < 0 )
    {
      v7 = 1013LL;
      goto LABEL_3;
    }
    return 0LL;
  }
  v18 = 1010LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
    (const char *)(unsigned int)v16);
  return (unsigned int)v16;
}
