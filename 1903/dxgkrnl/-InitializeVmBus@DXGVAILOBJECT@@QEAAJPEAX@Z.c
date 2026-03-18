/*
 * XREFs of ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C0290CB8
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C025E5E0 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0049880 (-SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02900BC (-CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::InitializeVmBus(DXGVAILOBJECT *this, void *a2, const struct _GUID *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  bool v13; // zf
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF
  struct _GUID v16; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)&v16.Data1 = 0LL;
  v4 = CreateVmBusChannel(a2, &v16, a3);
  v8 = v4;
  if ( v4 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DXGVAILOBJECT *)((char *)this + 40), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    DXGVAILOBJECT::SetVmBusChannel(this, *(struct DXGVMBUSCHANNEL **)&v16.Data1);
    CurrentProcess = PsGetCurrentProcess(v11, v10);
    v13 = v15[8] == 0;
    *((_QWORD *)this + 12) = CurrentProcess;
    if ( !v13 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdWarning(v9);
  }
  return (unsigned int)v8;
}
