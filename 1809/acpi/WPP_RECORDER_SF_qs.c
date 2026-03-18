/*
 * XREFs of WPP_RECORDER_SF_qs @ 0x1C002E428
 * Callers:
 *     OSNotifyDeviceEnum @ 0x1C002E2C4 (OSNotifyDeviceEnum.c)
 *     ACPIBuildIssueNotifyInvalidateRelationsForDockDevice @ 0x1C0049EC0 (ACPIBuildIssueNotifyInvalidateRelationsForDockDevice.c)
 *     OSNotifyDeviceCheck @ 0x1C0056C14 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C0056D8C (OSNotifyDeviceEject.c)
 *     AcpiHandleInternalNotify @ 0x1C0059110 (AcpiHandleInternalNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qs(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7)
{
  __int64 v9; // rdi
  unsigned __int64 v11; // rsi
  __int64 v13; // rbx
  int v14; // eax
  __int64 v16; // rdx
  const char *v17; // rcx
  int v18; // [rsp+20h] [rbp-58h]

  v9 = -1LL;
  v11 = (unsigned __int64)a3 >> 16;
  v13 = (__int64)a7;
  v14 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v14, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v11 + 1) >= a2 )
  {
    if ( a7 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a7[v16] );
    }
    v17 = a7;
    if ( !a7 )
      v17 = "NULL";
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v11), 43LL, a5, a4, &a6, 8LL, v17);
  }
  if ( v13 )
  {
    do
      ++v9;
    while ( *(_BYTE *)(v13 + v9) );
  }
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v18, &a6);
}
