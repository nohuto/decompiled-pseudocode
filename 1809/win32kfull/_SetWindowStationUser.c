/*
 * XREFs of _SetWindowStationUser @ 0x1C012DE5C
 * Callers:
 *     NtUserSetWindowStationUser @ 0x1C012DD50 (NtUserSetWindowStationUser.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall SetWindowStationUser(__int64 a1, _QWORD *a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  void *v13; // rax
  __int64 v14; // rcx

  v4 = a4;
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    if ( *(struct tagTERMINAL *const *)(a1 + 24) == gTermIO )
      CitUserChange(*a2);
    v11 = *(_QWORD *)(a1 + 160);
    if ( v11 )
      Win32FreePool(v11);
    if ( !a3 )
    {
      *(_QWORD *)(a1 + 160) = 0LL;
LABEL_8:
      *(_QWORD *)(a1 + 152) = *a2;
      return 1LL;
    }
    v13 = (void *)Win32AllocPoolWithQuota(v4, 1702064981LL);
    *(_QWORD *)(a1 + 160) = v13;
    if ( v13 )
    {
      memmove(v13, a3, v4);
      goto LABEL_8;
    }
    v14 = 14LL;
  }
  else
  {
    v14 = 5LL;
  }
  UserSetLastError(v14, v8, v9, v10);
  return 0LL;
}
