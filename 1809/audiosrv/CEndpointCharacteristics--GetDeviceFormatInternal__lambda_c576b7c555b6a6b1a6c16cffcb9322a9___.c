/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___ @ 0x180066AA0
 * Callers:
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18010C808 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ??1?$out_param_t@V?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800233D8 (--1-$out_param_t@V-$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U-$function_deleter@P6AXPEAX@Z$1-C.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800352F0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___ @ 0x1800669C0 (CEndpointCharacteristics--GetDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct tWAVEFORMATEX **a6)
{
  int DefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  struct tWAVEFORMATEX *v9; // rdi
  int v10; // eax
  struct tWAVEFORMATEX *v11; // rcx
  struct tWAVEFORMATEX *v13; // [rsp+30h] [rbp-50h] BYREF
  struct tWAVEFORMATEX **v14; // [rsp+38h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v15; // [rsp+40h] [rbp-40h] BYREF
  char v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]
  int v18[4]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v17 = -2LL;
  *a6 = 0LL;
  v13 = 0LL;
  v14 = &v13;
  v15 = 0LL;
  v16 = 1;
  *(_OWORD *)v18 = *(_OWORD *)a5;
  v19 = *(_QWORD *)(a5 + 16);
  DefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9 = CEndpointCharacteristics::GetDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___(
                                                             a1,
                                                             (__int64)&v13,
                                                             a3,
                                                             (__int128 *)v18,
                                                             &v15);
  wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((void ***)&v14);
  if ( DefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9 < 0 )
  {
    v7 = (unsigned int)DefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9;
    v8 = 6235LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v8,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v7);
    v11 = v13;
    goto LABEL_7;
  }
  v9 = v13;
  v10 = ValidateWaveFormatEx(v13);
  DefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9 = v10;
  if ( v10 < 0 )
  {
    v7 = (unsigned int)v10;
    v8 = 6288LL;
    goto LABEL_5;
  }
  v11 = 0LL;
  v13 = 0LL;
  *a6 = v9;
  DefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9 = 0;
LABEL_7:
  if ( v11 )
    CoTaskMemFree(v11);
  return (unsigned int)DefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9;
}
