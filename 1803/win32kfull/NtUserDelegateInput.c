/*
 * XREFs of NtUserDelegateInput @ 0x1C0101220
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserDelegateInput(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r15
  int v20; // eax
  __int64 v22; // rcx

  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a4);
  v14 = 0LL;
  v15 = v9;
  if ( v9 )
  {
    if ( !a5 || (a5 & 0xFFFFEFF9) != 0 )
      goto LABEL_25;
    if ( a1 )
    {
      v16 = PtiFromThreadId(a1);
      if ( !v16 )
        goto LABEL_25;
    }
    else
    {
      v16 = gptiCurrent;
    }
    v17 = *(_QWORD *)(v15 + 40);
    if ( *(char *)(v17 + 19) >= 0 && *(char *)(v17 + 20) >= 0 )
    {
      v18 = *(_QWORD *)(v15 + 16);
      v19 = *(_QWORD *)(v18 + 416);
      if ( v19 == PsGetCurrentProcessWin32Process(v11) )
      {
        v20 = *(_DWORD *)(v15 + 256);
        if ( v20 )
        {
          if ( !a3
            && *(_QWORD *)(v15 + 248) == v16
            && *(_QWORD *)(v16 + 1224) == a2
            && !*(_QWORD *)(v16 + 1232)
            && v20 == a5 )
          {
            v22 = 1242LL;
            goto LABEL_26;
          }
        }
        else if ( v19 == *(_QWORD *)(v16 + 416) && v18 != v16 )
        {
          v11 = 1LL;
          if ( *(_DWORD *)(*(_QWORD *)(v16 + 424) + 392LL) == 1
            && *(_QWORD *)(v18 + 448) == *(_QWORD *)(v16 + 448)
            && !*(_QWORD *)(v18 + 1224) )
          {
            *(_QWORD *)(v15 + 248) = v16;
            v14 = 1LL;
            *(_DWORD *)(v15 + 256) = a5;
            *(_DWORD *)(v16 + 1200) |= 0x2000u;
            *(_DWORD *)(v16 + 480) |= 0xC0u;
            ++*(_DWORD *)(v16 + 1240);
            *(_QWORD *)(v16 + 1224) = a2;
            *(_QWORD *)(v16 + 1232) = a3;
            ++*(_DWORD *)(v18 + 1240);
            goto LABEL_16;
          }
        }
      }
      v22 = 5LL;
LABEL_26:
      UserSetLastError(v22, v10);
      goto LABEL_16;
    }
LABEL_25:
    v22 = 87LL;
    goto LABEL_26;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v14;
}
