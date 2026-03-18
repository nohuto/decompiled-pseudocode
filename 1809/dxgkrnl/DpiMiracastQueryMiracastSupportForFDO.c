/*
 * XREFs of DpiMiracastQueryMiracastSupportForFDO @ 0x1C0141900
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01416F0 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C001DD60 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C001DDD0 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001DE00 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1C001DF08 (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001DFE4 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DpiMiracastQueryMiracastSupportForFDO(struct _IO_REMOVE_LOCK *a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  char v7; // bp
  DXGADAPTER *v8; // rcx
  int DriverVersion; // eax
  _WORD *v10; // r8
  int v11; // r9d
  char v12; // cl
  __int64 v14; // rax
  __int64 v15; // rax
  struct _IO_REMOVE_LOCK *v16; // [rsp+30h] [rbp-28h] BYREF
  char v17; // [rsp+38h] [rbp-20h]
  _BYTE v18[24]; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0;
  v16 = a1;
  *(_DWORD *)a2 = 0;
  v17 = 0;
  AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v18, (struct _COMMON_PNP_CONTEXT *)a1);
  if ( AUTO_REMOVE_LOCK::Acquire(&v16) < 0 )
  {
    v2 = -1073741637;
  }
  else
  {
    AUTO_PNPPOWER_LOCK::Acquire((AUTO_PNPPOWER_LOCK *)v18);
    Flink = a1[118].Common.RemoveEvent.Header.WaitListHead.Flink;
    if ( Flink )
    {
      Blink = Flink[157].Blink;
      if ( Blink )
      {
        v7 = BYTE5(Blink[8].Flink);
        if ( !Flink[158].Flink )
        {
          v15 = WdLogNewEntry5_WdError(Flink);
          *(_QWORD *)(v15 + 24) = 1125LL;
          WdLogEvent5_WdError(v15);
          Flink = a1[118].Common.RemoveEvent.Header.WaitListHead.Flink;
        }
        if ( (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)Flink) >= 2000 && v7 )
          *(_BYTE *)a2 = 1;
        DriverVersion = DXGADAPTER::GetDriverVersion(v8);
        if ( DriverVersion >= v11 && *(_DWORD *)&a1[92].Common.Removed >= 2u && v10 && *v10 && v7 )
          *(_BYTE *)(a2 + 1) = 1;
        if ( LODWORD(a1[98].Common.RemoveEvent.Header.WaitListHead.Flink) != -1
          && LOWORD(a1[149].Common.RemoveEvent.Header.WaitListHead.Blink) )
        {
          v12 = a1[98].Common.RemoveEvent.Header.SignalState & 1;
          *(_BYTE *)(a2 + 2) = 1;
          *(_BYTE *)(a2 + 3) = v12;
        }
      }
      else
      {
        v14 = WdLogNewEntry5_WdError(Flink);
        *(_QWORD *)(v14 + 24) = 1102LL;
        WdLogEvent5_WdError(v14);
        v2 = -1073741811;
      }
    }
  }
  AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v18);
  AUTO_REMOVE_LOCK::Release((PVOID *)&v16);
  return v2;
}
