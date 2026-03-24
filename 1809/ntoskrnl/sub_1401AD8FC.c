/*
 * XREFs of sub_1401AD8FC @ 0x1401AD8FC
 * Callers:
 *     sub_1401A1740 @ 0x1401A1740 (sub_1401A1740.c)
 *     sub_1401AD9DC @ 0x1401AD9DC (sub_1401AD9DC.c)
 *     sub_1401AE904 @ 0x1401AE904 (sub_1401AE904.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140332010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140345BE8 @ 0x140345BE8 (sub_140345BE8.c)
 *     sub_14098EFA4 @ 0x14098EFA4 (sub_14098EFA4.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x14034AB40 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_1401AD8FC(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
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
