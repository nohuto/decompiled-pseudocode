/*
 * XREFs of sub_18010D6E0 @ 0x18010D6E0
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180004440 (EtwProcessPrivateLoggerRequest.c)
 *     sub_18010D380 @ 0x18010D380 (sub_18010D380.c)
 *     sub_18010D60C @ 0x18010D60C (sub_18010D60C.c)
 *     sub_18010D898 @ 0x18010D898 (sub_18010D898.c)
 * Callees:
 *     sub_1800058F4 @ 0x1800058F4 (sub_1800058F4.c)
 *     RtlCopyUnicodeString @ 0x1800150A0 (RtlCopyUnicodeString.c)
 *     sub_180086DAC @ 0x180086DAC (sub_180086DAC.c)
 */

__int64 __fastcall sub_18010D6E0(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned int v10; // ecx
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[0] = 0LL;
  result = sub_180086DAC(a4, v11);
  if ( !(_DWORD)result )
  {
    *a2 = 0;
    *a3 = 176;
    if ( a1 >= 0xB0 )
    {
      v9 = v11[0];
      if ( (unsigned int)*(unsigned __int16 *)(v11[0] + 154) + 176 < a1 )
      {
        *(_QWORD *)(a4 + 152) = a4 + 176;
        *(_WORD *)(a4 + 146) = *(_WORD *)(v9 + 154);
        RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 144), (PCUNICODE_STRING)(v9 + 152));
        *a3 += *(unsigned __int16 *)(v9 + 154);
      }
      sub_1800058F4(a4, v9, 0LL);
      v10 = *(unsigned __int16 *)(a4 + 146) + 176;
      if ( v10 + *(unsigned __int16 *)(v9 + 170) < a1 )
      {
        *(_QWORD *)(a4 + 136) = a4 + v10;
        *(_WORD *)(a4 + 130) = *(_WORD *)(v9 + 170);
        RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 128), (PCUNICODE_STRING)(v9 + 168));
        *a3 += *(unsigned __int16 *)(v9 + 170);
      }
      *a2 = *a3;
      if ( *a3 < *(_DWORD *)a4 )
        *(_DWORD *)a4 = *a3;
      _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16LL * *(unsigned int *)(v9 + 20) + 8));
      return 0LL;
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16LL * *(unsigned int *)(v11[0] + 20) + 8));
      return 234LL;
    }
  }
  return result;
}
