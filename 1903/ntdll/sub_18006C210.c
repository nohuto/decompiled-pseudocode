/*
 * XREFs of sub_18006C210 @ 0x18006C210
 * Callers:
 *     sub_18006B880 @ 0x18006B880 (sub_18006B880.c)
 *     sub_18006BAC0 @ 0x18006BAC0 (sub_18006BAC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_18006C210(__int64 a1, unsigned __int32 a2, volatile signed __int32 *a3)
{
  signed __int64 v6; // rbx
  unsigned __int32 v7; // ecx
  __int64 result; // rax
  signed __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v11[12]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+4Ch] [rbp-2Ch]

  if ( !byte_180165430 )
  {
    v9 = qword_180166328;
    v6 = qword_180166328;
    if ( !qword_180166328 )
    {
      if ( (int)ZwOpenKey(&v9, 1LL, &unk_180118480) < 0 )
      {
LABEL_7:
        v7 = a2;
        goto LABEL_8;
      }
      v6 = _InterlockedCompareExchange64(&qword_180166328, v9, 0LL);
      if ( v6 )
      {
        ZwClose(v9);
        v9 = v6;
      }
      else
      {
        v6 = v9;
      }
    }
    if ( (int)ZwQueryValueKey(v6, a1, 2LL, v11, 16, &v10) >= 0 && v10 == 16 )
    {
      v7 = v12;
      if ( v12 <= 1 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
  v7 = 1;
LABEL_8:
  result = (unsigned int)_InterlockedCompareExchange(a3, v7, 0);
  if ( !(_DWORD)result )
    return v7;
  return result;
}
