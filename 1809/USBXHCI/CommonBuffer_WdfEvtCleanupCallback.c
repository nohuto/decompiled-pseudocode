/*
 * XREFs of CommonBuffer_WdfEvtCleanupCallback @ 0x1C000AD00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 */

__int64 __fastcall CommonBuffer_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned int v4; // ebx
  struct _PCW_INSTANCE *v5; // rcx
  unsigned int *v6; // rdi
  __int64 result; // rax
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F270);
  v3 = v2;
  v4 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_i(
      *(_QWORD *)(*(_QWORD *)v2 + 72LL),
      5u,
      8u,
      0xDu,
      (__int64)&WPP_69dd49c7a64d37eeaa5b7723d8723313_Traceguids,
      a1);
  v5 = *(struct _PCW_INSTANCE **)(v3 + 16);
  if ( v5 )
    PcwCloseInstance(v5);
  v6 = (unsigned int *)(v3 + 144);
  do
  {
    result = *v6;
    if ( (_DWORD)result != v6[1] )
    {
      LODWORD(v10) = v6[1];
      LODWORD(v9) = *v6;
      LODWORD(v8) = v4;
      result = WPP_RECORDER_SF_ddL(
                 *(_QWORD *)(*(_QWORD *)(v3 + 96) + 72LL),
                 3u,
                 8u,
                 0xAu,
                 (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
                 v8,
                 v9,
                 v10);
    }
    ++v4;
    v6 += 16;
  }
  while ( v4 < 2 );
  return result;
}
