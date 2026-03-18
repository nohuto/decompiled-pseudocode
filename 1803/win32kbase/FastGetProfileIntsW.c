/*
 * XREFs of FastGetProfileIntsW @ 0x1C00A8180
 * Callers:
 *     <none>
 * Callees:
 *     RtlLoadStringOrError @ 0x1C0067F00 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     FastGetProfileIntW @ 0x1C00A80D0 (FastGetProfileIntW.c)
 */

__int64 __fastcall FastGetProfileIntsW(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  PULONG *v6; // rbx
  __int64 v7; // rdi
  WCHAR v9[40]; // [rsp+30h] [rbp-78h] BYREF

  if ( a3 )
  {
    v6 = (PULONG *)(a2 + 24);
    v7 = a3;
    do
    {
      RtlLoadStringOrError(*((unsigned __int16 *)v6 - 8), v9, 40, 0);
      FastGetProfileIntW(a1, *((unsigned int *)v6 - 6), v9, *((_DWORD *)v6 - 2), *v6, a4);
      v6 += 4;
      --v7;
    }
    while ( v7 );
  }
  return 1LL;
}
