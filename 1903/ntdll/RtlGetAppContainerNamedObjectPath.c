/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x18000B550
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BCF8 @ 0x18000BCF8 (sub_18000BCF8.c)
 *     RtlEqualSid @ 0x180067010 (RtlEqualSid.c)
 *     ZwQueryInformationToken @ 0x18009CB00 (ZwQueryInformationToken.c)
 */

__int64 __fastcall RtlGetAppContainerNamedObjectPath(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v7; // rbx
  char v8; // r13
  unsigned int v9; // esi
  char v10; // r14
  __int64 result; // rax
  __int64 v12; // r8
  int v13; // [rsp+38h] [rbp-99h] BYREF
  int v14; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v15; // [rsp+40h] [rbp-91h] BYREF
  _QWORD v16[12]; // [rsp+48h] [rbp-89h] BYREF
  _QWORD v17[12]; // [rsp+A8h] [rbp-29h] BYREF
  char v18; // [rsp+150h] [rbp+7Fh] BYREF

  v7 = a1;
  if ( !a4 )
    return 3221225485LL;
  if ( a1 && a2 )
    return 3221225520LL;
  LODWORD(v15) = 0;
  v8 = 0;
  v14 = 0;
  v9 = a3 != 0 ? 13 : 8;
  if ( a2 )
  {
    v7 = -4LL;
    v10 = 0;
LABEL_6:
    if ( a2 )
      goto LABEL_11;
    goto LABEL_7;
  }
  v10 = 1;
  if ( !a1 )
  {
    v7 = -6LL;
    goto LABEL_6;
  }
LABEL_7:
  v13 = 0;
  result = ZwQueryInformationToken(v7, 29LL, &v13, 4LL, &v18);
  if ( (int)result < 0 )
    return result;
  if ( !v13 )
  {
    result = 0LL;
    *a4 = 0LL;
    a4[1] = 0LL;
    return result;
  }
LABEL_11:
  if ( a3 )
  {
    v8 = 1;
    if ( v10 )
    {
      result = ZwQueryInformationToken(-4LL, 42LL, &v14, 4LL, &v18);
      if ( (int)result < 0 )
        return result;
      if ( v14 )
      {
        result = ZwQueryInformationToken(v7, 42LL, &v15, 4LL, &v18);
        if ( (int)result < 0 )
          return result;
        if ( !(_DWORD)v15 )
          return 3221225659LL;
        result = ZwQueryInformationToken(-4LL, 1LL, v16, 88LL, &v18);
        if ( (int)result < 0 )
          return result;
        result = ZwQueryInformationToken(v7, 1LL, v17, 88LL, &v18);
        if ( (int)result < 0 )
          return result;
        if ( !(unsigned __int8)RtlEqualSid(v17[0], v16[0]) )
          return 3221225659LL;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  v12 = v9 | 2;
  if ( !v8 )
    v12 = v9;
  return sub_18000BCF8(v7, a2, v12, a4);
}
