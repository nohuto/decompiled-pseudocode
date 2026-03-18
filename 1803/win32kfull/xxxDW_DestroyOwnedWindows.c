/*
 * XREFs of xxxDW_DestroyOwnedWindows @ 0x1C0071FE0
 * Callers:
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     DwmAsyncOwnerChange @ 0x1C006ED2C (DwmAsyncOwnerChange.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxDW_DestroyOwnedWindows(__int64 a1, __int64 a2)
{
  __int64 *v3; // r14
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 *i; // rbx
  void *v11; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 768LL);
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    result = *(_QWORD *)(result + 8);
    v5 = *(_QWORD *)(result + 24);
    if ( v5 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v12[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      v9 = v12;
      *(_QWORD *)(ThreadWin32Thread + 408) = v12;
      v12[1] = v5;
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
LABEL_4:
      for ( i = *(__int64 **)(v5 + 88); i; i = (__int64 *)i[8] )
      {
        if ( i[12] == a1 )
        {
          if ( (*gpsi & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 480LL) & 1) != 0 || i != v3 )
          {
            if ( (*(_WORD *)(i[5] + 42) & 0x3FFF) == 0x2AA || !(unsigned int)xxxDestroyWindow((ULONG_PTR)i) )
            {
              *(_QWORD *)(i[5] + 64) = 0LL;
              HMAssignmentUnlock(i + 12);
              if ( (unsigned int)IsWindowDesktopComposed(i) )
              {
                v11 = (void *)ReferenceDwmApiPort(v9, v7, v8);
                DwmAsyncOwnerChange(v11, *i, 0LL);
              }
            }
            goto LABEL_4;
          }
          *(_QWORD *)(i[5] + 64) = 0LL;
          HMAssignmentUnlock(i + 12);
        }
      }
      return ThreadUnlock1(v9, v7, v8);
    }
  }
  return result;
}
