/*
 * XREFs of ?GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@_KPEAI@Z @ 0x18010B4E4
 * Callers:
 *     ?GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180048258 (-GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSetting.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x180053D14 (Create_SpatialAudioDevicePropertyReader.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetSpatialAudioSettings(
        CEndpointCharacteristics *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        const GUID *a4,
        unsigned int *a5)
{
  unsigned int v8; // esi
  unsigned int *v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int SpatialAudioDevicePropertyReader; // eax
  unsigned __int64 v13; // r9
  __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v17; // [rsp+70h] [rbp+18h] BYREF

  v15[1] = -2LL;
  v15[0] = 0LL;
  v17 = 0;
  v8 = 0;
  v9 = a5;
  if ( a3 && !a5 )
  {
    v10 = -2147024809;
    v11 = 6777LL;
LABEL_11:
    v13 = v10;
    goto LABEL_12;
  }
  v15[0] = 0LL;
  SpatialAudioDevicePropertyReader = Create_SpatialAudioDevicePropertyReader(0LL, *((_QWORD *)this + 5), v15, a4);
  v10 = SpatialAudioDevicePropertyReader;
  if ( SpatialAudioDevicePropertyReader < 0 )
  {
    v13 = (unsigned int)SpatialAudioDevicePropertyReader;
    v11 = 6779LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v11,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v13);
    goto LABEL_17;
  }
  if ( v9 )
  {
    *v9 = 0;
    if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15[0] + 96LL))(v15[0], &v17) >= 0 )
    {
      if ( a3 )
      {
        v8 = 834 * v17;
        if ( (unsigned __int64)a4 < 834 * v17 )
        {
          v10 = -2147024774;
          v11 = 6789LL;
          goto LABEL_11;
        }
      }
    }
  }
  if ( (*(int (__fastcall **)(__int64, struct SpatialAudioSettings *, struct SpatialAudioEncoderDescriptor *, _QWORD))(*(_QWORD *)v15[0] + 104LL))(
         v15[0],
         a2,
         a3,
         v8) < 0 )
    memset_0(a2, 0, 0x48uLL);
  else
    *v9 = v17;
  v10 = 0;
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v15);
  return v10;
}
