/*
 * XREFs of ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C0127458
 * Callers:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C0127318 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0032B80 (WPP_RECORDER_SF_S.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C01087AC (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0108DB8 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

char __fastcall ndisBindReadFilterDriverSettingsFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1, struct KRegKey *a2)
{
  wchar_t **v2; // rbx
  unsigned int v3; // esi
  Rtl::KString *value; // rcx
  const wchar_t *v7; // r8
  __int64 v8; // rcx
  __int16 v9; // ax
  _UNICODE_STRING v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = &off_1C00CC1E0;
  a1->FilterBindFlags = 0;
  v3 = 0;
  while ( (int)KRegKey::QueryValueBoolean(a2, *v2, &v12, DefaultToFalse) >= 0 )
  {
    if ( v12 )
      a1->FilterBindFlags |= *((_DWORD *)v2 + 2);
    ++v3;
    v2 += 2;
    if ( v3 >= 5 )
    {
      value = a1->FilterClass.__ptr_.__value_;
      a1->FilterClass.__ptr_.__value_ = 0LL;
      if ( value )
        ExFreePoolWithTag(value, 0x7274534Bu);
      *(_QWORD *)&v11.Length = 0LL;
      v7 = L"FilterClass";
      v11.Buffer = 0LL;
      v8 = 0x7FFFLL;
      do
      {
        if ( !*v7 )
          break;
        ++v7;
        --v8;
      }
      while ( v8 );
      if ( v8 )
        v9 = 0x7FFF - v8;
      else
        v9 = 0;
      if ( v8 )
      {
        v11.Buffer = L"FilterClass";
        v11.Length = 2 * v9;
        v11.MaximumLength = 2 * v9 + 2;
        KRegKey::QueryValueString(&a2->m_ptr, &v11, (void **)&a1->FilterClass.__ptr_.__value_);
      }
      return 1;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xAu,
      0xCu,
      (struct _GUID *)&WPP_e71ea69b5edd301746dbdb8179a32a42_Traceguids,
      *v2);
  return 0;
}
