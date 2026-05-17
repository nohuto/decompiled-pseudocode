/*
 * XREFs of sub_180086C60 @ 0x180086C60
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180004440 (EtwProcessPrivateLoggerRequest.c)
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 * Callees:
 *     sub_1800058F4 @ 0x1800058F4 (sub_1800058F4.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_180086DAC @ 0x180086DAC (sub_180086DAC.c)
 *     sub_180086E40 @ 0x180086E40 (sub_180086E40.c)
 *     sub_180086E94 @ 0x180086E94 (sub_180086E94.c)
 *     sub_1800874F8 @ 0x1800874F8 (sub_1800874F8.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall sub_180086C60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  ULONG v6; // esi
  __int64 v7; // rbx
  char v8; // r15
  __int64 v9; // r13
  int v10; // ebp
  __int64 v11; // r14
  NTSTATUS v12; // eax
  int v14; // [rsp+60h] [rbp+8h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]
  int v17; // [rsp+74h] [rbp+1Ch]

  v17 = HIDWORD(a3);
  v15 = 0LL;
  v4 = 0;
  v14 = 0;
  v16 = 0;
  v6 = sub_180086DAC(a4, &v15);
  if ( !v6 )
  {
    v7 = v15;
    v8 = 1;
    v9 = *(unsigned int *)(v15 + 20);
    v10 = *(_DWORD *)(v15 + 324) & 0x400;
    v11 = *(_QWORD *)(v15 + 32);
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v4 = 1;
      v14 = *(_DWORD *)(v15 + 384);
      v16 = *(_DWORD *)(v15 + 388);
      *(_DWORD *)(v15 + 384) = *(_DWORD *)(a4 + 104);
      *(_DWORD *)(v7 + 388) = *(_DWORD *)(a4 + 112);
      if ( (*(_DWORD *)(a4 + 64) & 0x1000) != 0 )
        *(_QWORD *)(v7 + 376) = *(_QWORD *)(a4 + 16);
    }
    v6 = sub_180086E94(v7);
    if ( !v6 )
    {
      if ( v10 || (v12 = sub_180086E40(v7, 8LL), v12 >= 0) )
      {
        sub_1800058F4(a4, v7, 0LL);
        v8 = 0;
        _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16 * v9 + 8));
        if ( v10 )
          sub_1800874F8(v15);
        v7 = 0LL;
        v15 = 0LL;
        if ( v11 )
        {
          ZwWaitForSingleObject(v11, 0LL, 0LL);
          ZwClose(v11);
        }
      }
      else
      {
        v6 = RtlNtStatusToDosError(v12);
      }
    }
    if ( v4 && v7 )
    {
      *(_DWORD *)(v7 + 384) = v14;
      *(_DWORD *)(v7 + 388) = v16;
    }
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16 * v9 + 8));
  }
  return v6;
}
