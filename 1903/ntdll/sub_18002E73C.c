/*
 * XREFs of sub_18002E73C @ 0x18002E73C
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     sub_180021908 @ 0x180021908 (sub_180021908.c)
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 *     sub_1800225E4 @ 0x1800225E4 (sub_1800225E4.c)
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     sub_180022CE8 @ 0x180022CE8 (sub_180022CE8.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     RtlQueryInformationActivationContext @ 0x1800376A0 (RtlQueryInformationActivationContext.c)
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 *     LdrEnumerateLoadedModules @ 0x180073D60 (LdrEnumerateLoadedModules.c)
 *     sub_1800805E4 @ 0x1800805E4 (sub_1800805E4.c)
 *     RtlPrepareForProcessCloning @ 0x18009BA20 (RtlPrepareForProcessCloning.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0C70 (LdrInitShimEngineDynamic.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 *     sub_18002E464 @ 0x18002E464 (sub_18002E464.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 */

struct _TEB *__fastcall sub_18002E73C(int a1)
{
  HANDLE v1; // r14
  char v2; // si
  char v4; // bp
  __int64 *v5; // rbx
  __int64 v6; // rax
  struct _TEB *result; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v1 = EventHandle;
  v2 = 0;
  if ( !a1 )
    v1 = Handle;
  while ( 1 )
  {
    while ( 1 )
    {
      RtlEnterCriticalSection(&stru_1801652C0);
      v4 = byte_180165300;
      if ( !byte_180165300 || a1 == 1 )
      {
        v5 = (__int64 *)qword_1801652F0;
        if ( *(__int64 **)(qword_1801652F0 + 8) != &qword_1801652F0
          || (v6 = *(_QWORD *)qword_1801652F0, *(_QWORD *)(*(_QWORD *)qword_1801652F0 + 8LL) != qword_1801652F0) )
        {
          __fastfail(3u);
        }
        qword_1801652F0 = *(_QWORD *)qword_1801652F0;
        *(_QWORD *)(v6 + 8) = &qword_1801652F0;
        if ( &qword_1801652F0 == v5 )
        {
          if ( dword_1801652E8 == a1 )
          {
            dword_1801652E8 = 1;
            v2 = 1;
          }
        }
        else
        {
          if ( !v4 )
            ++dword_1801652E8;
          sub_18002E464();
        }
      }
      else
      {
        if ( dword_1801652E8 == a1 )
        {
          dword_1801652E8 = 1;
          v2 = 1;
        }
        v5 = &qword_1801652F0;
      }
      RtlLeaveCriticalSection(&stru_1801652C0);
      if ( v2 )
        break;
      if ( &qword_1801652F0 == v5 )
        ZwWaitForSingleObject(v1, 0, 0LL);
      else
        sub_18002E26C((__int64)(v5 - 8), v4);
    }
    if ( !a1 || (__int64 *)qword_1801652A0 == &qword_1801652A0 )
      break;
    RtlEnterCriticalSection(&stru_1801652C0);
    v8 = qword_1801652A0;
    *(_QWORD *)(qword_1801652A0 + 8) = &qword_1801652F0;
    qword_1801652F0 = v8;
    v9 = qword_1801652A8;
    *(_QWORD *)qword_1801652A8 = &qword_1801652F0;
    qword_1801652F8 = v9;
    qword_1801652A8 = (__int64)&qword_1801652A0;
    qword_1801652A0 = (__int64)&qword_1801652A0;
    stru_1801661A0 = 0LL;
    RtlLeaveCriticalSection(&stru_1801652C0);
    v2 = 0;
  }
  result = NtCurrentTeb();
  result->SameTebFlags |= 0x1000u;
  return result;
}
