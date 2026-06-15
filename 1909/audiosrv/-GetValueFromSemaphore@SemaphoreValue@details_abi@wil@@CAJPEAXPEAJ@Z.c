/*
 * XREFs of ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180060050
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18005FE1C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BC238 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::GetValueFromSemaphore(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  const char *v5; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  DWORD v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v8 = 140LL;
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v8, (unsigned int)"wil", v5);
  }
  if ( v4 && v4 != 258 )
  {
    v7 = 141LL;
    goto LABEL_25;
  }
  PreviousCount = 0;
  if ( v4 )
  {
    v12 = 0;
    if ( ReleaseSemaphore(hHandle, 1, &v12) )
    {
      if ( v12 )
      {
        v7 = 165LL;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 168LL;
        goto LABEL_25;
      }
      v9 = WaitForSingleObject(hHandle, 0);
      if ( v9 != -1 )
      {
        if ( v9 )
        {
          v7 = 172LL;
          goto LABEL_25;
        }
LABEL_7:
        *a2 = PreviousCount;
        return 0LL;
      }
      v8 = 171LL;
    }
    else
    {
      v8 = 164LL;
    }
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v8, (unsigned int)"wil", v5);
  }
  if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
  {
    v8 = 149LL;
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v8, (unsigned int)"wil", v5);
  }
  ++PreviousCount;
  if ( !ReleaseSemaphore(hHandle, 1, 0LL) && GetLastError() == 298 )
    goto LABEL_7;
  v7 = 154LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v7, (__int64)"wil", (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
