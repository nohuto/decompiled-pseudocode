/*
 * XREFs of ?s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@PEAU_GUID@@1@Z @ 0x180388B54
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180386560 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180159C40 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 */

void __fastcall CAppTransitionManager::s_GetScenarioGUIDForAppArrangementAnimation(
        struct IAppLayoutOperation *a1,
        struct _GUID *a2,
        struct _GUID *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  unsigned int i; // ebx
  __int64 v9; // rax
  int v10; // eax
  struct _GUID v11; // xmm0
  struct _GUID v12; // xmm1
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v16; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-18h] BYREF

  *a2 = (struct _GUID)xmmword_1804FF638;
  *a3 = (struct _GUID)xmmword_1804FF638;
  if ( (*(int (__fastcall **)(struct IAppLayoutOperation *, unsigned int *))(*(_QWORD *)a1 + 24LL))(a1, &v15) >= 0 )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    (*(void (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a1 + 72LL))(a1, &v14);
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v13);
      v6 = 0;
      if ( (_DWORD)v13 )
      {
        while ( 1 )
        {
          *(_QWORD *)&v16.Data1 = 0LL;
          v7 = v14;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
          if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct _GUID *))(*(_QWORD *)v7 + 32LL))(
                 v7,
                 v6,
                 &GUID_114ed843_c914_443d_9588_6ffb643e73d0,
                 &v16) >= 0
            && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)&v16.Data1 + 32LL))(*(_QWORD *)&v16.Data1) == 2 )
          {
            break;
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
          if ( ++v6 >= (unsigned int)v13 )
            goto LABEL_9;
        }
        *a2 = (struct _GUID)xmmword_1804FF678;
        *a3 = (struct _GUID)xmmword_1804FF668;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      }
    }
LABEL_9:
    for ( i = 0; ; ++i )
    {
      v9 = *(_QWORD *)&a2->Data1 - 0x45DC9D952C60FCF9LL;
      if ( *(_QWORD *)&a2->Data1 == 0x45DC9D952C60FCF9LL )
        v9 = *(_QWORD *)a2->Data4 + 0x3BEB2695C954FD7FLL;
      if ( v9 || i >= v15 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        return;
      }
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      if ( (*(int (__fastcall **)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *))(*(_QWORD *)a1 + 32LL))(
             a1,
             i,
             &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e,
             &v13) >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13);
        if ( v10 == 1 )
          goto LABEL_27;
        if ( v10 == 2 )
          goto LABEL_26;
        if ( v10 > 2 )
        {
          if ( v10 <= 4 )
          {
            *a2 = (struct _GUID)xmmword_1804FF5E8;
            *a3 = (struct _GUID)xmmword_1804FF5E8;
            goto LABEL_29;
          }
          if ( v10 == 7 )
          {
LABEL_26:
            *a2 = (struct _GUID)xmmword_1804FF5F8;
            goto LABEL_29;
          }
          if ( v10 == 10 )
          {
LABEL_27:
            v11 = (struct _GUID)xmmword_1804FF658;
            v12 = (struct _GUID)xmmword_1804FF608;
            goto LABEL_28;
          }
        }
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13) )
        {
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 88LL))(v13) )
          {
            v17[0] = 0LL;
            v17[1] = 0LL;
            *(_QWORD *)&v16.Data1 = 0LL;
            *(_QWORD *)v16.Data4 = 0LL;
            (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v13 + 56LL))(v13, 1LL, v17);
            (*(void (__fastcall **)(__int64, __int64, struct _GUID *))(*(_QWORD *)v13 + 72LL))(v13, 1LL, &v16);
            if ( !Platform::Guid::Equals((Platform::Guid *)v17, &v16) )
            {
              v11 = (struct _GUID)xmmword_1804FF5D8;
              v12 = (struct _GUID)xmmword_1804FF618;
LABEL_28:
              *a2 = v11;
              *a3 = v12;
            }
          }
        }
      }
LABEL_29:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    }
  }
}
