/*
 * XREFs of NtUserIsChildWindowDpiMessageEnabled @ 0x1C00DAE50
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
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r10
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v2;
  if ( v2 )
  {
    v12[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v12;
    v12[1] = v2;
    _InterlockedAdd((volatile signed __int32 *)(v2 + 8), 1u);
    v8 = *(unsigned int *)(*(_QWORD *)(v2 + 40) + 288LL);
    LOBYTE(v8) = v8 & 0xF;
    if ( (_BYTE)v8 == 2 )
    {
      do
      {
        v8 = *(_QWORD *)(v2 + 80);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v2 + 24);
          v4 = 0LL;
          if ( v9 )
          {
            v10 = *(_QWORD *)(v9 + 8);
            if ( v10 )
              v4 = *(_QWORD *)(v10 + 24);
          }
          if ( v8 == v4 )
            break;
        }
        v2 = *(_QWORD *)(v2 + 80);
      }
      while ( v8 );
      if ( v7 == v2 )
      {
        v6 = 1;
      }
      else if ( v2 && (*(_DWORD *)(*(_QWORD *)(v2 + 40) + 232LL) & 0x20000000) != 0 )
      {
        v6 = 1;
      }
    }
    ThreadUnlock1(v8, v7, v4);
  }
  UserSessionSwitchLeaveCrit(v3, v7, v4, v5);
  return v6;
}
