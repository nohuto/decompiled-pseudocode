/*
 * XREFs of sub_1800B4494 @ 0x1800B4494
 * Callers:
 *     sub_1800B4400 @ 0x1800B4400 (sub_1800B4400.c)
 *     sub_1800B4C00 @ 0x1800B4C00 (sub_1800B4C00.c)
 * Callees:
 *     sub_180063288 @ 0x180063288 (sub_180063288.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063440 @ 0x180063440 (sub_180063440.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_180063780 @ 0x180063780 (sub_180063780.c)
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_180077ACC @ 0x180077ACC (sub_180077ACC.c)
 *     sub_180078148 @ 0x180078148 (sub_180078148.c)
 *     sub_1800797D4 @ 0x1800797D4 (sub_1800797D4.c)
 *     sub_18007A5B0 @ 0x18007A5B0 (sub_18007A5B0.c)
 *     sub_18007C700 @ 0x18007C700 (sub_18007C700.c)
 *     sub_18009D7CC @ 0x18009D7CC (sub_18009D7CC.c)
 *     sub_1800AEB4C @ 0x1800AEB4C (sub_1800AEB4C.c)
 *     sub_1800AEB5C @ 0x1800AEB5C (sub_1800AEB5C.c)
 *     sub_1800AEB6C @ 0x1800AEB6C (sub_1800AEB6C.c)
 *     sub_1800B1368 @ 0x1800B1368 (sub_1800B1368.c)
 *     sub_1800B2F34 @ 0x1800B2F34 (sub_1800B2F34.c)
 *     sub_1800B4244 @ 0x1800B4244 (sub_1800B4244.c)
 *     sub_1800B4E44 @ 0x1800B4E44 (sub_1800B4E44.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x18012750E (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127514 (_Query_perf_frequency.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_broadcast @ 0x1801276FC (_Cnd_broadcast.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall sub_1800B4494(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax
  bool v4; // dl
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // r12d
  __int64 v12; // rbx
  __int64 *v13; // r15
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  signed __int32 v19; // eax
  signed __int32 v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rbx
  _QWORD *v25; // r8
  volatile signed __int32 *v26; // rbx
  __int64 *v27; // r13
  __int64 *i; // rsi
  volatile signed __int32 *v29; // rcx
  __int64 *v30; // rbx
  __int64 *v31; // rax
  unsigned __int64 *v32; // rax
  unsigned __int64 *v33; // rax
  unsigned __int64 *v34; // rax
  volatile signed __int32 *v35; // rbx
  volatile signed __int32 *v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // eax
  volatile signed __int32 *v40; // rbx
  int v41; // [rsp+38h] [rbp-D0h]
  __int64 *v42; // [rsp+40h] [rbp-C8h]
  __int64 v43; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B8h]
  __int64 v45; // [rsp+58h] [rbp-B0h]
  __int64 v46; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+78h] [rbp-90h] BYREF
  __int64 v49; // [rsp+80h] [rbp-88h]
  __int64 v50; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-48h]
  __int128 v56; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v58; // [rsp+E0h] [rbp-28h]
  __int64 v59; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v60; // [rsp+F0h] [rbp-18h]
  __int64 v61; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v62; // [rsp+100h] [rbp-8h]
  __int64 v63; // [rsp+108h] [rbp+0h] BYREF
  __int64 v64; // [rsp+110h] [rbp+8h]

  v45 = -2LL;
  *(_BYTE *)(a1 + 424) = 1;
  v57 = 0LL;
  v58 = 0LL;
  sub_1800B4244(a1, &v57);
  if ( v57 )
    v2 = *(_DWORD *)(v57 + 192);
  else
    v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = v3 != *(_QWORD *)(a1 + 72);
  if ( v3 != *(_QWORD *)(a1 + 72) && *(_BYTE *)(a1 + 432) )
  {
    v4 = v2 > *(_DWORD *)(a1 + 428);
    *(_DWORD *)(a1 + 428) = v2;
  }
  if ( v4 )
  {
    perf_frequency = Query_perf_frequency();
    perf_counter = Query_perf_counter();
    *(_QWORD *)(a1 + 440) = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                          + 1000000000 * (perf_counter / perf_frequency);
    v63 = 0LL;
    v64 = 0LL;
    v7 = sub_180078148(*(_QWORD *)(a1 + 24));
    sub_180063440(v7, &v63);
    v41 = 0;
    v54 = 0LL;
    v55 = 0LL;
    if ( v57 )
    {
      v8 = sub_1800632D0(v57 + 16, &v43);
      if ( &v54 != v8 )
      {
        if ( (_BYTE)v55 )
          sub_180063778(v54);
        v54 = *v8;
        LOBYTE(v55) = *((_BYTE *)v8 + 8);
        *v8 = 0LL;
        *((_BYTE *)v8 + 8) = 0;
      }
      if ( (_BYTE)v44 )
        sub_180063778(v43);
      v9 = v57;
      v41 = *(_DWORD *)(v57 + 112);
      v10 = *(_DWORD *)(a1 + 16);
      if ( v10 )
      {
        *(_DWORD *)(v57 + 112) = v10;
        v10 = *(_DWORD *)(a1 + 16);
        v9 = v57;
      }
      v11 = *(_DWORD *)(v9 + 112);
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 16);
      if ( v11 )
      {
        v10 = *(_DWORD *)(a1 + 16);
      }
      else
      {
        v11 = 1;
        v10 = 0;
      }
    }
    if ( !v10 )
      v10 = 1;
    v12 = sub_180077A8C(*(_QWORD *)(a1 + 24), v10);
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v12 + 88LL))(v12, &unk_180259C58);
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v12 + 88LL))(v12, &unk_180259C78);
    v13 = *(__int64 **)(a1 + 64);
    v14 = *(__int64 **)(a1 + 72);
    v42 = v14;
    while ( v13 != v14 )
    {
      v53 = 0LL;
      v15 = v13[1];
      if ( v15 )
      {
        while ( 1 )
        {
          v19 = *(_DWORD *)(v15 + 8);
          if ( !v19 )
            break;
          if ( v19 == _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v19 + 1, v19) )
          {
            v16 = *v13;
            v53 = *(_OWORD *)v13;
            goto LABEL_26;
          }
        }
      }
      v16 = v53;
LABEL_26:
      if ( v16 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 352LL))(v16) )
      {
        v56 = 0uLL;
        v17 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v53 + 376LL))(v53, &v48);
        v56 = 0LL;
        v18 = *(_QWORD *)(v17 + 8);
        if ( v18 )
        {
          while ( 1 )
          {
            v20 = *(_DWORD *)(v18 + 8);
            if ( !v20 )
              break;
            if ( v20 == _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 8), v20 + 1, v20) )
            {
              v56 = *(_OWORD *)v17;
              break;
            }
          }
        }
        v21 = v49;
        if ( v49 && _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 8LL))(v21, v18, v17);
        if ( (_QWORD)v56
          && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v56 + 16LL))(v56, v18, v17) )
        {
          v61 = 0LL;
          v62 = 0LL;
          sub_180063288(v56 + 24, &v61);
          v59 = 0LL;
          v60 = 0LL;
          sub_180063288(v53 + 8, &v59);
          v22 = sub_180077A8C(*(_QWORD *)(a1 + 24), v11);
          v23 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v22 + 72LL))(v22, &unk_180259CB8, 0LL);
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v53 + 304LL))(v53, v23);
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v53 + 72LL))(v53);
          v24 = v53;
          v25 = sub_180077ACC(*(_QWORD *)(a1 + 24), &v50);
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v24 + 192LL))(v24, v25);
          v26 = v51;
          if ( v51 )
          {
            if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
              if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            }
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v53 + 232LL))(v53, v11);
          v27 = *(__int64 **)(a1 + 48);
          for ( i = *(__int64 **)(a1 + 40); i != v27; i += 2 )
          {
            v29 = (volatile signed __int32 *)i[1];
            if ( v29 )
            {
              _InterlockedIncrement(v29 + 3);
              v29 = (volatile signed __int32 *)i[1];
            }
            v30 = *(__int64 **)(a1 + 88);
            v31 = (__int64 *)v30[1];
            if ( *((_BYTE *)v31 + 25) )
              goto LABEL_57;
            do
            {
              if ( v31[5] >= (unsigned __int64)v29 )
              {
                v30 = v31;
                v31 = (__int64 *)*v31;
              }
              else
              {
                v31 = (__int64 *)v31[2];
              }
            }
            while ( !*((_BYTE *)v31 + 25) );
            if ( v30 == *(__int64 **)(a1 + 88) || (unsigned __int64)v29 < v30[5] )
LABEL_57:
              v30 = *(__int64 **)(a1 + 88);
            if ( v29 && _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
            if ( v30 != *(__int64 **)(a1 + 88) )
            {
              v32 = sub_1800AEB5C(*i, &v46);
              if ( sub_18009D7CC(v32, (unsigned __int64 *)v30 + 6)
                || (v33 = sub_1800AEB4C(*i, &v47), sub_18009D7CC(v33, (unsigned __int64 *)v30 + 7))
                || (unsigned int)sub_1800AEB6C(*i) != *((_DWORD *)v30 + 16) )
              {
                sub_1800B1368(*i, v30[6], v30[7], *((_DWORD *)v30 + 16));
              }
            }
          }
          (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 24) + 48LL))(*(_QWORD *)(a1 + 24), &v53);
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v53 + 240LL))(v53, v11);
          sub_18007A5B0(*(_QWORD **)(a1 + 24), (__int64)&v57, a1 + 40, &v53);
          sub_1800797D4(*(_QWORD **)(a1 + 24), &v56, &v53, (__int64)&v59, (__int64)&v61, (__int64)&v54);
          (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 24) + 56LL))(*(_QWORD *)(a1 + 24), &v53);
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v53 + 248LL))(v53);
          v34 = sub_1800B2F34(&v52, v13);
          sub_18007C700(*(_QWORD *)(a1 + 24), v34);
          if ( (_BYTE)v60 )
            sub_180063778(v59);
          if ( (_BYTE)v62 )
            sub_180063778(v61);
          v14 = v42;
        }
        v35 = (volatile signed __int32 *)*((_QWORD *)&v56 + 1);
        if ( *((_QWORD *)&v56 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v56 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64))v35)(v35, v18, v17);
            if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
          }
        }
      }
      v36 = (volatile signed __int32 *)*((_QWORD *)&v53 + 1);
      if ( *((_QWORD *)&v53 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v36)(v36);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
        }
      }
      v13 += 2;
    }
    if ( v57 )
      *(_DWORD *)(v57 + 112) = v41;
    v37 = Query_perf_frequency();
    v38 = Query_perf_counter();
    sub_1800B4E44(a1, 1000000000 * (v38 % v37) / v37 + 1000000000 * (v38 / v37) - *(_QWORD *)(a1 + 440));
    if ( (_BYTE)v55 )
      sub_180063778(v54);
    if ( (_BYTE)v64 )
      sub_180063780(v63);
  }
  *(_BYTE *)(a1 + 424) = 0;
  v39 = Cnd_broadcast((_Cnd_t)(a1 + 280));
  if ( v39 )
    std::_Throw_C_error(v39);
  v40 = v58;
  if ( v58 && !_InterlockedDecrement(v58 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v40)(v40);
    if ( !_InterlockedDecrement(v40 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
  }
}
