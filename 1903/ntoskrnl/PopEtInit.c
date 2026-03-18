/*
 * XREFs of PopEtInit @ 0x140A1BC38
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PsGetNextProcess @ 0x140635FC0 (PsGetNextProcess.c)
 *     PoEnergyContextStart @ 0x140693CC4 (PoEnergyContextStart.c)
 *     PoEnergyContextInitialize @ 0x1406E0CE4 (PoEnergyContextInitialize.c)
 *     ObCreateObjectType @ 0x140759A60 (ObCreateObjectType.c)
 *     PopEtInitializeBuiltinAppId @ 0x140782ABC (PopEtInitializeBuiltinAppId.c)
 *     RtlInternTableInitialize @ 0x140782B20 (RtlInternTableInitialize.c)
 */

__int64 PopEtInit()
{
  unsigned int v0; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r11
  __int64 v5; // rdi
  __int64 v6; // r10
  unsigned __int64 v7; // rax
  _QWORD *i; // rcx
  ULONG_PTR NextProcess; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v15[16]; // [rsp+30h] [rbp-29h] BYREF

  v0 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( PopEnergyEstimationEnabled )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3B8uLL, 0x54456F50u);
    PopEtGlobals = (__int64)PoolWithTag;
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x3B8uLL);
      v2[3] = 0LL;
      v2[2] = 0LL;
      v2[1] = v2;
      *v2 = v2;
      v2[6] = 0LL;
      v2[5] = 0LL;
      v2[11] = PopEtInternerAllocate;
      v2[12] = PopEtInternerFree;
      v2[13] = PopEtInternerLock;
      v2[14] = PopEtInternerUnlock;
      v2[15] = PopEtInternerEntryInitialize;
      RtlInternTableInitialize((__int64)(v2 + 7), (__int64)(v2 + 11));
      PoEnergyContextInitialize(v2 + 16);
      *((_QWORD *)PsIdleProcess + 237) = v3;
      PopEtInitializeBuiltinAppId((__int64)(v2 + 96), (__int64)L"Default");
      PopEtInitializeBuiltinAppId((__int64)(v2 + 106), (__int64)L"Overflow");
      PopEtInitializeBuiltinAppId((__int64)(v2 + 86), (__int64)L"IsrDpc");
      v5 = (__int64)(v2 + 76);
      *(_QWORD *)(*(_QWORD *)(v4 + 1896) + 448LL) = v6;
      PopEtInitializeBuiltinAppId(v5, (__int64)L"System");
      v7 = PsInitialSystemProcess[2].ActiveProcessors.Bitmap[18];
      if ( v7 )
        *(_QWORD *)(v7 + 448) = v5;
      for ( i = 0LL; ; i = v10 )
      {
        NextProcess = PsGetNextProcess(i);
        v10 = (_QWORD *)NextProcess;
        if ( !NextProcess )
          break;
        v11 = *(_QWORD *)(NextProcess + 1896);
        if ( v11 )
        {
          if ( !*(_QWORD *)(v11 + 448) )
          {
            *(_QWORD *)(v11 + 448) = PopEtGlobals + 768;
            PoEnergyContextStart(NextProcess);
          }
        }
      }
      RtlInitUnicodeString(&DestinationString, L"EnergyTracker");
      memset(v15, 0, 0x78uLL);
      BYTE2(v15[0]) |= 4u;
      v15[8] = PopEtEnergyTrackerClose;
      LOWORD(v15[0]) = 120;
      v15[9] = PopEtEnergyTrackerDelete;
      HIDWORD(v15[4]) = 1;
      LODWORD(v15[5]) = 640;
      LODWORD(v15[1]) = 402;
      HIDWORD(v15[3]) = 2031617;
      v12 = ObCreateObjectType(&DestinationString, (__int64)v15, 0LL, PopEtGlobals + 32);
      if ( v12 >= 0 )
        return 0;
      return (unsigned int)v12;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v0;
}
