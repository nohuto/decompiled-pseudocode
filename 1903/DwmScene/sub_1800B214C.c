/*
 * XREFs of sub_1800B214C @ 0x1800B214C
 * Callers:
 *     sub_1800AE8A4 @ 0x1800AE8A4 (sub_1800AE8A4.c)
 *     sub_1800AE934 @ 0x1800AE934 (sub_1800AE934.c)
 *     sub_1800AE9F4 @ 0x1800AE9F4 (sub_1800AE9F4.c)
 *     sub_1800B1B9C @ 0x1800B1B9C (sub_1800B1B9C.c)
 * Callees:
 *     sub_180017DE8 @ 0x180017DE8 (sub_180017DE8.c)
 *     sub_180018D28 @ 0x180018D28 (sub_180018D28.c)
 *     sub_180081CAC @ 0x180081CAC (sub_180081CAC.c)
 *     sub_180081F80 @ 0x180081F80 (sub_180081F80.c)
 *     sub_180081FFC @ 0x180081FFC (sub_180081FFC.c)
 *     sub_1800820A4 @ 0x1800820A4 (sub_1800820A4.c)
 *     sub_180083214 @ 0x180083214 (sub_180083214.c)
 *     sub_18008329C @ 0x18008329C (sub_18008329C.c)
 *     sub_18009EB1C @ 0x18009EB1C (sub_18009EB1C.c)
 *     sub_1800AED34 @ 0x1800AED34 (sub_1800AED34.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800B214C(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int *v9; // rdx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  int *v15; // rax
  int v16; // xmm0_4
  int v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  int v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm4_4
  int v23; // xmm0_4
  unsigned __int64 *v24; // rax
  unsigned __int64 *v25; // rax
  float v26; // xmm0_4
  _OWORD *v27; // rbx
  _OWORD *v28; // rax
  _DWORD v30[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v32[3]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v33[3]; // [rsp+44h] [rbp-C4h] BYREF
  _OWORD v34[4]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v35[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v36[64]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v37[64]; // [rsp+118h] [rbp+10h] BYREF
  int v38; // [rsp+158h] [rbp+50h] BYREF
  float v39; // [rsp+15Ch] [rbp+54h]
  float v40; // [rsp+160h] [rbp+58h]
  unsigned int v41[4]; // [rsp+168h] [rbp+60h] BYREF
  _OWORD v42[4]; // [rsp+178h] [rbp+70h] BYREF
  _OWORD v43[4]; // [rsp+1B8h] [rbp+B0h] BYREF

  if ( (*(_BYTE *)(a1 + 544) & 4) == 0 || sub_1800AED34(a1, 4) )
    return 0;
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) )
      {
        v4 = *(volatile signed __int32 **)(a1 + 64);
        v5 = *(_QWORD *)(a1 + 56);
        if ( v4 )
        {
          if ( !_InterlockedDecrement(v4 + 2) )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
            if ( !_InterlockedDecrement(v4 + 3) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
          }
        }
        if ( v5 )
        {
          *(_DWORD *)(a1 + 1596) = 0;
          *(_DWORD *)(a1 + 1600) = 0;
          *(_DWORD *)(a1 + 1604) = 0;
          *(_DWORD *)(a1 + 1608) = 0;
          v6 = *(_QWORD *)(a1 + 136);
          if ( v6 )
          {
            v14 = *(_QWORD *)(v6 + 136);
            if ( v14 )
            {
              v15 = (int *)sub_18009EB1C(v14, &v31);
            }
            else
            {
              v30[0] = 0;
              v15 = v30;
              v30[1] = 0;
            }
            v16 = *v15;
            v17 = v15[1];
            *(_DWORD *)(a1 + 1596) = *v15;
            *(_DWORD *)(a1 + 1600) = v17;
            *(_DWORD *)(a1 + 1604) = v16;
            *(_DWORD *)(a1 + 1608) = v17;
          }
          else
          {
            v7 = *(_QWORD *)(a1 + 152);
            if ( v7 )
            {
              v8 = *(_QWORD *)(v7 + 112);
              if ( v8 && (v9 = *(int **)(v8 + 128)) != 0LL )
                v10 = *v9;
              else
                v10 = 0;
              *(float *)(a1 + 1596) = (float)v10;
              v11 = *(_QWORD *)(v7 + 112);
              if ( v11 && (v12 = *(_QWORD *)(v11 + 128)) != 0 )
                v13 = *(_DWORD *)(v12 + 4);
              else
                v13 = 0;
              *(float *)(a1 + 1600) = (float)v13;
              *(_DWORD *)(a1 + 1604) = *(_DWORD *)(a1 + 1596);
              *(_DWORD *)(a1 + 1608) = *(_DWORD *)(a1 + 1600);
            }
          }
          if ( *(_DWORD *)(a1 + 360) )
          {
            v18 = 1.0;
            v19 = 1.0;
          }
          else
          {
            v18 = *(float *)(a1 + 1604);
            v19 = *(float *)(a1 + 1608);
          }
          v20 = *(_DWORD *)(a1 + 392);
          v21 = v19 * *(float *)(a1 + 348);
          *(float *)(a1 + 1572) = v18 * *(float *)(a1 + 344);
          *(_DWORD *)(a1 + 1580) = v20;
          *(float *)(a1 + 1576) = v21;
          v22 = v19 * *(float *)(a1 + 356);
          v23 = *(_DWORD *)(a1 + 396);
          *(float *)(a1 + 1584) = v18 * *(float *)(a1 + 352);
          *(float *)(a1 + 1588) = v22;
          *(_DWORD *)(a1 + 1592) = v23;
          v24 = (unsigned __int64 *)sub_1800820A4(v32, (unsigned __int64 *)(a1 + 1584), (unsigned __int64 *)(a1 + 1572));
          sub_180081F80(v41, v24, COERCE_DOUBLE(1056964608LL));
          v25 = (unsigned __int64 *)sub_180081FFC(v33, (unsigned __int64 *)(a1 + 1584), (unsigned __int64 *)(a1 + 1572));
          sub_180081F80(&v38, v25, COERCE_DOUBLE(1056964608LL));
          v26 = *(float *)(a1 + 396) - *(float *)(a1 + 392);
          v41[2] = *(_DWORD *)(a1 + 392);
          v39 = v39 * -1.0;
          v40 = v26;
          v27 = (_OWORD *)sub_18008329C((__int64)v36, v41);
          v28 = (_OWORD *)sub_180083214((__int64)v37, (__int64)&v38);
          sub_180017DE8((__int64)v42, v28, v27);
          sub_180018D28(v42, (__int64)v43);
          v34[0] = v42[0];
          v34[1] = v42[1];
          v34[2] = v42[2];
          v34[3] = v42[3];
          sub_180081CAC((_OWORD *)(a1 + 1252), v34);
          v35[0] = v43[0];
          v35[1] = v43[1];
          v35[2] = v43[2];
          v35[3] = v43[3];
          sub_180081CAC((_OWORD *)(a1 + 1444), v35);
        }
        break;
      }
    }
  }
  *(_DWORD *)(a1 + 544) &= ~4u;
  return 1;
}
