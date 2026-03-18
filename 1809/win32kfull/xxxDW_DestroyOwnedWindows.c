/*
 * XREFs of xxxDW_DestroyOwnedWindows @ 0x1C00F8048
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     DwmAsyncOwnerChange @ 0x1C001CB10 (DwmAsyncOwnerChange.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxDW_DestroyOwnedWindows(__int64 a1, __int64 a2)
{
  __int64 *v3; // r14
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 *i; // rbx
  void *v10; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 784LL);
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    result = *(_QWORD *)(result + 8);
    v5 = *(_QWORD *)(result + 24);
    if ( v5 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      v8 = v11;
      *(_QWORD *)(ThreadWin32Thread + 416) = v11;
      v11[1] = v5;
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
LABEL_4:
      for ( i = *(__int64 **)(v5 + 88); i; i = (__int64 *)i[8] )
      {
        if ( i[12] == a1 )
        {
          if ( (*gpsi & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 488LL) & 1) != 0 || i != v3 )
          {
            if ( (*(_WORD *)(i[5] + 42) & 0x2FFF) == 0x2AA
              || !(unsigned int)xxxDestroyWindow((volatile signed __int32 *)i) )
            {
              *(_QWORD *)(i[5] + 64) = 0LL;
              HMAssignmentUnlock(i + 12);
              if ( (unsigned int)IsWindowDesktopComposed(i) )
              {
                v10 = (void *)ReferenceDwmApiPort(v8, v7);
                DwmAsyncOwnerChange(v10, *i, 0LL);
              }
            }
            goto LABEL_4;
          }
          *(_QWORD *)(i[5] + 64) = 0LL;
          HMAssignmentUnlock(i + 12);
        }
      }
      return ThreadUnlock1(v8, v7);
    }
  }
  return result;
}
