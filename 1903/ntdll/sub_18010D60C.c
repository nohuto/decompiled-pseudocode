/*
 * XREFs of sub_18010D60C @ 0x18010D60C
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180004440 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_180086DAC @ 0x180086DAC (sub_180086DAC.c)
 *     sub_180086E40 @ 0x180086E40 (sub_180086E40.c)
 *     sub_18010D6E0 @ 0x18010D6E0 (sub_18010D6E0.c)
 */

__int64 __fastcall sub_18010D60C(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  ULONG v10; // ebx
  NTSTATUS v11; // eax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  *a2 = 0;
  *a3 = 176;
  if ( a1 < 0xB0 )
    return 0LL;
  result = sub_180086DAC(a4, &v12);
  if ( !(_DWORD)result )
  {
    v9 = v12;
    if ( (*(_BYTE *)(v12 + 324) & 8) == 0 )
    {
      v10 = 87;
LABEL_10:
      _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16LL * *(unsigned int *)(v9 + 20) + 8));
      return v10;
    }
    sub_180086E40(v12, 2);
    v11 = sub_180086E40(v9, 4);
    if ( v11 )
    {
      v10 = RtlNtStatusToDosError(v11);
      if ( v10 )
        goto LABEL_10;
    }
    else
    {
      v10 = 0;
    }
    sub_18010D6E0(a1, a2, a3, a4);
    goto LABEL_10;
  }
  return result;
}
