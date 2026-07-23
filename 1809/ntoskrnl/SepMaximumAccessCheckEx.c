/*
 * XREFs of SepMaximumAccessCheckEx @ 0x14015C2B4
 * Callers:
 *     SepAccessCheckEx @ 0x14015BED8 (SepAccessCheckEx.c)
 * Callees:
 *     SepSidInToken @ 0x140013310 (SepSidInToken.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 *     SepMatchPackage @ 0x1400ABB0C (SepMatchPackage.c)
 *     AuthzBasepAddAccessTypeList @ 0x14011472C (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepSetAccessReasons @ 0x140114820 (AuthzBasepSetAccessReasons.c)
 *     SepIsPackageSid @ 0x14011F570 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140120E2C (SepIsCapabilitySid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401215CC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepMatchCapability @ 0x140122730 (SepMatchCapability.c)
 *     AuthzBasepObjectInTypeList @ 0x140325140 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        char a13,
        __int64 a14,
        char a15)
{
  char v15; // si
  __int64 v18; // r14
  int v19; // ecx
  __int64 v20; // rbp
  __int64 result; // rax
  unsigned int v22; // r12d
  char *v23; // rdi
  __int64 v24; // r13
  char v25; // al
  char v26; // al
  unsigned int v27; // r8d
  __int64 v28; // rbx
  __int64 v29; // rsi
  int v30; // edx
  int v31; // r8d
  void *v32; // rsi
  _DWORD *v33; // rbx
  int v34; // edx
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // r8
  char v38; // bl
  __int64 v39; // r9
  int v40; // ecx
  unsigned int v41; // ebx
  _QWORD *v42; // rax
  __int64 v43; // r11
  __int64 v44; // r10
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int v47; // ebx
  _QWORD *v48; // rax
  __int64 v49; // r11
  __int64 v50; // r10
  __int64 v51; // r8
  __int64 v52; // r9
  _DWORD *v53; // rcx
  int v54; // edx
  __int64 v55; // r8
  int v56; // [rsp+28h] [rbp-90h]
  unsigned int v57; // [rsp+60h] [rbp-58h]
  unsigned int v58; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v59; // [rsp+C8h] [rbp+10h]
  int v60; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v61; // [rsp+D8h] [rbp+20h]

  v61 = a4;
  v59 = a2;
  v15 = a11;
  v18 = a8;
  v19 = *(_DWORD *)(a1 + 200) & 0x2000;
  v20 = a7;
  a6 = v19;
  if ( a11 && a7 )
  {
    v28 = a8 + 28;
    v29 = a7;
    do
    {
      AuthzBasepSetAccessReasons(*(_DWORD *)v28, 0x800000, 0, *(_QWORD *)(v28 + 12), 1);
      v30 = *(_DWORD *)v28;
      *(_DWORD *)v28 &= v31;
      *(_DWORD *)(v28 - 4) = v30;
      v28 += 48LL;
      --v29;
    }
    while ( v29 );
    v15 = a11;
    v19 = a6;
    a4 = v61;
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v22 = 0;
  v23 = (char *)(a3 + 8);
  v57 = result;
  if ( (_DWORD)result )
  {
    v24 = a14;
    do
    {
      if ( (v23[1] & 8) != 0 )
        goto LABEL_12;
      v25 = *v23;
      if ( *v23 )
      {
        if ( v25 == 5 )
        {
          v34 = *((_DWORD *)v23 + 2);
          v35 = v34 & 1;
          v36 = (unsigned __int64)(v23 + 12) & -(__int64)((v34 & 1) != 0);
          if ( v36 )
          {
            if ( !a9
              || !(unsigned __int8)SepSidInToken(
                                     a1,
                                     0LL,
                                     (__int64)&v23[16 * v35 + ((8LL * (v34 & 2)) | 0xC)],
                                     0LL,
                                     v15,
                                     a12,
                                     a15)
              || !(unsigned __int8)AuthzBasepObjectInTypeList(v36, v18, (unsigned int)v20, &v58) )
            {
              goto LABEL_12;
            }
            v56 = 1;
            goto LABEL_35;
          }
          v37 = (__int64)&v23[16 * v35 + ((8LL * (v34 & 2)) | 0xC)];
LABEL_30:
          v26 = SepSidInToken(a1, 0LL, v37, 0LL, v15, a12, a15);
          goto LABEL_8;
        }
        if ( v25 != 4 )
        {
          if ( v25 == 1 )
            goto LABEL_90;
          if ( v25 == 6 )
          {
            LOBYTE(a4) = 1;
            if ( !(unsigned __int8)SepSidInToken(
                                     a1,
                                     0LL,
                                     (__int64)&v23[16 * (*((_DWORD *)v23 + 2) & 1)
                                                 + ((8LL * (*((_DWORD *)v23 + 2) & 2)) | 0xC)],
                                     a4,
                                     v15,
                                     a12,
                                     0) )
              goto LABEL_12;
            if ( ((unsigned __int64)(v23 + 12) & -(__int64)((*((_DWORD *)v23 + 2) & 1) != 0)) != 0 )
            {
              if ( !a9 )
              {
                v39 = *(_QWORD *)(v18 + 40);
                v40 = *((_DWORD *)v23 + 1) & ~*(_DWORD *)(v18 + 28);
                *(_DWORD *)(v18 + 32) |= v40;
                AuthzBasepSetAccessReasons(v40, 0x20000, v22, v39, 0);
                goto LABEL_12;
              }
              if ( !(unsigned __int8)AuthzBasepObjectInTypeList(
                                       (unsigned __int64)(v23 + 12) & -(__int64)((*((_DWORD *)v23 + 2) & 1) != 0),
                                       v18,
                                       (unsigned int)v20,
                                       &v58) )
                goto LABEL_12;
              v56 = 2;
LABEL_35:
              v27 = v58;
LABEL_11:
              AuthzBasepAddAccessTypeList(v18, (unsigned int)v20, v27, v22, *((_DWORD *)v23 + 1), v56);
              goto LABEL_12;
            }
LABEL_91:
            v56 = 2;
LABEL_10:
            v27 = 0;
            goto LABEL_11;
          }
          if ( v25 != 9 )
          {
            if ( !a13 )
              goto LABEL_12;
            if ( v25 != 10 )
              goto LABEL_12;
            if ( KeGetCurrentIrql() >= 2u )
              goto LABEL_12;
            v47 = 4 * (unsigned __int8)v23[9] + 8;
            if ( *((unsigned __int16 *)v23 + 1) - v47 == 8 )
              goto LABEL_12;
            if ( a4 && !*a5 )
              AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
            v48 = *(_QWORD **)(a1 + 1096);
            v49 = v48 ? v48[75] : 0LL;
            v50 = v48 ? v48[73] : 0LL;
            v51 = v48 ? v48[74] : 0LL;
            v52 = v48 ? v48[72] : 0LL;
            AuthzBasepEvaluateAceCondition(
              a1,
              *(_QWORD *)(a1 + 776),
              *a5,
              v52,
              v51,
              v50,
              v49,
              &v23[v47 + 8],
              *((unsigned __int16 *)v23 + 1) - v47 - 8,
              1u,
              v15,
              &v60);
            if ( ((v60 + 1) & 0xFFFFFFFD) != 0 )
              goto LABEL_12;
LABEL_90:
            LOBYTE(a4) = 1;
            if ( !(unsigned __int8)SepSidInToken(a1, 0LL, (__int64)(v23 + 8), a4, v15, a12, 0) )
              goto LABEL_12;
            goto LABEL_91;
          }
          v41 = 4 * (unsigned __int8)v23[9] + 8;
          if ( *((unsigned __int16 *)v23 + 1) - v41 == 8 )
            goto LABEL_12;
          if ( a4 && !*a5 )
            AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
          v42 = *(_QWORD **)(a1 + 1096);
          v43 = v42 ? v42[75] : 0LL;
          v44 = v42 ? v42[73] : 0LL;
          v45 = v42 ? v42[74] : 0LL;
          v46 = v42 ? v42[72] : 0LL;
          AuthzBasepEvaluateAceCondition(
            a1,
            *(_QWORD *)(a1 + 776),
            *a5,
            v46,
            v45,
            v44,
            v43,
            &v23[v41 + 8],
            *((unsigned __int16 *)v23 + 1) - v41 - 8,
            0,
            v15,
            &v60);
          if ( v60 != 1 )
            goto LABEL_12;
          if ( !a6 && !v15 )
          {
            v32 = v23 + 8;
            if ( SepIsPackageSid((__int64)(v23 + 8)) )
            {
LABEL_23:
              v33 = (_DWORD *)(v24 + 4);
              SepMatchPackage(
                a1,
                -1,
                (__int64)v32,
                *((_DWORD *)v23 + 1),
                (_BYTE *)(v24 + 21),
                (_DWORD *)(v24 + 4),
                (_BYTE *)(v24 + 20),
                (_DWORD *)(v24 + 16),
                (_BYTE *)(v24 + 24));
LABEL_25:
              v15 = a11;
              *(_DWORD *)v24 &= ~*v33;
              goto LABEL_12;
            }
            if ( SepIsCapabilitySid((__int64)(v23 + 8)) )
              goto LABEL_24;
            v15 = a11;
          }
          v37 = (__int64)(v23 + 8);
          goto LABEL_30;
        }
        v38 = a12;
        if ( !(unsigned __int8)SepSidInToken(
                                 a1,
                                 0LL,
                                 (__int64)&v23[4 * (unsigned __int8)v23[13] + 20],
                                 0LL,
                                 v15,
                                 a12,
                                 a15) )
          goto LABEL_12;
        v26 = SepSidInToken(v59, 0LL, (__int64)(v23 + 12), 0LL, 0, v38, a15);
      }
      else
      {
        if ( !v19 && !v15 )
        {
          v32 = v23 + 8;
          if ( SepIsPackageSid((__int64)(v23 + 8)) )
            goto LABEL_23;
          if ( SepIsCapabilitySid((__int64)(v23 + 8)) )
          {
LABEL_24:
            v33 = (_DWORD *)(v24 + 8);
            SepMatchCapability(a1, -1, v32, *((_DWORD *)v23 + 1), (_BYTE *)(v24 + 22), (_DWORD *)(v24 + 8));
            goto LABEL_25;
          }
          v15 = a11;
        }
        v26 = SepSidInToken(a1, 0LL, (__int64)(v23 + 8), 0LL, v15, a12, a15);
      }
LABEL_8:
      if ( v26 )
      {
        v56 = 1;
        goto LABEL_10;
      }
LABEL_12:
      result = *((unsigned __int16 *)v23 + 1);
      ++v22;
      v19 = a6;
      v23 += result;
      a4 = v61;
    }
    while ( v22 < v57 );
  }
  if ( v15 && (_DWORD)v20 )
  {
    v53 = (_DWORD *)(v18 + 28);
    v54 = ~a10;
    v55 = v20;
    do
    {
      result = *(v53 - 1) & (*v53 | (unsigned int)v54);
      *v53 = result;
      v53 += 12;
      --v55;
    }
    while ( v55 );
  }
  return result;
}
