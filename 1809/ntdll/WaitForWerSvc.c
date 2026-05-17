/*
 * XREFs of WaitForWerSvc @ 0x1800DE9D8
 * Callers:
 *     SendMessageToWERService @ 0x1800DE71C (SendMessageToWERService.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x1800A0360 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenEvent @ 0x1800A0AE0 (NtOpenEvent.c)
 */

__int64 __fastcall WaitForWerSvc(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  LARGE_INTEGER *v3; // r8
  unsigned int v4; // ebx
  int v5; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v6; // [rsp+28h] [rbp-38h]
  int v7; // [rsp+30h] [rbp-30h]
  __int64 v8; // [rsp+38h] [rbp-28h]
  int *v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+48h] [rbp-18h]
  __int128 v11; // [rsp+50h] [rbp-10h]
  HANDLE Handle; // [rsp+78h] [rbp+18h]
  __int64 v13; // [rsp+80h] [rbp+20h] BYREF

  v1 = a1;
  v6 = L"\\KernelObjects\\SystemErrorPortReady";
  v5 = 4718662;
  v9 = &v5;
  v7 = 48;
  v8 = 0LL;
  v10 = 0;
  v11 = 0LL;
  result = NtOpenEvent();
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)v1 != -1 )
      v13 = -10000 * v1;
    v3 = (LARGE_INTEGER *)&v13;
    if ( (_DWORD)v1 == -1 )
      v3 = 0LL;
    v4 = NtWaitForSingleObject(Handle, 0, v3);
    NtClose(Handle);
    return v4;
  }
  return result;
}
