/*
 * XREFs of ?_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803B95D0
 * Callers:
 *     ?ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180358810 (-ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180016A64 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803AC844 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall CAppLayoutOperation::_HandleNormalLayoutEnvChange(
        CAppLayoutOperation *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  int v4; // edi
  const struct LAYOUT_ENVIRONMENT_DETAILS *v5; // rdx
  unsigned int v6; // r12d
  LANGID ThreadUILanguage; // ax
  int v8; // eax
  bool v9; // bl
  unsigned int v10; // r14d
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rbx
  bool v14; // al
  int v15; // eax
  __int64 v17[2]; // [rsp+30h] [rbp-10h] BYREF
  int v18; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+50h] BYREF
  __int64 v20; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 216LL))(*((_QWORD *)this + 5));
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 264LL))(*((_QWORD *)this + 5), 2LL);
  v6 = ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps(a2, v5);
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), 5LL) <= v6
    || (*(int (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 5) + 168LL))(
         *((_QWORD *)this + 5),
         0LL,
         &v19) < 0
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 256LL))(*((_QWORD *)this + 5), v19),
        v4 >= 0) )
  {
    ThreadUILanguage = GetThreadUILanguage();
    v8 = IsBiDiLocale(ThreadUILanguage);
    v9 = v8 != 0;
    if ( v8 )
      v10 = 0;
    else
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5)) - 1;
    v11 = 2LL * v9;
    while ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(
              *((_QWORD *)this + 5),
              1LL) > v6 )
    {
      if ( v4 < 0 )
        return (unsigned int)v4;
      v18 = 0;
      v17[0] = 0LL;
      v12 = *((_QWORD *)this + 5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v12 + 96LL))(
             v12,
             v10,
             &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
             v17) >= 0 )
      {
        v20 = 0LL;
        v13 = v17[0];
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 40LL))(v13, &v20) >= 0 )
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 72LL))(v20, &v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      }
      v14 = 0;
      if ( !v18 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 256LL))(*((_QWORD *)this + 5), v10);
        v14 = v4 >= 0;
      }
      if ( !v11 || !v14 )
      {
        v15 = 1;
        if ( v11 != 2 )
          v15 = -1;
        v10 += v15;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
    }
    if ( v4 >= 0 && !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5)) )
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 240LL))(
                             *((_QWORD *)this + 5),
                             0LL,
                             0LL,
                             0LL);
  }
  return (unsigned int)v4;
}
