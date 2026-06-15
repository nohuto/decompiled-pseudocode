/*
 * XREFs of ?Initialize@CAudioStream@@UEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180043790
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004EDFC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BBB0C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CAudioStream::Initialize(CAudioStream *this, const struct tWAVEFORMATEX *a2)
{
  wil::details *v4; // rcx
  HANDLE Event; // rbp
  wil::details *v6; // rsi
  int LastErrorFailHr; // ebx
  DWORD LastError; // ebx
  void *v10; // rdx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v6 = (wil::details *)*((_QWORD *)this + 39);
    if ( v6 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v6, v10);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 39) = Event;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v4);
  }
  if ( LastErrorFailHr < 0 )
  {
    v11 = 237LL;
  }
  else
  {
    LastErrorFailHr = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)this + 144LL))(this, a2->nChannels);
    if ( LastErrorFailHr >= 0 )
      return 0LL;
    v11 = 239LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)LastErrorFailHr);
  return (unsigned int)LastErrorFailHr;
}
