/*
 * XREFs of PpmUpdateIdleVeto @ 0x1402F06A0
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x1402F0900 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402F0B40 (PpmUpdateProcessorIdleVeto.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14009E740 (RtlGetInterruptTimePrecise.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1402FAE28 (PopUpdateNonAttributedCpuTimeReference.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmUpdateIdleVeto(char a1, ULONG a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdx
  LARGE_INTEGER *v9; // rsi
  LARGE_INTEGER *v10; // rdi
  LONGLONG v12; // rax
  LARGE_INTEGER **v13; // rcx
  LARGE_INTEGER v14; // rcx
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER *PoolWithTag; // rax
  LARGE_INTEGER *v17; // rdi
  LONG HighPart; // eax
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v20; // rcx
  LARGE_INTEGER **QuadPart; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  *a4 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a3 + 32);
  v9 = (LARGE_INTEGER *)(a3 + 8);
  v10 = *(LARGE_INTEGER **)(a3 + 8);
  if ( a1 )
  {
    while ( v10 != v9 )
    {
      if ( v10[2].LowPart == a2 )
      {
        HighPart = v10[2].HighPart;
        if ( HighPart == -1 )
          return (unsigned int)-1073741675;
        else
          v10[2].HighPart = HighPart + 1;
        return v4;
      }
      v10 = (LARGE_INTEGER *)v10->QuadPart;
    }
    if ( v8 )
    {
      if ( a2 > *(_DWORD *)(a3 + 28) )
        return (unsigned int)-1073741811;
      v17 = (LARGE_INTEGER *)(v8 + ((unsigned __int64)(a2 - 1) << 6));
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      v17[4] = InterruptTimePrecise;
      if ( !*(_BYTE *)(a3 + 24) )
        v17[6] = InterruptTimePrecise;
      if ( *(_BYTE *)(a3 + 25) )
      {
        LOBYTE(v20.LowPart) = 1;
        ((void (__fastcall *)(_QWORD))PopUpdateNonAttributedCpuTimeReference)((LARGE_INTEGER)v20.QuadPart);
      }
    }
    else
    {
      PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x694D5050u);
      v17 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, 0x40uLL);
    }
    v17[2].LowPart = a2;
    v17[2].HighPart = 1;
    if ( (LARGE_INTEGER *)v9->QuadPart == v9 )
    {
      _InterlockedOr((volatile signed __int32 *)a3, 1u);
      *a4 = 1;
    }
    QuadPart = (LARGE_INTEGER **)v9[1].QuadPart;
    if ( *QuadPart == v9 )
    {
      v17->QuadPart = (LONGLONG)v9;
      v17[1].QuadPart = (LONGLONG)QuadPart;
      *QuadPart = v17;
      v9[1].QuadPart = (LONGLONG)v17;
      return v4;
    }
    goto LABEL_38;
  }
  while ( 1 )
  {
    if ( v10 == v9 )
      return (unsigned int)-1073741811;
    if ( v10[2].LowPart == a2 )
      break;
    v10 = (LARGE_INTEGER *)v10->QuadPart;
  }
  if ( v10[2].HighPart-- == 1 )
  {
    v12 = v10->QuadPart;
    if ( *(LARGE_INTEGER **)(v10->QuadPart + 8) == v10 )
    {
      v13 = (LARGE_INTEGER **)v10[1].QuadPart;
      if ( *v13 == v10 )
      {
        *v13 = (LARGE_INTEGER *)v12;
        *(_QWORD *)(v12 + 8) = v13;
        if ( v8 )
        {
          v10->QuadPart = 0LL;
          v10[1].QuadPart = 0LL;
          v14 = RtlGetInterruptTimePrecise(&PerformanceCounter);
          v10[5].QuadPart += v14.QuadPart - v10[4].QuadPart;
          v15 = v10[6];
          v10[4].QuadPart = 0LL;
          if ( v15.QuadPart )
          {
            v10[6].QuadPart = 0LL;
            v10[7].QuadPart += v14.QuadPart - v15.QuadPart;
          }
          if ( *(_BYTE *)(a3 + 25) )
            PopUpdateNonAttributedCpuTimeReference(0LL);
        }
        else
        {
          ExFreePoolWithTag(v10, 0x694D5050u);
        }
        if ( (LARGE_INTEGER *)v9->QuadPart == v9 )
        {
          _InterlockedAnd((volatile signed __int32 *)a3, 0xFFFFFFFE);
          *a4 = 1;
        }
        return v4;
      }
    }
LABEL_38:
    __fastfail(3u);
  }
  return v4;
}
