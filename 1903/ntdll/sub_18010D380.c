/*
 * XREFs of sub_18010D380 @ 0x18010D380
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180004440 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     sub_180004B28 @ 0x180004B28 (sub_180004B28.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     sub_180086DAC @ 0x180086DAC (sub_180086DAC.c)
 *     sub_180086E40 @ 0x180086E40 (sub_180086E40.c)
 *     sub_18010D034 @ 0x18010D034 (sub_18010D034.c)
 *     sub_18010D6E0 @ 0x18010D6E0 (sub_18010D6E0.c)
 */

__int64 __fastcall sub_18010D380(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  *a2 = 0;
  *a3 = 176;
  if ( a1 < 0xB0 )
    return 234LL;
  *(_QWORD *)(a4 + 152) = a4 + 176;
  *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
  result = sub_180086DAC(a4, &v11);
  if ( !(_DWORD)result )
  {
    v9 = v11;
    if ( (*(_DWORD *)(v11 + 324) & 0x400) != 0 )
    {
      if ( !*(_WORD *)(a4 + 128) )
      {
        v10 = 2;
LABEL_11:
        _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16LL * *(unsigned int *)(v9 + 20) + 8));
        return v10;
      }
      v10 = sub_180004B28(a4, *(_DWORD *)(a4 + 96), (_UNICODE_STRING *)(v11 + 168));
      if ( v10 )
        goto LABEL_11;
      v10 = sub_18010D034(v9);
      RtlFreeUnicodeString((PUNICODE_STRING)(v9 + 168));
    }
    else
    {
      v10 = sub_180086E40(v11, 2);
    }
    sub_18010D6E0(a1, a2, a3, a4);
    goto LABEL_11;
  }
  return result;
}
