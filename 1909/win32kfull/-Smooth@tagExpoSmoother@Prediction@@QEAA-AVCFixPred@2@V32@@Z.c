/*
 * XREFs of ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1C01EE060
 * Callers:
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01EE1F0 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Prediction::tagExpoSmoother::Smooth(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // r15
  char *v4; // r12
  __int64 v5; // rbp
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  int v15; // r11d
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 *result; // rax
  char v29; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = (char *)(a1 + 1);
  v5 = a1[1];
  v6 = 0x100000000LL - *a1;
  v7 = -v5;
  v8 = (v6 ^ v5) >> 63;
  if ( v5 >= 0 )
    v7 = v5;
  if ( v6 < 0 )
    v6 = v3 - 0x100000000LL;
  v11 = (unsigned int)v6;
  v12 = HIDWORD(v6);
  v13 = (unsigned int)v7;
  v14 = v11 * (unsigned int)v7;
  v15 = HIDWORD(v7) * v12;
  v16 = HIDWORD(v14) + v11 * HIDWORD(v7);
  v17 = *a3;
  v18 = (v8 ^ ((unsigned int)(v16 + v13 * v12) | ((unsigned __int64)(unsigned int)((((unsigned int)v16 + v13 * v12) >> 32)
                                                                                 + v15
                                                                                 + HIDWORD(v16)) << 32)))
      - v8;
  if ( (_DWORD)v14 )
    v18 = v8 ^ ((unsigned int)(v16 + v13 * v12) | ((unsigned __int64)(unsigned int)((((unsigned int)v16 + v13 * v12) >> 32)
                                                                                  + v15
                                                                                  + HIDWORD(v16)) << 32));
  v19 = -v17;
  v20 = (v3 ^ *a3) >> 63;
  if ( v17 >= 0 )
    v19 = *a3;
  v21 = -v3;
  if ( v3 >= 0 )
    v21 = v3;
  v22 = (unsigned int)v21 * (unsigned __int64)(unsigned int)v19;
  v23 = HIDWORD(v21);
  v24 = HIDWORD(v22) + (unsigned int)v21 * HIDWORD(v19);
  v25 = v20 ^ ((unsigned int)(v24 + v19 * v23) | ((unsigned __int64)(unsigned int)((((unsigned int)v24
                                                                                   + (unsigned int)v19 * v23) >> 32)
                                                                                 + HIDWORD(v19) * v23
                                                                                 + HIDWORD(v24)) << 32));
  v26 = v25 - v20;
  if ( (_DWORD)v22 )
    v26 = v25;
  v27 = v18 + v26;
  if ( v4 != &v29 )
  {
    *(_QWORD *)v4 = v27;
    v5 = v27;
  }
  result = a2;
  *a2 = v5;
  return result;
}
