/*
 * XREFs of InternalOpRegionHandler @ 0x1C0026760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001B40 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InternalOpRegionHandler(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 (__fastcall *v8)(_QWORD, __int64, __int64, _QWORD, __int64, _QWORD, __int64, __int64); // rax
  unsigned int v9; // ebx
  __int64 v11; // [rsp+28h] [rbp-30h]

  if ( !a6 )
    return 3221225473LL;
  v8 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, _QWORD, __int64, __int64))(a6 + 16);
  if ( !v8 )
    return 3221225473LL;
  v9 = v8(a1, a2, a3, a4, a5, *(_QWORD *)(a6 + 24), a7, a8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = v9;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      3u,
      0xCu,
      (__int64)&WPP_5e58a32fdfb43147ae9192110f2623ca_Traceguids,
      v11);
  }
  return v9;
}
