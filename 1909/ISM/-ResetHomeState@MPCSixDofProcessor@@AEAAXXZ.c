/*
 * XREFs of ?ResetHomeState@MPCSixDofProcessor@@AEAAXXZ @ 0x180131908
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036AC0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCSixDofProcessor::ResetHomeState(MPCSixDofProcessor *this)
{
  *((_DWORD *)this + 1293) = 0;
  *((_WORD *)this + 2588) = 0;
  *((_BYTE *)this + 5584) = 0;
  *(_QWORD *)((char *)this + 5236) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 1311) = 0;
  *((_QWORD *)this + 700) = *((_QWORD *)this + 699);
}
