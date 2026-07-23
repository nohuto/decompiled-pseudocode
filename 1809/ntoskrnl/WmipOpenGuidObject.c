/*
 * XREFs of WmipOpenGuidObject @ 0x140612B2C
 * Callers:
 *     WmipOpenBlock @ 0x140612928 (WmipOpenBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     WmipCreateGuidObject @ 0x140612BC8 (WmipCreateGuidObject.c)
 *     WmipUuidFromString @ 0x14061357C (WmipUuidFromString.c)
 */

__int64 __fastcall WmipOpenGuidObject(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[16]; // [rsp+28h] [rbp-30h] BYREF

  v7 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 8LL);
  v8 = *v7 - *(_QWORD *)L"\\WmiGuid\\";
  if ( *v7 == *(_QWORD *)L"\\WmiGuid\\" )
    v8 = v7[1] - *(_QWORD *)L"Guid\\";
  if ( v8 )
    return 3221225485LL;
  result = WmipUuidFromString((char *)v7 + 18, v11);
  if ( (int)result >= 0 )
  {
    result = WmipCreateGuidObject(a1, a3, v11, &v10);
    if ( (int)result >= 0 )
    {
      *a4 = v10;
      return 0LL;
    }
  }
  return result;
}
