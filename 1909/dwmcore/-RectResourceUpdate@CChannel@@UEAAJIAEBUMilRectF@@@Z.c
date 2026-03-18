/*
 * XREFs of ?RectResourceUpdate@CChannel@@UEAAJIAEBUMilRectF@@@Z @ 0x18001E760
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800556C8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800569C4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::RectResourceUpdate(CChannel *this, unsigned int a2, const struct MilRectF *a3)
{
  __int128 v6; // xmm0
  unsigned int v7; // ebx
  _DWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  char *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 138LL);
  v6 = *(_OWORD *)a3;
  v9[0] = 409;
  v9[1] = a2;
  v10 = v6;
  v7 = CChannel::SendCommand(this, v9, 0x18u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v7;
}
