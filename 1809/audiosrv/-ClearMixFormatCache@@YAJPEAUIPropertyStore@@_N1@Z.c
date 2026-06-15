/*
 * XREFs of ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z @ 0x18012EB04
 * Callers:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180109250 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18012EFEC (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18012F04C (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18012F0AC (-GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18012F10C (-GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ClearMixFormatCache(struct IPropertyStore *a1, char a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // r14d
  struct _GUID *v12; // r15
  struct _GUID *v13; // rsi
  int ProcessingModeSpecificMixFormatKey; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // r14d
  struct _GUID *v18; // rsi
  int v19; // eax
  int v20; // eax
  unsigned int v21; // esi
  int v22; // eax
  int v23; // eax
  __int64 v25; // [rsp+20h] [rbp-60h] BYREF
  struct _GUID v26; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v27[4]; // [rsp+40h] [rbp-40h] BYREF
  struct _tagpropertykey v28; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v27[3] = -2LL;
  memset(v27, 0, 24);
  v25 = 0LL;
  if ( a1 )
    ((void (__fastcall *)(struct IPropertyStore *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_95b0d208_7331_44a7_82d7_98408a20c299,
      &v25);
  if ( a2 )
  {
    if ( v25 )
      v6 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *))(*(_QWORD *)v25 + 64LL))(
             v25,
             &PKEY_AudioEngine_HWMixFormat,
             v27);
    else
      v6 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, _QWORD *))a1->lpVtbl->SetValue)(
             a1,
             &PKEY_AudioEngine_HWMixFormat,
             v27);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = (unsigned int)v6;
      v9 = 501LL;
      goto LABEL_81;
    }
    if ( v25 )
      v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *))(*(_QWORD *)v25 + 64LL))(
              v25,
              &PKEY_AudioEngine_MixFormat,
              v27);
    else
      v10 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, _QWORD *))a1->lpVtbl->SetValue)(
              a1,
              &PKEY_AudioEngine_MixFormat,
              v27);
    v7 = v10;
    if ( v10 < 0 )
    {
      v8 = (unsigned int)v10;
      v9 = 505LL;
      goto LABEL_81;
    }
  }
  v11 = 0;
  v12 = (struct _GUID *)qword_1801B2590;
  v13 = (struct _GUID *)qword_1801B2590;
  do
  {
    if ( a2 )
    {
      v26 = *v13;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v26, 0, &v28);
      v7 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v9 = 514LL;
        goto LABEL_80;
      }
      if ( v25 )
        v15 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v25 + 64LL))(
                v25,
                &v28,
                v27);
      else
        v15 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
                a1,
                &v28,
                v27);
      v7 = v15;
      if ( v15 < 0 )
      {
        v8 = (unsigned int)v15;
        v9 = 517LL;
        goto LABEL_81;
      }
      v26 = *v13;
      if ( (int)GetProcessingModeSpecificOverridingMixFormatKey(&v26, 0, &v28) >= 0 )
      {
        if ( v25 )
          (*(void (__fastcall **)(__int64, struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v25 + 64LL))(v25, &v28, v27);
        else
          ((void (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
            a1,
            &v28,
            v27);
      }
    }
    if ( a3 )
    {
      v26 = *v13;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v26, 1, &v28);
      v7 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v9 = 529LL;
        goto LABEL_80;
      }
      if ( v25 )
        v16 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v25 + 64LL))(
                v25,
                &v28,
                v27);
      else
        v16 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
                a1,
                &v28,
                v27);
      v7 = v16;
      if ( v16 < 0 )
      {
        v8 = (unsigned int)v16;
        v9 = 532LL;
        goto LABEL_81;
      }
      v26 = *v13;
      if ( (int)GetProcessingModeSpecificOverridingMixFormatKey(&v26, 1, &v28) >= 0 )
      {
        if ( v25 )
          (*(void (__fastcall **)(__int64, struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v25 + 64LL))(v25, &v28, v27);
        else
          ((void (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
            a1,
            &v28,
            v27);
      }
    }
    ++v11;
    ++v13;
  }
  while ( v11 < 8 );
  v17 = 0;
  v18 = (struct _GUID *)qword_1801B2590;
  do
  {
    if ( a2 )
    {
      v26 = *v18;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(&v26, 0, &v28);
      v7 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v9 = 548LL;
        goto LABEL_80;
      }
      v19 = v25
          ? (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v25 + 64LL))(
              v25,
              &v28,
              v27)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
              a1,
              &v28,
              v27);
      v7 = v19;
      if ( v19 < 0 )
      {
        v8 = (unsigned int)v19;
        v9 = 551LL;
        goto LABEL_81;
      }
    }
    if ( a3 )
    {
      v26 = *v18;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(&v26, 1, &v28);
      v7 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v9 = 557LL;
        goto LABEL_80;
      }
      v20 = v25
          ? (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v25 + 64LL))(
              v25,
              &v28,
              v27)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
              a1,
              &v28,
              v27);
      v7 = v20;
      if ( v20 < 0 )
      {
        v8 = (unsigned int)v20;
        v9 = 560LL;
        goto LABEL_81;
      }
    }
    ++v17;
    ++v18;
  }
  while ( v17 < 8 );
  v21 = 0;
  while ( 1 )
  {
    if ( a2 )
    {
      v26 = *v12;
      ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificStreamGroupFormatKey(&v26, 0, &v28);
      v7 = ProcessingModeSpecificMixFormatKey;
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v9 = 570LL;
        goto LABEL_80;
      }
      if ( v25 )
        v22 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v25 + 64LL))(
                v25,
                &v28,
                v27);
      else
        v22 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
                a1,
                &v28,
                v27);
      v7 = v22;
      if ( v22 < 0 )
      {
        v8 = (unsigned int)v22;
        v9 = 573LL;
        goto LABEL_81;
      }
    }
    if ( !a3 )
      goto LABEL_71;
    v26 = *v12;
    ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificStreamGroupFormatKey(&v26, 1, &v28);
    v7 = ProcessingModeSpecificMixFormatKey;
    if ( ProcessingModeSpecificMixFormatKey < 0 )
      break;
    if ( v25 )
      v23 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, _QWORD *))(*(_QWORD *)v25 + 64LL))(
              v25,
              &v28,
              v27);
    else
      v23 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, _QWORD *))a1->lpVtbl->SetValue)(
              a1,
              &v28,
              v27);
    v7 = v23;
    if ( v23 < 0 )
    {
      v8 = (unsigned int)v23;
      v9 = 582LL;
      goto LABEL_81;
    }
LABEL_71:
    ++v21;
    ++v12;
    if ( v21 >= 8 )
    {
      v7 = 0;
      goto LABEL_73;
    }
  }
  v9 = 579LL;
LABEL_80:
  v8 = (unsigned int)ProcessingModeSpecificMixFormatKey;
LABEL_81:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v9,
    (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
    (const char *)v8);
LABEL_73:
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return v7;
}
