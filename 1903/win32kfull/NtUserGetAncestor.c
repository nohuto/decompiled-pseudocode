/*
 * XREFs of NtUserGetAncestor @ 0x1C00F5D20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     _GetParent @ 0x1C00F5E44 (_GetParent.c)
 */

__int64 __fastcall NtUserGetAncestor(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // r9
  __int64 v13; // rdx
  int v14; // edi
  int v16; // edi
  __int64 Parent; // rax
  __int64 DesktopWindow; // rax
  __int64 *v19; // rdx
  __int64 *v20; // rax

  EnterSharedCrit(0LL, 1LL);
  v6 = (__int64 *)ValidateHwnd(a1);
  if ( !v6 )
    goto LABEL_28;
  if ( (unsigned int)(a2 - 1) > 2 )
  {
    UserSetLastError(87LL, v4, (__int64)v6, v7);
LABEL_28:
    v9 = 0LL;
    goto LABEL_27;
  }
  v8 = v6[3];
  v9 = 0LL;
  v5 = 0LL;
  if ( v8 )
    v5 = *(__int64 **)(v8 + 104);
  if ( v6 == v5 && a2 == 4 )
    goto LABEL_25;
  v5 = 0LL;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 8);
    if ( v10 )
      v5 = *(__int64 **)(v10 + 24);
  }
  if ( v6 != v5 )
  {
    v5 = 0LL;
    if ( v8 )
      v5 = *(__int64 **)(v8 + 104);
    if ( v6 != v5 && v6[13] )
    {
      if ( a2 == 2 )
      {
        while ( 1 )
        {
          v11 = v6[3];
          v5 = 0LL;
          v12 = (__int64 *)v6[13];
          if ( v11 )
          {
            v13 = *(_QWORD *)(v11 + 8);
            if ( v13 )
              v5 = *(__int64 **)(v13 + 24);
          }
          if ( v12 == v5 )
            break;
          v5 = 0LL;
          if ( v11 )
            v5 = *(__int64 **)(v11 + 104);
          if ( v12 == v5 )
            break;
          v6 = (__int64 *)v6[13];
        }
      }
      else
      {
        v14 = a2 - 1;
        if ( v14 )
        {
          v16 = v14 - 2;
          if ( v16 )
          {
            if ( v16 == 1 )
            {
              while ( v6[13] )
              {
                DesktopWindow = GetDesktopWindow((__int64)v6);
                if ( v19 == (__int64 *)DesktopWindow )
                  break;
                v5 = (__int64 *)v6[3];
                v20 = 0LL;
                if ( v5 )
                  v20 = (__int64 *)v5[13];
                if ( v6 == v20 )
                  break;
                v6 = v19;
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
          v6 = (__int64 *)v6[13];
        }
      }
LABEL_25:
      if ( v6 )
        v9 = *v6;
    }
  }
LABEL_27:
  UserSessionSwitchLeaveCrit(v5);
  return v9;
}
