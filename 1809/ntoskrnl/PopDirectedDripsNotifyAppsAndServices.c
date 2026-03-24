/*
 * XREFs of PopDirectedDripsNotifyAppsAndServices @ 0x140867FBC
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x140868438 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     PoBlockConsoleSwitch @ 0x1406DDC10 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1406DDC60 (PopDispatchStateCallout.c)
 *     PopSuspendApps @ 0x1406DEBD0 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1406DEC38 (PopSuspendServices.c)
 *     PopResumeApps @ 0x1406DECA8 (PopResumeApps.c)
 *     PopResumeServices @ 0x1406DED40 (PopResumeServices.c)
 *     PopDiagTraceDirectedDripsNotifyAppsAndServices @ 0x14087202C (PopDiagTraceDirectedDripsNotifyAppsAndServices.c)
 */

__int64 __fastcall PopDirectedDripsNotifyAppsAndServices(_DWORD *a1, int *a2, char a3)
{
  __int64 result; // rax
  int v7; // ett
  __int64 v8; // r15
  int v9; // eax
  _DWORD *v10; // rdi
  int v11; // ebp
  _DWORD *v12; // rdi
  __int64 v13; // rcx
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+20h] BYREF

  _m_prefetchw(a1);
  LODWORD(result) = *a1;
  do
  {
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange(a1, result, result);
  }
  while ( v7 != (_DWORD)result );
  if ( _InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0) && (result & 0x800) != 0 )
  {
    v8 = MEMORY[0xFFFFF78000000008];
    if ( a3 )
    {
      if ( (result & 8) != 0 )
        return result;
      if ( (result & 4) != 0 )
      {
        a1[73] = -1073741536;
        return result;
      }
      _InterlockedOr(a1, 2u);
      v9 = *a2;
      v10 = a2 + 9;
      a2[10] = 2;
      a2[11] = 5;
      a2[12] = v9;
      a2[14] = 21;
      a2[8] = PoBlockConsoleSwitch((__int64)(a2 + 9));
      v10[4] = 1;
      v11 = PopDispatchStateCallout(v10, 0LL);
      if ( v11 < 0 )
      {
        v14 = a2[8];
        v10[4] = 7;
        PopDispatchStateCallout(v10, (__int64)&v14);
      }
      else
      {
        if ( !PsWin32CalloutsEstablished )
        {
          PopSuspendApps(v10, 0);
          PopSuspendServices(v10, 0);
        }
        _InterlockedOr(a1, 8u);
      }
      a1[73] = v11;
    }
    else
    {
      if ( (result & 8) != 0 )
      {
        v12 = a2 + 9;
        if ( !PsWin32CalloutsEstablished )
        {
          PopResumeServices(v12, 0);
          PopResumeApps(v12, 0);
        }
        v12[4] = 8;
        PopDispatchStateCallout(v12, 0LL);
        v15 = a2[8];
        v12[4] = 7;
        PopDispatchStateCallout(v12, (__int64)&v15);
      }
      _InterlockedAnd(a1, 0xFFFFFFF5);
      v11 = 0;
    }
    v13 = MEMORY[0xFFFFF78000000008] - v8;
    LOBYTE(v13) = a3;
    return PopDiagTraceDirectedDripsNotifyAppsAndServices(
             v13,
             (unsigned int)v11,
             (MEMORY[0xFFFFF78000000008] - v8) / 0x2710uLL);
  }
  return result;
}
