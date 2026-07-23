/*
 * XREFs of PfSnBeginScenario @ 0x140668444
 * Callers:
 *     PfSnBeginAppLaunch @ 0x140667DB4 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x1406D0B04 (PfSnOperationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     PfSnStartTraceTimer @ 0x1400E23A8 (PfSnStartTraceTimer.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfSnLogScenarioDecision @ 0x14066874C (PfSnLogScenarioDecision.c)
 *     PfSnCheckActionsNeeded @ 0x140668FFC (PfSnCheckActionsNeeded.c)
 *     PfSnBeginTrace @ 0x1406696E4 (PfSnBeginTrace.c)
 *     PfSnLogIdentifier @ 0x140669960 (PfSnLogIdentifier.c)
 *     PfSnGetPrefetchInstructions @ 0x1406699D8 (PfSnGetPrefetchInstructions.c)
 *     PfSnPrefetchScenario @ 0x1406C21A0 (PfSnPrefetchScenario.c)
 */

__int64 __fastcall PfSnBeginScenario(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 CurrentThread; // r13
  unsigned int v6; // esi
  __int64 v8; // r14
  int v9; // ebx
  __int64 v10; // rdi
  int v11; // r8d
  int v12; // r12d
  _BYTE *v13; // r14
  struct _EX_RUNDOWN_REF *v14; // rsi
  unsigned int started; // r15d
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  char v20; // [rsp+40h] [rbp-20h]
  int v21; // [rsp+44h] [rbp-1Ch] BYREF
  int v22; // [rsp+48h] [rbp-18h] BYREF
  int v23; // [rsp+4Ch] [rbp-14h]
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+58h] [rbp-8h] BYREF

  CurrentThread = (__int64)KeGetCurrentThread();
  v6 = a3;
  v23 = -1;
  P = 0LL;
  v8 = a2;
  v25 = 0LL;
  v9 = 0;
  v20 = *(_BYTE *)(CurrentThread + 562);
  v10 = -1LL;
  *(_BYTE *)(CurrentThread + 562) = 0;
  if ( (int)PsGetIoPriorityThread(CurrentThread) < 2 )
  {
    v21 = v11;
    started = 1075380276;
    v22 = v11;
    goto LABEL_19;
  }
  v12 = v11 + 1;
  if ( v11 + 1 + _InterlockedExchangeAdd(&dword_14043D330, v11 + 1) < (unsigned int)dword_14043CFC8 )
  {
    v9 = PfSnCheckActionsNeeded(v8, v6, CurrentThread, (unsigned int)&v21, (__int64)&v22);
    if ( (a4 & 2) != 0 )
    {
      v9 &= ~2u;
      v22 = 9;
    }
    if ( (v9 & 2) != 0 )
    {
      if ( (int)PfSnGetPrefetchInstructions(v8, v6, &P) >= 0 )
      {
        v13 = P;
        v10 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)P + 16);
        if ( v10 < *((_QWORD *)P + 25) && v21 != 22 )
        {
          v9 &= ~1u;
          v21 = 11;
        }
        if ( v10 < *((_QWORD *)P + 24) && v22 != 22 )
        {
          v9 &= ~2u;
          v22 = 12;
        }
        v23 = *((_DWORD *)P + 52);
LABEL_7:
        if ( (a4 & 4) != 0 )
        {
          v9 &= ~1u;
          v21 = 8;
        }
        if ( ((unsigned __int8)v9 & (unsigned __int8)v12) != 0 )
        {
          v17 = PfSnBeginTrace(
                  a2,
                  v6,
                  a1,
                  CurrentThread & -(__int64)(((unsigned __int8)v12 & (unsigned __int8)a4) != 0),
                  v12 & (a4 >> 3),
                  &v25);
          if ( v17 < 0 )
          {
            switch ( v17 )
            {
              case -1073741618:
                v21 = 16;
                break;
              case -1073741670:
                v21 = 17;
                break;
              case -1072037882:
                v21 = 18;
                break;
              case -1073741791:
                v21 = 19;
                break;
              default:
                v21 = (v17 != -1073741661) + 20;
                break;
            }
          }
          v14 = v25;
          if ( v25 && a5 )
            PfSnLogIdentifier(v25, a5, 0LL);
        }
        else
        {
          v14 = v25;
        }
        if ( (v9 & 2) != 0 )
        {
          v18 = a4 | 0x10;
          if ( (v13[216] & 3) == 0 )
            v18 = a4;
          v19 = PfSnPrefetchScenario(v13, v18, 0LL);
          P = 0LL;
          v13 = 0LL;
          if ( v19 >= 0 )
            LOBYTE(v12) = 0;
        }
        started = 0;
        if ( !(_BYTE)v12 )
          goto LABEL_14;
        goto LABEL_13;
      }
      v9 &= ~2u;
      v22 = 10;
    }
    v13 = P;
    goto LABEL_7;
  }
  v21 = v11 + 1;
  started = -1073741631;
  v22 = v11 + 1;
LABEL_13:
  _InterlockedDecrement(&dword_14043D330);
  v13 = P;
  v14 = v25;
LABEL_14:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v14 )
  {
    started = PfSnStartTraceTimer(v14);
    ExReleaseRundownProtection_0(v14 + 45);
  }
  LODWORD(v8) = a2;
  v6 = a3;
LABEL_19:
  PfSnLogScenarioDecision(v8, v6, v9, v21, v22, v23, v10);
  *(_BYTE *)(CurrentThread + 562) = v20;
  return started;
}
