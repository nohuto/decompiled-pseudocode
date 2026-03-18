/*
 * XREFs of ?RectangleGeometrySetRectangle@CChannel@@UEAAJIMMMMMMMMMMMM_N@Z @ 0x180044550
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800405B8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800418B4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CChannel::RectangleGeometrySetRectangle(
        CChannel *this,
        unsigned int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        bool a15)
{
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  int v29; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v30; // [rsp+3Ch] [rbp-55h]
  float v31; // [rsp+40h] [rbp-51h]
  int v32; // [rsp+48h] [rbp-49h] BYREF
  _DWORD v33[9]; // [rsp+4Ch] [rbp-45h] BYREF
  __int128 v34; // [rsp+70h] [rbp-21h]
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+A8h] [rbp+17h] BYREF

  v35 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 136);
  v32 = 404;
  memset_0(v33, 0, 0x28uLL);
  *(float *)&v33[1] = a7;
  *(float *)&v33[2] = a8;
  *(float *)&v33[3] = a9;
  *(float *)&v33[4] = a10;
  *(float *)&v33[5] = a11;
  *(float *)&v33[6] = a12;
  *(float *)&v33[7] = a13;
  *(float *)&v33[8] = a14;
  v33[0] = a2;
  LOWORD(v34) = a15;
  v17 = CChannel::SendCommand(this, &v32, 0x2Cu);
  v19 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x777u, 0LL);
  }
  else
  {
    v29 = 402;
    v31 = a3;
    v30 = a2;
    v20 = CChannel::SendCommand(this, &v29, 0xCu);
    v19 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x77Fu, 0LL);
    }
    else
    {
      v29 = 407;
      v31 = a4;
      v30 = a2;
      v22 = CChannel::SendCommand(this, &v29, 0xCu);
      v19 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x787u, 0LL);
      }
      else
      {
        v29 = 405;
        v31 = a5;
        v30 = a2;
        v24 = CChannel::SendCommand(this, &v29, 0xCu);
        v19 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x78Fu, 0LL);
        }
        else
        {
          v29 = 401;
          v31 = a6;
          v30 = a2;
          v26 = CChannel::SendCommand(this, &v29, 0xCu);
          v19 = v26;
          if ( v26 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x797u, 0LL);
        }
      }
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v35);
  return v19;
}
