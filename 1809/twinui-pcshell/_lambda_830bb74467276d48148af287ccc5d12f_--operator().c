/*
 * XREFs of _lambda_830bb74467276d48148af287ccc5d12f_::operator() @ 0x18008CED8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_830bb74467276d48148af287ccc5d12f___::Run @ 0x18008D230 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_830bb74467276d48148af287ccc5d12f___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180080A50 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_830bb74467276d48148af287ccc5d12f_::operator()(int *a1)
{
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+5Ch] [rbp+14h]

  v8 = *a1;
  v9 = a1[1];
  v7 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IObjectCollection>>(&v7);
  Instance = CoCreateInstance(
               &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
               0LL,
               0x17u,
               &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
               (LPVOID *)ppv);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v4 = 551LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_6;
  }
  Instance = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 128LL))(v7, &v8);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v4 = 553LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return v3;
}
