/*
 * XREFs of SepCopyTokenAccessInformation @ 0x1405C00C8
 * Callers:
 *     NtQueryInformationToken @ 0x14062B780 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 * Callees:
 *     SeQueryMandatoryPolicyToken @ 0x14001428C (SeQueryMandatoryPolicyToken.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1400142C0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     RtlSidHashInitialize @ 0x1400CC4C0 (RtlSidHashInitialize.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1405C0698 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 *     RtlCopySidAndAttributesArray @ 0x14062DDC0 (RtlCopySidAndAttributesArray.c)
 */

__int64 __fastcall SepCopyTokenAccessInformation(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13,
        char a14,
        unsigned __int8 *Src)
{
  int v18; // r12d
  int v19; // r9d
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rcx
  char *v23; // rsi
  int v24; // eax
  __int64 v25; // r15
  unsigned __int64 *Hash; // rcx
  __int64 v27; // rdx
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  _QWORD *v36; // rbx
  _QWORD *v37; // r15
  ULONG v38; // ecx
  _QWORD *v39; // rbx
  _QWORD *v40; // r15
  ULONG v41; // ecx
  __int64 v42; // rax
  char *v43; // rbx
  char *v44; // r15
  __int64 v45; // r15
  char *v46; // rbx
  char *v47; // rbx
  int v48; // eax
  char *v49; // rdx
  unsigned __int64 *v51; // rcx
  __int64 v52; // rdx
  _OWORD *v53; // rax
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  unsigned __int64 *v61; // rcx
  __int64 v62; // rdx
  _OWORD *v63; // rax
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  PSID RemainingSidArea; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v72; // [rsp+48h] [rbp-B8h]
  unsigned int v73; // [rsp+4Ch] [rbp-B4h]
  unsigned int v74; // [rsp+50h] [rbp-B0h]
  unsigned int v75; // [rsp+54h] [rbp-ACh]
  unsigned int v76; // [rsp+58h] [rbp-A8h]
  unsigned int v77; // [rsp+5Ch] [rbp-A4h]
  unsigned int v78; // [rsp+60h] [rbp-A0h]
  unsigned int v79; // [rsp+64h] [rbp-9Ch]
  int v80; // [rsp+68h] [rbp-98h]
  _SID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+70h] [rbp-90h] BYREF

  v72 = a7;
  v76 = a8;
  v74 = a9;
  v73 = a10;
  v77 = a11;
  v78 = a12;
  v79 = a13;
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 200);
  v80 = a4;
  v18 = a2 + a3;
  v75 = a5;
  SeQueryMandatoryPolicyToken(a1, (_DWORD *)(a2 + 40));
  v22 = *(_QWORD *)(v21 + 1080);
  v23 = 0LL;
  v24 = 0;
  if ( v22 )
    v24 = *(_DWORD *)(v22 + 40);
  *(_DWORD *)(a2 + 48) = v24;
  v25 = a2 + 360;
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a1 + 124);
  *(_QWORD *)(a2 + 96) = a2 + 360;
  *(_QWORD *)a2 = a2 + 88;
  RtlCopySidAndAttributesArray(
    *(_DWORD *)(a1 + 124),
    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
    v19 - v20,
    (PSID_AND_ATTRIBUTES)(a2 + 360),
    (PSID)(a2 + 360 + v20),
    &RemainingSidArea,
    (PULONG)&RemainingSidArea);
  RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 152), *(_DWORD *)(a1 + 124), &SidAttrHash);
  memset((void *)(a2 + 88), 0, 0x110uLL);
  Hash = SidAttrHash.Hash;
  v27 = 2LL;
  *(_DWORD *)(a2 + 88) = SidAttrHash.SidCount;
  v28 = (_OWORD *)(a2 + 104);
  do
  {
    v29 = *((_OWORD *)Hash + 1);
    *v28 = *(_OWORD *)Hash;
    v30 = *((_OWORD *)Hash + 2);
    v28[1] = v29;
    v31 = *((_OWORD *)Hash + 3);
    v28[2] = v30;
    v32 = *((_OWORD *)Hash + 4);
    v28[3] = v31;
    v33 = *((_OWORD *)Hash + 5);
    v28[4] = v32;
    v34 = *((_OWORD *)Hash + 6);
    v28[5] = v33;
    v35 = *((_OWORD *)Hash + 7);
    Hash += 16;
    v28[6] = v34;
    v28 += 8;
    *(v28 - 1) = v35;
    --v27;
  }
  while ( v27 );
  *(_QWORD *)(a2 + 96) = v25;
  v36 = (_QWORD *)(v25 + v75);
  *(_DWORD *)v36 = *(_DWORD *)(a1 + 128);
  v37 = v36 + 34;
  v36[1] = v36 + 34;
  *(_QWORD *)(a2 + 8) = v36;
  v38 = *(_DWORD *)(a1 + 128);
  if ( v38 )
  {
    RtlCopySidAndAttributesArray(
      v38,
      *(PSID_AND_ATTRIBUTES *)(a1 + 160),
      v72 - v76,
      (PSID_AND_ATTRIBUTES)v36 + 17,
      (char *)v37 + v76,
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 160), *(_DWORD *)(a1 + 128), &SidAttrHash);
    memset(v36, 0, 0x110uLL);
    v61 = SidAttrHash.Hash;
    v62 = 2LL;
    *(_DWORD *)v36 = SidAttrHash.SidCount;
    v63 = v36 + 2;
    do
    {
      v64 = *((_OWORD *)v61 + 1);
      *v63 = *(_OWORD *)v61;
      v65 = *((_OWORD *)v61 + 2);
      v63[1] = v64;
      v66 = *((_OWORD *)v61 + 3);
      v63[2] = v65;
      v67 = *((_OWORD *)v61 + 4);
      v63[3] = v66;
      v68 = *((_OWORD *)v61 + 5);
      v63[4] = v67;
      v69 = *((_OWORD *)v61 + 6);
      v63[5] = v68;
      v70 = *((_OWORD *)v61 + 7);
      v61 += 16;
      v63[6] = v69;
      v63 += 8;
      *(v63 - 1) = v70;
      --v62;
    }
    while ( v62 );
    v36[1] = v37;
  }
  v39 = (_QWORD *)((char *)v37 + v72);
  *(_DWORD *)v39 = *(_DWORD *)(a1 + 800);
  v40 = v39 + 34;
  v39[1] = v39 + 34;
  *(_QWORD *)(a2 + 64) = v39;
  v41 = *(_DWORD *)(a1 + 800);
  if ( v41 )
  {
    RtlCopySidAndAttributesArray(
      v41,
      *(PSID_AND_ATTRIBUTES *)(a1 + 792),
      v73 - v77,
      (PSID_AND_ATTRIBUTES)v39 + 17,
      (char *)v40 + v77,
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 792), *(_DWORD *)(a1 + 800), &SidAttrHash);
    memset(v39, 0, 0x110uLL);
    v51 = SidAttrHash.Hash;
    v52 = 2LL;
    *(_DWORD *)v39 = SidAttrHash.SidCount;
    v53 = v39 + 2;
    do
    {
      v54 = *((_OWORD *)v51 + 1);
      *v53 = *(_OWORD *)v51;
      v55 = *((_OWORD *)v51 + 2);
      v53[1] = v54;
      v56 = *((_OWORD *)v51 + 3);
      v53[2] = v55;
      v57 = *((_OWORD *)v51 + 4);
      v53[3] = v56;
      v58 = *((_OWORD *)v51 + 5);
      v53[4] = v57;
      v59 = *((_OWORD *)v51 + 6);
      v53[5] = v58;
      v60 = *((_OWORD *)v51 + 7);
      v51 += 16;
      v53[6] = v59;
      v53 += 8;
      *(v53 - 1) = v60;
      --v52;
    }
    while ( v52 );
    v39[1] = v40;
  }
  v42 = v74;
  v43 = (char *)v40 + v73;
  v44 = 0LL;
  if ( v74 )
  {
    v44 = v43;
    memmove(v43, *(const void **)(a1 + 784), 4LL * *(unsigned __int8 *)(*(_QWORD *)(a1 + 784) + 1LL) + 8);
    v42 = v74;
  }
  *(_QWORD *)(a2 + 56) = v44;
  if ( !a14 )
    Src = *(unsigned __int8 **)(a1 + 1104);
  v45 = v78;
  v46 = &v43[v42];
  if ( v78 )
  {
    v23 = v46;
    memmove(v46, Src, 4LL * Src[1] + 8);
  }
  v47 = &v46[v45];
  *(_QWORD *)(a2 + 72) = v23;
  AuthzBasepQueryInternalSecurityAttributesToken(
    *(_QWORD *)(a1 + 776),
    v47,
    (unsigned int)(v18 - (_DWORD)v47),
    &RemainingSidArea);
  v48 = v80;
  v49 = &v47[v79];
  *(_QWORD *)(a2 + 80) = v47;
  *(_DWORD *)v49 = v48;
  *(_QWORD *)(a2 + 16) = v49;
  return SepConvertTokenPrivilegesToLuidAndAttributes((_QWORD *)a1, (__int64)(v49 + 4));
}
