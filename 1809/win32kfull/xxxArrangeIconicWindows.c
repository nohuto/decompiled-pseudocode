/*
 * XREFs of xxxArrangeIconicWindows @ 0x1C0153AD0
 * Callers:
 *     <none>
 * Callees:
 *     _ScreenToClient @ 0x1C000CE40 (_ScreenToClient.c)
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0071F34 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     InternalBeginDeferWindowPos @ 0x1C007210C (InternalBeginDeferWindowPos.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     InternalGetRealClientRect @ 0x1C010EABC (InternalGetRealClientRect.c)
 */

struct tagBWL *__fastcall xxxArrangeIconicWindows(__int64 a1)
{
  unsigned __int16 v2; // r13
  struct tagBWL *result; // rax
  struct tagBWL *v4; // rbx
  int v5; // esi
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // r12d
  bool v14; // zf
  int v15; // r13d
  unsigned int v16; // r14d
  __int64 Prop; // rax
  int v18; // edx
  _DWORD *v19; // r11
  __int64 v20; // r10
  _DWORD *v21; // r11
  signed int v22; // ecx
  int v23; // ecx
  int v24; // edi
  int v25; // esi
  int v26; // r14d
  int v27; // edx
  int v28; // edx
  int v29; // eax
  unsigned __int64 *v30; // r13
  unsigned __int64 v31; // rax
  unsigned __int64 *v32; // rdi
  __int64 v33; // rax
  unsigned __int64 *v34; // rsi
  unsigned __int64 *v35; // r15
  int v36; // r12d
  __int64 v37; // rbx
  int v38; // esi
  __int64 v39; // rax
  bool v40; // cc
  bool v41; // cc
  bool v42; // cc
  unsigned __int64 v43; // r9
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rax
  unsigned __int64 *v46; // r10
  unsigned __int64 v47; // rax
  unsigned __int64 *v48; // r15
  unsigned __int64 *v49; // rbx
  unsigned __int64 v50; // rax
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  struct tagSMWP *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned __int64 v63; // rcx
  __int64 v64; // [rsp+50h] [rbp-59h]
  unsigned __int64 v65; // [rsp+50h] [rbp-59h]
  int v66; // [rsp+58h] [rbp-51h]
  int v67; // [rsp+5Ch] [rbp-4Dh]
  int v68; // [rsp+60h] [rbp-49h]
  int v69; // [rsp+64h] [rbp-45h]
  int v70; // [rsp+68h] [rbp-41h]
  unsigned __int64 *v71; // [rsp+70h] [rbp-39h]
  _DWORD v72[2]; // [rsp+78h] [rbp-31h] BYREF
  int v73; // [rsp+80h] [rbp-29h]
  int v74; // [rsp+84h] [rbp-25h]
  __int64 v75; // [rsp+88h] [rbp-21h]
  unsigned __int64 *v76; // [rsp+90h] [rbp-19h]
  struct tagBWL *v77; // [rsp+98h] [rbp-11h]
  _QWORD v78[12]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int16 v79; // [rsp+110h] [rbp+67h]
  int v80; // [rsp+118h] [rbp+6Fh]
  BOOL v81; // [rsp+120h] [rbp+77h]
  int v82; // [rsp+128h] [rbp+7Fh]

