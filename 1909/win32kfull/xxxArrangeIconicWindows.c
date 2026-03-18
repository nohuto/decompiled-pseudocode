/*
 * XREFs of xxxArrangeIconicWindows @ 0x1C015AAC0
 * Callers:
 *     <none>
 * Callees:
 *     _ScreenToClient @ 0x1C001B03C (_ScreenToClient.c)
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     InternalBeginDeferWindowPos @ 0x1C006C554 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C006C5E8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     InternalGetRealClientRect @ 0x1C00EC190 (InternalGetRealClientRect.c)
 */

struct tagBWL *__fastcall xxxArrangeIconicWindows(__int64 a1)
{
  struct tagWND *v2; // rcx
  struct tagBWL *result; // rax
  struct tagBWL *v4; // rbx
  int v5; // r15d
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rax
  int v13; // r14d
  int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned int v17; // esi
  __int64 Prop; // rax
  int v19; // edx
  _DWORD *v20; // r11
  __int64 v21; // r10
  _DWORD *v22; // r11
  signed int v23; // ecx
  int v24; // ecx
  int v25; // r15d
  int v26; // esi
  int v27; // r14d
  int v28; // edx
  int v29; // eax
  unsigned __int64 *v30; // rdi
  unsigned __int64 *v31; // r13
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 *v34; // r15
  int v35; // r12d
  __int64 v36; // rbx
  int v37; // edi
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  bool v40; // cc
  bool v41; // cc
  bool v42; // cc
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned __int64 *v45; // r12
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rbx
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned __int64 *v51; // r12
  unsigned __int64 *v52; // rbx
  unsigned __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  struct tagSMWP *v58; // rdi
  __int64 v59; // r8
  __int64 v60; // rax
  _QWORD *v61; // r14
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // [rsp+50h] [rbp-49h]
  int v71; // [rsp+58h] [rbp-41h]
  int v72; // [rsp+5Ch] [rbp-3Dh]
  int v73; // [rsp+60h] [rbp-39h]
  int v74; // [rsp+64h] [rbp-35h]
  int v75; // [rsp+68h] [rbp-31h]
  unsigned __int64 *v76; // [rsp+70h] [rbp-29h]
  __int64 v77; // [rsp+78h] [rbp-21h]
  unsigned __int64 *v78; // [rsp+78h] [rbp-21h]
  __int64 v79; // [rsp+80h] [rbp-19h] BYREF
  __int64 v80; // [rsp+88h] [rbp-11h]
  struct tagBWL *v81; // [rsp+90h] [rbp-9h]
  __int64 v82; // [rsp+98h] [rbp-1h] BYREF
  _QWORD *v83; // [rsp+A0h] [rbp+7h]
  __int64 v84; // [rsp+A8h] [rbp+Fh]
  unsigned __int16 v85; // [rsp+100h] [rbp+67h]
  int v86; // [rsp+108h] [rbp+6Fh]
  int v87; // [rsp+110h] [rbp+77h]
  int v88; // [rsp+118h] [rbp+7Fh]

