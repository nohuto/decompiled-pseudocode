/*
 * XREFs of WPP_IFR_SF_qLsqd @ 0x1C0079D24
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005970 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007060 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007F40 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0009B60 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0011ED0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00795C4 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0004FD0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C003BC00 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qLsqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *_a3,
        unsigned int _a4,
        const char *_a5,
        const void *globals_0,
        int level_0)
{
  const char *v10; // rdi
  __int64 v11; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  const char *v17; // rax
  __int64 v18; // rbx

  v10 = _a5;
  v11 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
  {
    if ( _a5 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( _a5[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = _a5;
    if ( !_a5 )
      v17 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxIoQueue_cpp_Traceguids,
      _a1,
      &_a3,
      8LL,
      &_a4,
      4LL,
      v17,
      v16,
      &globals_0,
      8LL,
      &level_0,
      4LL,
      0LL);
  }
  if ( v10 )
  {
    do
      ++v11;
    while ( v10[v11] );
    v18 = v11 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  FxIFR(
    globals,
    level,
    0xDu,
    WPP_FxIoQueue_cpp_Traceguids,
    _a1,
    &_a3,
    8LL,
    &_a4,
    4LL,
    v10,
    v18,
    &globals_0,
    8LL,
    &level_0,
    4LL,
    0LL);
}
