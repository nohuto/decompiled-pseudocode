/*
 * XREFs of sub_180086DAC @ 0x180086DAC
 * Callers:
 *     sub_180086C60 @ 0x180086C60 (sub_180086C60.c)
 *     sub_18010D380 @ 0x18010D380 (sub_18010D380.c)
 *     sub_18010D60C @ 0x18010D60C (sub_18010D60C.c)
 *     sub_18010D6E0 @ 0x18010D6E0 (sub_18010D6E0.c)
 *     sub_18010D898 @ 0x18010D898 (sub_18010D898.c)
 * Callees:
 *     sub_18000456C @ 0x18000456C (sub_18000456C.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     sub_18010D214 @ 0x18010D214 (sub_18010D214.c)
 */

__int64 __fastcall sub_180086DAC(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_WORD *)(a1 + 144) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 176));
    return sub_18000456C(&DestinationString, a2);
  }
  v4 = *(unsigned __int16 *)(a1 + 8);
  v5 = qword_180163518;
  v6 = v4 & 0xFFFF7FFF;
  v9 = v4 & 0xFFFF7FFF;
  if ( !qword_180163518 )
    return 4201LL;
  if ( v6 < 0x40 )
  {
LABEL_6:
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 16LL * v6 + 8));
    v7 = *(_QWORD *)(qword_180163518 + 16LL * v6);
    if ( (v7 & 1) == 0 )
    {
      *a2 = v7;
      return 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16LL * v6 + 8));
    return 4201LL;
  }
  result = sub_18010D214(v4, &v9);
  if ( !(_DWORD)result )
  {
    v6 = v9;
    v5 = qword_180163518;
    goto LABEL_6;
  }
  return result;
}
