/*
 * XREFs of AddObjSymbol @ 0x1C0026410
 * Callers:
 *     Method @ 0x1C00262E0 (Method.c)
 * Callees:
 *     memset @ 0x1C00310C0 (memset.c)
 */

void __fastcall AddObjSymbol(unsigned __int64 a1, __int64 a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rsi
  KIRQL v6; // al
  _QWORD *v7; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x536C6D41u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    v5[2] = a1;
    v5[3] = a2;
    v6 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v7 = P;
    if ( P )
    {
      if ( a1 >= *((_QWORD *)P + 2) )
      {
        if ( P )
        {
          while ( a1 >= v7[2] )
          {
            if ( !v7[1] )
            {
              *v5 = v7;
              v7[1] = v5;
              goto LABEL_9;
            }
            v7 = (_QWORD *)v7[1];
          }
          v5[1] = v7;
          *v5 = *v7;
          *(_QWORD *)(*v7 + 8LL) = v5;
          *v7 = v5;
        }
        goto LABEL_9;
      }
      v5[1] = P;
      *(_QWORD *)P = v5;
    }
    P = v5;
LABEL_9:
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v6);
  }
}
