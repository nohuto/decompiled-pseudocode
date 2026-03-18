/*
 * XREFs of EtwpInitializeTimeStamp @ 0x1406AA23C
 * Callers:
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x140082440 (KeQuerySystemTimePrecise.c)
 *     RtlGetMultiTimePrecise @ 0x1400FCCB0 (RtlGetMultiTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwpInitializeTimeStamp(__int64 a1)
{
  void *v2; // rax
  _QWORD *v3; // rdi
  char v4; // bp
  __int64 v5; // rsi
  LARGE_INTEGER v6; // r14
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // edx
  __int64 v10; // rcx
  LARGE_INTEGER v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  switch ( *(_DWORD *)(a1 + 216) )
  {
    case 2:
      v2 = EtwpGetSystemTime;
      break;
    case 3:
      v2 = EtwpGetCycleCount;
      break;
    case 4:
      v14 = 0LL;
      if ( ((int (__fastcall *)(__int64 *))off_140424720[0])(&v14) < 0 )
      {
        *(_DWORD *)(a1 + 216) = 1;
        goto LABEL_5;
      }
      v2 = EtwpGetHostPerfCounter;
      break;
    default:
      *(_DWORD *)(a1 + 216) = 1;
LABEL_5:
      v2 = PpmQueryTime;
      break;
  }
  *(_QWORD *)(a1 + 40) = v2;
  v3 = (_QWORD *)(a1 + 320);
  if ( (*(_DWORD *)(a1 + 832) & 2) == 0 )
  {
    if ( *(_DWORD *)(a1 + 216) == 3 )
    {
      *(_QWORD *)(a1 + 328) = (*(__int64 (**)(void))(a1 + 40))();
      result = KeQuerySystemTimePrecise((__int64 *)(a1 + 320));
      goto LABEL_14;
    }
    v11.QuadPart = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    RtlGetMultiTimePrecise(&v11, 7, (int *)&v14);
    v4 = v14;
    v5 = v12;
    v6 = v11;
    if ( (v14 & 5) == 5 )
    {
      v7 = v13;
      result = *(unsigned int *)(a1 + 216);
      *v3 = v13;
      switch ( (_DWORD)result )
      {
        case 2:
          *(_QWORD *)(a1 + 328) = v7;
          break;
        case 1:
          *(LARGE_INTEGER *)(a1 + 328) = v6;
          break;
        case 4:
          *(_QWORD *)(a1 + 328) = v5;
LABEL_30:
          if ( (_DWORD)result == 4 )
            goto LABEL_14;
          break;
      }
      if ( (v4 & 3) == 3 )
        *(_QWORD *)(a1 + 1264) = v5 - v6.QuadPart;
      goto LABEL_14;
    }
    *(_QWORD *)(a1 + 328) = (*(__int64 (**)(void))(a1 + 40))();
    KeQuerySystemTimePrecise((__int64 *)(a1 + 320));
    *(_DWORD *)(a1 + 832) &= ~0x8000000u;
    result = *(unsigned int *)(a1 + 216);
    goto LABEL_30;
  }
  v9 = *(_DWORD *)(a1 + 216);
  *v3 = EtwpRefTimeSystem;
  result = EtwpRefQpcDelta;
  *(_QWORD *)(a1 + 1264) = EtwpRefQpcDelta;
  if ( v9 == 3 )
  {
    result = EtwpRefTimeCycle;
    *(_QWORD *)(a1 + 328) = EtwpRefTimeCycle;
  }
  else
  {
    v10 = EtwpRefTimePerfCounter;
    if ( v9 == 2 )
      v10 = EtwpRefTimeSystem;
    *(_QWORD *)(a1 + 328) = v10;
  }
LABEL_14:
  *(_OWORD *)(a1 + 448) = *(_OWORD *)v3;
  return result;
}
