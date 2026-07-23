/*
 * XREFs of sub_1401ADA3C @ 0x1401ADA3C
 * Callers:
 *     sub_1401A1880 @ 0x1401A1880 (sub_1401A1880.c)
 *     sub_1401ADB1C @ 0x1401ADB1C (sub_1401ADB1C.c)
 *     sub_1401AEA44 @ 0x1401AEA44 (sub_1401AEA44.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140333010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140346BE8 @ 0x140346BE8 (sub_140346BE8.c)
 *     sub_14098FFA4 @ 0x14098FFA4 (sub_14098FFA4.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x14034BB40 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_1401ADA3C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  unsigned __int8 result; // al
  unsigned __int8 j; // cl
  _DWORD v8[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 1016))(a2, a3, v8);
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
