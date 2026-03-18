/*
 * XREFs of NtUserGetAncestor @ 0x1C00D6A90
 * Callers:
 *     <none>
 * Callees:
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _GetParent @ 0x1C00D6BB0 (_GetParent.c)
 */

__int64 __fastcall NtUserGetAncestor(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 *v6; // r8
  __int64 *v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // edi
  __int64 v12; // rax
  int v13; // edi
  __int64 Parent; // rax
  __int64 DesktopWindow; // rax
  __int64 *v16; // rax

  EnterSharedCrit(0LL, 1LL);
  v6 = (__int64 *)ValidateHwnd(a1);
  if ( !v6 )
    goto LABEL_28;
  if ( (unsigned int)(a2 - 1) > 2 )
  {
    UserSetLastError(87LL, v4);
LABEL_28:
    v9 = 0LL;
    goto LABEL_19;
  }
  v8 = v6[3];
  v9 = 0LL;
  v5 = 0LL;
  if ( v8 )
    v5 = *(__int64 **)(v8 + 104);
  if ( v6 == v5 && a2 == 4 )
    goto LABEL_17;
  v5 = 0LL;
  if ( v8 )
  {
    v4 = *(_QWORD *)(v8 + 8);
    if ( v4 )
      v5 = *(__int64 **)(v4 + 24);
  }
  if ( v6 != v5 )
  {
    v5 = 0LL;
    if ( v8 )
      v5 = *(__int64 **)(v8 + 104);
    if ( v6 != v5 && v6[10] )
    {
      if ( a2 == 2 )
      {
        while ( 1 )
        {
          v12 = v6[3];
          v5 = 0LL;
          v7 = (__int64 *)v6[10];
          if ( v12 )
          {
            v4 = *(_QWORD *)(v12 + 8);
            if ( v4 )
              v5 = *(__int64 **)(v4 + 24);
          }
          if ( v7 == v5 )
            break;
          v5 = 0LL;
          if ( v12 )
            v5 = *(__int64 **)(v12 + 104);
          if ( v7 == v5 )
            break;
          v6 = (__int64 *)v6[10];
        }
      }
      else
      {
        v10 = a2 - 1;
        if ( v10 )
        {
          v13 = v10 - 2;
          if ( v13 )
          {
            if ( v13 == 1 )
            {
              while ( 1 )
              {
                v4 = v6[10];
                if ( !v4 )
                  break;
                DesktopWindow = GetDesktopWindow((__int64)v6);
                if ( v4 == DesktopWindow )
                  break;
                v5 = (__int64 *)v6[3];
                v16 = 0LL;
                if ( v5 )
                  v16 = (__int64 *)v5[13];
                if ( v6 == v16 )
                  break;
                v6 = (__int64 *)v4;
              }
            }
          }
          else
          {
            while ( 1 )
            {
              Parent = GetParent(v6);
              if ( !Parent )
                break;
              v6 = (__int64 *)Parent;
            }
          }
        }
        else
        {
          v6 = (__int64 *)v6[10];
        }
      }
LABEL_17:
      if ( v6 )
        v9 = *v6;
    }
  }
LABEL_19:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v9;
}
