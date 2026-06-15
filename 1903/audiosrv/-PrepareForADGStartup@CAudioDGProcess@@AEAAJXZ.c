/*
 * XREFs of ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180042F88
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180027D40 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180043094 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004DDDC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BC00C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180137DB8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall CAudioDGProcess::PrepareForADGStartup(CAudioDGProcess *this, void *a2)
{
  void *v3; // rcx
  wil::details *v4; // rcx
  void *v5; // rdx
  wil::details *v6; // rcx
  wil::details *v8; // rcx
  HANDLE v9; // rbp
  wil::details *v10; // rsi
  int LastErrorFailHr; // ebx
  wil::details *v12; // rcx
  HANDLE v13; // rbp
  wil::details *v14; // rsi
  DWORD LastError; // ebx
  void *v16; // rdx
  __int64 v17; // rdx
  DWORD v18; // ebx
  void *v19; // rdx
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (void *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    WaitForSingleObjectEx(v3, 0xFFFFFFFF, 0);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 88,
      0LL);
    *((_DWORD *)this + 24) = 0;
  }
  EventAttributes.lpSecurityDescriptor = 0LL;
  v4 = (wil::details *)*((_QWORD *)this + 14);
  EventAttributes.nLength = 24;
  EventAttributes.bInheritHandle = 1;
  if ( v4 )
  {
    wil::details::ResetEvent(v4, a2);
  }
  else
  {
    v9 = CreateEventExW(&EventAttributes, 0LL, 1u, 0x1F0003u);
    if ( v9 )
    {
      GetLastError();
      v10 = (wil::details *)*((_QWORD *)this + 14);
      if ( v10 )
      {
        LastError = GetLastError();
        wil::details::CloseHandle(v10, v16);
        SetLastError(LastError);
      }
      *((_QWORD *)this + 14) = v9;
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v8);
    }
    if ( LastErrorFailHr < 0 )
    {
      v17 = 148LL;
      goto LABEL_22;
    }
  }
  v6 = (wil::details *)*((_QWORD *)this + 15);
  if ( v6 )
  {
    wil::details::ResetEvent(v6, v5);
    return 0LL;
  }
  v13 = CreateEventExW(&EventAttributes, 0LL, 1u, 0x1F0003u);
  if ( v13 )
  {
    GetLastError();
    v14 = (wil::details *)*((_QWORD *)this + 15);
    if ( v14 )
    {
      v18 = GetLastError();
      wil::details::CloseHandle(v14, v19);
      SetLastError(v18);
    }
    *((_QWORD *)this + 15) = v13;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v12);
  }
  if ( LastErrorFailHr >= 0 )
    return 0LL;
  v17 = 157LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
    (const char *)(unsigned int)LastErrorFailHr);
  return (unsigned int)LastErrorFailHr;
}
