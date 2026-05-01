/*
 * XREFs of _lambda_75704c66f403c7073bbf99df87ceca7e_::operator() @ 0x1801750FC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_75704c66f403c7073bbf99df87ceca7e___::Run @ 0x180176FF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_75704c66f403c7073bbf99df87ceca7e___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_75704c66f403c7073bbf99df87ceca7e_::operator()(int *a1)
{
  HRESULT v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID ppv; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+5Ch] [rbp+14h]

  v7 = *a1;
  v8 = a1[1];
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v1 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x17u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &ppv);
  v2 = v1;
  if ( v1 < 0 )
  {
    v3 = 564LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
    goto LABEL_6;
  }
  v1 = (*(__int64 (__fastcall **)(LPVOID, int *))(*(_QWORD *)ppv + 128LL))(ppv, &v7);
  v2 = v1;
  if ( v1 < 0 )
  {
    v3 = 566LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v2;
}
