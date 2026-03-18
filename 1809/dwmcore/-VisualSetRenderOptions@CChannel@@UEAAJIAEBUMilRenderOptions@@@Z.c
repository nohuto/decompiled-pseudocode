/*
 * XREFs of ?VisualSetRenderOptions@CChannel@@UEAAJIAEBUMilRenderOptions@@@Z @ 0x18009C8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CChannel::VisualSetRenderOptions(CChannel *this, int a2, const struct MilRenderOptions *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  unsigned int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v11[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v10 = 429LL;
  memset_0((char *)v11 + 4, 0, 0x24uLL);
  v6 = *(_OWORD *)a3;
  v7 = *((_OWORD *)a3 + 1);
  HIDWORD(v10) = a2;
  v11[0] = v6;
  v12 = *((_QWORD *)a3 + 4);
  v11[1] = v7;
  v8 = CChannel::SendCommand(this, &v10, 0x30u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v8;
}
