/*
 * XREFs of sub_18000B778 @ 0x18000B778
 * Callers:
 *     sub_18000CE38 @ 0x18000CE38 (sub_18000CE38.c)
 * Callees:
 *     sub_18000C30C @ 0x18000C30C (sub_18000C30C.c)
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000B778(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  __int64 v5; // rdx
  __int64 v7; // rdx
  DWORD v8; // eax
  int PreviousCount; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+24h] [rbp-14h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v5 = 140LL;
    return sub_18000C30C(retaddr, v5, &unk_1801441D4);
  }
  if ( !v4 || v4 == 258 )
  {
    PreviousCount = 0;
    if ( v4 )
    {
      v10 = 0;
      if ( !ReleaseSemaphore(hHandle, 1, &v10) )
      {
        v5 = 164LL;
        return sub_18000C30C(retaddr, v5, &unk_1801441D4);
      }
      if ( v10 )
      {
        v7 = 165LL;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 168LL;
        goto LABEL_25;
      }
      v8 = WaitForSingleObject(hHandle, 0);
      if ( v8 == -1 )
      {
        v5 = 171LL;
        return sub_18000C30C(retaddr, v5, &unk_1801441D4);
      }
      if ( v8 )
      {
        v7 = 172LL;
        goto LABEL_25;
      }
    }
    else
    {
      if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
      {
        v5 = 149LL;
        return sub_18000C30C(retaddr, v5, &unk_1801441D4);
      }
      ++PreviousCount;
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 154LL;
        goto LABEL_25;
      }
    }
    *a2 = PreviousCount;
    return 0LL;
  }
  v7 = 141LL;
LABEL_25:
  sub_18000C338(retaddr, v7, &unk_1801441D4, 2147549183LL, PreviousCount, v11);
  return 2147549183LL;
}
