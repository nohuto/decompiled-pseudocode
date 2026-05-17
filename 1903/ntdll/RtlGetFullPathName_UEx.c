/*
 * XREFs of RtlGetFullPathName_UEx @ 0x1800291D0
 * Callers:
 *     RtlGetFileMUIPath @ 0x180059D90 (RtlGetFileMUIPath.c)
 *     RtlGetFullPathName_U @ 0x180080430 (RtlGetFullPathName_U.c)
 *     RtlDosSearchPath_U @ 0x18008A1B0 (RtlDosSearchPath_U.c)
 * Callees:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlGetFullPathName_UEx(__int64 a1, unsigned int a2, _WORD *a3, _QWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // rbx
  __int64 result; // rax
  int v10; // eax
  unsigned __int16 v11[12]; // [rsp+30h] [rbp-18h] BYREF

  v5 = a5;
  if ( a5 )
    *a5 = 0;
  result = RtlInitUnicodeStringEx((__int64)v11, a1);
  if ( (int)result >= 0 )
  {
    v10 = sub_180027B70(v11, a2, a3, a4, 0LL, (__int64)&a5);
    if ( v10 )
    {
      if ( v5 )
        *v5 = v10;
      return 0LL;
    }
    else
    {
      return 3221225523LL;
    }
  }
  return result;
}