  v2 = 0;
  v66 = 0;
  v67 = 0;
  v70 = 0;
  v81 = 0;
  result = BuildHwndList(*(struct tagWND **)(a1 + 88), 2, 0LL);
  v77 = result;
  v4 = result;
  if ( !result )
    return result;
  v69 = IsTrayWindow(*(_QWORD **)(a1 + 88));
  v5 = *(_DWORD *)(gpsi + 2084LL);
  v6 = *(_DWORD *)(gpsi + 2088LL);
  InternalGetRealClientRect(a1, (__int64)v72, 1, 0LL, 1);
  LOBYTE(v7) = 1;
  v64 = HMValidateHandleNoSecure(ghwndSwitch, v7);
  v71 = (unsigned __int64 *)((char *)v4 + 32);
  v9 = (_QWORD *)((char *)v4 + 32);
  v10 = *((_QWORD *)v4 + 4);
  if ( v10 == 1 )
  {
LABEL_8:
    v16 = 0;
    goto LABEL_9;
  }
  do
  {
    LOBYTE(v8) = 1;
    v11 = HMValidateHandleNoSecure(v10, v8);
    v12 = v11;
    if ( !v11 )
      goto LABEL_5;
    if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_5;
    if ( v11 == v64 )
      goto LABEL_5;
    Prop = GetProp(v11, (unsigned __int16)atomCheckpointProp, 1LL);
    if ( !Prop )
      goto LABEL_5;
    v18 = *(_DWORD *)(Prop + 48);
    v19 = (_DWORD *)(Prop + 32);
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 0x20) == 0 )
    {
      v8 = v18 & 0xFFFFFFDF;
      *v19 = -1;
      *(_DWORD *)(Prop + 48) = v8;
      *(_DWORD *)(Prop + 36) = -1;
LABEL_5:
      *v9 = 0LL;
      goto LABEL_6;
    }
    ++v2;
    *(_DWORD *)(Prop + 48) = v18 & 0xFFFFFFFE;
    *v19 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 88LL);
    *(_DWORD *)(Prop + 36) = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL);
    ScreenToClient(a1, v19);
    v22 = *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7;
    if ( *(int *)(gpsi + 2120LL) >= 0 )
    {
      if ( v22 <= 1 )
      {
        v8 = (unsigned int)((v6 / 2 + v74 - *(_DWORD *)(v20 + 36)) % v6 - (v6 / 2 - *(_DWORD *)(v20 + 36)));
        *(_DWORD *)(v20 + 36) = v8;
      }
      else if ( v22 <= 3 )
      {
        v8 = (unsigned int)((*(_DWORD *)(v20 + 36) + v6 / 2) >> 31);
        LODWORD(v8) = (*(_DWORD *)(v20 + 36) + v6 / 2) % v6;
        *(_DWORD *)(v20 + 36) = *(_DWORD *)(v20 + 36) + v6 / 2 - v8;
      }
      else
      {
        if ( v22 != 4 )
        {
          if ( v22 == 5 )
            goto LABEL_23;
          if ( v22 != 6 )
          {
            if ( v22 != 7 )
              goto LABEL_6;
LABEL_23:
            v8 = (unsigned int)((v5 / 2 + v73 - *v21) % v5 - (v5 / 2 - *v21));
            *v21 = v8;
            goto LABEL_6;
          }
        }
        v8 = (unsigned int)((*v21 + v5 / 2) >> 31);
        LODWORD(v8) = (*v21 + v5 / 2) % v5;
        *v21 = *v21 + v5 / 2 - v8;
      }
    }
