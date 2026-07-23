/*
 * XREFs of WdipSemWriteSemActionsEvent @ 0x140717BF8
 * Callers:
 *     WdipSemDisableScenario @ 0x140718764 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407189EC (WdipSemEnableScenario.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     WdipSemFastFree @ 0x140717DD0 (WdipSemFastFree.c)
 *     WdipSemFastAllocate @ 0x140717DFC (WdipSemFastAllocate.c)
 *     WdipSemWriteEvent @ 0x140717E34 (WdipSemWriteEvent.c)
 *     WmiQueryTraceInformation @ 0x140717EB0 (WmiQueryTraceInformation.c)
 */

__int64 __fastcall WdipSemWriteSemActionsEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  NTSTATUS v6; // ebx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rdi
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  int TraceInformation; // [rsp+34h] [rbp-CCh] BYREF
  __int64 Buffer; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v20[255]; // [rsp+48h] [rbp-B8h]
  _QWORD v21[124]; // [rsp+840h] [rbp+740h] BYREF

  v16 = 0;
  v4 = 0LL;
  if ( a1
    && a2
    && (LODWORD(Buffer) = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
        TraceInformation = 0,
        (_DWORD)Buffer) )
  {
    v6 = WmiQueryTraceInformation(LoggerEventsLostClass, &TraceInformation, 4u, 0LL, &Buffer);
    v7 = v16;
    if ( v6 >= 0 )
      v7 = TraceInformation;
    v16 = v7;
    if ( v6 >= 0 )
    {
      v8 = *(_QWORD *)(a2 + 32);
      v9 = *(_DWORD *)(v8 + 48);
      v20[1] = v8 + 16;
      v20[3] = &v16;
      v19 = v8;
      v20[0] = 16LL;
      v20[2] = 2LL;
      v20[4] = 4LL;
      v20[5] = v8 + 48;
      v20[6] = 4LL;
      if ( *(_DWORD *)(v8 + 48) )
      {
        while ( 1 )
        {
          Buffer = *(_QWORD *)(v8 + 8 * v4 + 56);
          v10 = WdipSemFastAllocate(4LL, 40LL);
          v11 = v10;
          if ( !v10 )
            break;
          v12 = Buffer;
          v21[v4] = v10;
          *(_OWORD *)v10 = *(_OWORD *)v12;
          *(_BYTE *)(v10 + 16) = *(_BYTE *)(v12 + 18);
          *(_QWORD *)(v10 + 24) = *(_QWORD *)(v12 + 24);
          *(_DWORD *)(v10 + 32) = *(_DWORD *)(v12 + 36);
          v5 = 2LL * (unsigned int)(v4 + 4);
          v13 = *(_DWORD *)(a2 + 4 * v4 + 48);
          v4 = (unsigned int)(v4 + 1);
          *(_DWORD *)(v11 + 36) = v13;
          HIDWORD(v20[v5]) = 0;
          v20[v5 - 1] = v11;
          LODWORD(v20[v5]) = 40;
          if ( (unsigned int)v4 >= *(_DWORD *)(v8 + 48) )
            goto LABEL_10;
        }
        v6 = -1073741670;
      }
      else
      {
LABEL_10:
        v6 = WdipSemWriteEvent(v5, a1, a2 + 16, (unsigned int)(v9 + 4), &v19);
      }
      if ( (_DWORD)v4 )
      {
        v14 = v21;
        do
        {
          WdipSemFastFree(4LL, *v14++);
          --v4;
        }
        while ( v4 );
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
