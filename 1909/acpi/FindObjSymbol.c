/*
 * XREFs of FindObjSymbol @ 0x1C0066260
 * Callers:
 *     DebugExpr @ 0x1C0065984 (DebugExpr.c)
 * Callees:
 *     <none>
 */

char __fastcall FindObjSymbol(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  char v4; // di
  KIRQL v7; // al
  _QWORD *v8; // r9
  KIRQL v9; // cl
  __int64 v10; // rdx
  char v11; // al

  v4 = 0;
  v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v8 = P;
  v9 = v7;
  while ( v8 )
  {
    if ( a1 <= v8[2] )
    {
      if ( a1 < v8[2] && *v8 )
        v8 = (_QWORD *)*v8;
      if ( a1 >= v8[2] )
      {
        v10 = v8[3];
        v11 = gdwfAMLI;
        *a2 = v10;
        if ( (v11 & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 112));
        v4 = 1;
        *a3 = a1 - *((_DWORD *)v8 + 4);
      }
      break;
    }
    v8 = (_QWORD *)v8[1];
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v9);
  return v4;
}
