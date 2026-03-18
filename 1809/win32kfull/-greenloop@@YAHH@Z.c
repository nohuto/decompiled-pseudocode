/*
 * XREFs of ?greenloop@@YAHH@Z @ 0x1C00E5620
 * Callers:
 *     ?redloop@@YAHXZ @ 0x1C00E54E0 (-redloop@@YAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall greenloop(int a1)
{
  int v1; // eax
  int v2; // r8d
  int v3; // ecx
  int v4; // r11d
  int v5; // r9d
  int v6; // r15d
  int v7; // edi
  int v8; // ebp
  int v9; // ecx
  __int64 v10; // r13
  __int64 v11; // r12
  int v12; // eax
  int v13; // ebx
  int v14; // r10d
  int v15; // eax
  int v16; // r11d
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
  int v30; // ecx
  int v31; // edx
  int v32; // r14d
  int v33; // r11d
  __int64 v34; // rsi
  int v35; // ecx
  __int64 v36; // rbp
  int v37; // r8d
  int v38; // r15d
  int v39; // r12d
  __int64 v40; // r13
  unsigned int v41; // eax
  unsigned int *v42; // rcx
  _BYTE *v43; // r9
  int v44; // edx
  int v45; // r10d
  int v46; // edi
  int v47; // r8d
  int v48; // r11d
  unsigned int *v49; // rcx
  _BYTE *v50; // r9
  int v51; // r8d
  unsigned int v52; // eax
  int v53; // edx
  unsigned int v54; // r10d
  __int64 v55; // r8
  char v56; // r11
  int v57; // r10d
  int v58; // r8d
  char v59; // r11
  int v60; // eax
  int v62; // [rsp+0h] [rbp-68h]
  int v63; // [rsp+4h] [rbp-64h]
  __int64 v64; // [rsp+8h] [rbp-60h]
  __int64 v65; // [rsp+10h] [rbp-58h]
  int v66; // [rsp+70h] [rbp+8h]
  int v67; // [rsp+70h] [rbp+8h]
  int v68; // [rsp+78h] [rbp+10h]
  int v69; // [rsp+80h] [rbp+18h]
  int v70; // [rsp+80h] [rbp+18h]
  int v71; // [rsp+88h] [rbp+20h]

  if ( a1 )
  {
    v1 = dword_1C0317570;
    v3 = 31;
    v2 = dword_1C0317588;
    dword_1C0317824 = 31;
    dword_1C031781C = dword_1C0317570;
    dword_1C0317820 = 0;
    dword_1C0317828 = dword_1C0317588;
    dword_1C031782C = 0;
    dword_1C0317830 = 32;
  }
  else
  {
    v1 = dword_1C031781C;
    v2 = dword_1C0317828;
    v3 = dword_1C0317824;
  }
  v4 = dword_1C031757C;
  v5 = v3;
  v6 = dword_1C031757C;
  v7 = dword_1C031756C;
  v8 = v2;
  v69 = v1;
  v63 = v3;
  v9 = v1;
  v64 = qword_1C0317598;
  v10 = qword_1C0317598;
  v65 = qword_1C03175B0;
  v11 = qword_1C03175B0;
  v12 = 1;
  v13 = dword_1C0317858;
  v62 = dword_1C0317820;
  v68 = 0;
  v66 = dword_1C031757C;
  v71 = dword_1C031757C;
  if ( v9 > v5 )
    goto LABEL_29;
  v14 = dword_1C0317854;
  while ( 1 )
  {
    if ( v12 )
    {
      v15 = dword_1C0317584;
      v14 = 0;
      v13 = 31;
      dword_1C0317854 = 0;
      dword_1C0317858 = 31;
      dword_1C0317864 = 0;
      dword_1C0317850 = v7;
      dword_1C031785C = dword_1C0317584;
      dword_1C0317860 = 32;
    }
    else
    {
      v7 = dword_1C0317850;
      v15 = dword_1C031785C;
    }
    v16 = 0;
    v17 = v15;
    v18 = v14;
    v19 = v13;
    v20 = v7;
    v21 = v6;
    v22 = (unsigned int *)v10;
    v23 = (_BYTE *)v11;
    if ( v7 > v13 )
      goto LABEL_10;
    while ( *v22 <= v21 )
    {
      v21 += v17;
      ++v20;
      v17 += 128;
      ++v22;
      ++v23;
      if ( v20 > v13 )
        goto LABEL_10;
    }
    if ( v20 > v7 )
    {
      dword_1C0317850 = v20;
      v10 = (__int64)v22;
      v11 = (__int64)v23;
      dword_1C031785C = v17;
      v6 = v21;
      v18 = v20;
    }
    v16 = 1;
    if ( v20 > v13 )
    {
LABEL_10:
      v24 = dword_1C03175D4;
    }
    else
    {
      while ( 1 )
      {
        v24 = dword_1C03175D4;
        if ( *v22 <= v21 )
          break;
        *v22 = v21;
        ++v20;
        v21 += v17;
        *v23++ = v24;
        v17 += 128;
        ++v22;
        if ( v20 > v13 )
          goto LABEL_16;
      }
      v19 = v20 - 1;
    }
LABEL_16:
    v25 = (unsigned int *)(v10 - 4);
    v26 = (_BYTE *)(v11 - 1);
    v27 = dword_1C031785C - 128;
    v28 = v6 - (dword_1C031785C - 128);
    v29 = dword_1C0317850 - 1;
    if ( v16 )
      goto LABEL_17;
    if ( v29 >= v14 )
    {
      while ( *v25 <= v28 )
      {
        v27 -= 128;
        --v29;
        v28 -= v27;
        --v25;
        --v26;
        if ( v29 < v14 )
          goto LABEL_46;
      }
      dword_1C0317850 = v29;
      v10 = (__int64)v25;
      v11 = (__int64)v26;
      dword_1C031785C = v27;
      v6 = v28;
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
      v30 = v69;
      if ( v19 < dword_1C0317864 )
        v13 = v19;
      dword_1C0317864 = v19;
      dword_1C0317858 = v13;
      if ( v18 > dword_1C0317860 )
        v14 = v18;
      dword_1C0317860 = v18;
      dword_1C0317854 = v14;
      if ( !v68 )
      {
        if ( v69 > dword_1C031781C )
        {
          qword_1C0317598 = v64;
          qword_1C03175B0 = v65;
          v66 = v71;
          dword_1C031757C = v71;
          dword_1C031781C = v69;
          dword_1C0317828 = v8;
          v62 = v69;
        }
        v68 = 1;
      }
      goto LABEL_27;
    }
LABEL_46:
    v30 = v69;
    if ( v68 )
      break;
LABEL_27:
    v71 += v8;
    v6 += v8;
    v64 += 128LL;
    v65 += 32LL;
    v8 += 128;
    v7 = dword_1C031756C;
    v10 += 128LL;
    v11 += 32LL;
    v69 = v30 + 1;
    v12 = 0;
    if ( v30 + 1 > dword_1C0317824 )
      goto LABEL_28;
  }
  v63 = v69 - 1;
LABEL_28:
  v7 = dword_1C031756C;
  v4 = v66;
LABEL_29:
  v31 = 1;
  v32 = dword_1C0317828 - 128;
  v33 = v4 - (dword_1C0317828 - 128);
  v34 = qword_1C0317598 - 128;
  v35 = dword_1C0317820;
  v36 = qword_1C03175B0 - 32;
  v37 = dword_1C0317854;
  v38 = dword_1C031781C - 1;
  dword_1C0317838 = dword_1C0317828 - 128;
  v39 = v33;
  v67 = v33;
  v40 = qword_1C0317598 - 128;
  dword_1C0317578 = v33;
  dword_1C0317834 = v33;
  qword_1C0317590 = qword_1C0317598 - 128;
  qword_1C0317840 = qword_1C0317598 - 128;
  qword_1C03175A8 = qword_1C03175B0 - 32;
  qword_1C0317848 = qword_1C03175B0 - 32;
  if ( dword_1C031781C - 1 >= dword_1C0317820 )
  {
    v41 = v33;
    v42 = (unsigned int *)(qword_1C0317598 - 128);
    v43 = (_BYTE *)(qword_1C03175B0 - 32);
    while ( 1 )
    {
      if ( v31 )
      {
        v37 = 0;
        v44 = v7;
        dword_1C0317854 = 0;
        v13 = 31;
        dword_1C0317850 = v7;
        dword_1C0317858 = 31;
        dword_1C0317864 = 0;
        dword_1C031785C = dword_1C0317584;
        dword_1C0317860 = 32;
      }
      else
      {
        v44 = dword_1C0317850;
      }
      v45 = 0;
      v70 = v13;
      v46 = v37;
      v47 = dword_1C031785C;
      v48 = v13;
      if ( v44 <= v13 )
      {
        while ( *v42 <= v41 )
        {
          v41 += v47;
          ++v44;
          v47 += 128;
          ++v42;
          ++v43;
          if ( v44 > v13 )
            goto LABEL_36;
        }
        if ( v44 > dword_1C0317850 )
        {
          dword_1C0317850 = v44;
          v34 = (__int64)v42;
          qword_1C0317590 = (__int64)v42;
          v36 = (__int64)v43;
          qword_1C03175A8 = (__int64)v43;
          v46 = v44;
          v67 = v41;
          dword_1C0317578 = v41;
          dword_1C031785C = v47;
        }
        v45 = 1;
        if ( v44 <= v13 )
        {
          while ( *v42 > v41 )
          {
            v59 = dword_1C03175D4;
            ++v44;
            *v42 = v41;
            v41 += v47;
            *v43 = v59;
            v47 += 128;
            ++v43;
            ++v42;
            v48 = v13;
            if ( v44 > v13 )
              goto LABEL_36;
          }
          v48 = v44 - 1;
          v70 = v44 - 1;
        }
      }
LABEL_36:
      v49 = (unsigned int *)(v34 - 4);
      v50 = (_BYTE *)(v36 - 1);
      v51 = dword_1C031785C - 128;
      v52 = v67 - (dword_1C031785C - 128);
      v53 = dword_1C0317850 - 1;
      if ( v45 )
        goto LABEL_53;
      if ( v53 >= dword_1C0317854 )
        break;
LABEL_40:
      v54 = v68;
      if ( v68 )
      {
        v35 = dword_1C0317820;
        v58 = v38 + 1;
        goto LABEL_75;
      }
      v55 = qword_1C0317848;
LABEL_64:
      v32 -= 128;
      v7 = dword_1C031756C;
      v34 -= 128LL;
      dword_1C0317838 = v32;
      v36 -= 32LL;
      qword_1C0317590 = v34;
      qword_1C03175A8 = v36;
      v39 -= v32;
      qword_1C0317848 = v55 - 32;
      v37 = dword_1C0317854;
      v40 -= 128LL;
      --v38;
      qword_1C0317840 = v40;
      v31 = 0;
      v67 -= v32;
      v42 = (unsigned int *)v34;
      v43 = (_BYTE *)v36;
      dword_1C0317578 = v67;
      dword_1C0317834 = v39;
      v41 = v67;
      if ( v38 < dword_1C0317820 )
      {
        v35 = dword_1C0317820;
        v58 = v62;
        goto LABEL_75;
      }
    }
    while ( *v49 <= v52 )
    {
      v51 -= 128;
      --v53;
      v52 -= v51;
      --v49;
      --v50;
      if ( v53 < dword_1C0317854 )
        goto LABEL_40;
    }
    dword_1C0317850 = v53;
    v34 = (__int64)v49;
    qword_1C0317590 = (__int64)v49;
    v36 = (__int64)v50;
    qword_1C03175A8 = (__int64)v50;
    v48 = v53;
    v67 = v52;
    dword_1C0317578 = v52;
    dword_1C031785C = v51;
    v70 = v53;
LABEL_53:
    if ( v53 >= dword_1C0317854 )
    {
      while ( *v49 > v52 )
      {
        v56 = dword_1C03175D4;
        v51 -= 128;
        *v49 = v52;
        --v53;
        *v50 = v56;
        v52 -= v51;
        v48 = v70;
        --v50;
        --v49;
        if ( v53 < dword_1C0317854 )
          goto LABEL_58;
      }
      v46 = v53 + 1;
    }
LABEL_58:
    v57 = dword_1C0317854;
    v55 = qword_1C0317848;
    if ( v48 < dword_1C0317864 )
      v13 = v48;
    dword_1C0317858 = v13;
    if ( v46 > dword_1C0317860 )
      v57 = v46;
    dword_1C0317864 = v48;
    dword_1C0317854 = v57;
    v54 = v68;
    dword_1C0317860 = v46;
    if ( !v68 )
    {
      v54 = 1;
      dword_1C031781C = v38;
      v68 = 1;
      qword_1C0317598 = v40;
      qword_1C03175B0 = qword_1C0317848;
      dword_1C031757C = v39;
      dword_1C0317828 = v32;
      v63 = v38;
    }
    goto LABEL_64;
  }
  v54 = v68;
  v58 = v62;
LABEL_75:
  if ( v54 )
  {
    v60 = dword_1C0317824;
    if ( v63 < dword_1C031782C )
      v60 = v63;
    dword_1C031782C = v63;
    dword_1C0317824 = v60;
    if ( v58 > dword_1C0317830 )
      v35 = v58;
    dword_1C0317830 = v58;
    dword_1C0317820 = v35;
  }
  return v54;
}
