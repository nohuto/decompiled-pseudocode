/*
 * XREFs of sub_1801007B0 @ 0x1801007B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180012630 @ 0x180012630 (sub_180012630.c)
 *     sub_180012784 @ 0x180012784 (sub_180012784.c)
 *     sub_180017DE8 @ 0x180017DE8 (sub_180017DE8.c)
 *     sub_180083914 @ 0x180083914 (sub_180083914.c)
 *     sub_180084370 @ 0x180084370 (sub_180084370.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_18008AD88 @ 0x18008AD88 (sub_18008AD88.c)
 *     sub_18008B420 @ 0x18008B420 (sub_18008B420.c)
 *     sub_18008BC28 @ 0x18008BC28 (sub_18008BC28.c)
 *     sub_18008C858 @ 0x18008C858 (sub_18008C858.c)
 *     sub_180099840 @ 0x180099840 (sub_180099840.c)
 *     sub_1800AE924 @ 0x1800AE924 (sub_1800AE924.c)
 *     sub_1800AE978 @ 0x1800AE978 (sub_1800AE978.c)
 *     sub_1800B1004 @ 0x1800B1004 (sub_1800B1004.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall sub_1801007B0(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  char v4; // r15
  __int64 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rdx
  signed __int32 v10; // eax
  __int64 v11; // rbx
  _OWORD *v12; // rax
  float *v13; // rcx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  __int64 v21; // rbx
  __int128 v22; // [rsp+28h] [rbp-E0h]
  __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
  volatile signed __int32 *v24; // [rsp+40h] [rbp-C8h]
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  volatile signed __int32 *v26; // [rsp+50h] [rbp-B8h]
  float v27; // [rsp+60h] [rbp-A8h]
  __int64 v28[5]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v30; // [rsp+98h] [rbp-70h]
  __int128 v31; // [rsp+A8h] [rbp-60h]
  __int128 v32; // [rsp+B8h] [rbp-50h]
  __int128 v33; // [rsp+C8h] [rbp-40h]
  __int128 v34; // [rsp+D8h] [rbp-30h]
  float v35; // [rsp+E8h] [rbp-20h]
  float v36; // [rsp+ECh] [rbp-1Ch]
  __int128 v37; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v38; // [rsp+108h] [rbp+0h]
  __int128 v39; // [rsp+118h] [rbp+10h] BYREF
  __int64 v40; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v41; // [rsp+130h] [rbp+28h]
  __int128 v42; // [rsp+138h] [rbp+30h] BYREF
  int v43; // [rsp+148h] [rbp+40h]
  int v44; // [rsp+14Ch] [rbp+44h]
  __int64 v45[4]; // [rsp+150h] [rbp+48h] BYREF
  __int128 v46; // [rsp+170h] [rbp+68h] BYREF
  __int64 v47; // [rsp+180h] [rbp+78h]
  _OWORD v48[4]; // [rsp+188h] [rbp+80h] BYREF
  _OWORD v49[2]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v50; // [rsp+1E8h] [rbp+E0h]
  __int128 v51; // [rsp+1F8h] [rbp+F0h]
  _OWORD v52[4]; // [rsp+208h] [rbp+100h] BYREF
  _DWORD v53[24]; // [rsp+248h] [rbp+140h] BYREF
  __int64 v54; // [rsp+2A8h] [rbp+1A0h] BYREF

  v28[4] = -2LL;
  if ( *(_BYTE *)(a1 + 1953) )
  {
    v38 = 0LL;
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
          v38 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v36 = 3.4028235e38;
    v35 = -3.4028235e38;
    v4 = 0;
    v5 = (__int64 *)sub_1800AE924(a1);
    v6 = *v5;
    v7 = v5[1];
    if ( *v5 != v7 )
    {
      v8 = v38;
      do
      {
        v45[2] = 0LL;
        v45[3] = 0LL;
        sub_18001110C(v45, v6);
        v40 = 0LL;
        v41 = 0LL;
        v28[2] = 0LL;
        v28[3] = 0LL;
        sub_18001110C(v28, (__int64)v45);
        v22 = 0LL;
        v9 = *(_QWORD *)(v8 + 80);
        if ( v9 )
        {
          while ( 1 )
          {
            v10 = *(_DWORD *)(v9 + 8);
            if ( !v10 )
              break;
            if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
            {
              v22 = *(_OWORD *)(v8 + 72);
              break;
            }
          }
        }
        sub_18008AD88(v22, &v40, v28);
        if ( *((_QWORD *)&v22 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v22 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (***((void (__fastcall ****)(_QWORD))&v22 + 1))(*((_QWORD *)&v22 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v22 + 1) + 12LL), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v22 + 1) + 8LL))(*((_QWORD *)&v22 + 1));
          }
        }
        if ( sub_18008BC28(v40) )
        {
          v39 = 0uLL;
          sub_18008B420(v40, &v39);
          v37 = 0LL;
          if ( *((_QWORD *)&v39 + 1) )
            _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL));
          v37 = v39;
          if ( (_QWORD)v39 )
          {
            v11 = v37;
            while ( 1 )
            {
              if ( *(_DWORD *)(a1 + 1960) == 1 )
                goto LABEL_28;
              sub_180087340(v11);
              if ( (*(_DWORD *)(v11 + 448) & 0x10000) != 0 )
                break;
LABEL_45:
              v16 = sub_180083914(v39, &v29, (__int64 *)&v37);
              std::shared_ptr<__ExceptionPtr>::operator=(&v37, v16);
              v17 = v30;
              if ( v30 )
              {
                if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
                {
                  (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
                  if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
                }
              }
              v11 = v37;
              if ( !(_QWORD)v37 )
                goto LABEL_50;
            }
            v11 = v37;
LABEL_28:
            v25 = 0LL;
            v26 = 0LL;
            sub_180012630(v11, &v25);
            v23 = 0LL;
            v24 = 0LL;
            sub_180012784(v37, &v23);
            if ( v25 && v23 )
            {
              v46 = *(_OWORD *)(v25 + 88);
              v47 = *(_QWORD *)(v25 + 104);
              v42 = xmmword_1801E38A0;
              v43 = 1065353216;
              v44 = 1065353216;
              v12 = (_OWORD *)sub_1800AE978(a1, 0, 1);
              v48[0] = *v12;
              v48[1] = v12[1];
              v48[2] = v12[2];
              v48[3] = v12[3];
              sub_180084370(v37, v52);
              sub_180017DE8((__int64)v49, v52, v48);
              v31 = v49[0];
              v32 = v49[1];
              v33 = v50;
              v34 = v51;
              sub_18008C858((unsigned __int64 *)&v46, &v42, *(double *)&v50, *(double *)&v51);
              sub_180099840((unsigned __int64 *)&v42, v53);
              v13 = (float *)v53;
              do
              {
                v27 = v13[2];
                if ( (float)-v27 > v35 )
                  v35 = -v27;
                if ( v36 > (float)-v27 )
                  v36 = -v27;
                v13 += 3;
              }
              while ( v13 != (float *)&v54 );
              v4 = 1;
            }
            if ( v24 )
            {
              if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
              {
                v14 = v24;
                (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
                if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
              }
            }
            if ( v26 )
            {
              if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
              {
                v15 = v26;
                (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
                if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
              }
            }
            goto LABEL_45;
          }
LABEL_50:
          v18 = (volatile signed __int32 *)*((_QWORD *)&v37 + 1);
          if ( *((_QWORD *)&v37 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
              if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
            }
          }
          v19 = (volatile signed __int32 *)*((_QWORD *)&v39 + 1);
          if ( *((_QWORD *)&v39 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
              if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            }
          }
        }
        v20 = v41;
        if ( v41 )
        {
          if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          }
        }
        unknown_libname_116(v45);
        v6 += 32LL;
      }
      while ( v6 != v7 );
      if ( v4 )
      {
        if ( (unsigned int)(*(_DWORD *)(a1 + 316) - 1) <= 1 )
        {
          v36 = fmaxf(0.001, v36);
          v35 = fmaxf(0.001, v35);
        }
        if ( (float)fabs((float)(v35 - v36)) > 0.0000099999997 )
        {
          if ( v36 != *(float *)(a1 + 320) )
          {
            *(float *)(a1 + 320) = v36;
            sub_1800B1004(a1, 2);
          }
          if ( v35 != *(float *)(a1 + 324) )
          {
            *(float *)(a1 + 324) = v35;
            sub_1800B1004(a1, 2);
          }
        }
      }
    }
    if ( *((_QWORD *)&v38 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v38 + 1) + 8LL)) )
    {
      v21 = *((_QWORD *)&v38 + 1);
      (***((void (__fastcall ****)(_QWORD))&v38 + 1))(*((_QWORD *)&v38 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v21 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v38 + 1) + 8LL))(*((_QWORD *)&v38 + 1));
    }
  }
}
