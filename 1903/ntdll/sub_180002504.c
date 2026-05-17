/*
 * XREFs of sub_180002504 @ 0x180002504
 * Callers:
 *     RtlWow64SuspendThread @ 0x1800023F0 (RtlWow64SuspendThread.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 *     ZwOpenProcess @ 0x18009CBA0 (ZwOpenProcess.c)
 *     ZwDuplicateObject @ 0x18009CE60 (ZwDuplicateObject.c)
 */

__int64 __fastcall sub_180002504(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, _OWORD *a5)
{
  __int64 result; // rax
  int InformationThread; // ebx
  __int64 v9; // [rsp+48h] [rbp-21h] BYREF
  int v10; // [rsp+50h] [rbp-19h] BYREF
  __int64 v11; // [rsp+58h] [rbp-11h]
  __int64 v12; // [rsp+60h] [rbp-9h]
  int v13; // [rsp+68h] [rbp-1h]
  __int128 v14; // [rsp+70h] [rbp+7h]
  _BYTE v15[8]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  __int128 v17; // [rsp+90h] [rbp+27h] BYREF

  result = ZwDuplicateObject(-1LL, a1, -1LL, &v9, 2048, 0);
  if ( (int)result >= 0 )
  {
    InformationThread = ZwQueryInformationThread(v9, 0LL, v15, 48LL, 0LL);
    ZwClose(v9);
    if ( InformationThread >= 0 )
    {
      if ( a5 )
        *a5 = v17;
      if ( a3 )
        *a3 = v16;
      if ( a4 )
      {
        if ( (HANDLE)v17 == NtCurrentTeb()->ClientId.UniqueProcess )
        {
          *a4 = -1LL;
        }
        else
        {
          v11 = 0LL;
          v13 = 0;
          v12 = 0LL;
          v10 = 48;
          v14 = 0LL;
          return (unsigned int)ZwOpenProcess(a4, 1106LL, &v10, &v17);
        }
      }
    }
    return (unsigned int)InformationThread;
  }
  return result;
}
