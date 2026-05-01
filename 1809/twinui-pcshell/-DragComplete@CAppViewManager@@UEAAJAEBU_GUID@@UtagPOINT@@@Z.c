/*
 * XREFs of ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x180109690
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x180109888 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall CAppViewManager::DragComplete(CAppViewManager *this, const struct _GUID *a2, struct tagPOINT a3)
{
  RTL_SRWLOCK *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rsi
  RTL_SRWLOCK *v12; // rbx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v17[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h]
  _QWORD v19[2]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v18 = -2LL;
  v19[0] = 0LL;
  v19[1] = 0LL;
  v16 = 0LL;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, _BYTE *))(**((_QWORD **)this + 16) + 48LL))(
         *((_QWORD *)this + 16),
         a2,
         v17);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1226LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    return v8;
  }
  v10 = *((_QWORD *)this + 16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v7 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, _QWORD *, __int64 *))(*(_QWORD *)v10 + 56LL))(
         v10,
         a2,
         v19,
         &v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1227LL;
    goto LABEL_5;
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( !v16 || (v17[0] & 2) != 0 )
  {
    v15 = CAppViewManager::DragCompleteWorker((CAppViewManager *)((char *)this - 56), a2, a3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    return v15;
  }
  else
  {
    v12 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v13 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct tagPOINT))(**((_QWORD **)this + 16) + 80LL))(
            *((_QWORD *)this + 16),
            a2,
            a3);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1242LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v13);
    v14 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 16) + 40LL))(
            *((_QWORD *)this + 16),
            a2,
            1LL,
            1LL);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1243LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v14);
    if ( v12 )
      ReleaseSRWLockExclusive(v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    return 0LL;
  }
}
