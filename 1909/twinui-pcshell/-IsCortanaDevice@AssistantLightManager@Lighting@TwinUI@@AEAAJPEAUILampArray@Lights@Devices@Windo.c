/*
 * XREFs of ?IsCortanaDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUILampArray@Lights@Devices@Windows@@PEA_N@Z @ 0x18041FDE0
 * Callers:
 *     ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18041F6E8 (-AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Lighting::AssistantLightManager::IsCortanaDevice(
        TwinUI::Lighting::AssistantLightManager *this,
        struct Windows::Devices::Lights::ILampArray *a2,
        bool *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  char v8; // r14
  int v9; // esi
  int v10; // eax
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+24h] [rbp-24h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  TwinUI::Lighting::AssistantLightManager *v17; // [rsp+80h] [rbp+38h] BYREF
  int v18; // [rsp+88h] [rbp+40h] BYREF
  char v19; // [rsp+90h] [rbp+48h] BYREF
  int v20; // [rsp+98h] [rbp+50h] BYREF

  v17 = this;
  v15[1] = -2LL;
  *a3 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Devices::Lights::ILampArray *, int *))(*(_QWORD *)a2 + 80LL))(
         a2,
         &v18);
  if ( v5 < 0 )
  {
    v6 = 89LL;
    goto LABEL_3;
  }
  if ( v18 != 6 )
    return 0LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Devices::Lights::ILampArray *, _QWORD *))(*(_QWORD *)a2 + 96LL))(
         a2,
         v15);
  if ( v5 < 0 )
  {
    v6 = 97LL;
    goto LABEL_3;
  }
  if ( v15[0] > 500000LL )
    return 0LL;
  LODWORD(v17) = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Devices::Lights::ILampArray *, TwinUI::Lighting::AssistantLightManager **))(*(_QWORD *)a2 + 88LL))(
         a2,
         &v17);
  if ( v5 < 0 )
  {
    v6 = 106LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = 0;
  v9 = 0;
  if ( (int)v17 <= 0 )
    return 0LL;
  do
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v10 = (*(__int64 (__fastcall **)(struct Windows::Devices::Lights::ILampArray *, _QWORD, __int64 *))(*(_QWORD *)a2 + 160LL))(
            a2,
            (unsigned int)v9,
            &v14);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 113LL;
      goto LABEL_31;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 56LL))(v14, &v19);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 116LL;
      goto LABEL_31;
    }
    if ( (v19 & 8) == 0 )
      goto LABEL_22;
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 72LL))(v14, &v20);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 124LL;
      goto LABEL_31;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 88LL))(v14, &v12);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 125LL;
      goto LABEL_31;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 80LL))(v14, &v13);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 126LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      return (unsigned int)v5;
    }
    if ( v20 >= 48 && v12 >= 48 && v13 >= 48 )
      v8 = 1;
LABEL_22:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    ++v9;
  }
  while ( v9 < (int)v17 );
  if ( v8 )
    *a3 = 1;
  return 0LL;
}
