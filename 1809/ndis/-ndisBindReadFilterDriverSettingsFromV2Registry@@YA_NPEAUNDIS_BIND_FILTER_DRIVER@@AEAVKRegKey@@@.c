/*
 * XREFs of ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C010709C
 * Callers:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C0106FA8 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x1C0065340 (WPP_SF_S.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C4B40 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C00CBF98 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 */

char __fastcall ndisBindReadFilterDriverSettingsFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1, struct KRegKey *a2)
{
  wchar_t **v4; // rbx
  unsigned int v5; // esi
  Rtl::KString *Myptr; // rcx
  const wchar_t *v7; // rdx
  __int64 v8; // rcx
  __int16 v9; // ax
  _UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 v12; // [rsp+40h] [rbp+8h] BYREF

  a1->FilterBindFlags = 0;
  v4 = &off_1C00871F0;
  v5 = 0;
  while ( (int)KRegKey::QueryValueBoolean(a2, *v4, &v12, DefaultToFalse) >= 0 )
  {
    if ( v12 )
      a1->FilterBindFlags |= *((_DWORD *)v4 + 2);
    ++v5;
    v4 += 2;
    if ( v5 >= 5 )
    {
      Myptr = a1->FilterClass._Myptr;
      if ( Myptr )
      {
        ExFreePoolWithTag(Myptr, 0x7274534Bu);
        a1->FilterClass._Myptr = 0LL;
      }
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
        KRegKey::QueryValueString(&a2->m_ptr, &v11, (void **)&a1->FilterClass._Myptr);
      }
      return 1;
    }
  }
  if ( (unsigned __int8)byte_1C00A0259 >= 2u )
    WPP_SF_S(0xCu, &WPP_e71ea69b5edd301746dbdb8179a32a42_Traceguids, *v4);
  return 0;
}
