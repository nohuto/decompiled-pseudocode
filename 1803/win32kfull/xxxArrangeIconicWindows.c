/*
 * XREFs of xxxArrangeIconicWindows @ 0x1C0135280
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0034F94 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     InternalBeginDeferWindowPos @ 0x1C0035160 (InternalBeginDeferWindowPos.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     _ScreenToClient @ 0x1C00C1998 (_ScreenToClient.c)
 *     InternalGetRealClientRect @ 0x1C00F3E30 (InternalGetRealClientRect.c)
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
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 Prop; // rax
  int v15; // edx
  _DWORD *v16; // r11
  int v17; // r12d
  bool v18; // zf
  int v19; // r13d
  __int64 v20; // r10
  _DWORD *v21; // r11
  signed int v22; // ecx
  BOOL v23; // r8d
  int v24; // edi
  int v25; // r14d
  int v26; // esi
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
  _BOOL8 v51; // r15
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
  __int64 v63; // r8
  unsigned __int64 v64; // rcx
  __int64 v65; // [rsp+50h] [rbp-59h]
  unsigned __int64 v66; // [rsp+50h] [rbp-59h]
  int v67; // [rsp+58h] [rbp-51h]
  int v68; // [rsp+5Ch] [rbp-4Dh]
  BOOL v69; // [rsp+60h] [rbp-49h]
  int v70; // [rsp+64h] [rbp-45h]
  int v71; // [rsp+68h] [rbp-41h]
  unsigned __int64 *v72; // [rsp+70h] [rbp-39h]
  int v73[2]; // [rsp+78h] [rbp-31h] BYREF
  int v74; // [rsp+80h] [rbp-29h]
  int v75; // [rsp+84h] [rbp-25h]
  __int64 v76; // [rsp+88h] [rbp-21h]
  unsigned __int64 *v77; // [rsp+90h] [rbp-19h]
  struct tagBWL *v78; // [rsp+98h] [rbp-11h]
  _QWORD v79[12]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int16 v80; // [rsp+110h] [rbp+67h]
  int v81; // [rsp+118h] [rbp+6Fh]
  int v82; // [rsp+120h] [rbp+77h]
  int v83; // [rsp+128h] [rbp+7Fh]

  v2 = 0;
  v67 = 0;
  v68 = 0;
  v71 = 0;
  result = BuildHwndList(*(_QWORD **)(a1 + 88), 2, 0LL);
  v78 = result;
  v4 = result;
  if ( result )
  {
    v83 = IsTrayWindow(*(_QWORD **)(a1 + 88));
    v5 = *(_DWORD *)(gpsi + 2084LL);
    v6 = *(_DWORD *)(gpsi + 2088LL);
    InternalGetRealClientRect(a1, v73, 1LL, 0LL, 1);
    LOBYTE(v7) = 1;
    v65 = HMValidateHandleNoSecure(ghwndSwitch, v7);
    v72 = (unsigned __int64 *)((char *)v4 + 32);
    v9 = (unsigned __int64 *)((char *)v4 + 32);
    v10 = *((_QWORD *)v4 + 4);
    if ( v10 == 1 )
    {
LABEL_3:
      v11 = 0;
LABEL_4:
      FreeHwndList(v78);
      return (struct tagBWL *)v11;
    }
    while ( 1 )
    {
      LOBYTE(v8) = 1;
      v12 = HMValidateHandleNoSecure(v10, v8);
      v13 = v12;
      if ( !v12 )
        goto LABEL_11;
      if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 0x10) == 0 )
        goto LABEL_11;
      if ( v12 == v65 )
        goto LABEL_11;
      Prop = RealGetProp(*(_QWORD *)(v12 + 120), (unsigned __int16)atomCheckpointProp, 1LL);
      if ( !Prop )
        goto LABEL_11;
      v15 = *(_DWORD *)(Prop + 48);
      v16 = (_DWORD *)(Prop + 32);
      if ( (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL) & 0x20) == 0 )
        break;
      ++v2;
      *(_DWORD *)(Prop + 48) = v15 & 0xFFFFFFFE;
      *v16 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 88LL);
      *(_DWORD *)(Prop + 36) = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 92LL);
      ScreenToClient(a1, v16);
      v22 = *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7;
      if ( *(int *)(gpsi + 2120LL) < 0 )
        goto LABEL_12;
      if ( v22 <= 1 )
      {
        v8 = (unsigned int)((v6 / 2 + v75 - *(_DWORD *)(v20 + 36)) % v6 - (v6 / 2 - *(_DWORD *)(v20 + 36)));
        *(_DWORD *)(v20 + 36) = v8;
        goto LABEL_12;
      }
      if ( v22 <= 3 )
      {
        v8 = (unsigned int)((*(_DWORD *)(v20 + 36) + v6 / 2) >> 31);
        LODWORD(v8) = (*(_DWORD *)(v20 + 36) + v6 / 2) % v6;
        *(_DWORD *)(v20 + 36) = *(_DWORD *)(v20 + 36) + v6 / 2 - v8;
        goto LABEL_12;
      }
      switch ( v22 )
      {
        case 4:
LABEL_24:
          v8 = (unsigned int)((*v21 + v5 / 2) >> 31);
          LODWORD(v8) = (*v21 + v5 / 2) % v5;
          *v21 = *v21 + v5 / 2 - v8;
          break;
        case 5:
          goto LABEL_23;
        case 6:
          goto LABEL_24;
        case 7:
LABEL_23:
          v8 = (unsigned int)((v5 / 2 + v74 - *v21) % v5 - (v5 / 2 - *v21));
          *v21 = v8;
          break;
      }
LABEL_12:
      v10 = *++v9;
      if ( *v9 == 1 )
      {
        v17 = 0;
        v18 = v2 == 0;
        v80 = v2;
        v19 = 0;
        if ( v18 )
          goto LABEL_3;
        if ( v83 )
        {
          v23 = 0;
          v24 = -32000;
          v66 = 0xFFFF8300FFFF8300uLL;
          v25 = -32000;
          v26 = 0;
          goto LABEL_103;
        }
        v27 = *(_DWORD *)(gpsi + 2120LL);
        if ( (v27 & 1) != 0 )
        {
          v17 = v74 - v5;
          v67 = -v5;
        }
        else
        {
          v17 = v73[0] + *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
          v67 = v5;
        }
        LODWORD(v66) = v17;
        v24 = v17;
        v82 = v17;
        if ( (v27 & 2) != 0 )
        {
          v68 = v6;
          v81 = v73[1] + *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
          v25 = v81;
          HIDWORD(v66) = v81;
        }
        else
        {
          v81 = v75 - v6;
          v25 = v75 - v6;
          HIDWORD(v66) = v75 - v6;
          v68 = -v6;
        }
        v28 = *(_DWORD *)(gpsi + 2120LL) & 4;
        v23 = v28 == 0;
        v69 = v23;
        if ( v28 )
        {
          v8 = (unsigned int)(v75 >> 31);
          LODWORD(v8) = v75 % v6;
          v29 = v75 / v6;
        }
        else
        {
          v8 = (unsigned int)(v74 >> 31);
          LODWORD(v8) = v74 % v5;
          v29 = v74 / v5;
        }
        v30 = v72;
        v26 = v29;
        if ( v29 < 1 )
          v26 = 1;
        v70 = v26;
        v31 = *v72;
        v71 = v26;
        if ( *v72 != 1 )
        {
          v32 = v72;
          while ( 1 )
          {
            if ( !v31 )
              goto LABEL_100;
            LOBYTE(v8) = 1;
            v33 = HMValidateHandleNoSecure(v31, v8);
            v77 = (unsigned __int64 *)v33;
            v34 = (unsigned __int64 *)v33;
            if ( !v33 )
              goto LABEL_100;
            v35 = v32;
            v36 = 0;
            v37 = *(_QWORD *)(RealGetProp(*(_QWORD *)(v33 + 120), (unsigned __int16)atomCheckpointProp, 1LL) + 32);
            v76 = v37;
            if ( v32 >= v30 )
              goto LABEL_91;
            v38 = HIDWORD(v76);
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
            v8 = *(_QWORD *)(RealGetProp(*(_QWORD *)(v39 + 120), (unsigned __int16)atomCheckpointProp, 1LL) + 32);
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
            v34 = v77;
            v32 = v72;
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
              v23 = v69;
              v24 = v66;
              v17 = v82;
              v26 = v70;
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
        v19 = v81;
LABEL_103:
        v48 = v72;
        v49 = v72;
        v50 = *v72;
        if ( *v72 == 1 )
        {
LABEL_116:
          v11 = v80;
          v55 = (struct tagSMWP *)InternalBeginDeferWindowPos(2 * (unsigned int)v80);
          if ( v55 )
          {
            while ( 1 )
            {
              v64 = *v48;
              if ( *v48 == 1 )
                break;
              if ( v64 )
              {
                LOBYTE(v54) = 1;
                v56 = HMValidateHandleNoSecure(v64, v54);
                v57 = v56;
                if ( v56 )
                {
                  v58 = RealGetProp(*(_QWORD *)(v56 + 120), (unsigned __int16)atomCheckpointProp, 1LL);
                  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59);
                  v79[0] = *(_QWORD *)(ThreadWin32Thread + 408);
                  *(_QWORD *)(ThreadWin32Thread + 408) = v79;
                  v79[1] = v57;
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
                  ThreadUnlock1(v62, v61, v63);
                  if ( !v55 )
                    goto LABEL_4;
                }
              }
              ++v48;
            }
            xxxEndDeferWindowPosEx(v55, 1);
          }
          goto LABEL_4;
        }
        v51 = v23;
        while ( 2 )
        {
          if ( v50 )
          {
            LOBYTE(v8) = 1;
            v52 = HMValidateHandleNoSecure(v50, v8);
            if ( v52 )
            {
              v53 = RealGetProp(*(_QWORD *)(v52 + 120), (unsigned __int16)atomCheckpointProp, 1LL);
              if ( v53 )
              {
                *(_DWORD *)(v53 + 48) |= 0x20u;
                *(_QWORD *)(v53 + 32) = v66;
              }
              if ( !v83 )
              {
                if ( --v26 > 0 )
                {
                  if ( v51 )
                  {
                    v24 += v67;
                    LODWORD(v66) = v24;
                  }
                  else
                  {
LABEL_113:
                    v25 += v68;
                    HIDWORD(v66) = v25;
                  }
                }
                else
                {
                  v26 = v71;
                  if ( v51 )
                  {
                    v24 = v17;
                    LODWORD(v66) = v17;
                    goto LABEL_113;
                  }
                  v24 += v67;
                  v25 = v19;
                  v66 = __PAIR64__(v19, v24);
                }
              }
            }
          }
          v50 = *++v49;
          if ( *v49 == 1 )
          {
            v48 = v72;
            goto LABEL_116;
          }
          continue;
        }
      }
    }
    v8 = v15 & 0xFFFFFFDF;
    *v16 = -1;
    *(_DWORD *)(Prop + 48) = v8;
    *(_DWORD *)(Prop + 36) = -1;
LABEL_11:
    *v9 = 0LL;
    goto LABEL_12;
  }
  return result;
}