LABEL_6:
    v10 = *++v9;
  }
  while ( *v9 != 1LL );
  v13 = 0;
  v14 = v2 == 0;
  v79 = v2;
  v15 = 0;
  if ( v14 )
    goto LABEL_8;
  v23 = v69;
  if ( v69 )
  {
    v24 = -32000;
    v25 = 0;
    v65 = 0xFFFF8300FFFF8300uLL;
    v26 = -32000;
    goto LABEL_103;
  }
  v27 = *(_DWORD *)(gpsi + 2120LL);
  if ( (v27 & 1) != 0 )
  {
    v13 = v73 - v5;
    v66 = -v5;
  }
  else
  {
    v13 = v72[0] + *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
    v66 = v5;
  }
  LODWORD(v65) = v13;
  v24 = v13;
  v82 = v13;
  if ( (v27 & 2) != 0 )
  {
    v67 = v6;
    v80 = v72[1] + *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
    v26 = v80;
    HIDWORD(v65) = v80;
  }
  else
  {
    v80 = v74 - v6;
    v26 = v74 - v6;
    HIDWORD(v65) = v74 - v6;
    v67 = -v6;
  }
  v28 = *(_DWORD *)(gpsi + 2120LL) & 4;
  v81 = v28 == 0;
  if ( v28 )
  {
    v8 = (unsigned int)(v74 >> 31);
    LODWORD(v8) = v74 % v6;
    v29 = v74 / v6;
  }
  else
  {
    v8 = (unsigned int)(v73 >> 31);
    LODWORD(v8) = v73 % v5;
    v29 = v73 / v5;
  }
  v30 = v71;
  v25 = v29;
  if ( v29 < 1 )
    v25 = 1;
  v68 = v25;
  v31 = *v71;
  v70 = v25;
  if ( *v71 != 1 )
  {
    v32 = v71;
    while ( 1 )
    {
      if ( !v31 )
        goto LABEL_100;
      LOBYTE(v8) = 1;
      v33 = HMValidateHandleNoSecure(v31, v8);
      v76 = (unsigned __int64 *)v33;
      v34 = (unsigned __int64 *)v33;
      if ( !v33 )
        goto LABEL_100;
      v35 = v32;
      v36 = 0;
      v37 = *(_QWORD *)(GetProp(v33, (unsigned __int16)atomCheckpointProp, 1LL) + 32);
      v75 = v37;
      if ( v32 >= v30 )
        goto LABEL_91;
      v38 = HIDWORD(v75);
      while ( 1 )
      {
        if ( *v35 )
        {
          LOBYTE(v8) = 1;
          v39 = HMValidateHandleNoSecure(*v35, v8);
          if ( v39 )
            break;
        }
LABEL_89:
        if ( ++v35 >= v30 )
          goto LABEL_90;
      }
      v8 = *(_QWORD *)(GetProp(v39, (unsigned __int16)atomCheckpointProp, 1LL) + 32);
      if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) == 0 )
        break;
      switch ( *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7 )
      {
        case 1u:
          v42 = SHIDWORD(v8) < v38;
          if ( HIDWORD(v8) != v38 )
            goto LABEL_86;
          if ( (int)v8 < (int)v37 )
            goto LABEL_87;
LABEL_85:
          v42 = SHIDWORD(v8) < v38;
          goto LABEL_86;
        case 2u:
          v41 = SHIDWORD(v8) <= v38;
          if ( HIDWORD(v8) != v38 )
            goto LABEL_66;
          if ( (int)v8 > (int)v37 )
            goto LABEL_87;
LABEL_65:
          v41 = SHIDWORD(v8) <= v38;
          goto LABEL_66;
        case 3u:
          v41 = SHIDWORD(v8) <= v38;
          if ( HIDWORD(v8) != v38 )
            goto LABEL_66;
          if ( (int)v8 < (int)v37 )
            goto LABEL_87;
          goto LABEL_65;
        case 4u:
          v41 = (int)v8 <= (int)v37;
          if ( (_DWORD)v8 == (_DWORD)v37 )
          {
            if ( SHIDWORD(v8) < v38 )
              goto LABEL_87;
LABEL_64:
            v41 = (int)v8 <= (int)v37;
          }
          goto LABEL_66;
        case 5u:
          v42 = (int)v8 < (int)v37;
          if ( (_DWORD)v8 == (_DWORD)v37 )
          {
            if ( SHIDWORD(v8) < v38 )
              goto LABEL_87;
            v42 = (int)v8 < (int)v37;
          }
LABEL_86:
          if ( v42 )
            goto LABEL_87;
          goto LABEL_88;
        case 6u:
          v41 = (int)v8 <= (int)v37;
          if ( (_DWORD)v8 == (_DWORD)v37 )
          {
            if ( SHIDWORD(v8) <= v38 )
              goto LABEL_64;
LABEL_87:
            v36 = 1;
LABEL_88:
            if ( v36 )
              goto LABEL_90;
            goto LABEL_89;
          }
LABEL_66:
          if ( !v41 )
            goto LABEL_87;
          goto LABEL_88;
      }
      if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 7 )
        goto LABEL_88;
      v40 = (int)v8 < (int)v37;
      if ( (_DWORD)v8 == (_DWORD)v37 )
      {
        if ( SHIDWORD(v8) > v38 )
          goto LABEL_90;
        v40 = (int)v8 < (int)v37;
      }
      if ( !v40 )
        goto LABEL_88;
