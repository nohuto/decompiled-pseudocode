/*
 * XREFs of PspQueryWorkingSetWatch @ 0x140889F38
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     ExIsRestrictedCaller @ 0x1406AEC8C (ExIsRestrictedCaller.c)
 */

__int64 __fastcall PspQueryWorkingSetWatch(
        ULONG_PTR BugCheckParameter1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char a6)
{
  __int64 result; // rax
  int v8; // r13d
  PVOID v9; // rcx
  __int64 v10; // rdi
  int v11; // esi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v13; // r14
  signed __int32 v14; // eax
  unsigned int v15; // r15d
  unsigned int v16; // r9d
  __int64 i; // rcx
  __int64 v18; // rdx
  __int64 j; // r8
  PVOID Object[6]; // [rsp+68h] [rbp-30h] BYREF

  if ( a2 == 42 )
  {
    if ( (a4 & 0x1F) != 0 )
      return 3221225476LL;
    v8 = 32;
  }
  else
  {
    v8 = 16;
  }
  if ( ExIsRestrictedCaller(a6) )
    return 3221225506LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             1024,
             (__int64)PsProcessType,
             a6,
             0x79517350u,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v9 = Object[0];
    v10 = *((_QWORD *)Object[0] + 122);
    if ( !v10 )
    {
      v11 = -1073741823;
LABEL_17:
      ObfDereferenceObjectWithTag(v9, 0x79517350u);
      return (unsigned int)v11;
    }
    CurrentThread = KeGetCurrentThread();
    v11 = 0;
    v13 = 0LL;
    --CurrentThread->KernelApcDisable;
    _m_prefetchw((const void *)v10);
    v14 = _InterlockedOr((volatile signed __int32 *)v10, 1u);
    if ( (v14 & 1) != 0 )
    {
      v11 = -2147483622;
    }
    else
    {
      v15 = (unsigned __int16)v14 >> 1;
      if ( (unsigned __int16)v14 >> 1 )
      {
        if ( (v14 & 0x7FFF0000) != 0 )
          KeWaitForGate(v10 + 16, 0);
        v16 = v8 * (v15 + 1);
        if ( a4 >= v16 )
        {
          _m_prefetchw((const void *)(v10 + 8));
          v13 = *(_QWORD *)(v10 + 8);
          if ( a2 == 42 )
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              v18 = a3 + 32LL * (unsigned int)i;
              if ( (unsigned int)i >= v15 )
                break;
              *(_OWORD *)v18 = *(_OWORD *)(v10 + 24 * i + 40);
              *(_OWORD *)(v18 + 16) = *(unsigned __int64 *)(v10 + 24 * i + 56);
            }
            *(_QWORD *)(v18 + 16) = 0LL;
            *(_QWORD *)(v18 + 24) = 0LL;
          }
          else
          {
            v18 = a3;
            for ( j = 0LL; (unsigned int)j < v15; j = (unsigned int)(j + 1) )
            {
              *(_OWORD *)v18 = *(_OWORD *)(v10 + 24 * j + 40);
              v18 += 16LL;
            }
          }
          *(_QWORD *)v18 = 0LL;
          *(_QWORD *)(v18 + 8) = v13;
          if ( a5 )
            *a5 = v16;
        }
        else
        {
          v11 = -1073741789;
          if ( a5 )
            *a5 = v16;
        }
        if ( v11 >= 0 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 8), -v13);
          *(_DWORD *)v10 = 0;
          goto LABEL_16;
        }
      }
      else
      {
        v11 = -2147483622;
      }
      _interlockedbittestandreset((volatile signed __int32 *)v10, 0);
    }
LABEL_16:
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    v9 = Object[0];
    goto LABEL_17;
  }
  return result;
}
