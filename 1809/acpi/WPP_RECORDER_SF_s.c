/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0002740
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C000E844 (LinkNodeCrackPrt.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002D678 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008D3EC (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00AE314 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00B9CA4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_s(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6)
{
  __int64 v8; // rdi
  unsigned __int64 v10; // rsi
  const char *v12; // rbx
  int v13; // eax
  __int64 v14; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  const char *v18; // rcx
  int v19; // [rsp+20h] [rbp-48h]

  v8 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = a6;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= a2 )
  {
    if ( a6 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a6[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a6;
    if ( !a6 )
      v18 = "NULL";
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10), 43LL, a5, a4, v18, v17, 0LL);
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v14 = v8 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !a6 )
    v12 = "NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v19, v12, v14, 0LL);
}
