/*
 * XREFs of NtUserToUnicodeEx @ 0x1C0070DC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0013920 (Win32AllocPoolWithQuotaZInit.c)
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     xxxToUnicodeEx @ 0x1C0070FD0 (xxxToUnicodeEx.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

__int64 __fastcall NtUserToUnicodeEx(int a1, int a2, _OWORD *a3, volatile void *a4, int a5, int a6, __int64 a7)
{
  __int64 v11; // rdx
  _OWORD *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v20; // [rsp+40h] [rbp-1A8h]
  _QWORD v21[5]; // [rsp+68h] [rbp-180h] BYREF
  __int64 v22; // [rsp+90h] [rbp-158h] BYREF
  _BYTE v23[256]; // [rsp+A0h] [rbp-148h] BYREF

  v22 = 0LL;
  v20 = 0;
  memset(v21, 0, 24);
  EnterCrit(0, 1);
  if ( a5 <= 0 )
  {
    v16 = 0;
    UserSetLastError(87LL, v11);
  }
  else
  {
    v12 = v23;
    v13 = 2LL;
    do
    {
      *v12 = *a3;
      v12[1] = a3[1];
      v12[2] = a3[2];
      v12[3] = a3[3];
      v12[4] = a3[4];
      v12[5] = a3[5];
      v12[6] = a3[6];
      v12 += 8;
      *(v12 - 1) = a3[7];
      a3 += 8;
      --v13;
    }
    while ( v13 );
    ProbeForWrite(a4, 2LL * a5, 2u);
    if ( a5 < 4 )
    {
      v15 = &v22;
    }
    else
    {
      v14 = (__int64 *)Win32AllocPoolWithQuotaZInit(2LL * a5, 0x62757355u);
      v15 = v14;
      if ( !v14 )
        ExRaiseStatus(-1073741801);
      v20 = 1;
      PushW32ThreadLock(v14, v21, Win32FreePool);
    }
    v16 = xxxToUnicodeEx(a1, a2, (unsigned int)v23, (_DWORD)v15, a5, a6, a7);
    memmove((void *)a4, v15, 2LL * a5);
    if ( v20 )
      PopAndFreeAlwaysW32ThreadLock(v21);
  }
  UserSessionSwitchLeaveCrit(v18, v17);
  return v16;
}
