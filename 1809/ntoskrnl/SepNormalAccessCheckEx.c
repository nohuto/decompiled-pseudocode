/*
 * XREFs of SepNormalAccessCheckEx @ 0x14015C3D4
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

void __fastcall SepNormalAccessCheckEx(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        unsigned __int8 a11,
        char a12,
        char a13,
        _DWORD *a14,
        char a15)
{
  unsigned int v15; // ebp
  int v17; // r14d
  int v18; // edx
  __int64 v19; // rsi
  _DWORD *v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // r13
  char v24; // bl
  unsigned int v25; // r12d
  __int64 v26; // rdi
  bool v27; // zf
  int v28; // ecx
  char v29; // al
  bool v30; // zf
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdi
  _DWORD *v35; // rbx
  int v36; // eax
  int v37; // edx
  __int64 v38; // r8
  __int64 v39; // rbx
  __int64 v40; // rcx
  bool v41; // zf
  unsigned int v42; // ebx
  _QWORD *v43; // rax
  __int64 v44; // r11
  __int64 v45; // r10
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // edx
  __int64 v49; // rcx
  unsigned int v50; // ebx
  _QWORD *v51; // rax
  __int64 v52; // r11
  __int64 v53; // r10
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned int v56; // edx
  __int64 v57; // rcx
  unsigned int v58; // [rsp+60h] [rbp-48h]
  int v59; // [rsp+64h] [rbp-44h]
  int v60; // [rsp+B8h] [rbp+10h]
  unsigned int v62; // [rsp+C8h] [rbp+20h] BYREF

  v15 = a8;
  v17 = 0;
  v18 = *(_DWORD *)(a2 + 200) & 0x2000;
  v19 = a9;
  v59 = v18;
  v58 = *(unsigned __int16 *)(a4 + 4);
  if ( a8 )
  {
    v21 = (_DWORD *)(a9 + 24);
    v22 = a8;
    do
    {
      *v21 = a1;
      v21 += 12;
      --v22;
    }
    while ( v22 );
  }
  v23 = a14;
  v24 = a11;
  if ( !v18 && !a11 )
    v17 = a1 | *a14;
  v25 = 0;
  v60 = v17;
  v26 = a4 + 8;
  v27 = v58 == 0;
  if ( v58 )
  {
    while ( 1 )
    {
      v28 = *(_DWORD *)(v19 + 24);
      if ( !v28 && !v17 )
      {
LABEL_20:
        v27 = v25 == v58;
        break;
      }
      if ( (*(_BYTE *)(v26 + 1) & 8) == 0 )
      {
        if ( !v28 )
        {
          if ( !*(_BYTE *)v26 )
          {
LABEL_10:
            v30 = v18 == 0;
LABEL_11:
            if ( v30 && !v24 && v17 )
            {
              if ( SepIsPackageSid(v26 + 8) )
              {
                v35 = v23 + 1;
                SepMatchPackage(
                  a2,
                  v60,
                  v26 + 8,
                  *(_DWORD *)(v26 + 4),
                  (_BYTE *)v23 + 21,
                  v23 + 1,
                  (_BYTE *)v23 + 20,
                  v23 + 4,
                  (_BYTE *)v23 + 24);
LABEL_37:
                v36 = ~*v35;
                v17 &= v36;
                *v23 &= v36;
LABEL_38:
                v24 = a11;
                goto LABEL_17;
              }
              if ( SepIsCapabilitySid(v26 + 8) )
              {
                v35 = v23 + 2;
                SepMatchCapability(a2, v60, (void *)(v26 + 8), *(_DWORD *)(v26 + 4), (_BYTE *)v23 + 22, v23 + 2);
                goto LABEL_37;
              }
              v15 = a8;
            }
            if ( !*(_DWORD *)(v19 + 24) )
              goto LABEL_17;
            v31 = v26 + 8;
LABEL_14:
            v32 = a2;
LABEL_15:
            if ( (unsigned __int8)SepSidInToken(v32, 0LL, v31, 0LL, v24, a12, a15) )
              AuthzBasepAddAccessTypeList(v19, v15, 0, v25, *(_DWORD *)(v26 + 4), 0);
            goto LABEL_17;
          }
          if ( *(_BYTE *)v26 != 9 )
            goto LABEL_17;
        }
        v29 = *(_BYTE *)v26;
        if ( !*(_BYTE *)v26 )
          goto LABEL_10;
        switch ( v29 )
        {
          case 5:
            v37 = *(_DWORD *)(v26 + 8);
            v38 = v37 & 1;
            v39 = (v26 + 12) & -(__int64)((v37 & 1) != 0);
            if ( v39 )
            {
              if ( a10
                && (unsigned __int8)SepSidInToken(
                                      a2,
                                      0LL,
                                      v26 + ((8LL * (v37 & 2)) | 0xC) + 16 * v38,
                                      0LL,
                                      a11,
                                      a12,
                                      a15)
                && (unsigned __int8)AuthzBasepObjectInTypeList(v39, v19, v15, &v62) )
              {
                AuthzBasepAddAccessTypeList(v19, v15, v62, v25, *(_DWORD *)(v26 + 4), 0);
              }
              goto LABEL_38;
            }
            v24 = a11;
            v31 = v26 + ((8LL * (v37 & 2)) | 0xC) + 16 * v38;
            goto LABEL_14;
          case 4:
            if ( !(unsigned __int8)SepSidInToken(
                                     a2,
                                     0LL,
                                     v26 + 4 * (*(unsigned __int8 *)(v26 + 13) + 5LL),
                                     0LL,
                                     v24,
                                     a12,
                                     a15) )
              break;
            v32 = a3;
            v31 = v26 + 12;
            goto LABEL_15;
          case 1:
LABEL_58:
            LOBYTE(a4) = 1;
            if ( (unsigned __int8)SepSidInToken(a2, 0LL, v26 + 8, a4, v24, a12, 0)
              && (*(_DWORD *)(v19 + 24) & *(_DWORD *)(v26 + 4)) != 0 )
            {
              AuthzBasepSetAccessReasons(
                *(_DWORD *)(v19 + 24) & *(_DWORD *)(v26 + 4),
                0x20000,
                v25,
                *(_QWORD *)(v19 + 40),
                0);
              goto LABEL_20;
            }
            break;
          case 6:
            LOBYTE(a4) = 1;
            if ( !(unsigned __int8)SepSidInToken(
                                     a2,
                                     0LL,
                                     v26
                                   + ((8LL * (*(_DWORD *)(v26 + 8) & 2)) | 0xC)
                                   + 16LL * (*(_DWORD *)(v26 + 8) & 1),
                                     a4,
                                     v24,
                                     a12,
                                     0) )
              break;
            v40 = (v26 + 12) & -(__int64)((*(_DWORD *)(v26 + 8) & 1) != 0);
            if ( v40 && a10 )
            {
              if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v40, v19, v15, &v62) )
                break;
              v41 = (*(_DWORD *)(v19 + 48LL * v62 + 24) & *(_DWORD *)(v26 + 4)) == 0;
            }
            else
            {
              v41 = (*(_DWORD *)(v26 + 4) & *(_DWORD *)(v19 + 24)) == 0;
            }
            if ( !v41 )
              goto LABEL_20;
            break;
          case 9:
            v42 = 4 * *(unsigned __int8 *)(v26 + 9) + 8;
            if ( *(unsigned __int16 *)(v26 + 2) - v42 == 8 )
              goto LABEL_38;
            if ( a5 && !*a6 )
              AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
            v43 = *(_QWORD **)(a2 + 1096);
            if ( v43 )
              v44 = v43[75];
            else
              v44 = 0LL;
            if ( v43 )
              v45 = v43[73];
            else
              v45 = 0LL;
            if ( v43 )
              v46 = v43[74];
            else
              v46 = 0LL;
            if ( v43 )
              v47 = v43[72];
            else
              v47 = 0LL;
            v48 = *(unsigned __int16 *)(v26 + 2) - v42 - 8;
            v49 = v42;
            v24 = a11;
            AuthzBasepEvaluateAceCondition(
              a2,
              *(_QWORD *)(a2 + 776),
              *a6,
              v47,
              v46,
              v45,
              v44,
              (_DWORD *)(v26 + v49 + 8),
              v48,
              0,
              a11,
              &a7);
            if ( a7 == 1 )
            {
              v30 = v59 == 0;
              goto LABEL_11;
            }
            break;
          default:
            if ( a13 && v29 == 10 && KeGetCurrentIrql() < 2u )
            {
              v50 = 4 * *(unsigned __int8 *)(v26 + 9) + 8;
              if ( *(unsigned __int16 *)(v26 + 2) - v50 == 8 )
                goto LABEL_38;
              if ( a5 && !*a6 )
                AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
              v51 = *(_QWORD **)(a2 + 1096);
              v52 = v51 ? v51[75] : 0LL;
              v53 = v51 ? v51[73] : 0LL;
              v54 = v51 ? v51[74] : 0LL;
              v55 = v51 ? v51[72] : 0LL;
              v56 = *(unsigned __int16 *)(v26 + 2) - v50 - 8;
              v57 = v50;
              v24 = a11;
              AuthzBasepEvaluateAceCondition(
                a2,
                *(_QWORD *)(a2 + 776),
                *a6,
                v55,
                v54,
                v53,
                v52,
                (_DWORD *)(v26 + v57 + 8),
                v56,
                1u,
                a11,
                &a7);
              if ( ((a7 + 1) & 0xFFFFFFFD) == 0 )
                goto LABEL_58;
            }
            break;
        }
      }
LABEL_17:
      ++v25;
      v15 = a8;
      v26 += *(unsigned __int16 *)(v26 + 2);
      v27 = v25 == v58;
      if ( v25 >= v58 )
        break;
      v18 = v59;
    }
  }
  if ( v27 )
  {
    v33 = v19 + 24;
    if ( *(_DWORD *)(v19 + 24) )
    {
      if ( v15 )
      {
        v34 = v15;
        do
        {
          AuthzBasepSetAccessReasons(*(_DWORD *)v33, 0x800000, 0, *(_QWORD *)(v33 + 16), 0);
          v33 += 48LL;
          --v34;
        }
        while ( v34 );
      }
    }
  }
}
