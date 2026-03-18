/*
 * XREFs of ?PreComputeAndLockForRead@CVisualTree@@QEAAJXZ @ 0x18002BBC8
 * Callers:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001D8C8 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18002BCCC (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18007B470 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180085E50 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnqueueOffThreadPreComputeRequest@CComposition@@QEAAJPEAVCVisualTree@@PEAXPEAJ@Z @ 0x1800EA578 (-EnqueueOffThreadPreComputeRequest@CComposition@@QEAAJPEAVCVisualTree@@PEAXPEAJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180143514 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180143A08 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CVisualTree::PreComputeAndLockForRead(CVisualTree *this)
{
  int LastErrorFailHr; // edi
  HANDLE v4; // rbx
  wil::details *v5; // rcx
  HANDLE Event; // rdi
  unsigned int v7; // ecx
  DWORD v8; // eax
  unsigned int v9; // ecx
  const char *v10; // r9
  void *v11; // rdx
  void *v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+50h] [rbp+8h] BYREF
  HANDLE hHandle; // [rsp+58h] [rbp+10h] BYREF

  LastErrorFailHr = 0;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 552LL));
  while ( (*(_BYTE *)(*((_QWORD *)this + 3) + 88LL) & 0x7F) != 0 )
  {
    v14 = 0;
    v4 = 0LL;
    hHandle = 0LL;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        &hHandle,
        Event);
      v4 = hHandle;
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
    }
    if ( LastErrorFailHr >= 0 )
      LastErrorFailHr = CComposition::EnqueueOffThreadPreComputeRequest(*((CComposition **)this + 2), this, v4, &v14);
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 552LL));
    if ( LastErrorFailHr < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, LastErrorFailHr, 0xBDu);
LABEL_18:
      if ( v4 )
        wil::details::CloseHandle((wil::details *)v4, v12);
      return (unsigned int)LastErrorFailHr;
    }
    v8 = WaitForSingleObjectEx(v4, 0xFFFFFFFF, 0);
    if ( v8 != 258 && v8 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA07,
        (unsigned int)"internal\\sdk\\inc\\wil/resource.h",
        v10);
      __debugbreak();
    }
    LastErrorFailHr = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v14, 0xC2u);
      goto LABEL_18;
    }
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 552LL));
    if ( v4 )
      wil::details::CloseHandle((wil::details *)v4, v11);
  }
  return (unsigned int)LastErrorFailHr;
}