LABEL_90:
      v34 = v76;
      v32 = v71;
LABEL_91:
      v43 = 0LL;
      v44 = (unsigned __int64)((char *)v30 - (char *)v35 + 7) >> 3;
      if ( v35 > v30 )
        v44 = 0LL;
      if ( v44 )
      {
        do
        {
          v8 = 3LL * (unsigned __int16)*(_DWORD *)v35;
          v45 = 0LL;
          v46 = *(unsigned __int64 **)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)v35);
          if ( v34 )
            v45 = *v34;
          *v35 = v45;
          ++v43;
          ++v35;
          v34 = v46;
        }
        while ( v43 < v44 );
      }
      v47 = 0LL;
      if ( v34 )
        v47 = *v34;
      *v30 = v47;
LABEL_100:
      v31 = *++v30;
      if ( *v30 == 1 )
      {
        v24 = v65;
        v13 = v82;
        v25 = v68;
        goto LABEL_102;
      }
    }
    v42 = SHIDWORD(v8) < v38;
    if ( HIDWORD(v8) != v38 )
      goto LABEL_86;
    if ( (int)v8 > (int)v37 )
      goto LABEL_87;
    goto LABEL_85;
  }
LABEL_102:
  v23 = 0;
  v15 = v80;
LABEL_103:
  v48 = v71;
  v49 = v71;
  v50 = *v71;
  if ( *v71 != 1 )
  {
    v51 = v23;
    while ( 1 )
    {
      if ( !v50 )
        goto LABEL_114;
      LOBYTE(v8) = 1;
      v52 = HMValidateHandleNoSecure(v50, v8);
      if ( !v52 )
        goto LABEL_114;
      v53 = GetProp(v52, (unsigned __int16)atomCheckpointProp, 1LL);
      if ( v53 )
      {
        *(_DWORD *)(v53 + 48) |= 0x20u;
        *(_QWORD *)(v53 + 32) = v65;
      }
      if ( v51 )
        goto LABEL_114;
      if ( --v25 > 0 )
      {
        if ( v81 )
        {
          v24 += v66;
          LODWORD(v65) = v24;
          goto LABEL_114;
        }
      }
      else
      {
        v25 = v70;
        if ( !v81 )
        {
          v24 += v66;
          v26 = v15;
          v65 = __PAIR64__(v15, v24);
          goto LABEL_114;
        }
        v24 = v13;
        LODWORD(v65) = v13;
      }
      v26 += v67;
      HIDWORD(v65) = v26;
LABEL_114:
      v50 = *++v49;
      if ( *v49 == 1 )
      {
        v48 = v71;
        break;
      }
    }
  }
  v16 = v79;
  v55 = (struct tagSMWP *)InternalBeginDeferWindowPos(2 * (unsigned int)v79);
  if ( v55 )
  {
    while ( 1 )
    {
      v63 = *v48;
      if ( *v48 == 1 )
        break;
      if ( v63 )
      {
        LOBYTE(v54) = 1;
        v56 = HMValidateHandleNoSecure(v63, v54);
        v57 = v56;
        if ( v56 )
        {
          v58 = GetProp(v56, (unsigned __int16)atomCheckpointProp, 1LL);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59);
          v78[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v78;
          v78[1] = v57;
          _InterlockedAdd((volatile signed __int32 *)(v57 + 8), 1u);
          v55 = (struct tagSMWP *)_DeferWindowPos(
                                    (__int64)v55,
                                    (_QWORD *)v57,
                                    0LL,
                                    *(_DWORD *)(v58 + 32),
                                    *(_DWORD *)(v58 + 36),
                                    *(_DWORD *)(gpsi + 2124LL),
                                    *(_DWORD *)(gpsi + 2128LL),
                                    276,
                                    0);
          ThreadUnlock1(v62, v61);
          if ( !v55 )
            goto LABEL_9;
        }
      }
      ++v48;
    }
    xxxEndDeferWindowPosEx(v55, 1);
  }
LABEL_9:
  FreeHwndList(v77);
  return (struct tagBWL *)v16;
}
