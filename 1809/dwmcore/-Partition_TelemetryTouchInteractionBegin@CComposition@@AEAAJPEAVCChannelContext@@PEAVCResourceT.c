/*
 * XREFs of ?Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN@@PEBXI@Z @ 0x18001F128
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?VerifyInfo@TOUCH_TELEMETRY_BEGIN_PACKED_INFO@@SA_NPEBX_K@Z @ 0x18001F218 (-VerifyInfo@TOUCH_TELEMETRY_BEGIN_PACKED_INFO@@SA_NPEBX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x18014B36C (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryTouchInteractionBegin(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  void *v7; // rax
  void *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  char *v11; // rdx

  if ( a6 - 32 > 0xA8 || !TOUCH_TELEMETRY_BEGIN_PACKED_INFO::VerifyInfo(a5, a6) || !a5 )
    CComposition::FailFastOnMalformedPacket(this, 4160689699LL, 0LL, a4);
  v7 = operator new(saturated_mul(a5[13] + 1LL, 2uLL));
  v8 = v7;
  v9 = 0LL;
  if ( v7 )
  {
    v10 = a5[13];
    v9 = 2 * v10 + 2;
    if ( a5[12] )
      v11 = (char *)a5 + a5[12];
    else
      v11 = 0LL;
    memcpy_0(v7, v11, 2 * v10 + 2);
  }
  (*(void (__fastcall **)(_QWORD, unsigned __int16 *, __int64, void *))(**((_QWORD **)this + 67) + 8LL))(
    *((_QWORD *)this + 67),
    a5,
    v9,
    v8);
  if ( v8 )
    WPF::ProcessHeapImpl::Free(v8);
  return 0LL;
}
