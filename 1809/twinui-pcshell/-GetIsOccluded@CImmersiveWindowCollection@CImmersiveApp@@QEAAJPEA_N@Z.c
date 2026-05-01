/*
 * XREFs of ?GetIsOccluded@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEA_N@Z @ 0x18011BEF4
 * Callers:
 *     ?GetIsOccluded@CImmersiveApp@@UEAAJPEAH@Z @ 0x18011BE90 (-GetIsOccluded@CImmersiveApp@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::GetIsOccluded(
        CImmersiveApp::CImmersiveWindowCollection *this,
        bool *a2)
{
  int v4; // edi
  __int64 v5; // rbx
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  *a2 = 0;
  if ( *((_QWORD *)this + 22) )
  {
    v11 = 0LL;
    v5 = **((_QWORD **)this + 21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 40LL))(
           v5,
           &GUID_d6ecd9bf_13b0_4264_955c_6e96d28a37ae,
           &v11);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        7901LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v6);
    if ( v11 )
    {
      v10 = 0;
      v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 648LL))(v11, &v10);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          7906LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v7);
      LOBYTE(v4) = v10 != 0;
      if ( *((unsigned __int8 *)this + 201) != v4 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          7907LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)0x8000FFFFLL);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  *a2 = *((_BYTE *)this + 202);
  return 0LL;
}
