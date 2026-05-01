/*
 * XREFs of ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x180333AE8
 * Callers:
 *     _lambda_0cdbb88562623b41bf5d2249de419233_::operator() @ 0x1800A9D1C (_lambda_0cdbb88562623b41bf5d2249de419233_--operator().c)
 *     _lambda_4728da50fba771f61f09ce8410cf9c38_::operator() @ 0x1800AA730 (_lambda_4728da50fba771f61f09ce8410cf9c38_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::SetHostedPos(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrameWrapper *a2,
        struct IApplicationFrame *a3,
        const struct tagRECT *a4)
{
  struct IApplicationFrame *v5; // r10
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // kr00_8
  __int64 v11; // kr08_8
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationFrame *v15; // [rsp+40h] [rbp+8h] BYREF
  int v16; // [rsp+50h] [rbp+18h] BYREF
  int v17; // [rsp+54h] [rbp+1Ch]

  v5 = a3;
  v15 = 0LL;
  if ( !a3 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    v7 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, struct IApplicationFrame **))(*(_QWORD *)a2 + 32LL))(
           a2,
           &v15);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 385LL;
      goto LABEL_9;
    }
    v5 = v15;
  }
  v10 = a4->right - a4->left;
  v16 = (HIDWORD(v10) ^ v10) - HIDWORD(v10);
  v11 = a4->bottom - a4->top;
  v17 = (HIDWORD(v11) ^ v11) - HIDWORD(v11);
  v12 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, int *, _QWORD))(*(_QWORD *)v5 + 184LL))(v5, &v16, 0LL);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x186,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
  v7 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, const struct tagRECT *))(*(_QWORD *)a2 + 64LL))(
         a2,
         a4);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v8 = 0;
    goto LABEL_11;
  }
  v9 = 391LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v8;
}
