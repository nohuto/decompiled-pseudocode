/*
 * XREFs of NtUserIsChildWindowDpiMessageEnabled @ 0x1C00F5E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsChildWindowDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r10
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v2;
  if ( v2 )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v14;
    v14[1] = v2;
    _InterlockedAdd((volatile signed __int32 *)(v2 + 8), 1u);
    v8 = 0LL;
    v9 = *(unsigned int *)(*(_QWORD *)(v2 + 40) + 288LL);
    LOBYTE(v9) = v9 & 0xF;
    if ( (_BYTE)v9 == 2 )
    {
      do
      {
        v9 = *(_QWORD *)(v2 + 80);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v2 + 24);
          v11 = 0LL;
          if ( v10 )
          {
            v12 = *(_QWORD *)(v10 + 8);
            if ( v12 )
              v11 = *(_QWORD *)(v12 + 24);
          }
          if ( v9 == v11 )
            break;
        }
        v2 = *(_QWORD *)(v2 + 80);
      }
      while ( v9 );
      if ( v7 == v2 )
      {
        v8 = 1LL;
      }
      else if ( v2 && (*(_DWORD *)(*(_QWORD *)(v2 + 40) + 232LL) & 0x20000000) != 0 )
      {
        v8 = 1LL;
      }
    }
    ThreadUnlock1(v9, v7);
    v6 = v8;
  }
  UserSessionSwitchLeaveCrit(v3, v7, v4, v5);
  return v6;
}
