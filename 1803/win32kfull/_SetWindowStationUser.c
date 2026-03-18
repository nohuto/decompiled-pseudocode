/*
 * XREFs of _SetWindowStationUser @ 0x1C010C978
 * Callers:
 *     NtUserSetWindowStationUser @ 0x1C010C890 (NtUserSetWindowStationUser.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall SetWindowStationUser(__int64 a1, _QWORD *a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v11; // rax
  __int64 v12; // rcx

  v4 = a4;
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    if ( *(struct tagTERMINAL *const *)(a1 + 24) == gTermIO )
      CitUserChange(*a2);
    v9 = *(_QWORD *)(a1 + 160);
    if ( v9 )
      Win32FreePool(v9);
    if ( !a3 )
    {
      *(_QWORD *)(a1 + 160) = 0LL;
LABEL_8:
      *(_QWORD *)(a1 + 152) = *a2;
      return 1LL;
    }
    v11 = (void *)Win32AllocPoolWithQuota(v4, 1702064981LL);
    *(_QWORD *)(a1 + 160) = v11;
    if ( v11 )
    {
      memmove(v11, a3, v4);
      goto LABEL_8;
    }
    v12 = 14LL;
  }
  else
  {
    v12 = 5LL;
  }
  UserSetLastError(v12, v8);
  return 0LL;
}
