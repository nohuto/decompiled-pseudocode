/*
 * XREFs of NtUserToUnicodeEx @ 0x1C0065010
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     xxxToUnicodeEx @ 0x1C0065210 (xxxToUnicodeEx.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall NtUserToUnicodeEx(int a1, int a2, _OWORD *a3, volatile void *a4, int a5, int a6, __int64 a7)
{
  _OWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  unsigned int v15; // edi
  _BYTE v17[4]; // [rsp+40h] [rbp-1A8h] BYREF
  int v18; // [rsp+44h] [rbp-1A4h]
  _QWORD *v19; // [rsp+60h] [rbp-188h]
  _BYTE v20[24]; // [rsp+78h] [rbp-170h] BYREF
  _QWORD v21[2]; // [rsp+90h] [rbp-158h] BYREF
  _BYTE v22[256]; // [rsp+A0h] [rbp-148h] BYREF

  v21[0] = 0LL;
  v18 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v17);
  if ( a5 <= 0 )
  {
    v15 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    v11 = v22;
    v12 = 2LL;
    do
    {
      *v11 = *a3;
      v11[1] = a3[1];
      v11[2] = a3[2];
      v11[3] = a3[3];
      v11[4] = a3[4];
      v11[5] = a3[5];
      v11[6] = a3[6];
      v11 += 8;
      *(v11 - 1) = a3[7];
      a3 += 8;
      --v12;
    }
    while ( v12 );
    ProbeForWrite(a4, 2LL * a5, 2u);
    if ( a5 < 4 )
    {
      v14 = v21;
      v19 = v21;
    }
    else
    {
      v13 = Win32AllocPoolWithQuotaZInit(2LL * a5, 0x62757355u);
      v14 = v13;
      v19 = v13;
      if ( !v13 )
        ExRaiseStatus(-1073741801);
      v18 = 1;
      PushW32ThreadLock(v13, v20, Win32FreePool);
    }
    v15 = xxxToUnicodeEx(a1, a2, (unsigned int)v22, (_DWORD)v14, a5, a6, a7);
    memmove((void *)a4, v14, 2LL * a5);
    if ( v18 )
      PopAndFreeAlwaysW32ThreadLock(v20);
  }
  UserSessionSwitchLeaveCrit();
  return v15;
}
