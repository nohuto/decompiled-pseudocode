/*
 * XREFs of ?CaptureControllerSetVisualTree@CChannel@@UEAAJII_N@Z @ 0x180157960
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800405B8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180040B8C (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800418B4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::CaptureControllerSetVisualTree(
        CChannel *this,
        unsigned int a2,
        unsigned int a3,
        __int8 a4)
{
  __m128i si128; // [rsp+20h] [rbp-18h] BYREF

  CChannel::CheckHandle((__int64)this, a2, 16);
  CChannel::CheckOptionalHandle((__int64)this, a3, 48LL);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(__int64 *)((char *)si128.m128i_i64 + 4) = __PAIR64__(a3, a2);
  si128.m128i_i8[12] = a4;
  return CChannel::SendCommand(this, &si128, 0x10u);
}
