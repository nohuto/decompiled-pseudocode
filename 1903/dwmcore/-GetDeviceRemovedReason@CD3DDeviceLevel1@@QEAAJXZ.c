/*
 * XREFs of ?GetDeviceRemovedReason@CD3DDeviceLevel1@@QEAAJXZ @ 0x18015D580
 * Callers:
 *     ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDeviceLevel1@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1800EBF00 (-GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDeviceLevel1@@AEBU_LUID@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetDeviceRemovedReason(CD3DDeviceLevel1 *this)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 79) + 312LL))(*((_QWORD *)this + 79));
  if ( (int)result < 0 && *((int *)this + 220) >= 0 )
    *((_DWORD *)this + 220) = -2003304307;
  return result;
}