  v85 = 0;
  v2 = *(struct tagWND **)(a1 + 112);
  v79 = 0LL;
  v80 = 0LL;
  v73 = 0;
  v74 = 0;
  v87 = 0;
  v88 = 0;
  v75 = 0;
  v86 = 0;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  result = (struct tagBWL *)BuildHwndList(v2);
  v81 = result;
  v4 = result;
  if ( !result )
    return result;
  v72 = IsTrayWindow(*(_QWORD **)(a1 + 112));
  v5 = *(_DWORD *)(gpsi + 2084LL);
  v6 = *(_DWORD *)(gpsi + 2088LL);
  InternalGetRealClientRect(a1, (__int64)&v79, 1LL, 0LL, 1);
  LOBYTE(v7) = 1;
  v77 = HMValidateHandleNoSecure(ghwndSwitch, v7, v8);
  v76 = (unsigned __int64 *)((char *)v4 + 32);
  v11 = (_QWORD *)((char *)v4 + 32);
  v12 = *((_QWORD *)v4 + 4);
  if ( v12 == 1 )
  {
LABEL_9:
    v17 = 0;
    goto LABEL_10;
  }
  v13 = HIDWORD(v80);
  v14 = v80;
  do
  {
    LOBYTE(v9) = 1;
    v15 = HMValidateHandleNoSecure(v12, v9, v10);
    v16 = v15;
    if ( !v15 )
      goto LABEL_6;
    if ( (*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_6;
    if ( v15 == v77 )
      goto LABEL_6;
    Prop = GetProp(v15, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
    if ( !Prop )
      goto LABEL_6;
    v19 = *(_DWORD *)(Prop + 48);
    v20 = (_DWORD *)(Prop + 32);
    if ( (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 0x20) == 0 )
    {
      v9 = v19 & 0xFFFFFFDF;
      *(_DWORD *)(Prop + 48) = v9;
      *(_DWORD *)(Prop + 36) = -1;
      *v20 = -1;
LABEL_6:
      *v11 = 0LL;
      goto LABEL_7;
    }
    ++v85;
    *(_DWORD *)(Prop + 48) = v19 & 0xFFFFFFFE;
    *v20 = *(_DWORD *)(*(_QWORD *)(v16 + 40) + 88LL);
    *(_DWORD *)(Prop + 36) = *(_DWORD *)(*(_QWORD *)(v16 + 40) + 92LL);
    ScreenToClient(a1, v20);
    v23 = *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7;
    if ( *(int *)(gpsi + 2120LL) >= 0 )
    {
      if ( v23 <= 1 )
      {
        v9 = (unsigned int)((v13 + v6 / 2 - *(_DWORD *)(v21 + 36)) % v6 - (v6 / 2 - *(_DWORD *)(v21 + 36)));
        *(_DWORD *)(v21 + 36) = v9;
      }
      else if ( v23 <= 3 )
      {
        v9 = (unsigned int)((*(_DWORD *)(v21 + 36) + v6 / 2) >> 31);
        LODWORD(v9) = (*(_DWORD *)(v21 + 36) + v6 / 2) % v6;
        v10 = (unsigned int)(*(_DWORD *)(v21 + 36) + v6 / 2 - v9);
        *(_DWORD *)(v21 + 36) = v10;
      }
      else
      {
        switch ( v23 )
        {
          case 4:
            goto LABEL_25;
          case 5:
            goto LABEL_24;
          case 6:
LABEL_25:
            v9 = (unsigned int)((*v22 + v5 / 2) >> 31);
            LODWORD(v9) = (*v22 + v5 / 2) % v5;
            v10 = (unsigned int)(*v22 + v5 / 2 - v9);
            *v22 = v10;
            break;
          case 7:
LABEL_24:
            v9 = (unsigned int)((v14 + v5 / 2 - *v22) % v5 - (v5 / 2 - *v22));
            *v22 = v9;
            break;
        }
      }
    }
LABEL_7:
    v12 = *++v11;
  }
  while ( *v11 != 1LL );
  if ( !v85 )
    goto LABEL_9;
  v24 = v72;
  if ( v72 )
  {
    v25 = 0;
    v26 = -32000;
    v70 = 0xFFFF8300FFFF8300uLL;
    v27 = -32000;
    goto LABEL_103;
  }
  v28 = *(_DWORD *)(gpsi + 2120LL);
  if ( (v28 & 1) != 0 )
  {
    v73 = v14 - v5;
    v26 = v14 - v5;
    LODWORD(v70) = v14 - v5;
    v87 = -v5;
  }
  else
  {
    v10 = (unsigned int)(v79 + *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL));
    v73 = v79 + *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
    v26 = v73;
    LODWORD(v70) = v73;
    v87 = v5;
  }
  if ( (v28 & 2) != 0 )
  {
    v88 = v6;
    v74 = HIDWORD(v79) + *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
    v27 = v74;
    HIDWORD(v70) = v74;
  }
  else
  {
    v27 = v13 - v6;
    v74 = v27;
    HIDWORD(v70) = v27;
    v88 = -v6;
  }
  if ( (v28 & 4) != 0 )
  {
    v9 = (unsigned int)(SHIDWORD(v80) >> 31);
    v86 = 0;
    LODWORD(v9) = SHIDWORD(v80) % v6;
    v29 = SHIDWORD(v80) / v6;
  }
  else
  {
    v86 = 1;
    v9 = (unsigned int)(v14 >> 31);
    LODWORD(v9) = v14 % v5;
    v29 = v14 / v5;
  }
  v30 = v76;
  v25 = v29;
  v31 = v76;
  if ( v29 < 1 )
    v25 = 1;
  v71 = v25;
  v32 = *v76;
  v75 = v25;
  if ( *v76 != 1 )
  {
    while ( 2 )
    {
      if ( v32 )
      {
        LOBYTE(v9) = 1;
        v33 = HMValidateHandleNoSecure(v32, v9, v10);
        v78 = (unsigned __int64 *)v33;
        if ( v33 )
        {
          v34 = v30;
          v35 = 0;
          v36 = *(_QWORD *)(GetProp(v33, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL) + 32);
          v79 = v36;
          if ( v30 < v31 )
          {
            v37 = HIDWORD(v79);
            while ( 1 )
            {
              if ( *v34 )
              {
                LOBYTE(v9) = 1;
                v38 = HMValidateHandleNoSecure(*v34, v9, v10);
                if ( v38 )
                  break;
              }
LABEL_90:
              if ( ++v34 >= v31 )
                goto LABEL_91;
            }
            v39 = *(_QWORD *)(GetProp(v38, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL) + 32);
            v9 = gpsi;
            v10 = *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7;
            if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 0 )
            {
              v10 = (unsigned int)(v10 - 1);
              if ( (_DWORD)v10 )
              {
                v10 = (unsigned int)(v10 - 1);
                if ( (_DWORD)v10 )
                {
                  v10 = (unsigned int)(v10 - 1);
                  if ( (_DWORD)v10 )
                  {
                    v10 = (unsigned int)(v10 - 1);
                    if ( !(_DWORD)v10 )
                    {
                      v41 = (int)v39 <= (int)v36;
                      if ( (_DWORD)v39 == (_DWORD)v36 )
                      {
                        if ( SHIDWORD(v39) < v37 )
                          goto LABEL_88;
LABEL_65:
                        v41 = (int)v39 <= (int)v36;
                      }
                      goto LABEL_67;
                    }
                    v10 = (unsigned int)(v10 - 1);
                    if ( (_DWORD)v10 )
                    {
                      v10 = (unsigned int)(v10 - 1);
                      if ( (_DWORD)v10 )
                      {
                        if ( (_DWORD)v10 == 1 )
                        {
                          v40 = (int)v39 < (int)v36;
                          if ( (_DWORD)v39 == (_DWORD)v36 )
                          {
                            if ( SHIDWORD(v39) > v37 )
                              goto LABEL_91;
                            v40 = (int)v39 < (int)v36;
                          }
                          if ( v40 )
                            goto LABEL_91;
                        }
                        goto LABEL_89;
                      }
                      v41 = (int)v39 <= (int)v36;
                      if ( (_DWORD)v39 == (_DWORD)v36 )
                      {
                        if ( SHIDWORD(v39) <= v37 )
                          goto LABEL_65;
LABEL_88:
                        v35 = 1;
LABEL_89:
                        if ( v35 )
                          goto LABEL_91;
                        goto LABEL_90;
                      }
LABEL_67:
                      if ( !v41 )
                        goto LABEL_88;
                      goto LABEL_89;
                    }
                    v42 = (int)v39 < (int)v36;
                    if ( (_DWORD)v39 == (_DWORD)v36 )
                    {
                      if ( SHIDWORD(v39) < v37 )
                        goto LABEL_88;
                      v42 = (int)v39 < (int)v36;
                    }
LABEL_87:
                    if ( v42 )
                      goto LABEL_88;
                    goto LABEL_89;
                  }
                  v43 = HIDWORD(v39);
                  v41 = SHIDWORD(v39) <= v37;
                  if ( HIDWORD(v39) != v37 )
                    goto LABEL_67;
                  if ( (int)v39 < (int)v36 )
                    goto LABEL_88;
                }
                else
                {
                  v43 = HIDWORD(v39);
                  v41 = SHIDWORD(v39) <= v37;
                  if ( HIDWORD(v39) != v37 )
                    goto LABEL_67;
                  if ( (int)v39 > (int)v36 )
                    goto LABEL_88;
                }
                v41 = (int)v43 <= v37;
                goto LABEL_67;
              }
              v44 = HIDWORD(v39);
              v42 = SHIDWORD(v39) < v37;
              if ( HIDWORD(v39) != v37 )
                goto LABEL_87;
              if ( (int)v39 < (int)v36 )
                goto LABEL_88;
            }
            else
            {
              v44 = HIDWORD(v39);
              v42 = SHIDWORD(v39) < v37;
              if ( HIDWORD(v39) != v37 )
                goto LABEL_87;
              if ( (int)v39 > (int)v36 )
                goto LABEL_88;
            }
            v42 = (int)v44 < v37;
            goto LABEL_87;
          }
LABEL_91:
          v45 = v78;
          v46 = 0LL;
          v47 = (unsigned __int64)((char *)v31 - (char *)v34 + 7) >> 3;
          if ( v34 > v31 )
            v47 = 0LL;
          if ( v47 )
          {
            do
            {
              v48 = _HMObjectFromHandle(*v34);
              v49 = 0LL;
              if ( v45 )
                v49 = *v45;
              *v34 = v49;
              ++v46;
              ++v34;
              v45 = (unsigned __int64 *)v48;
            }
            while ( v46 < v47 );
          }
          v50 = 0LL;
          if ( v45 )
            v50 = *v45;
          v30 = v76;
          *v31 = v50;
        }
      }
      v32 = *++v31;
      if ( *v31 == 1 )
      {
        v26 = v70;
        v25 = v71;
        break;
      }
      continue;
    }
  }
  v24 = 0;
LABEL_103:
  v51 = v76;
  v52 = v76;
  v53 = *v76;
  if ( *v76 != 1 )
  {
    v54 = v24;
    while ( 1 )
    {
      if ( !v53 )
        goto LABEL_114;
      LOBYTE(v9) = 1;
      v55 = HMValidateHandleNoSecure(v53, v9, v10);
      if ( !v55 )
        goto LABEL_114;
      v56 = GetProp(v55, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      if ( v56 )
      {
        *(_DWORD *)(v56 + 48) |= 0x20u;
        *(_QWORD *)(v56 + 32) = v70;
      }
      if ( v54 )
        goto LABEL_114;
      if ( --v25 > 0 )
      {
        if ( v86 )
        {
          v26 += v87;
          LODWORD(v70) = v26;
          goto LABEL_114;
        }
      }
      else
      {
        v25 = v75;
        if ( !v86 )
        {
          v26 += v87;
          v27 = v74;
          v70 = __PAIR64__(v74, v26);
          goto LABEL_114;
        }
        v26 = v73;
        LODWORD(v70) = v73;
      }
      v27 += v88;
      HIDWORD(v70) = v27;
LABEL_114:
      v53 = *++v52;
      if ( *v52 == 1 )
      {
        v51 = v76;
        break;
      }
    }
  }
  v17 = v85;
  v58 = (struct tagSMWP *)InternalBeginDeferWindowPos(2 * (unsigned int)v85);
  if ( v58 )
  {
    while ( 1 )
    {
      v69 = *v51;
      if ( *v51 == 1 )
        break;
      if ( v69 )
      {
        LOBYTE(v57) = 1;
        v60 = HMValidateHandleNoSecure(v69, v57, v59);
        v61 = (_QWORD *)v60;
        if ( v60 )
        {
          v62 = GetProp(v60, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v63, v64);
          v82 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v82;
          v83 = v61;
          HMLockObject(v61);
          v58 = (struct tagSMWP *)_DeferWindowPos(
                                    (__int64)v58,
                                    v61,
                                    0LL,
                                    *(_DWORD *)(v62 + 32),
                                    *(_DWORD *)(v62 + 36),
                                    *(_DWORD *)(gpsi + 2124LL),
                                    *(_DWORD *)(gpsi + 2128LL),
                                    276,
                                    0);
          ThreadUnlock1(v67, v66, v68);
          if ( !v58 )
            goto LABEL_10;
        }
      }
      ++v51;
    }
    xxxEndDeferWindowPosEx(v58, 1LL);
  }
LABEL_10:
  FreeHwndList(v81);
  return (struct tagBWL *)v17;
}
