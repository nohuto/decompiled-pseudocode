/*
 * XREFs of RtlRemovePrivileges @ 0x18008D8B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A0700 (NtQueryInformationToken.c)
 *     NtAdjustPrivilegesToken @ 0x1800A0B00 (NtAdjustPrivilegesToken.c)
 */

__int64 __fastcall RtlRemovePrivileges(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r9d
  __int64 result; // rax
  unsigned int v7; // edx
  __int64 i; // rcx
  unsigned __int64 v9; // r9
  _BYTE v10[16]; // [rsp+30h] [rbp-1D8h] BYREF
  _DWORD v11[108]; // [rsp+40h] [rbp-1C8h] BYREF

  v3 = 0LL;
  v4 = 0;
  if ( a3 )
  {
    while ( (unsigned int)(*a2 - 2) <= 0x22 )
    {
      v3 |= 1LL << *a2;
      ++v4;
      ++a2;
      if ( v4 >= a3 )
        goto LABEL_4;
    }
    return 3221225485LL;
  }
  else
  {
LABEL_4:
    result = NtQueryInformationToken(a1, 3LL, v11, 432LL, v10);
    if ( (int)result >= 0 )
    {
      v7 = v11[0];
      for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
      {
        v9 = (unsigned int)v11[3 * i + 1];
        if ( _bittest64(&v3, v9) )
        {
          v3 &= ~(1LL << v9);
        }
        else
        {
          v11[3 * i + 3] = 4;
          v7 = v11[0];
        }
      }
      if ( v3 )
        return 262LL;
      else
        return NtAdjustPrivilegesToken(a1, 0LL, v11, 432LL, 0LL, 0LL);
    }
  }
  return result;
}
