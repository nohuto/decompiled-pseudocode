/*
 * XREFs of RtlSetProcessDebugInformation @ 0x1800D7B10
 * Callers:
 *     sub_1800D8220 @ 0x1800D8220 (sub_1800D8220.c)
 * Callees:
 *     sub_180005760 @ 0x180005760 (sub_180005760.c)
 *     sub_1800757D8 @ 0x1800757D8 (sub_1800757D8.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x18009D120 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x18009D140 (ZwTerminateThread.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800DA550 @ 0x1800DA550 (sub_1800DA550.c)
 *     sub_1800FAA88 @ 0x1800FAA88 (sub_1800FAA88.c)
 */

__int64 __fastcall RtlSetProcessDebugInformation(HANDLE a1, int a2, __int64 a3)
{
  int InformationThread; // ebx
  char v5; // si
  __int64 result; // rax
  unsigned __int64 v7; // r8
  unsigned int *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int *v11; // r8
  __int64 v12; // [rsp+30h] [rbp-78h]
  int v13; // [rsp+60h] [rbp-48h]
  __int64 v14; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v15; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v16; // [rsp+C8h] [rbp+20h]

  v16 = -600000000LL;
  InformationThread = 0;
  *(_DWORD *)(a3 + 64) = a2;
  v5 = a2;
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 )
  {
    if ( (a2 & 1) != 0 )
    {
      InformationThread = sub_1800DA550(a3);
      if ( InformationThread )
        return (unsigned int)InformationThread;
    }
    if ( (v5 & 2) == 0 )
      return (unsigned int)InformationThread;
    v8 = *(unsigned int **)(a3 + 104);
    if ( v8 )
    {
      v9 = *v8;
      v10 = v8[1];
      if ( (_DWORD)v9 )
      {
        v11 = v8 + 2;
      }
      else
      {
        if ( (unsigned int)v10 < 0x18 )
          return (unsigned int)-1073741811;
        v11 = v8 + 2;
        if ( *((_QWORD *)v8 + 1) || *((_QWORD *)v8 + 2) )
          return (unsigned int)-1073741811;
      }
      return (unsigned int)sub_1800FAA88(v9, v10, v11);
    }
    return (unsigned int)-1073741801;
  }
  else
  {
    v14 = 0LL;
    result = sub_1800757D8((_QWORD *)a3, (__int64)a1, 0, &v14);
    if ( (int)result < 0 )
      return result;
    v7 = *(_QWORD *)(a3 + 72);
    if ( v7 > 0xD0 )
      memmove((void *)(*(_QWORD *)(a3 + 88) + a3 + 208), (const void *)(a3 + 208), v7 - 208);
    InformationThread = sub_180005760(
                          v14,
                          0LL,
                          7,
                          0,
                          0LL,
                          0LL,
                          v12,
                          (__int64)sub_1800D8220,
                          *(_QWORD *)(a3 + 16),
                          &v15,
                          0LL);
    if ( InformationThread >= 0 )
    {
      InformationThread = ZwResumeThread();
      if ( InformationThread < 0 || (InformationThread = ZwWaitForSingleObject(), InformationThread < 0) )
      {
        ZwTerminateThread();
      }
      else
      {
        InformationThread = ZwQueryInformationThread();
        if ( InformationThread >= 0 )
          InformationThread = v13;
      }
      ZwClose();
    }
    ZwClose();
  }
  return (unsigned int)InformationThread;
}
