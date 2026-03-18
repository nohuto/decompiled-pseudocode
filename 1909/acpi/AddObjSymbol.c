/*
 * XREFs of AddObjSymbol @ 0x1C0014B70
 * Callers:
 *     Method @ 0x1C0014A40 (Method.c)
 * Callees:
 *     <none>
 */

void __fastcall AddObjSymbol(unsigned __int64 a1, __int64 a2)
{
  _QWORD *PoolWithTag; // rsi
  KIRQL v5; // al
  _QWORD *v6; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x536C6D41u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = a1;
    PoolWithTag[3] = a2;
    v5 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v6 = P;
    if ( P )
    {
      if ( a1 >= *((_QWORD *)P + 2) )
      {
        if ( P )
        {
          while ( a1 >= v6[2] )
          {
            if ( !v6[1] )
            {
              *PoolWithTag = v6;
              v6[1] = PoolWithTag;
              goto LABEL_9;
            }
            v6 = (_QWORD *)v6[1];
          }
          PoolWithTag[1] = v6;
          *PoolWithTag = *v6;
          *(_QWORD *)(*v6 + 8LL) = PoolWithTag;
          *v6 = PoolWithTag;
        }
        goto LABEL_9;
      }
      PoolWithTag[1] = P;
      *(_QWORD *)P = PoolWithTag;
    }
    P = PoolWithTag;
LABEL_9:
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v5);
  }
}
