/*
 * XREFs of ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001B560
 * Callers:
 *     ??1DispBrokerClientReference@@QEAA@XZ @ 0x1C003FA74 (--1DispBrokerClientReference@@QEAA@XZ.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C00C649C (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     _lambda_d7c4861ef0734605370a98f05df27570_::operator() @ 0x1C00C8A9C (_lambda_d7c4861ef0734605370a98f05df27570_--operator().c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C014520C (--1DXGSESSIONDATA@@QEAA@XZ.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1C0234A30 (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 */

void __fastcall DispBrokerClientReference::Assign(HANDLE **this, HANDLE *a2)
{
  HANDLE *v2; // rbx

  v2 = *this;
  if ( *this != a2 )
  {
    if ( v2 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
      {
        ZwAlpcDisconnectPort(v2[1], 0LL);
        ZwClose(v2[1]);
        operator delete(v2);
      }
      *this = 0LL;
    }
    if ( a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a2);
      *this = a2;
    }
  }
}
