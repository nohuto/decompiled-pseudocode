/*
 * XREFs of ?UpdateEngagementTelemetryFlags@WindowWrapperBase@@UEAAJ_K0@Z @ 0x18006BBF0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_adb4202210a1cd7d97551f2a3dbe735b___ @ 0x18006BC60 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_adb4202210a1cd7d97551f2a3dbe735b.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::UpdateEngagementTelemetryFlags(WindowWrapperBase *this, __int64 a2, __int64 a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  const char *v7; // r9
  __int64 *v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+20h] [rbp-28h]
  _QWORD v11[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v13; // [rsp+50h] [rbp+8h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v14 = a2;
  v10 = -2LL;
  if ( *((_QWORD *)this + 11) )
  {
    if ( a2 )
    {
      v11[0] = (char *)this - 16;
      v11[1] = &v14;
      v11[2] = &v15;
      CurrentThreadId = GetCurrentThreadId();
      v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_adb4202210a1cd7d97551f2a3dbe735b___(
             v4,
             CurrentThreadId,
             v11);
      if ( v5 < 0 )
      {
        try
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x581,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v5,
            v10);
          JUMPOUT(0x1800F3CB4LL);
        }
        catch ( ... )
        {
          v8 = &v9;
          *((_DWORD *)v8 + 20) = wil::details::in1diag3::Return_CaughtException(
                                   (wil::details::in1diag3 *)v8[9],
                                   (void *)0x586,
                                   (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                                   v7);
          return v13;
        }
      }
    }
  }
  return 0LL;
}
