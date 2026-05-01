/*
 * XREFs of ?AddWindowToGroup@WindowGroupManager@@UEAAJPEAUHWND__@@KI@Z @ 0x180204830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_fc6945b09688a40cc22f9abbb2a3202e___ @ 0x180203FDC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_fc6945b09688a40cc22f9abbb2a3202e.c)
 */

__int64 __fastcall WindowGroupManager::AddWindowToGroup(WindowGroupManager *this, HWND a2, unsigned int a3, int a4)
{
  unsigned int v4; // r10d
  int v7; // esi
  int v8; // eax
  DWORD CurrentThreadId; // eax
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  const char *v14; // r9
  __int64 result; // rax
  _QWORD v16[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v17; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v19; // [rsp+90h] [rbp+18h] BYREF

  v19 = a3;
  try
  {
    v4 = a3;
    v7 = 0;
    if ( a4 == 1 )
    {
      v7 = 1;
    }
    else if ( a4 == 2 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 11) + 48LL))(
             *((_QWORD *)this + 11),
             a3,
             1LL,
             1LL);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          125LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
          (const char *)(unsigned int)v8);
      v16[0] = (char *)this - 8;
      v16[1] = &v19;
      *(_QWORD *)&v17 = *((_QWORD *)this + 14);
      *((_QWORD *)&v17 + 1) = v16;
      CurrentThreadId = GetCurrentThreadId();
      v11 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_fc6945b09688a40cc22f9abbb2a3202e___(
              v10,
              CurrentThreadId,
              &v17);
      v12 = v11;
      if ( v11 >= 0 )
        v12 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5F,
          (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
          (const char *)(unsigned int)v11);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          142LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
          (const char *)(unsigned int)v12);
      v4 = v19;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HWND, _QWORD, int))(**((_QWORD **)this + 11) + 40LL))(
            *((_QWORD *)this + 11),
            v4,
            a2,
            0LL,
            v7);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        145LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
        (const char *)(unsigned int)v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x95,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
                           v14);
  }
  return result;
}
