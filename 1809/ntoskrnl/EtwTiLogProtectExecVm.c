/*
 * XREFs of EtwTiLogProtectExecVm @ 0x14067787C
 * Callers:
 *     NtProtectVirtualMemory @ 0x1405EED70 (NtProtectVirtualMemory.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x1400F1800 (EtwProviderEnabled.c)
 *     EtwpTiFillThreadIdentity @ 0x140132084 (EtwpTiFillThreadIdentity.c)
 *     EtwpTiFillProcessIdentity @ 0x1401320BC (EtwpTiFillProcessIdentity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

BOOLEAN EtwTiLogProtectExecVm(__int64 a1, char a2, ...)
{
  BOOLEAN result; // al
  __int64 v5; // rcx
  _KPROCESS *Process; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r14
  const EVENT_DESCRIPTOR *v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // r9d
  int v13; // eax
  int v14; // r9d
  int v15; // eax
  int v16; // r9d
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  REGHANDLE v22; // rcx
  unsigned __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[24]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+228h] [rbp+120h] BYREF
  va_list va; // [rsp+228h] [rbp+120h]
  __int64 v29; // [rsp+230h] [rbp+128h] BYREF
  va_list va1; // [rsp+230h] [rbp+128h]
  __int64 v31; // [rsp+238h] [rbp+130h] BYREF
  va_list va2; // [rsp+238h] [rbp+130h]
  va_list va3; // [rsp+240h] [rbp+138h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v27 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v29 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v31 = va_arg(va3, _QWORD);
  result = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xF0uLL);
  if ( result )
  {
    v5 = 0LL;
    Process = KeGetCurrentThread()->ApcState.Process;
    CurrentThread = KeGetCurrentThread();
    if ( Process == (_KPROCESS *)a1 )
      v5 = 8LL;
    v8 = (__int64)CurrentThread->Process;
    v9 = *(const EVENT_DESCRIPTOR **)((char *)&off_140357288 + (a2 != 0 ? 0 : 0x10) + v5);
    result = EtwEventEnabled(EtwThreatIntProvRegHandle, v9);
    if ( result )
    {
      v10 = EtwpTiFillProcessIdentity(UserData, (__int64)Process, &v23);
      v11 = EtwpTiFillThreadIdentity((__int64)&UserData[v10], (__int64)KeGetCurrentThread());
      v13 = EtwpTiFillProcessIdentity(&UserData[v11 + v12].Ptr, a1, &v24);
      v15 = EtwpTiFillProcessIdentity(&UserData[v13 + v14].Ptr, v8, &v25);
      v17 = v15 + v16;
      v18 = v17;
      *(&UserData[0].Reserved + 1 * v18) = 0;
      UserData[v18].Ptr = (ULONGLONG)va;
      UserData[v18].Size = 8;
      v19 = v17 + 1;
      *(&UserData[0].Reserved + 1 * v19) = 0;
      UserData[v19].Ptr = (ULONGLONG)va1;
      UserData[v19].Size = 8;
      v20 = v17 + 2;
      v17 += 3;
      v20 *= 2LL;
      *(&UserData[0].Reserved + 2 * v20) = 0;
      *(&UserData[0].Ptr + v20) = (ULONGLONG)va2;
      *(&UserData[0].Size + 2 * v20) = 4;
      v21 = v17;
      *(&UserData[0].Reserved + 1 * v21) = 0;
      UserData[v21].Ptr = (ULONGLONG)va3;
      v22 = EtwThreatIntProvRegHandle;
      UserData[v21].Size = 4;
      return EtwWrite(v22, v9, 0LL, v17 + 1, UserData);
    }
  }
  return result;
}
