/*
 * XREFs of EtwpInitializeTimeStamp @ 0x14065C188
 * Callers:
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x14008A4E0 (KeQuerySystemTimePrecise.c)
 *     RtlGetMultiTimePrecise @ 0x140138798 (RtlGetMultiTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __fastcall EtwpInitializeTimeStamp(__int64 a1)
{
  void *v2; // rax
  _QWORD *v3; // rsi
  char v4; // bp
  LARGE_INTEGER v5; // rdi
  LARGE_INTEGER v6; // r14
  __int64 v7; // rcx
  LARGE_INTEGER result; // rax
  int v9; // edx
  __int64 v10; // rcx
  LARGE_INTEGER v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  switch ( *(_DWORD *)(a1 + 216) )
  {
    case 2:
      v2 = EtwpGetSystemTime;
      break;
    case 3:
      v2 = EtwpGetCycleCount;
      break;
    case 4:
      v13 = 0LL;
      if ( ((int (__fastcall *)(__int64 *))off_1403FF720[0])(&v13) < 0 )
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
      result = KeQuerySystemTimePrecise((LARGE_INTEGER *)(a1 + 320));
      goto LABEL_14;
    }
    RtlGetMultiTimePrecise(v11, 7, (int *)&v13);
    v4 = v13;
    v5 = v11[1];
    v6 = v11[0];
    if ( (v13 & 5) == 5 )
    {
      v7 = v12;
      result.QuadPart = *(unsigned int *)(a1 + 216);
      *v3 = v12;
      switch ( result.LowPart )
      {
        case 2u:
          *(_QWORD *)(a1 + 328) = v7;
          break;
        case 1u:
          *(LARGE_INTEGER *)(a1 + 328) = v6;
          break;
        case 4u:
          *(LARGE_INTEGER *)(a1 + 328) = v5;
LABEL_30:
          if ( result.LowPart == 4 )
            goto LABEL_14;
          break;
      }
      if ( (v4 & 3) == 3 )
        *(_QWORD *)(a1 + 1264) = v5.QuadPart - v6.QuadPart;
      goto LABEL_14;
    }
    *(_QWORD *)(a1 + 328) = (*(__int64 (**)(void))(a1 + 40))();
    KeQuerySystemTimePrecise((LARGE_INTEGER *)(a1 + 320));
    *(_DWORD *)(a1 + 832) &= ~0x8000000u;
    result.QuadPart = *(unsigned int *)(a1 + 216);
    goto LABEL_30;
  }
  v9 = *(_DWORD *)(a1 + 216);
  *v3 = EtwpRefTimeSystem;
  result.QuadPart = EtwpRefQpcDelta;
  *(_QWORD *)(a1 + 1264) = EtwpRefQpcDelta;
  if ( v9 == 3 )
  {
    result.QuadPart = EtwpRefTimeCycle;
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
