/*
 * XREFs of ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1C01B5F9C
 * Callers:
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01B614C (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Prediction::tagExpoSmoother::Smooth(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rdi
  char *v4; // r15
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v8; // rbp
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rbp
  unsigned int v19; // edx
  unsigned __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 *result; // rax
  char v29; // [rsp+28h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = (char *)(a1 + 1);
  v5 = a1[1];
  v6 = 0x100000000LL - *a1;
  v8 = (v6 ^ v5) >> 63;
  v10 = v6;
  v11 = v5;
  if ( v5 < 0 )
    v11 = -(int)v5;
  v12 = -v5;
  if ( v5 >= 0 )
    v12 = v5;
  if ( v6 < 0 )
    v10 = v3;
  v13 = v3 - 0x100000000LL;
  if ( v6 >= 0 )
    v13 = v6;
  v14 = v11 * (unsigned __int64)v10;
  v15 = *a3;
  v16 = v8 ^ ((HIDWORD(v14) + v10 * HIDWORD(v12) + v11 * HIDWORD(v13)) | ((unsigned __int64)(unsigned int)(((HIDWORD(v14) + v10 * HIDWORD(v12) + v11 * HIDWORD(v13)) >> 32) + HIDWORD(v12) * HIDWORD(v13) + ((HIDWORD(v14) + v10 * HIDWORD(v12)) >> 32)) << 32));
  v17 = v16 - v8;
  if ( (_DWORD)v14 )
    v17 = v16;
  v18 = (v15 ^ v3) >> 63;
  v19 = *a3;
  if ( v15 < 0 )
    v19 = -(int)v15;
  v20 = -v15;
  if ( v15 >= 0 )
    v20 = *a3;
  v21 = v3;
  if ( v3 < 0 )
    v21 = -(int)v3;
  v22 = -v3;
  if ( v3 >= 0 )
    v22 = v3;
  v23 = v21 * (unsigned __int64)v19;
  v24 = ((__PAIR64__(HIDWORD(v20), v19) * v21) >> 32) + v19 * HIDWORD(v22);
  v25 = v18 ^ ((unsigned int)v24 | ((unsigned __int64)(unsigned int)(HIDWORD(v24)
                                                                   + HIDWORD(v20) * HIDWORD(v22)
                                                                   + ((HIDWORD(v23) + v21 * HIDWORD(v20)) >> 32)) << 32));
  v26 = v25 - v18;
  if ( (_DWORD)v23 )
    v26 = v25;
  v27 = v17 + v26;
  if ( v4 != &v29 )
  {
    *(_QWORD *)v4 = v27;
    v5 = v27;
  }
  result = a2;
  *a2 = v5;
  return result;
}
