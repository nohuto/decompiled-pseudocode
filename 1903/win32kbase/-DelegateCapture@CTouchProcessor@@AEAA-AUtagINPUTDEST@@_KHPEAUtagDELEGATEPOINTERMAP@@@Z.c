/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C0164EC4
 * Callers:
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C0165310 (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031210 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0031954 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0165214 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCapture(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KTHREAD *v10; // rcx
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  const struct tagINPUTDEST *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  __int128 v25; // xmm3
  __int128 v26; // xmm8
  __m128i v27; // xmm1
  __int128 v28; // xmm7
  __int128 v29; // xmm6
  __int128 v30; // xmm5
  __int128 v31; // xmm4
  __int128 v32; // xmm2
  __int64 v33; // xmm0_8
  _BYTE v35[120]; // [rsp+28h] [rbp-E0h] BYREF
  char v36; // [rsp+A0h] [rbp-68h]
  _BYTE v37[128]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v38[16]; // [rsp+128h] [rbp+20h] BYREF

  memset(v35, 0, sizeof(v35));
  v10 = *(struct _KTHREAD **)(a1 + 80);
  v11 = 0;
  v36 = 0;
  if ( v10 != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v8, v9);
    v10 = *(struct _KTHREAD **)(a1 + 80);
  }
  if ( v10 != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v8, v9);
  v12 = *(_QWORD *)(a3 + 40);
  if ( v12 )
  {
    *(_WORD *)a5 = *(_WORD *)(v12 + 20);
    *(_DWORD *)(a5 + 4) = *(_DWORD *)(v12 + 24);
    v21 = (const struct tagINPUTDEST *)CTouchProcessor::DelegateCaptureInt(a1, v37, v12, 1LL);
    CInputDest::CInputDest((CInputDest *)v38, v21);
    CInputDest::operator=((__int64)v35, v38, v22);
    CInputDest::SetEmpty((CInputDest *)v38, v23, v24);
    v25 = *(_OWORD *)&v35[80];
    v26 = *(_OWORD *)v35;
    v27 = *(__m128i *)&v35[80];
    v28 = *(_OWORD *)&v35[16];
    v29 = *(_OWORD *)&v35[32];
    v30 = *(_OWORD *)&v35[48];
    v31 = *(_OWORD *)&v35[64];
    v32 = *(_OWORD *)&v35[96];
    v33 = *(_QWORD *)&v35[112];
    *(_OWORD *)(a5 + 8) = *(_OWORD *)v35;
    *(_OWORD *)(a5 + 24) = v28;
    *(_OWORD *)(a5 + 40) = v29;
    *(_OWORD *)(a5 + 56) = v30;
    *(_OWORD *)(a5 + 72) = v31;
    *(__m128i *)(a5 + 88) = v27;
    *(_OWORD *)(a5 + 104) = v32;
    *(_QWORD *)(a5 + 120) = v33;
    LOBYTE(v11) = _mm_cvtsi128_si32(_mm_srli_si128(v27, 12)) != 0;
    *(_DWORD *)(a5 + 128) = v11;
    *(_OWORD *)a2 = v26;
    *(_OWORD *)(a2 + 16) = v28;
    *(_OWORD *)(a2 + 32) = v29;
    *(_OWORD *)(a2 + 48) = v30;
    *(_OWORD *)(a2 + 64) = v31;
    *(_OWORD *)(a2 + 80) = v25;
    *(_OWORD *)(a2 + 96) = v32;
    *(_QWORD *)(a2 + 112) = v33;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v8, 0LL);
    v15 = *(_OWORD *)&v35[16];
    *(_OWORD *)a2 = *(_OWORD *)v35;
    v16 = *(_OWORD *)&v35[32];
    *(_OWORD *)(a2 + 16) = v15;
    v17 = *(_OWORD *)&v35[48];
    *(_OWORD *)(a2 + 32) = v16;
    v18 = *(_OWORD *)&v35[64];
    *(_OWORD *)(a2 + 48) = v17;
    v19 = *(_OWORD *)&v35[80];
    *(_OWORD *)(a2 + 64) = v18;
    v20 = *(_OWORD *)&v35[96];
    *(_OWORD *)(a2 + 80) = v19;
    *(_QWORD *)&v19 = *(_QWORD *)&v35[112];
    *(_OWORD *)(a2 + 96) = v20;
    *(_QWORD *)(a2 + 112) = v19;
  }
  CInputDest::SetEmpty((CInputDest *)v35, v13, v14);
  return a2;
}
