/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0061534
 * Callers:
 *     xxxSendMessageBSM @ 0x1C0061390 (xxxSendMessageBSM.c)
 * Callees:
 *     CanForceForeground @ 0x1C0012630 (CanForceForeground.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     _PostTransformableMessageIL @ 0x1C0061A1C (_PostTransformableMessageIL.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00634B4 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendBSMtoDesktop(
        struct tagWND *a1,
        __int64 a2,
        HWND a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  __int64 v7; // r15
  unsigned int v9; // edi
  unsigned int v10; // esi
  int v11; // r12d
  unsigned __int64 *i; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // edx
  __int64 v17; // r8
  __int16 v18; // dx
  unsigned int v19; // ecx
  int v20; // r12d
  int v21; // r13d
  BOOL v22; // r15d
  int v23; // esi
  __m128i *v24; // r9
  bool v25; // cf
  int v26; // ecx
  __int64 v27; // rdx
  void *v28; // rcx
  __int64 v29; // r8
  __m128i v31; // xmm1
  PETHREAD *v32; // rcx
  PETHREAD *v33; // rcx
  _QWORD *v34; // rcx
  bool v35; // zf
  void *v36; // rax
  int v37; // [rsp+50h] [rbp-B0h]
  BOOL v38; // [rsp+54h] [rbp-ACh]
  int v39; // [rsp+58h] [rbp-A8h]
  int v40; // [rsp+5Ch] [rbp-A4h]
  HANDLE InputBuffer; // [rsp+68h] [rbp-98h] BYREF
  int v43; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+74h] [rbp-8Ch]
  __int64 v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-78h] BYREF
  __m128i *v48; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v49; // [rsp+98h] [rbp-68h]
  _DWORD v50[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-58h]
  void *Handle; // [rsp+B0h] [rbp-50h] BYREF
  struct tagBWL *v53; // [rsp+B8h] [rbp-48h]
  _QWORD v54[3]; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v55; // [rsp+D8h] [rbp-28h] BYREF
  int v56; // [rsp+E8h] [rbp-18h]

  v40 = 0;
  v38 = 0;
  v7 = a4;
  v9 = a2;
  v46 = gptiCurrent;
  v10 = 1;
  v48 = (__m128i *)a4;
  v37 = 1;
  if ( (unsigned int)(a2 - 1024) <= 0xBBFF )
  {
    v51 = 1LL;
    UserSetLastError(87LL, a2);
  }
  else
  {
    v51 = 0LL;
  }
  if ( a1 )
  {
    v11 = a6;
    if ( !a6 && (v9 == 21 || v9 == 26 || v9 == 29 || v9 == 295 || v9 == 794) )
    {
      v11 = 1;
      a6 = 1;
    }
    v53 = BuildHwndList(*((_QWORD **)a1 + 11), 2, 0LL);
    if ( v53 )
    {
      if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80
        && *((_QWORD *)a1 + 3) == grpdeskRitInput
        && ((*(_DWORD *)(v46 + 480) & 8) != 0 || (unsigned int)CanForceForeground(*(_QWORD *)(v46 + 416))) )
      {
        CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
      }
      if ( v9 != 537 || ((unsigned __int64)(a3 - 0x2000) & 0xFFFFFFFFFFFFFFFBuLL) != 0 || *(_DWORD *)(v7 + 4) != 2 )
        goto LABEL_14;
      if ( (*(_DWORD *)(v7 + 12) & 0x40000000) == 0 )
      {
        v31 = *(__m128i *)v7;
        v56 = *(_DWORD *)(v7 + 16);
        v55 = v31;
        v35 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
        v55.m128i_i32[3] = _mm_srli_si128(v31, 8).m128i_i32[1] | 0x40000000;
        if ( v35 )
        {
          v45 = 0LL;
          GetProcessLuid(0LL, &v45);
          if ( (_DWORD)v45 == luidSystem[0] )
            v38 = HIDWORD(v45) == luidSystem[1];
        }
LABEL_14:
        for ( i = (unsigned __int64 *)((char *)v53 + 32); ; ++i )
        {
          v13 = *i;
          v49 = i;
          if ( v13 == 1 )
          {
LABEL_44:
            FreeHwndList(v53);
            return v10;
          }
          v39 = 0;
          v14 = HMValidateHandleNoSecure(v13, 1LL);
          v15 = v14;
          if ( v14 )
          {
            v16 = *((_DWORD *)a5 + 1);
            if ( (v16 & 2) == 0 || *(_QWORD *)(*(_QWORD *)(v14 + 16) + 424LL) != *(_QWORD *)(v46 + 424) )
            {
              if ( (v16 & 0x400) == 0
                || (v34 = *(_QWORD **)(v14 + 16), v44 = 0, v43 = 0, (int)GetProcessLuid(*v34, &v43) >= 0)
                && *((_DWORD *)a5 + 8) == v43
                && *((_DWORD *)a5 + 9) == v44 )
              {
                if ( v38 )
                {
                  if ( (int)GetProcessLuid(**(_QWORD **)(v15 + 16), v50) < 0 )
                    continue;
                  if ( luidSystem[0] != v50[0] || luidSystem[1] != v50[1] )
                    v39 = 1;
                }
                v17 = *(_QWORD *)(v15 + 40);
                if ( (*(_WORD *)(v17 + 42) & 0x3FFF) != 0x29C )
                {
                  v18 = **(_WORD **)(*(_QWORD *)(v15 + 112) + 8LL);
                  if ( *(_WORD *)(gpsi + 908LL) != v18
                    && gaOleMainThreadWndClass != v18
                    && (!v51 || (*(_BYTE *)(v17 + 21) & 2) == 0) )
                  {
                    v54[0] = *(_QWORD *)(v46 + 408);
                    *(_QWORD *)(v46 + 408) = v54;
                    v54[1] = v15;
                    _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
                    v19 = *((_DWORD *)a5 + 1);
                    if ( (v19 & 0x10) != 0 )
                    {
                      PostTransformableMessageIL((struct tagWND *)v15, v9, (unsigned __int64)a3, v7, v11);
                    }
                    else if ( (v19 & 0x100) != 0 )
                    {
                      xxxSendNotifyMessage(
                        (struct tagWND *)v15,
                        v9,
                        (unsigned __int64)a3,
                        (struct _LARGE_STRING *)v7,
                        v11);
                    }
                    else if ( (v19 & 0x20000000) != 0 )
                    {
                      QueueNotifyTransformableMessage((struct tagWND *)v15, v9, (unsigned __int64)a3, v7, v11, 1);
                    }
                    else
                    {
                      BugCheckParameter3 = 0LL;
                      v20 = v19 & 8;
                      v21 = v19 & 0x20;
                      v22 = v9 == 536 && a3 == (HWND)4;
                      if ( (v19 & 8) != 0 )
                        v23 = v22 ? 2000 : 5000;
                      else
                        v23 = 0;
                      if ( v22 )
                      {
                        v32 = *(PETHREAD **)(v15 + 16);
                        InputBuffer = 0LL;
                        InputBuffer = PsGetThreadProcessId(*v32);
                        ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
                        v19 = *((_DWORD *)a5 + 1);
                      }
                      v24 = &v55;
                      v25 = v20 != 0;
                      v11 = a6;
                      v26 = (v19 >> 3) & 8;
                      if ( !v39 )
                        v24 = v48;
                      if ( xxxSendTransformableMessageTimeout(
                             (__int64 *)v15,
                             v9,
                             a3,
                             (__int64)v24,
                             (v25 ? 2 : 0) | (unsigned int)v26,
                             v23,
                             (__int64 *)&BugCheckParameter3,
                             a6,
                             1) )
                      {
                        if ( (*((_DWORD *)a5 + 1) & 1) != 0 )
                        {
                          v10 = 0;
                          if ( v9 == 17 )
                            v35 = BugCheckParameter3 == 0;
                          else
                            v35 = BugCheckParameter3 == 1112363332;
                          LOBYTE(v10) = !v35;
                          v37 = v10;
                        }
                        else
                        {
                          v10 = v37;
                        }
                      }
                      else
                      {
                        v10 = v21;
                        v37 = v21;
                      }
                      if ( v22 )
                      {
                        v33 = *(PETHREAD **)(v15 + 16);
                        InputBuffer = 0LL;
                        InputBuffer = PsGetThreadProcessId(*v33);
                        ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
                      }
                      if ( !v10 )
                      {
                        v35 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
                        *((_QWORD *)a5 + 3) = *(_QWORD *)v15;
                        if ( !v35 )
                        {
                          v28 = *(void **)(v15 + 24);
                          v36 = 0LL;
                          Handle = 0LL;
                          if ( v28 )
                          {
                            ObOpenObjectByPointer(v28, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
                            v36 = Handle;
                          }
                          *((_QWORD *)a5 + 2) = v36;
                        }
                        v40 = 1;
                      }
                      i = v49;
                      v7 = (__int64)v48;
                    }
                    ThreadUnlock1(v28, v27, v29);
                    if ( v40 )
                      goto LABEL_44;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
