/*
 * XREFs of IopLiveDumpProcessCorralStateChange @ 0x14057A558
 * Callers:
 *     IopLiveDumpCorralDpc @ 0x140579690 (IopLiveDumpCorralDpc.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x140579D24 (IopLiveDumpInitiateCorralStateChange.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeResumeClockTimerSafe @ 0x14028EAF4 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x14028EB90 (KeSuspendClockTimerSafe.c)
 *     IopLiveDumpBufferDumpData @ 0x140578FC0 (IopLiveDumpBufferDumpData.c)
 */

void __fastcall IopLiveDumpProcessCorralStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int16 v10; // [rsp+20h] [rbp-8h]
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  while ( *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 4) )
    KeYieldProcessorEx(&v11, a2, a3);
  v5 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 4) = v5;
  v6 = v5 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 && *(_BYTE *)(a2 + 8) )
            _enable();
        }
        else
        {
          KeResumeClockTimerSafe();
        }
      }
      else
      {
        IopLiveDumpBufferDumpData((__int64 *)a1, (unsigned int *)a2);
      }
    }
    else
    {
      KeSuspendClockTimerSafe();
    }
  }
  else
  {
    _disable();
    *(_BYTE *)(a2 + 8) = (v10 & 0x200) != 0;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
