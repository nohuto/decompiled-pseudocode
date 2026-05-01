/*
 * XREFs of ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x18014EF30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x18014F0C8 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall CAppViewManager::DragComplete(CAppViewManager *this, const struct _GUID *a2, struct tagPOINT a3)
{
  RTL_SRWLOCK *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 (__fastcall *v11)(__int64, const struct _GUID *, _QWORD *, __int64 *); // rsi
  _BYTE v13[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v14[1] = -2LL;
  v15[0] = 0LL;
  v15[1] = 0LL;
  v14[0] = 0LL;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, _BYTE *))(**((_QWORD **)this + 16) + 48LL))(
         *((_QWORD *)this + 16),
         a2,
         v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1234LL;
    goto LABEL_5;
  }
  v10 = *((_QWORD *)this + 16);
  v11 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, _QWORD *, __int64 *))(*(_QWORD *)v10 + 56LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  v7 = v11(v10, a2, v15, v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1235LL;
    goto LABEL_5;
  }
  if ( (v13[0] & 2) == 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct tagPOINT))(**((_QWORD **)this + 16) + 80LL))(
           *((_QWORD *)this + 16),
           a2,
           a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1241LL;
      goto LABEL_5;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 16) + 40LL))(
           *((_QWORD *)this + 16),
           a2,
           1LL,
           1LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1242LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v7);
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      goto LABEL_17;
    }
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( (v13[0] & 2) != 0 )
    v8 = CAppViewManager::DragCompleteWorker((CAppViewManager *)((char *)this - 56), a2, a3);
  else
    v8 = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  return v8;
}
