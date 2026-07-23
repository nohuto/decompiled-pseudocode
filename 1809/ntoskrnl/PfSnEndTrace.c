/*
 * XREFs of PfSnEndTrace @ 0x14066A514
 * Callers:
 *     PfSnEndTraceWorkerThreadRoutine @ 0x14066A500 (PfSnEndTraceWorkerThreadRoutine.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     PfSnDeactivateTrace @ 0x1400E2484 (PfSnDeactivateTrace.c)
 *     PfFbBufferListFlushStandby @ 0x1400E27A8 (PfFbBufferListFlushStandby.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfSnCleanupTrace @ 0x14066A764 (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x14066A8B8 (PfSnBuildDumpFromTrace.c)
 */

__int64 __fastcall PfSnEndTrace(struct _EX_RUNDOWN_REF *P)
{
  char PreviousMode; // r14
  int Ptr_high; // edx
  int v4; // ecx
  __int64 Count_low; // rax
  int v6; // eax
  int v7; // eax
  _QWORD *v8; // rdi
  int v9; // esi
  _QWORD *v10; // rax
  unsigned int v11; // eax
  PVOID v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int16 v16; // [rsp+38h] [rbp-29h] BYREF
  PVOID Pa; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  struct _EX_RUNDOWN_REF *v19; // [rsp+58h] [rbp-9h]
  int v20; // [rsp+60h] [rbp-1h]
  int v21; // [rsp+64h] [rbp+3h]
  char *v22; // [rsp+68h] [rbp+7h]
  __int64 v23; // [rsp+70h] [rbp+Fh]
  struct _EX_RUNDOWN_REF *v24; // [rsp+78h] [rbp+17h]
  __int64 v25; // [rsp+80h] [rbp+1Fh]
  struct _EX_RUNDOWN_REF *v26; // [rsp+88h] [rbp+27h]
  __int64 v27; // [rsp+90h] [rbp+2Fh]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  PfSnDeactivateTrace(P);
  if ( P && RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_EndTrace_Info) )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_WORD *)&P[3].Count + v15) );
    v16 = v15;
    UserData.Ptr = (ULONGLONG)&v16;
    v20 = 2 * (unsigned __int16)v15;
    v19 = P + 3;
    v22 = (char *)&P[10].Ptr + 4;
    v24 = P + 11;
    v26 = P + 50;
    *(_QWORD *)&UserData.Size = 2LL;
    v21 = 0;
    v23 = 4LL;
    v25 = 4LL;
    v27 = 4LL;
    EtwWrite(RegHandle, &PfSnEvt_EndTrace_Info, 0LL, 5u, &UserData);
  }
  Ptr_high = HIDWORD(P[40].Ptr);
  v4 = HIDWORD(P[41].Ptr);
  if ( Ptr_high > v4 )
  {
    HIDWORD(P[40].Ptr) = v4;
    Ptr_high = v4;
  }
  Count_low = SLODWORD(P[41].Count);
  if ( (int)Count_low >= dword_14043D134 )
  {
    if ( (int)Count_low > 10 )
    {
      LODWORD(P[41].Count) = 10;
      LODWORD(Count_low) = 10;
    }
    if ( Ptr_high != v4 )
      *((_DWORD *)&P[35].Count + (int)Count_low) += v4 - Ptr_high;
  }
  else
  {
    *((_DWORD *)&P[35].Ptr + Count_low + 1) = v4 - Ptr_high;
    v6 = HIDWORD(P[41].Ptr);
    ++LODWORD(P[41].Count);
    HIDWORD(P[40].Ptr) = v6;
  }
  if ( LODWORD(P[11].Count) != 1 || LODWORD(P[50].Count) == 8 )
  {
    v7 = PfSnBuildDumpFromTrace(&Pa, P);
    v8 = Pa;
    v9 = v7;
  }
  else
  {
    v8 = 0LL;
    v9 = -2147483614;
  }
  LODWORD(P[57].Count) = v9;
  P[56].Count = (unsigned __int64)v8;
  PfSnCleanupTrace(P);
  ExFreePoolWithTag(P, 0);
  if ( v9 >= 0 )
  {
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_14043CCE0);
    ExAcquireFastMutex(&FastMutex);
    if ( dword_14043D324 == 1 )
    {
      KeReleaseGuardedMutex(&FastMutex);
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      v10 = qword_14043D2E0;
      if ( *(PVOID **)qword_14043D2E0 != &qword_14043D2D8 )
LABEL_29:
        __fastfail(3u);
      v8[1] = qword_14043D2E0;
      *v8 = &qword_14043D2D8;
      *v10 = v8;
      v11 = dword_14043D320 + 1;
      qword_14043D2E0 = v8;
      while ( 1 )
      {
        dword_14043D320 = v11;
        if ( v11 <= dword_14043CFCC )
          break;
        v13 = qword_14043D2D8;
        if ( qword_14043D2D8 == &qword_14043D2D8 )
          break;
        if ( *((PVOID **)qword_14043D2D8 + 1) != &qword_14043D2D8 )
          goto LABEL_29;
        v14 = *(_QWORD *)qword_14043D2D8;
        if ( *(PVOID *)(*(_QWORD *)qword_14043D2D8 + 8LL) != qword_14043D2D8 )
          goto LABEL_29;
        qword_14043D2D8 = *(PVOID *)qword_14043D2D8;
        *(_QWORD *)(v14 + 8) = &qword_14043D2D8;
        ExFreePoolWithTag(v13, 0);
        v11 = dword_14043D320 - 1;
      }
      KeReleaseGuardedMutex(&FastMutex);
      if ( qword_14043D328 )
        KeSetEvent(qword_14043D328, 0, 0);
      v9 = 0;
    }
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v9;
}
