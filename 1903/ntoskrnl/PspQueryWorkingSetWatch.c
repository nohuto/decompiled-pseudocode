/*
 * XREFs of PspQueryWorkingSetWatch @ 0x1408C6BF4
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExIsRestrictedCaller @ 0x1406D2468 (ExIsRestrictedCaller.c)
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
  PVOID v9; // rcx
  __int64 v10; // rdi
  int v11; // esi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v13; // r15
  signed __int32 v14; // eax
  unsigned int v15; // r13d
  unsigned int v16; // r9d
  __int64 i; // r8
  __int64 v18; // rdx
  __int64 j; // rdx
  int v20; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+68h] [rbp-40h] BYREF
  signed __int32 v22; // [rsp+70h] [rbp-38h]
  __int64 v23; // [rsp+78h] [rbp-30h]

  if ( a2 == 42 )
  {
    if ( (a4 & 0x1F) != 0 )
      return 3221225476LL;
    v20 = 32;
  }
  else
  {
    v20 = 16;
  }
  if ( ExIsRestrictedCaller(a6) )
    return 3221225506LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             1024,
             (__int64)PsProcessType,
             a6,
             0x79517350u,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v9 = Object;
    v10 = *((_QWORD *)Object + 123);
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
    v22 = v14;
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
        v16 = v20 * (v15 + 1);
        if ( a4 >= v16 )
        {
          _m_prefetchw((const void *)(v10 + 8));
          v13 = *(_QWORD *)(v10 + 8);
          if ( a2 == 42 )
          {
            v23 = a3;
            for ( i = 0LL; (unsigned int)i < v15; i = (unsigned int)(i + 1) )
            {
              v18 = 32LL * (unsigned int)i;
              *(_OWORD *)(v18 + a3) = *(_OWORD *)(v10 + 24 * i + 40);
              *(_OWORD *)(v18 + a3 + 16) = *(unsigned __int64 *)(v10 + 24 * i + 56);
            }
            a3 += 32LL * (unsigned int)i;
            *(_QWORD *)(a3 + 16) = 0LL;
            *(_QWORD *)(a3 + 24) = 0LL;
          }
          else
          {
            for ( j = 0LL; (unsigned int)j < v15; j = (unsigned int)(j + 1) )
            {
              *(_OWORD *)a3 = *(_OWORD *)(v10 + 24 * j + 40);
              a3 += 16LL;
            }
          }
          *(_QWORD *)a3 = 0LL;
          *(_QWORD *)(a3 + 8) = v13;
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
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v9 = Object;
    goto LABEL_17;
  }
  return result;
}
