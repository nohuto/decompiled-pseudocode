/*
 * XREFs of sub_18009DF60 @ 0x18009DF60
 * Callers:
 *     sub_18003BFB0 @ 0x18003BFB0 (sub_18003BFB0.c)
 *     sub_180064C9C @ 0x180064C9C (sub_180064C9C.c)
 *     sub_18009DE28 @ 0x18009DE28 (sub_18009DE28.c)
 *     sub_18009E958 @ 0x18009E958 (sub_18009E958.c)
 *     sub_1800B8654 @ 0x1800B8654 (sub_1800B8654.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 *     sub_1800DCAC0 @ 0x1800DCAC0 (sub_1800DCAC0.c)
 *     sub_1801040CC @ 0x1801040CC (sub_1801040CC.c)
 * Callees:
 *     sub_18000D458 @ 0x18000D458 (sub_18000D458.c)
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_18002DC38 @ 0x18002DC38 (sub_18002DC38.c)
 *     sub_18003107C @ 0x18003107C (sub_18003107C.c)
 *     sub_1800642F0 @ 0x1800642F0 (sub_1800642F0.c)
 *     sub_180064320 @ 0x180064320 (sub_180064320.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_18007B178 @ 0x18007B178 (sub_18007B178.c)
 *     sub_18009D00C @ 0x18009D00C (sub_18009D00C.c)
 *     sub_18009D228 @ 0x18009D228 (sub_18009D228.c)
 *     sub_18009E760 @ 0x18009E760 (sub_18009E760.c)
 *     sub_18009E7AC @ 0x18009E7AC (sub_18009E7AC.c)
 *     sub_18009ECD4 @ 0x18009ECD4 (sub_18009ECD4.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     j_??2@YAPEAX_K@Z @ 0x1801265B0 (j_--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18009DF60(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        const void *a8,
        size_t Size,
        __int64 a10)
{
  __int64 v11; // r13
  __int64 v12; // rsi
  unsigned __int64 v13; // r15
  __int64 v14; // rbx
  _QWORD *v15; // rax
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  __int64 *v17; // rcx
  char v18; // di
  int **v19; // r12
  int *v20; // rax
  int *v21; // rcx
  unsigned __int64 v22; // r14
  __int64 v23; // rdi
  char v24; // si
  __int64 *v25; // rbx
  __int64 *v26; // r13
  volatile signed __int32 *v27; // rdi
  __int64 v28; // rsi
  int *v29; // rbx
  int v30; // esi
  int v31; // r8d
  int v32; // edx
  char *v33; // rdi
  __int64 i; // rcx
  unsigned int v35; // ecx
  unsigned int v36; // edx
  void *v37; // rax
  void *v38; // rsi
  void *v39; // rbx
  void (__fastcall ***v40)(_QWORD, __int64); // rax
  void (__fastcall ***v41)(_QWORD, __int64); // rdi
  void (__fastcall ****v42)(_QWORD, __int64); // rdx
  void (__fastcall ***v43)(_QWORD, __int64); // rcx
  int *v44; // rax
  int v45; // edx
  int v46; // ecx
  __m128 v47; // xmm1
  __m128 v48; // xmm0
  __int64 result; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  __int64 *v53; // rax
  __int64 *v54; // rax
  __int64 v55; // [rsp+20h] [rbp-E0h]
  char v56; // [rsp+40h] [rbp-C0h]
  __int64 v57; // [rsp+48h] [rbp-B8h]
  const void *v59; // [rsp+58h] [rbp-A8h]
  _QWORD v60[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+70h] [rbp-90h] BYREF
  __int64 v62; // [rsp+78h] [rbp-88h] BYREF
  __int64 v63; // [rsp+80h] [rbp-80h]
  volatile signed __int32 *v64; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+90h] [rbp-70h]
  char v66; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v67[2]; // [rsp+A0h] [rbp-60h]
  char v68; // [rsp+A8h] [rbp-58h] BYREF
  int v69; // [rsp+F8h] [rbp-8h]
  int v70; // [rsp+FCh] [rbp-4h]
  int v71; // [rsp+100h] [rbp+0h]
  __int64 v72[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v73[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v74[4]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v75[4]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v76[8]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v78; // [rsp+210h] [rbp+110h] BYREF
  int v79; // [rsp+218h] [rbp+118h] BYREF
  int v80; // [rsp+220h] [rbp+120h] BYREF
  int v81; // [rsp+228h] [rbp+128h]
  __int64 *v82; // [rsp+230h] [rbp+130h] BYREF
  __int64 *v83; // [rsp+238h] [rbp+138h]
  __int64 v84; // [rsp+240h] [rbp+140h]
  _BYTE v85[24]; // [rsp+248h] [rbp+148h] BYREF
  __int64 v86; // [rsp+260h] [rbp+160h]
  __int64 v87; // [rsp+270h] [rbp+170h]

  v65 = -2LL;
  v11 = a1;
  v79 = a2;
  v78 = a3;
  v80 = a4;
  v12 = (__int64)a8;
  v59 = a8;
  v13 = (unsigned int)Size;
  v81 = Size;
  v14 = a10;
  v15 = (_QWORD *)(a1 + 136);
  v16 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 136);
  *v15 = 0LL;
  if ( v16 )
    (**v16)(v16, 1LL);
  if ( a4 )
  {
    v17 = sub_18002DC38(&v61, &v79, &v78, &v80, &a5, &a7, &a6);
    v18 = 2;
  }
  else
  {
    v17 = sub_18009D00C(&v62, &v79, &v78, &a5, &a7, &a6);
    v18 = 1;
  }
  v19 = (int **)(v11 + 128);
  if ( (__int64 *)(v11 + 128) != v17 )
  {
    v20 = (int *)*v17;
    *v17 = 0LL;
    v21 = *v19;
    *v19 = v20;
    if ( v21 )
      j__o_free(v21);
  }
  if ( (v18 & 2) != 0 )
  {
    v18 &= ~2u;
    if ( v61 )
      j__o_free(v61);
  }
  if ( (v18 & 1) != 0 && v62 )
    j__o_free(v62);
  v22 = v13;
  sub_18009E760(v85, *v19, v12, v13, v55);
  if ( v14 )
    sub_180064574(v11, 1, 1);
  v23 = sub_1800642F0(v11);
  v57 = v23;
  v24 = 0;
  v56 = 0;
  if ( sub_180064320(v11, 1) )
  {
    if ( v14 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14) )
      {
        sub_18000E498(v73);
        v54 = sub_18000E498(v72);
        sub_18006575C(v76, v54, 636LL, (__int64)v73, 0);
        throw (Spectre::Engine::EngineException *)v76;
      }
      sub_18009E7AC(v11, v85, v14);
      sub_180064574(v11, 2, 0);
      sub_180064574(v11, 4, 0);
      v24 = 1;
    }
    else
    {
      v82 = 0LL;
      v83 = 0LL;
      v84 = 0LL;
      sub_18007B178(v23, &v82);
      v25 = v82;
      v26 = v83;
      if ( v82 != v83 )
      {
        do
        {
          v63 = 0LL;
          v64 = 0LL;
          v27 = (volatile signed __int32 *)v25[1];
          if ( v27 )
          {
            _InterlockedIncrement(v27 + 2);
            v27 = (volatile signed __int32 *)v25[1];
          }
          v28 = *v25;
          v63 = v28;
          v64 = v27;
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28) )
          {
            if ( v27 )
            {
              if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
                if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
              }
            }
            v24 = v56;
          }
          else
          {
            sub_18009E7AC(a1, v85, v28);
            v24 = 1;
            v56 = 1;
            if ( v27 )
            {
              if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
                if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
              }
            }
          }
          v25 += 2;
        }
        while ( v25 != v26 );
        LODWORD(v13) = v81;
        v23 = v57;
      }
      sub_180011388((__int64 *)&v82);
      v11 = a1;
    }
  }
  if ( v59 && (*(_DWORD *)(v23 + 552) == 1 || !v24) )
  {
    v29 = *v19;
    v30 = (*v19)[1];
    v31 = sub_18003107C((*v19)[4], **v19);
    v32 = 0;
    if ( v29[4] == 23 )
    {
      v36 = v30 + ((unsigned int)(v30 + 1) >> 1);
    }
    else
    {
      v67[0] = 0;
      v67[1] = 1;
      v33 = &v68;
      for ( i = 20LL; i; --i )
      {
        *(_DWORD *)v33 = 1;
        v33 += 4;
      }
      v69 = 4;
      v70 = 1;
      v71 = 1;
      v35 = v67[v29[4]];
      if ( !v35 )
      {
LABEL_48:
        if ( (v29[5] & 0x10) != 0 )
          v32 *= 6;
        if ( v29[2] * v32 != (_DWORD)v13 )
        {
          sub_18000E498(v75);
          v53 = sub_18000E498(v74);
          sub_18006575C(pExceptionObject, v53, 687LL, (__int64)v75, 1);
          throw (Spectre::Engine::EngineException *)pExceptionObject;
        }
        v37 = operator new(v22);
        v38 = v37;
        if ( v37 )
          memset(v37, 0, v22);
        else
          v38 = 0LL;
        v39 = v38;
        sub_18000D458(v38, v22, v59, v22);
        v40 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x40uLL);
        v60[1] = v40;
        if ( v40 )
        {
          v39 = 0LL;
          v60[0] = v38;
          v40 = (void (__fastcall ***)(_QWORD, __int64))sub_18009D228((__int64)v40, (__int64)v85, v60, v22);
          v38 = 0LL;
        }
        v41 = v40;
        v42 = (void (__fastcall ****)(_QWORD, __int64))(v11 + 136);
        if ( (char *)(v11 + 136) != &v66 )
        {
          v41 = 0LL;
          v43 = *v42;
          *v42 = v40;
          if ( !v43 )
          {
LABEL_61:
            if ( v38 )
              j_j__o_free(v39);
            goto LABEL_63;
          }
          (**v43)(v43, 1LL);
          v40 = 0LL;
        }
        if ( v40 )
          (**v41)(v41, 1LL);
        goto LABEL_61;
      }
      v36 = (v35 + v30 - 1) / v35;
    }
    v32 = v31 * v36;
    goto LABEL_48;
  }
LABEL_63:
  v44 = *v19;
  if ( *v19 )
    v45 = *v44;
  else
    v45 = 0;
  if ( v44 )
    v46 = v44[1];
  else
    v46 = 0;
  v47 = 0LL;
  v47.m128_f32[0] = (float)v45;
  v48 = 0LL;
  v48.m128_f32[0] = (float)v46;
  result = sub_18009ECD4(v11, _mm_unpacklo_ps(v47, v48).m128_u64[0]);
  v50 = v86;
  if ( v86 )
  {
    v51 = (v87 - v86) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v51 >= 0x1000 )
    {
      v52 = v51 + 39;
      v50 = *(_QWORD *)(v86 - 8);
      if ( (unsigned __int64)(v86 - v50 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v50, v52);
        __debugbreak();
      }
    }
    return j_j__o_free(v50);
  }
  return result;
}
