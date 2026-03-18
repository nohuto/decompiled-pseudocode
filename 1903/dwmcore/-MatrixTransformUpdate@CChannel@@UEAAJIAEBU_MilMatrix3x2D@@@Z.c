/*
 * XREFs of ?MatrixTransformUpdate@CChannel@@UEAAJIAEBU_MilMatrix3x2D@@@Z @ 0x18003E610
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800405B8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800418B4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::MatrixTransformUpdate(CChannel *this, unsigned int a2, const struct _MilMatrix3x2D *a3)
{
  __int64 v6; // rax
  float *v7; // rcx
  double v8; // xmm0_8
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+24h] [rbp-24h] BYREF
  int v13; // [rsp+3Ch] [rbp-Ch]
  char *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 104LL);
  v6 = 0LL;
  v11 = 565;
  v7 = (float *)v12 + 1;
  v12[0] = a2;
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0;
  do
  {
    v8 = *(&a3->S_11 + v6++);
    *v7++ = v8;
  }
  while ( v6 < 6 );
  v9 = CChannel::SendCommand(this, &v11, 0x20u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return v9;
}
