/*
 * XREFs of sub_1401B8E9C @ 0x1401B8E9C
 * Callers:
 *     sub_1401AC880 @ 0x1401AC880 (sub_1401AC880.c)
 *     sub_1401B8F7C @ 0x1401B8F7C (sub_1401B8F7C.c)
 *     sub_1401B9EE8 @ 0x1401B9EE8 (sub_1401B9EE8.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140354010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140368148 @ 0x140368148 (sub_140368148.c)
 *     sub_1409D0FB4 @ 0x1409D0FB4 (sub_1409D0FB4.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x14036D310 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_1401B8E9C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  unsigned __int8 result; // al
  unsigned __int8 j; // cl
  _DWORD v8[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 1024))(a2, a3, v8);
  for ( i = 0LL; i < 4; ++i )
    *(_DWORD *)(a4 + 4 * i) = v8[i] ^ v8[i + 4];
  result = *(_BYTE *)(a4 + 15);
  for ( j = result; ; j ^= result )
  {
    result >>= 7;
    if ( !result )
      break;
  }
  *(_BYTE *)(a4 + 15) = j & 0x7F;
  return result;
}
