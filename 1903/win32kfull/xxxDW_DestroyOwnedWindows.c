/*
 * XREFs of xxxDW_DestroyOwnedWindows @ 0x1C0094118
 * Callers:
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     DwmAsyncOwnerChange @ 0x1C0095C18 (DwmAsyncOwnerChange.c)
 */

__int64 __fastcall xxxDW_DestroyOwnedWindows(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r14
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *i; // rbx
  void *v13; // rax
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v5 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 776LL);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    result = *(_QWORD *)(result + 8);
    v7 = *(_QWORD *)(result + 24);
    if ( v7 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v14 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
      v15 = v7;
      HMLockObject(v7);
LABEL_4:
      for ( i = *(_QWORD **)(v7 + 112); i; i = (_QWORD *)i[11] )
      {
        if ( i[15] == a1 )
        {
          if ( (*gpsi & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 480LL) & 1) != 0 || i != v5 )
          {
            if ( (*(_WORD *)(i[5] + 42LL) & 0x3FFF) == 0x2AA || !(unsigned int)xxxDestroyWindow(i) )
            {
              *(_QWORD *)(i[5] + 64LL) = 0LL;
              HMAssignmentUnlock(i + 15);
              if ( (unsigned int)IsWindowDesktopComposed(i) )
              {
                v13 = (void *)ReferenceDwmApiPort(v10, v9, v11);
                DwmAsyncOwnerChange(v13);
              }
            }
            goto LABEL_4;
          }
          *(_QWORD *)(i[5] + 64LL) = 0LL;
          HMAssignmentUnlock(i + 15);
        }
      }
      return ThreadUnlock1(v10, v9, v11);
    }
  }
  return result;
}
