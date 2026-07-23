/*
 * XREFs of PopDiagTraceIdleWakeSource @ 0x1402E179C
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x14005F330 (PpmExitCoordinatedIdle.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400073A0 (RtlStringCbCopyW.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1400FE940 (KeGetCurrentProcessorNumberEx.c)
 *     PopDiagAreIdenticalWakeSources @ 0x1402DF758 (PopDiagAreIdenticalWakeSources.c)
 */

__int64 __fastcall PopDiagTraceIdleWakeSource(int a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  _DWORD *v8; // rbx
  char *v9; // rdi
  wchar_t *v10; // rdx
  wchar_t *v11; // rcx
  const wchar_t *v12; // r8
  bool v13; // dl
  int *v14; // r14
  unsigned int v15; // r12d
  char *v16; // rax
  ULONG CurrentProcessorNumber; // eax

  result = MEMORY[0xFFFFF78000000008];
  if ( PopDiagGlobalIdleWakeAccounting && a1 == PpmDripsStateIndex && a3 >= 0 )
  {
    v8 = &unk_140412068;
    if ( a3 > 4 )
    {
      if ( a3 == 6 && *(_BYTE *)a4 == 3 )
      {
        v10 = 0LL;
        if ( PopTimeBrokerExpirationDueTime
          && MEMORY[0xFFFFF78000000014] >= (unsigned __int64)PopTimeBrokerExpirationDueTime )
        {
          v11 = &PopTimeBrokerExpirationReason;
          if ( (unsigned __int64)(PopTimeBrokerExpirationDueTime + 20000000) < MEMORY[0xFFFFF78000000014] )
            v11 = 0LL;
          v10 = v11;
        }
        v12 = L"Unknown";
        if ( v10 )
          v12 = v10;
        RtlStringCbCopyW((NTSTRSAFE_PWSTR)(a4 + 2), 0x80uLL, v12);
      }
      v13 = 0;
      v14 = (int *)&unk_1404121B8;
      v15 = 5;
      while ( 1 )
      {
        v9 = (char *)v14;
        if ( !v14[1] )
          break;
        if ( a3 == *v14 )
        {
          v13 = PopDiagAreIdenticalWakeSources(a3, (_BYTE *)a4, (_QWORD *)v14 + 4);
          if ( v13 )
            goto LABEL_26;
        }
        ++v15;
        v14 += 84;
        if ( v15 >= 0x45 )
          goto LABEL_23;
      }
      *v14 = a3;
      v13 = 1;
      *((_OWORD *)v14 + 2) = *(_OWORD *)a4;
      *((_OWORD *)v14 + 3) = *(_OWORD *)(a4 + 16);
      *((_OWORD *)v14 + 4) = *(_OWORD *)(a4 + 32);
      *((_OWORD *)v14 + 5) = *(_OWORD *)(a4 + 48);
      *((_OWORD *)v14 + 6) = *(_OWORD *)(a4 + 64);
      *((_OWORD *)v14 + 7) = *(_OWORD *)(a4 + 80);
      *((_OWORD *)v14 + 8) = *(_OWORD *)(a4 + 96);
      *((_OWORD *)v14 + 9) = *(_OWORD *)(a4 + 112);
      *((_QWORD *)v14 + 20) = *(_QWORD *)(a4 + 128);
LABEL_23:
      v16 = (char *)&unk_140412068;
      if ( v13 )
        v16 = v9;
      v9 = v16;
    }
    else
    {
      v9 = (char *)&unk_140411B28 + 336 * a3;
    }
LABEL_26:
    if ( v9 )
      v8 = v9;
    ++v8[1];
    *((_QWORD *)v8 + 3) += a2;
    if ( a2 < *((_QWORD *)v8 + 1) )
      *((_QWORD *)v8 + 1) = a2;
    if ( a2 > *((_QWORD *)v8 + 2) )
      *((_QWORD *)v8 + 2) = a2;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    return KeAddProcessorAffinityEx((_WORD *)v8 + 84, CurrentProcessorNumber);
  }
  return result;
}
