/*
 * XREFs of ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C0107B90
 * Callers:
 *     ndisNDKGlobalDisabled @ 0x1C0119D24 (ndisNDKGlobalDisabled.c)
 *     ndisReadNDKGlobalFlags @ 0x1C011A1EC (ndisReadNDKGlobalFlags.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C0146DE0 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 *     ndisReadRegistry @ 0x1C0147000 (ndisReadRegistry.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0023C1C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C002EFDC (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_SD @ 0x1C0080460 (WPP_RECORDER_SF_SD_ea_1C0080460.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C0107D40 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 */

__int64 __fastcall ndisReadRegistryKnobs(
        struct _DRIVER_OBJECT *a1,
        const struct NDIS_REGISTRY_KNOB *a2,
        unsigned __int64 a3)
{
  PVOID v3; // rbx
  const struct NDIS_REGISTRY_KNOB *v5; // rdi
  char *v6; // rdx
  unsigned __int64 v7; // r9
  _DWORD *v8; // rcx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // edx
  unsigned int v12; // esi
  unsigned int v13; // eax
  int v14; // edx
  unsigned __int64 v15; // r12
  unsigned int *v16; // rsi
  unsigned int ValueUlong; // eax
  __int64 v19; // [rsp+30h] [rbp-10h]
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  HANDLE v21; // [rsp+90h] [rbp+50h] BYREF
  void *v22; // [rsp+98h] [rbp+58h] BYREF

  Handle = a1;
  v3 = ndisDriverObject;
  v5 = a2;
  if ( a3 )
  {
    v6 = (char *)a2 + 8;
    v7 = a3;
    do
    {
      v8 = *(_DWORD **)v6;
      v9 = *((_DWORD *)v6 + 2);
      v6 += 24;
      *v8 = v9;
      --v7;
    }
    while ( v7 );
  }
  v21 = 0LL;
  Handle = 0LL;
  v22 = 0LL;
  v10 = IoOpenDriverRegistryKey(v3, 1LL, 1LL, 0LL, &v22);
  v12 = v10;
  if ( v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        1,
        11,
        (struct _GUID *)&WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids,
        v10);
    }
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &Handle,
      v22);
    v22 = 0LL;
    v13 = IoOpenDriverRegistryKey(v3, 0LL, 1LL, 0LL, &v22);
    v12 = v13;
    if ( v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          1,
          12,
          (struct _GUID *)&WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids,
          v13);
      }
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        &v21,
        v22);
      v15 = 0LL;
      if ( a3 )
      {
        while ( 1 )
        {
          v16 = (unsigned int *)*((_QWORD *)v5 + 1);
          if ( !Handle )
            goto LABEL_10;
          ValueUlong = KRegKey::QueryValueUlong((KRegKey *)&Handle, *(const wchar_t **)v5, *((unsigned int **)v5 + 1));
          if ( ValueUlong + 1073741789 <= 1 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v19) = ValueUlong;
              WPP_RECORDER_SF_Sd(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                1u,
                0xAu,
                (struct _GUID *)&WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids,
                *(const wchar_t **)v5,
                v19);
            }
            ValueUlong = 0;
          }
          if ( ValueUlong == -1073741772 )
          {
LABEL_10:
            ValueUlong = KRegKey::QueryValueUlong((KRegKey *)&v21, *(const wchar_t **)v5, v16);
            if ( ValueUlong == -1073741772 )
            {
              *v16 = *((_DWORD *)v5 + 4);
              ValueUlong = 0;
            }
          }
          v12 = ValueUlong;
          if ( ValueUlong )
            break;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            LODWORD(v19) = **((_DWORD **)v5 + 1);
            WPP_RECORDER_SF_SD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              1u,
              0xDu,
              (struct _GUID *)&WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids,
              *(const wchar_t **)v5,
              v19);
          }
          ++v15;
          v5 = (const struct NDIS_REGISTRY_KNOB *)((char *)v5 + 24);
          if ( v15 >= a3 )
            goto LABEL_17;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v19) = ValueUlong;
          WPP_RECORDER_SF_Sd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0xEu,
            (struct _GUID *)&WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids,
            *(const wchar_t **)v5,
            v19);
        }
      }
    }
LABEL_17:
    if ( Handle )
      ZwClose(Handle);
  }
  if ( v21 )
    ZwClose(v21);
  return v12;
}
