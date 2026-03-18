/*
 * XREFs of ?greenloop@@YAHH@Z @ 0x1C00D0950
 * Callers:
 *     ?redloop@@YAHXZ @ 0x1C00D080C (-redloop@@YAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall greenloop(int a1)
{
  int v1; // eax
  int v2; // r8d
  int v3; // ecx
  int v4; // r10d
  int v5; // r9d
  int v6; // r15d
  int v7; // edi
  int v8; // ebp
  int v9; // ebx
  int v10; // ecx
  __int64 v11; // r13
  __int64 v12; // r12
  int v13; // eax
  int v14; // r11d
  int v15; // eax
  int v16; // r10d
  int v17; // r8d
  int v18; // r14d
  int v19; // esi
  int v20; // edx
  unsigned int v21; // ecx
  unsigned int *v22; // rax
  _BYTE *v23; // r9
  char v24; // di
  unsigned int *v25; // rcx
  _BYTE *v26; // r9
  int v27; // r8d
  unsigned int v28; // eax
  int v29; // edx
  int v30; // r10d
  int v31; // ecx
  int v32; // edx
  int v33; // r14d
  int v34; // r10d
  __int64 v35; // rsi
  int v36; // ecx
  __int64 v37; // rbp
  int v38; // r8d
  int v39; // r15d
  int v40; // r12d
  __int64 v41; // r13
  unsigned int v42; // eax
  unsigned int *v43; // rcx
  _BYTE *v44; // r9
  int v45; // edx
  int v46; // r10d
  int v47; // edi
  int v48; // r8d
  int v49; // r11d
  unsigned int *v50; // rcx
  _BYTE *v51; // r9
  int v52; // r8d
  unsigned int v53; // eax
  int v54; // edx
  __int64 v55; // r8
  char v56; // r14
  int v57; // r10d
  int v58; // r8d
  char v59; // r14
  int v60; // eax
  int v62; // [rsp+0h] [rbp-68h]
  int v63; // [rsp+4h] [rbp-64h]
  __int64 v64; // [rsp+8h] [rbp-60h]
  __int64 v65; // [rsp+10h] [rbp-58h]
  int v66; // [rsp+70h] [rbp+8h]
  int v67; // [rsp+70h] [rbp+8h]
  unsigned int v68; // [rsp+78h] [rbp+10h]
  int v69; // [rsp+80h] [rbp+18h]
  int v70; // [rsp+88h] [rbp+20h]

  if ( a1 )
  {
    v1 = dword_1C032A590;
    v3 = 31;
    v2 = dword_1C032A5A8;
    dword_1C032A80C = 31;
    dword_1C032A804 = dword_1C032A590;
    dword_1C032A808 = 0;
    dword_1C032A810 = dword_1C032A5A8;
    dword_1C032A814 = 0;
    dword_1C032A818 = 32;
  }
  else
  {
    v1 = dword_1C032A804;
    v2 = dword_1C032A810;
    v3 = dword_1C032A80C;
  }
  v4 = dword_1C032A59C;
  v5 = v3;
  v6 = dword_1C032A59C;
  v7 = dword_1C032A58C;
  v8 = v2;
  v9 = dword_1C032A840;
  v69 = v1;
  v63 = v3;
  v10 = v1;
  v64 = qword_1C032A5B8;
  v11 = qword_1C032A5B8;
  v65 = qword_1C032A5D0;
  v12 = qword_1C032A5D0;
  v62 = dword_1C032A808;
  v13 = 1;
  v68 = 0;
  v66 = dword_1C032A59C;
  v70 = dword_1C032A59C;
  if ( v10 > v5 )
    goto LABEL_29;
  v14 = dword_1C032A83C;
  while ( 1 )
  {
    if ( v13 )
    {
      v15 = dword_1C032A5A4;
      v14 = 0;
      v9 = 31;
      dword_1C032A83C = 0;
      dword_1C032A840 = 31;
      dword_1C032A84C = 0;
      dword_1C032A838 = v7;
      dword_1C032A844 = dword_1C032A5A4;
      dword_1C032A848 = 32;
    }
    else
    {
      v7 = dword_1C032A838;
      v15 = dword_1C032A844;
    }
    v16 = 0;
    v17 = v15;
    v18 = v14;
    v19 = v9;
    v20 = v7;
    v21 = v6;
    v22 = (unsigned int *)v11;
    v23 = (_BYTE *)v12;
    if ( v7 > v9 )
      goto LABEL_10;
    while ( *v22 <= v21 )
    {
      v21 += v17;
      ++v20;
      v17 += 128;
      ++v22;
      ++v23;
      if ( v20 > v9 )
        goto LABEL_10;
    }
    if ( v20 > v7 )
    {
      dword_1C032A838 = v20;
      v11 = (__int64)v22;
      v12 = (__int64)v23;
      dword_1C032A844 = v17;
      v6 = v21;
      v18 = v20;
    }
    v16 = 1;
    if ( v20 > v9 )
    {
LABEL_10:
      v24 = dword_1C032A5F4;
    }
    else
    {
      while ( 1 )
      {
        v24 = dword_1C032A5F4;
        if ( *v22 <= v21 )
          break;
        *v22 = v21;
        ++v20;
        v21 += v17;
        *v23++ = v24;
        v17 += 128;
        ++v22;
        if ( v20 > v9 )
          goto LABEL_16;
      }
      v19 = v20 - 1;
    }
LABEL_16:
    v25 = (unsigned int *)(v11 - 4);
    v26 = (_BYTE *)(v12 - 1);
    v27 = dword_1C032A844 - 128;
    v28 = v6 - (dword_1C032A844 - 128);
    v29 = dword_1C032A838 - 1;
    if ( v16 )
      goto LABEL_17;
    if ( v29 >= dword_1C032A83C )
    {
      while ( *v25 <= v28 )
      {
        v27 -= 128;
        --v29;
        v28 -= v27;
        --v25;
        --v26;
        if ( v29 < dword_1C032A83C )
          goto LABEL_46;
      }
      v14 = dword_1C032A83C;
      v11 = (__int64)v25;
      dword_1C032A838 = v29;
      v12 = (__int64)v26;
      v6 = v28;
      dword_1C032A844 = v27;
      v19 = v29;
LABEL_17:
      if ( v29 >= v14 )
      {
        while ( *v25 > v28 )
        {
          *v25 = v28;
          v27 -= 128;
          *v26 = v24;
          v28 -= v27;
          --v26;
          --v29;
          --v25;
          if ( v29 < v14 )
            goto LABEL_22;
        }
        v18 = v29 + 1;
      }
LABEL_22:
      v30 = dword_1C032A83C;
      v31 = v69;
      if ( v19 < dword_1C032A84C )
        v9 = v19;
      dword_1C032A840 = v9;
      if ( v18 > dword_1C032A848 )
        v30 = v18;
      dword_1C032A84C = v19;
      dword_1C032A83C = v30;
      dword_1C032A848 = v18;
      if ( !v68 )
      {
        if ( v69 > dword_1C032A804 )
        {
          qword_1C032A5B8 = v64;
          qword_1C032A5D0 = v65;
          v66 = v70;
          dword_1C032A59C = v70;
          dword_1C032A804 = v69;
          dword_1C032A810 = v8;
          v62 = v69;
        }
        v68 = 1;
      }
      goto LABEL_27;
    }
LABEL_46:
    v31 = v69;
    if ( v68 )
      break;
LABEL_27:
    v70 += v8;
    v6 += v8;
    v64 += 128LL;
    v65 += 32LL;
    v8 += 128;
    v14 = dword_1C032A83C;
    v11 += 128LL;
    v7 = dword_1C032A58C;
    v12 += 32LL;
    v13 = 0;
    v69 = v31 + 1;
    if ( v31 + 1 > dword_1C032A80C )
      goto LABEL_28;
  }
  v63 = v69 - 1;
LABEL_28:
  v7 = dword_1C032A58C;
  v4 = v66;
LABEL_29:
  v32 = 1;
  v33 = dword_1C032A810 - 128;
  v34 = v4 - (dword_1C032A810 - 128);
  v35 = qword_1C032A5B8 - 128;
  v36 = dword_1C032A808;
  v37 = qword_1C032A5D0 - 32;
  v38 = dword_1C032A83C;
  v39 = dword_1C032A804 - 1;
  dword_1C032A820 = dword_1C032A810 - 128;
  v40 = v34;
  v67 = v34;
  v41 = qword_1C032A5B8 - 128;
  dword_1C032A598 = v34;
  dword_1C032A81C = v34;
  qword_1C032A5B0 = qword_1C032A5B8 - 128;
  qword_1C032A828 = qword_1C032A5B8 - 128;
  qword_1C032A5C8 = qword_1C032A5D0 - 32;
  qword_1C032A830 = qword_1C032A5D0 - 32;
  if ( dword_1C032A804 - 1 < dword_1C032A808 )
  {
LABEL_66:
    v58 = v62;
    goto LABEL_74;
  }
  v42 = v34;
  v43 = (unsigned int *)(qword_1C032A5B8 - 128);
  v44 = (_BYTE *)(qword_1C032A5D0 - 32);
  while ( 2 )
  {
    if ( v32 )
    {
      v38 = 0;
      v45 = v7;
      dword_1C032A83C = 0;
      v9 = 31;
      dword_1C032A838 = v7;
      dword_1C032A840 = 31;
      dword_1C032A84C = 0;
      dword_1C032A844 = dword_1C032A5A4;
      dword_1C032A848 = 32;
    }
    else
    {
      v45 = dword_1C032A838;
    }
    v46 = 0;
    v47 = v38;
    v48 = dword_1C032A844;
    v49 = v9;
    if ( v45 <= v9 )
    {
      while ( *v43 <= v42 )
      {
        v42 += v48;
        ++v45;
        v48 += 128;
        ++v43;
        ++v44;
        if ( v45 > v9 )
          goto LABEL_36;
      }
      if ( v45 > dword_1C032A838 )
      {
        dword_1C032A838 = v45;
        v35 = (__int64)v43;
        qword_1C032A5B0 = (__int64)v43;
        v37 = (__int64)v44;
        qword_1C032A5C8 = (__int64)v44;
        v47 = v45;
        v67 = v42;
        dword_1C032A598 = v42;
        dword_1C032A844 = v48;
      }
      v46 = 1;
      if ( v45 <= v9 )
      {
        while ( *v43 > v42 )
        {
          v59 = dword_1C032A5F4;
          ++v45;
          *v43 = v42;
          v42 += v48;
          *v44 = v59;
          v48 += 128;
          v33 = dword_1C032A820;
          ++v44;
          ++v43;
          if ( v45 > v9 )
            goto LABEL_36;
        }
        v49 = v45 - 1;
      }
    }
LABEL_36:
    v50 = (unsigned int *)(v35 - 4);
    v51 = (_BYTE *)(v37 - 1);
    v52 = dword_1C032A844 - 128;
    v53 = v67 - (dword_1C032A844 - 128);
    v54 = dword_1C032A838 - 1;
    if ( v46 )
    {
LABEL_53:
      if ( v54 >= dword_1C032A83C )
      {
        while ( *v50 > v53 )
        {
          v56 = dword_1C032A5F4;
          v52 -= 128;
          *v50 = v53;
          --v54;
          *v51 = v56;
          v53 -= v52;
          v33 = dword_1C032A820;
          --v51;
          --v50;
          if ( v54 < dword_1C032A83C )
            goto LABEL_58;
        }
        v47 = v54 + 1;
      }
LABEL_58:
      v57 = dword_1C032A83C;
      v55 = qword_1C032A830;
      if ( v49 < dword_1C032A84C )
        v9 = v49;
      dword_1C032A840 = v9;
      if ( v47 > dword_1C032A848 )
        v57 = v47;
      dword_1C032A84C = v49;
      dword_1C032A83C = v57;
      dword_1C032A848 = v47;
      if ( !v68 )
      {
        dword_1C032A804 = v39;
        qword_1C032A5B8 = v41;
        qword_1C032A5D0 = qword_1C032A830;
        dword_1C032A59C = v40;
        dword_1C032A810 = v33;
        v63 = v39;
        v68 = 1;
      }
LABEL_64:
      v33 -= 128;
      v7 = dword_1C032A58C;
      v35 -= 128LL;
      dword_1C032A820 = v33;
      v37 -= 32LL;
      qword_1C032A5B0 = v35;
      qword_1C032A5C8 = v37;
      v40 -= v33;
      qword_1C032A830 = v55 - 32;
      v38 = dword_1C032A83C;
      v41 -= 128LL;
      --v39;
      qword_1C032A828 = v41;
      v32 = 0;
      v67 -= v33;
      v43 = (unsigned int *)v35;
      v44 = (_BYTE *)v37;
      dword_1C032A598 = v67;
      dword_1C032A81C = v40;
      v42 = v67;
      if ( v39 < dword_1C032A808 )
      {
        v36 = dword_1C032A808;
        goto LABEL_66;
      }
      continue;
    }
    break;
  }
  if ( v54 >= dword_1C032A83C )
  {
    while ( *v50 <= v53 )
    {
      v52 -= 128;
      --v54;
      v53 -= v52;
      --v50;
      --v51;
      if ( v54 < dword_1C032A83C )
        goto LABEL_40;
    }
    dword_1C032A838 = v54;
    v35 = (__int64)v50;
    qword_1C032A5B0 = (__int64)v50;
    v37 = (__int64)v51;
    qword_1C032A5C8 = (__int64)v51;
    v49 = v54;
    v67 = v53;
    dword_1C032A598 = v53;
    dword_1C032A844 = v52;
    goto LABEL_53;
  }
LABEL_40:
  if ( !v68 )
  {
    v55 = qword_1C032A830;
    goto LABEL_64;
  }
  v36 = dword_1C032A808;
  v58 = v39 + 1;
LABEL_74:
  if ( v68 )
  {
    v60 = dword_1C032A80C;
    if ( v63 < dword_1C032A814 )
      v60 = v63;
    dword_1C032A814 = v63;
    dword_1C032A80C = v60;
    if ( v58 > dword_1C032A818 )
      v36 = v58;
    dword_1C032A818 = v58;
    dword_1C032A808 = v36;
  }
  return v68;
}
