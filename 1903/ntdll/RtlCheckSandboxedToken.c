/*
 * XREFs of RtlCheckSandboxedToken @ 0x1800848E0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationToken @ 0x18009CB00 (ZwQueryInformationToken.c)
 */

__int64 __fastcall RtlCheckSandboxedToken(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  int v4; // [rsp+48h] [rbp+10h] BYREF
  char v5; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0;
  result = ZwQueryInformationToken(a1, 47LL, &v4, 4LL, &v5);
  if ( (int)result >= 0 )
  {
    if ( v4 )
      *a2 = 1;
  }
  return result;
}
