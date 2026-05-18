/*
 * XREFs of sub_1800C7220 @ 0x1800C7220
 * Callers:
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800C3190 @ 0x1800C3190 (sub_1800C3190.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18006B2E8 @ 0x18006B2E8 (sub_18006B2E8.c)
 *     sub_180077710 @ 0x180077710 (sub_180077710.c)
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_18008F3F4 @ 0x18008F3F4 (sub_18008F3F4.c)
 *     sub_18008F400 @ 0x18008F400 (sub_18008F400.c)
 *     sub_18008F404 @ 0x18008F404 (sub_18008F404.c)
 *     sub_1800AEEDC @ 0x1800AEEDC (sub_1800AEEDC.c)
 *     sub_1800BB1FC @ 0x1800BB1FC (sub_1800BB1FC.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_UNKNOWN **__fastcall sub_1800C7220(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  _UNKNOWN **v4; // r15
  volatile signed __int32 **v5; // r12
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  volatile signed __int32 *v9; // rsi
  __int64 v10; // rbx
  char v11; // al
  double v12; // xmm0_8
  int v13; // xmm9_4
  double v14; // xmm0_8
  int v15; // xmm10_4
  double v16; // xmm0_8
  int v17; // xmm11_4
  double v18; // xmm0_8
  int v19; // xmm12_4
  double v20; // xmm0_8
  int v21; // xmm13_4
  double v22; // xmm0_8
  int v23; // xmm14_4
  double v24; // xmm0_8
  int v25; // xmm6_4
  double v26; // xmm0_8
  int v27; // xmm7_4
  double v28; // xmm0_8
  int v29; // xmm8_4
  double v30; // xmm0_8
  int v31; // xmm15_4
  int v32; // eax
  double v33; // xmm0_8
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  volatile signed __int32 *v37; // r15
  __int64 v38; // rdx
  signed __int32 v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rbx
  volatile signed __int32 *v42; // rbx
  volatile signed __int32 *v43; // rbx
  _UNKNOWN **result; // rax
  signed __int32 v45; // eax
  __int64 v46; // [rsp+20h] [rbp-E0h]
  char v47; // [rsp+28h] [rbp-D8h]
  char v48; // [rsp+29h] [rbp-D7h]
  char v49; // [rsp+2Ah] [rbp-D6h]
  _UNKNOWN **v50; // [rsp+30h] [rbp-D0h]
  __int64 v51; // [rsp+38h] [rbp-C8h]
  __int128 v52; // [rsp+58h] [rbp-A8h]
  int v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+6Ch] [rbp-94h]
  int v55; // [rsp+70h] [rbp-90h]
  int v56; // [rsp+74h] [rbp-8Ch]
  float v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v59; // [rsp+88h] [rbp-78h]
  __int128 v60; // [rsp+90h] [rbp-70h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-60h]
  _QWORD v62[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v63; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v64; // [rsp+D0h] [rbp-30h]

  v62[2] = -2LL;
  v61 = a1;
  v46 = sub_180077A8C(a1, *(_DWORD *)(*a2 + 112));
  v4 = &off_18025DA00;
  v50 = &off_18025DA00;
  v5 = (volatile signed __int32 **)(sub_1800BB1FC(*a2, v3) + 64);
  do
  {
    v6 = *(v5 - 6);
    if ( v6 )
    {
      _InterlockedIncrement(v6 + 2);
      v6 = *(v5 - 6);
    }
    v7 = (__int64)*(v5 - 7);
    v8 = v7;
    v51 = v7;
    v9 = *v5;
    if ( *v5 )
    {
      _InterlockedIncrement(v9 + 2);
      v9 = *v5;
      v8 = v7;
    }
    v10 = (__int64)*(v5 - 1);
    if ( v7 && v10 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v46 + 64LL))(v46, *(v4 - 2), 0LL);
      v48 = v11;
      v12 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v46 + 88LL))(v46, *(v4 - 1));
      v13 = LODWORD(v12);
      v14 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v46 + 88LL))(v46, *v4);
      v15 = LODWORD(v14);
      v16 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v46 + 88LL))(v46, v4[1]);
      v17 = LODWORD(v16);
      v18 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v46 + 88LL))(v46, v4[2]);
      v19 = LODWORD(v18);
      v20 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v46 + 88LL))(v46, v4[3]);
      v21 = LODWORD(v20);
      v22 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v46 + 88LL))(v46, v4[4]);
      v23 = LODWORD(v22);
      v24 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v46 + 88LL))(v46, v4[5]);
      v25 = LODWORD(v24);
      v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v46 + 88LL))(v46, v4[6]);
      v27 = LODWORD(v26);
      v28 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v46 + 88LL))(v46, v4[7]);
      v29 = LODWORD(v28);
      v30 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v46 + 88LL))(v46, v4[8]);
      v31 = LODWORD(v30);
      v54 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v46 + 72LL))(v46, v4[9], 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v46 + 72LL))(v46, v4[10], 0LL);
      v55 = v32;
      v33 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v46 + 88LL))(v46, v4[11]);
      v56 = LODWORD(v33);
      v57 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v46 + 88LL))(v46, v4[12]);
      v47 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v46 + 64LL))(v46, v4[13], 0LL);
      v49 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v46 + 64LL))(v46, v4[14], 0LL);
      v53 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v46 + 72LL))(v46, v4[15], 0LL);
      v63 = 0LL;
      v64 = 0LL;
      v60 = 0LL;
      v34 = a2[1];
      if ( v34 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
        v34 = a2[1];
        v8 = v51;
      }
      *(_QWORD *)&v60 = *a2;
      *((_QWORD *)&v60 + 1) = v34;
      sub_180077710(v61, &v63, 0LL, &v60);
      v35 = v63;
      v36 = 0LL;
      v37 = 0LL;
      v38 = *(_QWORD *)(v63 + 64);
      if ( v38 )
      {
        while ( 1 )
        {
          v39 = *(_DWORD *)(v38 + 8);
          if ( !v39 )
            break;
          if ( v39 == _InterlockedCompareExchange((volatile signed __int32 *)(v38 + 8), v39 + 1, v39) )
          {
            v36 = *(_QWORD *)(v35 + 56);
            v37 = *(volatile signed __int32 **)(v35 + 64);
            break;
          }
        }
        v8 = v51;
      }
      v62[0] = v36;
      v62[1] = v37;
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v10 + 96), v62);
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        }
        v8 = v51;
      }
      if ( v47 )
      {
        *(_DWORD *)(v10 + 88) = 1;
        *(_DWORD *)(v10 + 136) = -1077342245;
      }
      else
      {
        *(_DWORD *)(v10 + 88) = v53;
        *(_DWORD *)(v10 + 136) = 0;
      }
      *(_DWORD *)(v10 + 112) = v13;
      *(_DWORD *)(v10 + 116) = v15;
      *(_DWORD *)(v10 + 120) = v17;
      *(_DWORD *)(v10 + 124) = v19;
      *(_DWORD *)(v10 + 128) = v21;
      *(_DWORD *)(v10 + 132) = v23;
      *(_BYTE *)(v10 + 72) = v48;
      *(_DWORD *)(v10 + 152) = v25;
      *(_DWORD *)(v10 + 156) = v27;
      *(_DWORD *)(v10 + 160) = v29;
      *(_DWORD *)(v10 + 164) = 1065353216;
      *(_BYTE *)(v8 + 72) = v48;
      *(_DWORD *)(v8 + 88) = v25;
      *(_DWORD *)(v8 + 92) = v27;
      *(_DWORD *)(v8 + 96) = v29;
      *(_DWORD *)(v8 + 100) = 1065353216;
      *(_DWORD *)(v8 + 104) = v31;
      sub_18008F3F4(v8, v54);
      sub_18008F404(v8, v55);
      *(_DWORD *)(v8 + 116) = v56;
      *(float *)(v8 + 112) = v57;
      sub_18008F400(v8, v49);
      v58 = 0LL;
      v59 = 0LL;
      v52 = 0LL;
      v40 = *(_QWORD *)(v8 + 64);
      if ( v40 )
      {
        while ( 1 )
        {
          v45 = *(_DWORD *)(v40 + 8);
          if ( !v45 )
            break;
          if ( v45 == _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 8), v45 + 1, v45) )
          {
            v41 = *(_QWORD *)(v8 + 64);
            *((_QWORD *)&v52 + 1) = v41;
            sub_18006B2E8(*(_QWORD *)(v8 + 56), &v58);
            goto LABEL_27;
          }
        }
      }
      v41 = 0LL;
      sub_18006B2E8(0LL, &v58);
LABEL_27:
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + 8), 0xFFFFFFFF) == 1 )
        {
          (***((void (__fastcall ****)(_QWORD))&v52 + 1))(*((_QWORD *)&v52 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 12LL), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v52 + 1) + 8LL))(*((_QWORD *)&v52 + 1));
        }
      }
      if ( v58 )
        sub_1800AEEDC(v58);
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          v42 = v59;
          (**(void (__fastcall ***)(volatile signed __int32 *))v59)(v59);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
        }
      }
      v43 = v64;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v43)(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
        }
      }
      if ( v9 )
      {
        if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
          if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        }
      }
      if ( v6 && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
      v4 = v50;
    }
    else
    {
      if ( v9 )
      {
        if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
          if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        }
      }
      if ( v6 )
      {
        if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
          if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
        }
      }
    }
    v5 += 2;
    v4 += 18;
    v50 = v4;
    result = &qword_18025DBB0;
  }
  while ( (__int64)v4 < (__int64)&qword_18025DBB0 );
  return result;
}
