/*
 * XREFs of IopQueryEnvironmentVariableInfoSysEnv @ 0x140823640
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140823374 (IopIssueSystemEnvironmentRequest.c)
 */

__int64 __fastcall IopQueryEnvironmentVariableInfoSysEnv(
        struct _FILE_OBJECT *a1,
        struct _DEVICE_OBJECT *a2,
        int a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  int v7; // edx
  int v9; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v10[3]; // [rsp+58h] [rbp-40h] BYREF

  v9 = a3;
  v7 = IopIssueSystemEnvironmentRequest(0x520010u, 1u, a1, a2, &v9, 4u, v10, 0x18u, 0LL);
  if ( v7 >= 0 )
  {
    if ( a4 )
      *a4 = v10[0];
    if ( a5 )
      *a5 = v10[1];
    if ( a6 )
      *a6 = v10[2];
  }
  return (unsigned int)v7;
}
