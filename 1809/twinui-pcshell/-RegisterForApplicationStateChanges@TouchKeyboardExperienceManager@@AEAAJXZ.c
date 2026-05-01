/*
 * XREFs of ?RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802B9C5C
 * Callers:
 *     _lambda_6920fd0394d91195244b848df2c49eea_::operator() @ 0x180092D3C (_lambda_6920fd0394d91195244b848df2c49eea_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::RegisterForApplicationStateChanges(
        TouchKeyboardExperienceManager *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  LPVOID v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  _QWORD *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp+18h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(&CLSID_ShellServiceHost, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v10 = 0LL;
    v4 = ppv;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v5 = (*(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           &SID_ProcessLifetimeManagerControl,
           &GUID_48f4e2d1_eeba_461e_8f8f_6353da1a3aca,
           &v10);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v7 = (_QWORD *)((char *)this + 512);
      if ( *((_QWORD *)this + 67) >= 8uLL )
        v7 = (_QWORD *)*v7;
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, unsigned __int64, char *))(*(_QWORD *)v10 + 24LL))(
             v10,
             v7,
             15LL,
             ((unsigned __int64)this + 160) & -(__int64)(this != 0LL),
             (char *)this + 272);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v3 = 0;
        goto LABEL_11;
      }
      v6 = 1708LL;
    }
    else
    {
      v6 = 1703LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6A4,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v3;
}
