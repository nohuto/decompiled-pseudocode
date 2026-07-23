/*
 * XREFs of PopDiagTracePostSleepNotification @ 0x1405671A0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopDiagTracePostSleepNotification(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // eax
  NTSTATUS result; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // [rsp+38h] [rbp-71h] BYREF
  NTSTATUS v12; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int64 v13; // [rsp+40h] [rbp-69h] BYREF
  __int64 v14; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-51h] BYREF
  int *v16; // [rsp+68h] [rbp-41h]
  __int64 v17; // [rsp+70h] [rbp-39h]
  int *v18; // [rsp+78h] [rbp-31h]
  __int64 v19; // [rsp+80h] [rbp-29h]
  __int64 *v20; // [rsp+88h] [rbp-21h]
  __int64 v21; // [rsp+90h] [rbp-19h]
  __int64 *v22; // [rsp+98h] [rbp-11h]
  __int64 v23; // [rsp+A0h] [rbp-9h]
  int *v24; // [rsp+A8h] [rbp-1h]
  __int64 v25; // [rsp+B0h] [rbp+7h]
  NTSTATUS *v26; // [rsp+B8h] [rbp+Fh]
  __int64 v27; // [rsp+C0h] [rbp+17h]
  int v28; // [rsp+F8h] [rbp+4Fh] BYREF
  int v29; // [rsp+100h] [rbp+57h] BYREF
  int v30; // [rsp+108h] [rbp+5Fh] BYREF

  v30 = a3;
  v29 = a2;
  v28 = a1;
  v7 = a6;
  v13 = 0LL;
  v14 = 0LL;
  if ( a6 == -1 )
  {
    v7 = 4;
  }
  else if ( a6 == -2 )
  {
    v7 = 5;
  }
  v11 = v7;
  result = a7;
  if ( a7 == -1 )
  {
    result = 4;
  }
  else if ( a7 == -2 )
  {
    result = 5;
  }
  v12 = result;
  if ( a4 )
  {
    result = MEMORY[0xFFFFF78000000014];
    v9 = -a4;
    if ( a4 >= 0 )
      v9 = a4 - MEMORY[0xFFFFF78000000008];
    v13 = MEMORY[0xFFFFF78000000014] + v9;
  }
  if ( a5 )
  {
    result = MEMORY[0xFFFFF78000000014];
    v10 = -a5;
    if ( a5 >= 0 )
      v10 = a5 - MEMORY[0xFFFFF78000000008];
    v14 = MEMORY[0xFFFFF78000000014] + v10;
  }
  if ( PopDiagHandleRegistered )
  {
    UserData.Ptr = (ULONGLONG)&v28;
    *(_QWORD *)&UserData.Size = 4LL;
    v16 = &v29;
    v17 = 4LL;
    v18 = &v30;
    v19 = 4LL;
    v20 = &v13;
    v22 = &v14;
    v24 = &v11;
    v26 = &v12;
    v21 = 8LL;
    v23 = 8LL;
    v25 = 4LL;
    v27 = 4LL;
    return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POSTSLEEP_NOTIFICATION, 0LL, 7u, &UserData);
  }
  return result;
}
