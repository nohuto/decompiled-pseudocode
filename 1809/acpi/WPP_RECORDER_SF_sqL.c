/*
 * XREFs of WPP_RECORDER_SF_sqL @ 0x1C0029970
 * Callers:
 *     ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C002982C (ACPIIsPhase3ListEmptyOfUnblockedItems.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C009F018 (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sqL(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        ...)
{
  const char *v7; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  const char *v17; // rcx
  int v18; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va, a6);
  v7 = a6;
  v11 = (unsigned __int64)a3 >> 16;
  v12 = -1LL;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v11 + 1) >= a2 )
  {
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = "NULL";
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v11), 43LL, a5, a4, v17, v16, va);
  }
  if ( a6 )
  {
    do
      ++v12;
    while ( a6[v12] );
  }
  if ( !a6 )
    v7 = "NULL";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v18, v7);
}
