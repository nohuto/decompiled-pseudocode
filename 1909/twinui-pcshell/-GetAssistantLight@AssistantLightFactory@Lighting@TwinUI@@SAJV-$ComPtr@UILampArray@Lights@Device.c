/*
 * XREFs of ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x1804216E8
 * Callers:
 *     ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18041F6E8 (-AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x180189778 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801F6438 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z @ 0x180420B80 (--$_Emplace_reallocate@H@-$vector@HV-$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z.c)
 *     ??$_Emplace_reallocate@U?$pair@MH@std@@@?$vector@U?$pair@MH@std@@V?$allocator@U?$pair@MH@std@@@2@@std@@QEAAPEAU?$pair@MH@1@QEAU21@$$QEAU21@@Z @ 0x180420CAC (--$_Emplace_reallocate@U-$pair@MH@std@@@-$vector@U-$pair@MH@std@@V-$allocator@U-$pair@MH@std@@@2.c)
 *     ??$_Sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0_JU?$less@X@0@@Z @ 0x1804214D0 (--$_Sort_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0_JU-$less@X@0@@Z.c)
 *     ??$make_shared@VAssistantLightBlock@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VAssistantLightBlock@Lighting@TwinUI@@@0@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@Z @ 0x1804215D0 (--$make_shared@VAssistantLightBlock@Lighting@TwinUI@@AEAV-$ComPtr@UILampArray@Lights@Devices@Win.c)
 *     ??$make_shared@VAssistantLightStrip@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV78@@std@@YA?AV?$shared_ptr@VAssistantLightStrip@Lighting@TwinUI@@@0@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@0@1@Z @ 0x18042161C (--$make_shared@VAssistantLightStrip@Lighting@TwinUI@@AEAV-$ComPtr@UILampArray@Lights@Devices@Win.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TwinUI::Lighting::AssistantLightFactory::GetAssistantLight(__int64 *a1, _QWORD *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rcx
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 *v11; // rsi
  unsigned int v12; // r12d
  int v13; // ecx
  unsigned __int64 *v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdx
  _DWORD *v17; // r13
  __int64 v18; // rcx
  _BYTE *v19; // rbx
  _DWORD *v20; // r8
  _BYTE *v21; // r15
  int v22; // r12d
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-C8h] BYREF
  int v26; // [rsp+28h] [rbp-C0h] BYREF
  int v27; // [rsp+2Ch] [rbp-BCh] BYREF
  char v28; // [rsp+30h] [rbp-B8h]
  int v29; // [rsp+34h] [rbp-B4h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 *v32; // [rsp+50h] [rbp-98h]
  __int128 v33; // [rsp+58h] [rbp-90h] BYREF
  _BYTE *v34; // [rsp+68h] [rbp-80h]
  int v35; // [rsp+70h] [rbp-78h] BYREF
  int v36; // [rsp+74h] [rbp-74h] BYREF
  __int64 *v37; // [rsp+78h] [rbp-70h]
  __int128 v38; // [rsp+80h] [rbp-68h] BYREF
  _BYTE *v39; // [rsp+90h] [rbp-58h]
  _QWORD *v40; // [rsp+98h] [rbp-50h]
  __int64 v41; // [rsp+A0h] [rbp-48h]
  __int64 v42; // [rsp+A8h] [rbp-40h] BYREF
  std::_Ref_count_base *v43; // [rsp+B0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v41 = -2LL;
  v40 = a2;
  v37 = a1;
  v29 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)*a1 + 88LL))(*a1, &v29);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = v29;
    if ( v29 >= 7 )
    {
      v31 = 0LL;
      v11 = 0LL;
      v32 = 0LL;
      v12 = 0;
      v13 = 0;
      v14 = 0LL;
      while ( v13 < v8 )
      {
        v25 = 0LL;
        v15 = *a1;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 160LL))(v15, v12, &v25);
        if ( v5 < 0 )
        {
          v16 = 44LL;
          goto LABEL_17;
        }
        v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 56LL))(v25, &v26);
        if ( v5 < 0 )
        {
          v16 = 47LL;
          goto LABEL_17;
        }
        if ( (v26 & 8) != 0 )
        {
          v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 72LL))(v25, &v35);
          if ( v5 < 0 )
          {
            v16 = 56LL;
            goto LABEL_17;
          }
          v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 88LL))(v25, &v36);
          if ( v5 < 0 )
          {
            v16 = 57LL;
            goto LABEL_17;
          }
          v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 80LL))(v25, &v27);
          if ( v5 < 0 )
          {
            v16 = 58LL;
            goto LABEL_17;
          }
          if ( v35 >= 48 && v36 >= 48 && v27 >= 48 )
          {
            v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 64LL))(v25, &v42);
            if ( v5 < 0 )
            {
              v16 = 65LL;
LABEL_17:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v16,
                (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightfactory.cpp",
                (const char *)(unsigned int)v5);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
              if ( (_QWORD)v31 )
                std::_Deallocate<16,0>(
                  (void *)v31,
                  (const struct std::nothrow_t *)(8 * ((__int64)((__int64)v11 - v31) >> 3)));
              goto LABEL_3;
            }
            try
            {
              v30 = __PAIR64__(v12, v42);
              if ( v11 == v14 )
              {
                std::vector<std::pair<float,int>>::_Emplace_reallocate<std::pair<float,int>>(
                  (char **)&v31,
                  (unsigned __int64)v14,
                  &v30);
                v11 = v32;
                v14 = (unsigned __int64 *)*((_QWORD *)&v31 + 1);
              }
              else
              {
                *v14++ = v30;
                *((_QWORD *)&v31 + 1) = v14;
              }
            }
            catch ( std::exception )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
              goto LABEL_57;
            }
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        v13 = ++v12;
        v8 = v29;
      }
      v17 = (_DWORD *)v31;
      v30 = (__int64)((__int64)v14 - v31) >> 3;
      std::_Sort_unchecked<std::pair<float,int> *,std::less<void>>(v31, v14, v30, v28);
      v33 = 0LL;
      v34 = 0LL;
      v38 = 0LL;
      v39 = 0LL;
      v26 = 1;
      try
      {
        std::vector<int>::_Emplace_reallocate<int>((const void **)&v38, 0LL, v17 + 1);
        v22 = 1;
        v19 = (_BYTE *)*((_QWORD *)&v33 + 1);
        v21 = (_BYTE *)*((_QWORD *)&v38 + 1);
        while ( v22 < (int)v30 )
        {
          v18 = v22;
          if ( *(float *)&v17[2 * v22 - 2] != *(float *)&v17[2 * v22] )
          {
            ++v26;
            v27 = v22 - 1;
            if ( v34 == v19 )
            {
              std::vector<int>::_Emplace_reallocate<int>((const void **)&v33, v19, &v27);
              v19 = (_BYTE *)*((_QWORD *)&v33 + 1);
              v18 = v22;
            }
            else
            {
              *(_DWORD *)v19 = v22 - 1;
              v19 += 4;
              *((_QWORD *)&v33 + 1) = v19;
            }
          }
          v20 = &v17[2 * v18 + 1];
          if ( v39 == v21 )
          {
            std::vector<int>::_Emplace_reallocate<int>((const void **)&v38, v21, v20);
            v21 = (_BYTE *)*((_QWORD *)&v38 + 1);
          }
          else
          {
            *(_DWORD *)v21 = *v20;
            v21 += 4;
            *((_QWORD *)&v38 + 1) = v21;
          }
          ++v22;
        }
        v27 = v30;
        if ( v34 == v19 )
        {
          std::vector<int>::_Emplace_reallocate<int>((const void **)&v33, v19, &v27);
        }
        else
        {
          *(_DWORD *)v19 = v30;
          *((_QWORD *)&v33 + 1) = v19 + 4;
        }
        if ( v26 >= 7 )
          v23 = std::make_shared<TwinUI::Lighting::AssistantLightStrip,Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray> &,std::vector<int> &,std::vector<int> &>(
                  &v42,
                  a1,
                  (__int64)&v38,
                  (__int64)&v33);
        else
          v23 = std::make_shared<TwinUI::Lighting::AssistantLightBlock,Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray> &>(
                  &v42,
                  a1);
        std::shared_ptr<KBViewInfo>::operator=(v40, v23);
        if ( v43 )
          std::_Ref_count_base::_Decref(v43);
      }
      catch ( std::exception )
      {
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v38);
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v33);
LABEL_57:
        if ( (_QWORD)v31 )
          std::_Deallocate<16,0>(
            (void *)v31,
            (const struct std::nothrow_t *)(((unsigned __int64)v32 - v31) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_59:
        v24 = *v37;
        if ( *v37 )
        {
          *v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
        return 2147942414LL;
      }
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v38);
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v33);
      if ( v17 )
        std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)(8 * (((char *)v11 - (char *)v17) >> 3)));
    }
    else
    {
      try
      {
        v9 = std::make_shared<TwinUI::Lighting::AssistantLightBlock,Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray> &>(
               &v42,
               a1);
        std::shared_ptr<KBViewInfo>::operator=(a2, v9);
        if ( v43 )
          std::_Ref_count_base::_Decref(v43);
      }
      catch ( std::exception )
      {
        goto LABEL_59;
      }
    }
    v10 = *a1;
    if ( *a1 )
    {
      *a1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightfactory.cpp",
      (const char *)(unsigned int)v4);
LABEL_3:
    v6 = *a1;
    if ( *a1 )
    {
      *a1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return (unsigned int)v5;
  }
}
