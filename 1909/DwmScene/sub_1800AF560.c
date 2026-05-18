/*
 * XREFs of sub_1800AF560 @ 0x1800AF560
 * Callers:
 *     sub_1801012B0 @ 0x1801012B0 (sub_1801012B0.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_18002C0E4 @ 0x18002C0E4 (sub_18002C0E4.c)
 *     sub_1800635BC @ 0x1800635BC (sub_1800635BC.c)
 *     sub_18006AA68 @ 0x18006AA68 (sub_18006AA68.c)
 *     sub_18006AAEC @ 0x18006AAEC (sub_18006AAEC.c)
 *     sub_18006CDF8 @ 0x18006CDF8 (sub_18006CDF8.c)
 *     sub_18006CE94 @ 0x18006CE94 (sub_18006CE94.c)
 *     sub_18006CF04 @ 0x18006CF04 (sub_18006CF04.c)
 *     sub_180073A84 @ 0x180073A84 (sub_180073A84.c)
 *     sub_180074950 @ 0x180074950 (sub_180074950.c)
 *     sub_180078228 @ 0x180078228 (sub_180078228.c)
 *     sub_180078230 @ 0x180078230 (sub_180078230.c)
 *     sub_18008C330 @ 0x18008C330 (sub_18008C330.c)
 *     sub_1800A4B48 @ 0x1800A4B48 (sub_1800A4B48.c)
 *     sub_1800A4C80 @ 0x1800A4C80 (sub_1800A4C80.c)
 *     sub_1800A6168 @ 0x1800A6168 (sub_1800A6168.c)
 *     sub_1800A9000 @ 0x1800A9000 (sub_1800A9000.c)
 *     sub_1800AE8FC @ 0x1800AE8FC (sub_1800AE8FC.c)
 *     sub_1800AE9F0 @ 0x1800AE9F0 (sub_1800AE9F0.c)
 *     sub_1800B0A34 @ 0x1800B0A34 (sub_1800B0A34.c)
 *     sub_1800B1504 @ 0x1800B1504 (sub_1800B1504.c)
 *     sub_1800E206C @ 0x1800E206C (sub_1800E206C.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 *     sub_1800F975C @ 0x1800F975C (sub_1800F975C.c)
 *     sub_1800F98E0 @ 0x1800F98E0 (sub_1800F98E0.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall sub_1800AF560(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 *v5; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rdx
  __int64 *v12; // r14
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  volatile signed __int32 *v20; // r15
  __int64 v21; // rdx
  signed __int32 v22; // eax
  __int64 v23; // r9
  volatile signed __int32 *v24; // r12
  __int64 v25; // rdx
  signed __int32 v26; // eax
  __int64 v27; // rax
  __int64 **v28; // rdi
  __int64 **v29; // rbx
  _QWORD *v30; // rax
  volatile signed __int32 *v31; // r14
  _QWORD *v32; // rax
  volatile signed __int32 *v33; // r14
  _QWORD *v34; // rax
  volatile signed __int32 *v35; // r14
  __int64 **v36; // rax
  __int64 **i; // rax
  __int64 *j; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // r14
  __int64 v41; // rdi
  unsigned __int64 v42; // rdx
  __int64 v43; // r13
  __int64 v44; // r15
  _QWORD *v45; // rbx
  __int64 v46; // r12
  volatile signed __int32 *v47; // rbx
  const void *v48; // rcx
  __int64 *v49; // rax
  __int64 v50; // rcx
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  volatile signed __int32 *v53; // rbx
  __int64 v54; // [rsp+50h] [rbp-B8h]
  __int64 v55; // [rsp+50h] [rbp-B8h]
  volatile signed __int32 *v56; // [rsp+58h] [rbp-B0h]
  __int64 v57; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v58; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+70h] [rbp-98h]
  volatile signed __int32 *v60; // [rsp+78h] [rbp-90h]
  __int64 *v62; // [rsp+88h] [rbp-80h]
  __int128 v63; // [rsp+90h] [rbp-78h] BYREF
  __int128 v64; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v65; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v66; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v67; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v68; // [rsp+F8h] [rbp-10h]
  volatile signed __int32 *v69; // [rsp+100h] [rbp-8h]
  __int64 v70; // [rsp+108h] [rbp+0h]
  volatile signed __int32 *v71; // [rsp+110h] [rbp+8h]
  __int64 v72[3]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v73[3]; // [rsp+130h] [rbp+28h] BYREF
  __int128 v74; // [rsp+148h] [rbp+40h] BYREF
  __int128 v75; // [rsp+158h] [rbp+50h] BYREF
  __int128 v76; // [rsp+168h] [rbp+60h] BYREF
  __int128 v77; // [rsp+178h] [rbp+70h] BYREF
  size_t v78[4]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v79[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v80; // [rsp+1C8h] [rbp+C0h] BYREF
  volatile signed __int32 *v81; // [rsp+1D0h] [rbp+C8h]
  __int64 *v82; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v83; // [rsp+1E0h] [rbp+D8h] BYREF
  volatile signed __int32 *v84; // [rsp+1E8h] [rbp+E0h]
  _QWORD v85[2]; // [rsp+1F0h] [rbp+E8h] BYREF
  _QWORD v86[2]; // [rsp+200h] [rbp+F8h] BYREF
  char v87[8]; // [rsp+210h] [rbp+108h] BYREF
  __int64 v88; // [rsp+218h] [rbp+110h]
  char v89[8]; // [rsp+220h] [rbp+118h] BYREF
  __int64 v90; // [rsp+228h] [rbp+120h]
  __int64 v91; // [rsp+230h] [rbp+128h]
  __int64 *v92; // [rsp+238h] [rbp+130h]
  __int64 v93; // [rsp+240h] [rbp+138h] BYREF
  volatile signed __int32 *v94; // [rsp+248h] [rbp+140h]
  __int128 v95; // [rsp+250h] [rbp+148h] BYREF
  __int128 v96; // [rsp+268h] [rbp+160h] BYREF
  __int64 **v97[2]; // [rsp+278h] [rbp+170h] BYREF
  __int64 v98; // [rsp+288h] [rbp+180h] BYREF
  volatile signed __int32 *v99; // [rsp+290h] [rbp+188h]
  __int128 v100; // [rsp+298h] [rbp+190h] BYREF
  _BYTE v101[16]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v102; // [rsp+2B8h] [rbp+1B0h]
  __int64 v103; // [rsp+2C0h] [rbp+1B8h]
  _QWORD v104[2]; // [rsp+2C8h] [rbp+1C0h] BYREF
  _QWORD v105[2]; // [rsp+2D8h] [rbp+1D0h] BYREF
  const void *Src[3]; // [rsp+2E8h] [rbp+1E0h] BYREF
  unsigned __int64 v107; // [rsp+300h] [rbp+1F8h]
  _UNKNOWN *retaddr; // [rsp+350h] [rbp+248h] BYREF

  result = (__int64)&retaddr;
  v91 = -2LL;
  v5 = a2;
  if ( *(_BYTE *)(a1 + 72) )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
    if ( (_BYTE)result )
    {
      sub_1800635BC(*v5 + 24, v7);
      v95 = 0LL;
      v8 = a3[1];
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        v8 = a3[1];
      }
      *(_QWORD *)&v95 = *a3;
      *((_QWORD *)&v95 + 1) = v8;
      if ( !(_QWORD)v95 )
      {
        v9 = sub_18006CF04(*v5, &v80, 0);
        std::shared_ptr<__ExceptionPtr>::operator=(&v95, v9);
        v10 = v81;
        if ( v81 )
        {
          if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
            if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          }
        }
      }
      v93 = 0LL;
      v94 = 0LL;
      sub_1800AE9F0(a1, &v93, v5);
      v12 = (__int64 *)sub_18006CDF8(*v5, v11);
      v62 = v12;
      v13 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v95 + 184LL))(v95);
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v95 + 200LL))(v95, &v100);
      v64 = 0LL;
      v14 = v13[1];
      if ( v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 12));
        v14 = v13[1];
      }
      *(_QWORD *)&v64 = *v13;
      *((_QWORD *)&v64 + 1) = v14;
      sub_18006AAEC(v93, (__int64 *)&v64);
      v65 = 0LL;
      if ( *((_QWORD *)&v100 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v100 + 1) + 12LL));
      v65 = v100;
      sub_18006AA68(v93, (__int64 *)&v65);
      v63 = 0LL;
      v15 = v13[1];
      if ( v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 12));
        v15 = v13[1];
      }
      *(_QWORD *)&v63 = *v13;
      *((_QWORD *)&v63 + 1) = v15;
      sub_18006AAEC(*v12, (__int64 *)&v63);
      v66 = 0LL;
      if ( *((_QWORD *)&v100 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v100 + 1) + 12LL));
      v66 = v100;
      sub_18006AA68(*v12, (__int64 *)&v66);
      v16 = *((_QWORD *)&v100 + 1);
      if ( *((_QWORD *)&v100 + 1)
        && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v100 + 1) + 12LL), 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      }
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v5 + 104LL))(*v5, &v93);
      v96 = 0uLL;
      sub_1800B1504(a1, &v96);
      sub_18002C0E4(Src, (_QWORD *)(a1 + 24), " scene");
      v105[0] = 0LL;
      v105[1] = 0LL;
      sub_1800F975C(v105, &v93, Src);
      memset(v72, 0, sizeof(v72));
      v17 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v95 + 200LL))(v95, v89);
      sub_180073A84(v72, v17, (__int64)Src);
      v18 = v90;
      if ( v90 && _InterlockedExchangeAdd((volatile signed __int32 *)(v90 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 192LL))(a1, v5, a3);
      v70 = 0LL;
      v71 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      v56 = 0LL;
      v21 = *(_QWORD *)(a1 + 64);
      if ( v21 )
      {
        while ( 1 )
        {
          v22 = *(_DWORD *)(v21 + 8);
          if ( !v22 )
            break;
          if ( v22 == _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 8), v22 + 1, v22) )
          {
            v19 = *(_QWORD *)(a1 + 56);
            v20 = *(volatile signed __int32 **)(a1 + 64);
            v56 = v20;
            break;
          }
        }
      }
      v70 = v19;
      v71 = v20;
      v68 = 0LL;
      v69 = 0LL;
      v23 = 0LL;
      v57 = 0LL;
      v24 = 0LL;
      v60 = 0LL;
      v25 = *(_QWORD *)(v19 + 80);
      if ( v25 )
      {
        while ( 1 )
        {
          v26 = *(_DWORD *)(v25 + 8);
          if ( !v26 )
            break;
          if ( v26 == _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v26 + 1, v26) )
          {
            v23 = *(_QWORD *)(v19 + 72);
            v57 = v23;
            v24 = *(volatile signed __int32 **)(v19 + 80);
            v60 = v24;
            break;
          }
        }
      }
      v68 = v23;
      v69 = v24;
      v27 = sub_1800F0EB4(a1);
      v54 = sub_180078228(v27);
      v97[0] = 0LL;
      v97[1] = 0LL;
      sub_1800A4C80(v54, v97);
      v28 = v97[0];
      v29 = (__int64 **)*v97[0];
      if ( *v97[0] != (__int64 *)v97[0] )
      {
        do
        {
          v98 = 0LL;
          v99 = 0LL;
          v78[2] = 0LL;
          v78[3] = 0LL;
          sub_18000F444(v78, (__int64)(v29 + 4));
          sub_1800A4B48(v54, &v98, v78);
          v30 = sub_1800A9000(v98, &v83);
          (*(void (__fastcall **)(_QWORD, __int128 *, __int128 *))(*(_QWORD *)*v30 + 32LL))(*v30, &v96, &v95);
          v31 = v84;
          if ( v84 )
          {
            if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
              if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
            }
          }
          if ( ((*(_DWORD *)(a1 + 316) - 2) & 0xFFFFFFFD) != 0 )
          {
            v32 = sub_1800A9000(v98, v85);
            (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v32 + 96LL))(*v32, *v5);
            v33 = (volatile signed __int32 *)v85[1];
          }
          else
          {
            v34 = sub_1800A9000(v98, v86);
            (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v34 + 96LL))(*v34, *v5);
            v33 = (volatile signed __int32 *)v86[1];
          }
          if ( v33 )
          {
            if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
              if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
            }
          }
          v35 = v99;
          if ( v99 )
          {
            if ( _InterlockedExchangeAdd(v99 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
              if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
            }
          }
          v36 = (__int64 **)v29[2];
          if ( *((_BYTE *)v36 + 25) )
          {
            for ( i = (__int64 **)v29[1]; !*((_BYTE *)i + 25) && v29 == (__int64 **)i[2]; i = (__int64 **)i[1] )
              v29 = i;
            v29 = i;
          }
          else
          {
            v29 = (__int64 **)v29[2];
            for ( j = *v36; !*((_BYTE *)j + 25); j = (__int64 *)*j )
              v29 = (__int64 **)j;
          }
        }
        while ( v29 != v28 );
        v20 = v56;
      }
      v39 = *(int *)(a1 + 168);
      v55 = v39;
      if ( *(_DWORD *)(a1 + 176) == -1 )
      {
        v58 = ((__int64)((unsigned __int128)((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104))
                                           * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)
            + ((unsigned __int64)((unsigned __int128)((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104))
                                                    * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63)
            - 1;
        v39 = *(int *)(a1 + 168);
      }
      else
      {
        v58 = *(int *)(a1 + 176);
      }
      v40 = 0LL;
      v59 = 0LL;
      v41 = *(_QWORD *)(a1 + 104);
      v42 = (*(_QWORD *)(a1 + 112) - v41) / 48;
      if ( v42 )
      {
        v43 = 0LL;
        do
        {
          if ( *(_BYTE *)(v41 + v43)
            && (v40 != v39 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a2 + 96LL))(*a2, 9LL)) )
          {
            sub_1800AE8FC(a1, v40);
            v44 = *(_QWORD *)(a1 + 416);
            if ( v44 != *(_QWORD *)(a1 + 424) )
            {
              v45 = (_QWORD *)(v41 + v43 + 32);
              v46 = *(_QWORD *)(a1 + 424);
              do
              {
                *(_OWORD *)(a1 + 520) = *(_OWORD *)(a1 + 488);
                *(_OWORD *)(a1 + 504) = *(_OWORD *)(a1 + 472);
                sub_1800E206C(a1 + 504, *(_QWORD *)(v41 + v43 + 8), 0LL);
                sub_1800E206C(a1 + 504, *(_QWORD *)(v41 + v43 + 16), 1LL);
                v67 = 0LL;
                if ( *((_QWORD *)&v96 + 1) )
                  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v96 + 1) + 8LL));
                v67 = v96;
                v79[2] = 0LL;
                v79[3] = 0LL;
                sub_18001115C(v79, v44);
                sub_18008C330(v57, v79, (__int64)&v93, &v67, v45, *(_QWORD *)(v41 + v43 + 24));
                v47 = (volatile signed __int32 *)*((_QWORD *)&v67 + 1);
                if ( *((_QWORD *)&v67 + 1) )
                {
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v67 + 1) + 8LL), 0xFFFFFFFF) == 1 )
                  {
                    (**(void (__fastcall ***)(volatile signed __int32 *))v47)(v47);
                    if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
                  }
                }
                v44 += 32LL;
                v45 = (_QWORD *)(v43 + 32 + v41);
              }
              while ( v44 != v46 );
              v40 = v59;
            }
            if ( (*(_BYTE *)(a1 + 440) & 1) != 0 && v58 == v40 )
              sub_1800B0A34(a1, &v93);
          }
          v59 = ++v40;
          v43 += 48LL;
          v41 = *(_QWORD *)(a1 + 104);
          v42 = (*(_QWORD *)(a1 + 112) - v41) / 48;
          v39 = v55;
        }
        while ( v40 < v42 );
        v20 = v56;
        v24 = v60;
        v5 = a2;
      }
      (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 200LL))(a1, v42, v39);
      v92 = *v97[0];
      sub_1800A6168(v97, &v82, v92, (__int64 *)v97[0]);
      j_j__o_free(v97[0]);
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        }
      }
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        }
      }
      sub_180074950(v72);
      sub_1800F98E0(v105);
      if ( v107 >= 0x10 )
      {
        v48 = Src[0];
        if ( v107 + 1 >= 0x1000 )
        {
          v48 = (const void *)*((_QWORD *)Src[0] - 1);
          if ( (unsigned __int64)((char *)Src[0] - (char *)v48 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v48, v107 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v48);
      }
      if ( (*(_BYTE *)(a1 + 442) & 1) != 0 )
      {
        v103 = 15LL;
        v101[0] = 0;
        v102 = 7LL;
        memmove(v101, "Symbols", 7uLL);
        v101[7] = 0;
        v104[0] = 0LL;
        v104[1] = 0LL;
        sub_1800F975C(v104, &v93, v101);
        memset(v73, 0, sizeof(v73));
        v49 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v95 + 200LL))(v95, v87);
        sub_180073A84(v73, v49, (__int64)v101);
        v50 = v88;
        if ( v88 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v88 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 8LL))(v50);
        }
        sub_18006CE94(*v5);
        sub_180078230();
      }
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v5 + 112LL))(*v5, &v93);
      v75 = 0LL;
      sub_18006AAEC(v93, (__int64 *)&v75);
      v74 = 0LL;
      sub_18006AA68(v93, (__int64 *)&v74);
      v76 = 0LL;
      sub_18006AAEC(*v62, (__int64 *)&v76);
      v77 = 0LL;
      result = sub_18006AA68(*v62, (__int64 *)&v77);
      v51 = (volatile signed __int32 *)*((_QWORD *)&v96 + 1);
      if ( *((_QWORD *)&v96 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v96 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v51)(v51);
          result = (unsigned int)_InterlockedDecrement(v51 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
        }
      }
      v52 = v94;
      if ( v94 )
      {
        result = (unsigned int)_InterlockedDecrement(v94 + 2);
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v52)(v52);
          result = (unsigned int)_InterlockedDecrement(v52 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
        }
      }
      v53 = (volatile signed __int32 *)*((_QWORD *)&v95 + 1);
      if ( *((_QWORD *)&v95 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v95 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v53)(v53);
          result = (unsigned int)_InterlockedDecrement(v53 + 3);
          if ( !(_DWORD)result )
            return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
        }
      }
    }
  }
  return result;
}
