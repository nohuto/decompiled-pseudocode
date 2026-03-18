/*
 * XREFs of xxxArrangeIconicWindows @ 0x1C0159B10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _ScreenToClient @ 0x1C008F834 (_ScreenToClient.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     InternalBeginDeferWindowPos @ 0x1C00CAE84 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C00CAF18 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00CEBD0 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     InternalGetRealClientRect @ 0x1C01112E0 (InternalGetRealClientRect.c)
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
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdi
  unsigned __int64 v14; // rax
  int v15; // r14d
  int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned int v19; // esi
  __int64 Prop; // rax
  int v21; // edx
  _DWORD *v22; // r11
  __int64 v23; // r10
  _DWORD *v24; // r11
  signed int v25; // ecx
  int v26; // ecx
  int v27; // r15d
  int v28; // esi
  int v29; // r14d
  int v30; // edx
  int v31; // eax
  unsigned __int64 *v32; // rdi
  unsigned __int64 *v33; // r13
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 *v36; // r15
  int v37; // r12d
  __int64 v38; // rbx
  int v39; // edi
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  bool v42; // cc
  bool v43; // cc
  bool v44; // cc
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  unsigned __int64 *v47; // r12
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // rbx
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 *v53; // r12
  unsigned __int64 *v54; // rbx
  unsigned __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  struct tagSMWP *v60; // rdi
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  _QWORD *v64; // r14
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // [rsp+50h] [rbp-49h]
  int v75; // [rsp+58h] [rbp-41h]
  int v76; // [rsp+5Ch] [rbp-3Dh]
  int v77; // [rsp+60h] [rbp-39h]
  int v78; // [rsp+64h] [rbp-35h]
  int v79; // [rsp+68h] [rbp-31h]
  unsigned __int64 *v80; // [rsp+70h] [rbp-29h]
  __int64 v81; // [rsp+78h] [rbp-21h]
  unsigned __int64 *v82; // [rsp+78h] [rbp-21h]
  __int64 v83; // [rsp+80h] [rbp-19h] BYREF
  __int64 v84; // [rsp+88h] [rbp-11h]
  struct tagBWL *v85; // [rsp+90h] [rbp-9h]
  __int64 v86; // [rsp+98h] [rbp-1h] BYREF
  _QWORD *v87; // [rsp+A0h] [rbp+7h]
  __int64 v88; // [rsp+A8h] [rbp+Fh]
  unsigned __int16 v89; // [rsp+100h] [rbp+67h]
  int v90; // [rsp+108h] [rbp+6Fh]
  int v91; // [rsp+110h] [rbp+77h]
  int v92; // [rsp+118h] [rbp+7Fh]

  v89 = 0;
  v2 = *(struct tagWND **)(a1 + 112);
  v83 = 0LL;
  v84 = 0LL;
  v77 = 0;
  v78 = 0;
  v91 = 0;
  v92 = 0;
  v79 = 0;
  v90 = 0;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  result = (struct tagBWL *)BuildHwndList(v2);
  v85 = result;
  v4 = result;
  if ( !result )
    return result;
  v76 = IsTrayWindow(*(_QWORD **)(a1 + 112));
  v5 = *(_DWORD *)(gpsi + 2084LL);
  v6 = *(_DWORD *)(gpsi + 2088LL);
  InternalGetRealClientRect(a1, (__int64)&v83, 1LL, 0LL, 1);
  LOBYTE(v7) = 1;
  v81 = HMValidateHandleNoSecure(ghwndSwitch, v7, v8, v9);
  v80 = (unsigned __int64 *)((char *)v4 + 32);
  v13 = (_QWORD *)((char *)v4 + 32);
  v14 = *((_QWORD *)v4 + 4);
  if ( v14 == 1 )
  {
LABEL_9:
    v19 = 0;
    goto LABEL_10;
  }
  v15 = HIDWORD(v84);
  v16 = v84;
  do
  {
    LOBYTE(v10) = 1;
    v17 = HMValidateHandleNoSecure(v14, v10, v11, v12);
    v12 = 0LL;
    v18 = v17;
    if ( !v17 )
      goto LABEL_6;
    if ( (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_6;
    if ( v17 == v81 )
      goto LABEL_6;
    Prop = GetProp(v17, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
    v12 = 0LL;
    if ( !Prop )
      goto LABEL_6;
    v21 = *(_DWORD *)(Prop + 48);
    v22 = (_DWORD *)(Prop + 32);
    if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 31LL) & 0x20) == 0 )
    {
      v10 = v21 & 0xFFFFFFDF;
      *(_DWORD *)(Prop + 48) = v10;
      *(_DWORD *)(Prop + 36) = -1;
      *v22 = -1;
LABEL_6:
      *v13 = 0LL;
      goto LABEL_7;
    }
    ++v89;
    *(_DWORD *)(Prop + 48) = v21 & 0xFFFFFFFE;
    *v22 = *(_DWORD *)(*(_QWORD *)(v18 + 40) + 88LL);
    *(_DWORD *)(Prop + 36) = *(_DWORD *)(*(_QWORD *)(v18 + 40) + 92LL);
    ScreenToClient(a1, v22);
    v25 = *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7;
    if ( *(int *)(gpsi + 2120LL) < 0 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v25 <= 1 )
      {
        v10 = (unsigned int)((v15 + v6 / 2 - *(_DWORD *)(v23 + 36)) % v6 - (v6 / 2 - *(_DWORD *)(v23 + 36)));
        *(_DWORD *)(v23 + 36) = v10;
      }
      else
      {
        if ( v25 <= 3 )
        {
          v10 = (unsigned int)((*(_DWORD *)(v23 + 36) + v6 / 2) >> 31);
          LODWORD(v10) = (*(_DWORD *)(v23 + 36) + v6 / 2) % v6;
          v11 = (unsigned int)(*(_DWORD *)(v23 + 36) + v6 / 2 - v10);
          *(_DWORD *)(v23 + 36) = v11;
          v12 = 0LL;
          goto LABEL_7;
        }
        switch ( v25 )
        {
          case 4:
            goto LABEL_25;
          case 5:
LABEL_24:
            v10 = (unsigned int)((v16 + v5 / 2 - *v24) % v5 - (v5 / 2 - *v24));
            *v24 = v10;
LABEL_26:
            v12 = 0LL;
            goto LABEL_7;
          case 6:
LABEL_25:
            v10 = (unsigned int)((*v24 + v5 / 2) >> 31);
            LODWORD(v10) = (*v24 + v5 / 2) % v5;
            v11 = (unsigned int)(*v24 + v5 / 2 - v10);
            *v24 = v11;
            goto LABEL_26;
          case 7:
            goto LABEL_24;
        }
      }
      v12 = 0LL;
    }
LABEL_7:
    v14 = *++v13;
  }
  while ( *v13 != 1LL );
  if ( !v89 )
    goto LABEL_9;
  v26 = v76;
  if ( v76 )
  {
    v27 = 0;
    v28 = -32000;
    v74 = 0xFFFF8300FFFF8300uLL;
    v29 = -32000;
    goto LABEL_104;
  }
  v30 = *(_DWORD *)(gpsi + 2120LL);
  if ( (v30 & 1) != 0 )
  {
    v77 = v16 - v5;
    v28 = v16 - v5;
    LODWORD(v74) = v16 - v5;
    v91 = -v5;
  }
  else
  {
    v11 = (unsigned int)(v83 + *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL));
    v77 = v83 + *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
    v28 = v77;
    LODWORD(v74) = v77;
    v91 = v5;
  }
  if ( (v30 & 2) != 0 )
  {
    v92 = v6;
    v78 = HIDWORD(v83) + *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
    v29 = v78;
    HIDWORD(v74) = v78;
  }
  else
  {
    v29 = v15 - v6;
    v78 = v29;
    HIDWORD(v74) = v29;
    v92 = -v6;
  }
  if ( (v30 & 4) != 0 )
  {
    v10 = (unsigned int)(SHIDWORD(v84) >> 31);
    v90 = 0;
    LODWORD(v10) = SHIDWORD(v84) % v6;
    v31 = SHIDWORD(v84) / v6;
  }
  else
  {
    v90 = 1;
    v10 = (unsigned int)(v16 >> 31);
    LODWORD(v10) = v16 % v5;
    v31 = v16 / v5;
  }
  v32 = v80;
  v27 = v31;
  v33 = v80;
  if ( v31 < 1 )
    v27 = 1;
  v75 = v27;
  v34 = *v80;
  v79 = v27;
  if ( *v80 != 1 )
  {
    while ( 2 )
    {
      if ( v34 )
      {
        LOBYTE(v10) = 1;
        v35 = HMValidateHandleNoSecure(v34, v10, v11, 0LL);
        v82 = (unsigned __int64 *)v35;
        if ( v35 )
        {
          v36 = v32;
          v37 = 0;
          v38 = *(_QWORD *)(GetProp(v35, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL) + 32);
          v83 = v38;
          if ( v32 < v33 )
          {
            v39 = HIDWORD(v83);
            while ( 1 )
            {
              if ( *v36 )
              {
                LOBYTE(v10) = 1;
                v40 = HMValidateHandleNoSecure(*v36, v10, v11, 0LL);
                if ( v40 )
                  break;
              }
LABEL_91:
              if ( ++v36 >= v33 )
                goto LABEL_92;
            }
            v41 = *(_QWORD *)(GetProp(v40, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL) + 32);
            v10 = gpsi;
            v11 = *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7;
            if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) != 0 )
            {
              v11 = (unsigned int)(v11 - 1);
              if ( (_DWORD)v11 )
              {
                v11 = (unsigned int)(v11 - 1);
                if ( (_DWORD)v11 )
                {
                  v11 = (unsigned int)(v11 - 1);
                  if ( (_DWORD)v11 )
                  {
                    v11 = (unsigned int)(v11 - 1);
                    if ( !(_DWORD)v11 )
                    {
                      v43 = (int)v41 <= (int)v38;
                      if ( (_DWORD)v41 == (_DWORD)v38 )
                      {
                        if ( SHIDWORD(v41) < v39 )
                          goto LABEL_89;
LABEL_66:
                        v43 = (int)v41 <= (int)v38;
                      }
                      goto LABEL_68;
                    }
                    v11 = (unsigned int)(v11 - 1);
                    if ( (_DWORD)v11 )
                    {
                      v11 = (unsigned int)(v11 - 1);
                      if ( (_DWORD)v11 )
                      {
                        if ( (_DWORD)v11 == 1 )
                        {
                          v42 = (int)v41 < (int)v38;
                          if ( (_DWORD)v41 == (_DWORD)v38 )
                          {
                            if ( SHIDWORD(v41) > v39 )
                              goto LABEL_92;
                            v42 = (int)v41 < (int)v38;
                          }
                          if ( v42 )
                            goto LABEL_92;
                        }
                        goto LABEL_90;
                      }
                      v43 = (int)v41 <= (int)v38;
                      if ( (_DWORD)v41 == (_DWORD)v38 )
                      {
                        if ( SHIDWORD(v41) <= v39 )
                          goto LABEL_66;
LABEL_89:
                        v37 = 1;
LABEL_90:
                        if ( v37 )
                          goto LABEL_92;
                        goto LABEL_91;
                      }
LABEL_68:
                      if ( !v43 )
                        goto LABEL_89;
                      goto LABEL_90;
                    }
                    v44 = (int)v41 < (int)v38;
                    if ( (_DWORD)v41 == (_DWORD)v38 )
                    {
                      if ( SHIDWORD(v41) < v39 )
                        goto LABEL_89;
                      v44 = (int)v41 < (int)v38;
                    }
LABEL_88:
                    if ( v44 )
                      goto LABEL_89;
                    goto LABEL_90;
                  }
                  v45 = HIDWORD(v41);
                  v43 = SHIDWORD(v41) <= v39;
                  if ( HIDWORD(v41) != v39 )
                    goto LABEL_68;
                  if ( (int)v41 < (int)v38 )
                    goto LABEL_89;
                }
                else
                {
                  v45 = HIDWORD(v41);
                  v43 = SHIDWORD(v41) <= v39;
                  if ( HIDWORD(v41) != v39 )
                    goto LABEL_68;
                  if ( (int)v41 > (int)v38 )
                    goto LABEL_89;
                }
                v43 = (int)v45 <= v39;
                goto LABEL_68;
              }
              v46 = HIDWORD(v41);
              v44 = SHIDWORD(v41) < v39;
              if ( HIDWORD(v41) != v39 )
                goto LABEL_88;
              if ( (int)v41 < (int)v38 )
                goto LABEL_89;
            }
            else
            {
              v46 = HIDWORD(v41);
              v44 = SHIDWORD(v41) < v39;
              if ( HIDWORD(v41) != v39 )
                goto LABEL_88;
              if ( (int)v41 > (int)v38 )
                goto LABEL_89;
            }
            v44 = (int)v46 < v39;
            goto LABEL_88;
          }
LABEL_92:
          v47 = v82;
          v48 = 0LL;
          v49 = (unsigned __int64)((char *)v33 - (char *)v36 + 7) >> 3;
          if ( v36 > v33 )
            v49 = 0LL;
          if ( v49 )
          {
            do
            {
              v50 = _HMObjectFromHandle(*v36);
              v51 = 0LL;
              if ( v47 )
                v51 = *v47;
              *v36 = v51;
              ++v48;
              ++v36;
              v47 = (unsigned __int64 *)v50;
            }
            while ( v48 < v49 );
          }
          v52 = 0LL;
          if ( v47 )
            v52 = *v47;
          v32 = v80;
          *v33 = v52;
        }
      }
      v34 = *++v33;
      if ( *v33 == 1 )
      {
        v28 = v74;
        v27 = v75;
        break;
      }
      continue;
    }
  }
  v26 = 0;
LABEL_104:
  v53 = v80;
  v54 = v80;
  v55 = *v80;
  if ( *v80 != 1 )
  {
    v56 = v26;
    while ( 1 )
    {
      if ( !v55 )
        goto LABEL_115;
      LOBYTE(v10) = 1;
      v57 = HMValidateHandleNoSecure(v55, v10, v11, 0LL);
      if ( !v57 )
        goto LABEL_115;
      v58 = GetProp(v57, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      if ( v58 )
      {
        *(_DWORD *)(v58 + 48) |= 0x20u;
        *(_QWORD *)(v58 + 32) = v74;
      }
      if ( v56 )
        goto LABEL_115;
      if ( --v27 > 0 )
      {
        if ( v90 )
        {
          v28 += v91;
          LODWORD(v74) = v28;
          goto LABEL_115;
        }
      }
      else
      {
        v27 = v79;
        if ( !v90 )
        {
          v28 += v91;
          v29 = v78;
          v74 = __PAIR64__(v78, v28);
          goto LABEL_115;
        }
        v28 = v77;
        LODWORD(v74) = v77;
      }
      v29 += v92;
      HIDWORD(v74) = v29;
LABEL_115:
      v55 = *++v54;
      if ( *v54 == 1 )
      {
        v53 = v80;
        break;
      }
    }
  }
  v19 = v89;
  v60 = (struct tagSMWP *)InternalBeginDeferWindowPos(2 * (unsigned int)v89);
  if ( v60 )
  {
    while ( 1 )
    {
      v73 = *v53;
      if ( *v53 == 1 )
        break;
      if ( v73 )
      {
        LOBYTE(v59) = 1;
        v63 = HMValidateHandleNoSecure(v73, v59, v61, v62);
        v64 = (_QWORD *)v63;
        if ( v63 )
        {
          v65 = GetProp(v63, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v66, v67, v68);
          v86 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v86;
          v87 = v64;
          HMLockObject(v64);
          v60 = (struct tagSMWP *)_DeferWindowPos(
                                    (__int64)v60,
                                    v64,
                                    0LL,
                                    *(_DWORD *)(v65 + 32),
                                    *(_DWORD *)(v65 + 36),
                                    *(_DWORD *)(gpsi + 2124LL),
                                    *(_DWORD *)(gpsi + 2128LL),
                                    276,
                                    0);
          ThreadUnlock1(v71, v70, v72);
          if ( !v60 )
            goto LABEL_10;
        }
      }
      ++v53;
    }
    xxxEndDeferWindowPosEx(v60, 1LL);
  }
LABEL_10:
  FreeHwndList(v85);
  return (struct tagBWL *)v19;
}
