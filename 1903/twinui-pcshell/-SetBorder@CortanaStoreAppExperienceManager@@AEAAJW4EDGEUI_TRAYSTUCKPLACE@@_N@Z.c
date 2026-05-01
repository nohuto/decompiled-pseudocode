/*
 * XREFs of ?SetBorder@CortanaStoreAppExperienceManager@@AEAAJW4EDGEUI_TRAYSTUCKPLACE@@_N@Z @ 0x1801BEEA8
 * Callers:
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BE850 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::SetBorder(__int64 a1, int a2, char a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  unsigned int LastError; // ebx
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  int v12; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-38h]
  int v14; // [rsp+40h] [rbp-30h]
  __int64 v15; // [rsp+48h] [rbp-28h]
  _QWORD v16[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v15 = -2LL;
  v16[0] = 0x40000000004LL;
  v16[1] = 0x10000LL;
  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      HIDWORD(v16[0]) = 1408;
    }
    else if ( a2 == 2 )
    {
      HIDWORD(v16[0]) = 1312;
    }
    else if ( a2 == 3 )
    {
      HIDWORD(v16[0]) = 1216;
      if ( a3 )
        HIDWORD(v16[0]) = 1248;
    }
  }
  v12 = 19;
  v13 = v16;
  v14 = 16;
  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 256);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v5 = v4(v3, &v10);
  LastError = v5;
  if ( v5 < 0 )
  {
    v7 = 1206LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_17;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v11);
  LastError = v5;
  if ( v5 < 0 )
  {
    v7 = 1208LL;
    goto LABEL_13;
  }
  if ( (unsigned int)SetWindowCompositionAttribute(v11, &v12) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x4B9,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                  v8);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return LastError;
}
