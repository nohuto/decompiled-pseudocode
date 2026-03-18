/*
 * XREFs of WPP_RECORDER_SF_sqqD @ 0x1C005A200
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1C005985C (AcpiSetupNativeMethodContext.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00AD8B0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sqqD(
        __int64 a1,
        _DWORD a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        ...)
{
  const char *v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  const char *v15; // rcx
  int v17; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  v11 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v12, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v11 + 1) >= 2u )
  {
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a6;
    if ( !a6 )
      v15 = "NULL";
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v11),
      43LL,
      &WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
      a4,
      v15,
      v14,
      va);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, 2LL, a3, &WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids, v17, v6);
}
