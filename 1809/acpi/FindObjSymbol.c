/*
 * XREFs of FindObjSymbol @ 0x1C0064220
 * Callers:
 *     DebugExpr @ 0x1C006393C (DebugExpr.c)
 * Callees:
 *     <none>
 */

char __fastcall FindObjSymbol(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  char v4; // di
  KIRQL v7; // al
  _QWORD *v8; // r9
  KIRQL v9; // cl
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  char v13; // al

  v4 = 0;
  v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v8 = P;
  v9 = v7;
  while ( v8 )
  {
    v10 = v8[2];
    if ( a1 <= v10 )
    {
      if ( a1 < v10 && *v8 )
        v8 = (_QWORD *)*v8;
      v11 = v8[2];
      if ( a1 >= v11 )
      {
        v12 = v8[3];
        v13 = gdwfAMLI;
        *a2 = v12;
        if ( (v13 & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 112));
          LODWORD(v11) = *((_DWORD *)v8 + 4);
        }
        v4 = 1;
        *a3 = a1 - v11;
      }
      break;
    }
    v8 = (_QWORD *)v8[1];
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v9);
  return v4;
}
