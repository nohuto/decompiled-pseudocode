/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0011AAC
 * Callers:
 *     xxxSendMessageBSM @ 0x1C0011930 (xxxSendMessageBSM.c)
 * Callees:
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C0011538 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     _PostTransformableMessageIL @ 0x1C0012080 (_PostTransformableMessageIL.c)
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     CanForceForeground @ 0x1C0021100 (CanForceForeground.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendBSMtoDesktop(
        struct tagWND **a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  __int64 v7; // r15
  unsigned int v9; // esi
  int v10; // eax
  int v11; // r13d
  __int64 v12; // rdx
  _BOOL8 v13; // r12
  __int64 v14; // rax
  __int64 v16; // rax
  ULONG_PTR v17; // rbx
  __int64 v18; // r8
  unsigned int v19; // ecx
  int v20; // r13d
  BOOL v21; // r15d
  int v22; // esi
  bool v23; // cf
  _QWORD *v24; // rcx
  __m128i v25; // xmm0
  PETHREAD *v26; // rcx
  _QWORD *v27; // rcx
  bool v28; // zf
  void *v29; // rcx
  void *v30; // rax
  int v31; // [rsp+50h] [rbp-99h]
  __int64 v32; // [rsp+58h] [rbp-91h] BYREF
  unsigned __int64 v33; // [rsp+60h] [rbp-89h]
  int v34; // [rsp+68h] [rbp-81h]
  int v35; // [rsp+6Ch] [rbp-7Dh]
  HANDLE InputBuffer; // [rsp+70h] [rbp-79h] BYREF
  void *Handle; // [rsp+78h] [rbp-71h] BYREF
  __int64 v38; // [rsp+80h] [rbp-69h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-61h] BYREF
  __int64 v40; // [rsp+90h] [rbp-59h]
  __int64 v41; // [rsp+98h] [rbp-51h]
  __int64 v42; // [rsp+A0h] [rbp-49h]
  _QWORD *v43; // [rsp+A8h] [rbp-41h]
  __int64 v44; // [rsp+B0h] [rbp-39h]
  __int64 v45; // [rsp+B8h] [rbp-31h] BYREF
  ULONG_PTR v46; // [rsp+C0h] [rbp-29h]
  __int64 v47; // [rsp+C8h] [rbp-21h]
  __m128i v48; // [rsp+D0h] [rbp-19h]
  int v49; // [rsp+E0h] [rbp-9h]

  v35 = 0;
  v45 = 0LL;
  v7 = a4;
  v46 = 0LL;
  v47 = 0LL;
  v9 = 1;
  v40 = a4;
  v33 = a3;
  v31 = 1;
  v42 = gptiCurrent;
  if ( a2 - 1024 <= 0xBBFF )
  {
    v10 = 1;
    v41 = 1LL;
  }
  else
  {
    v10 = 0;
    v41 = 0LL;
  }
  v48 = 0uLL;
  v49 = 0;
  if ( v10 )
    UserSetLastError(87LL);
  if ( a1 )
  {
    v11 = a6;
    if ( !a6 && (a2 == 21 || a2 == 26 || a2 == 29 || a2 == 295 || a2 == 794) )
    {
      v11 = 1;
      a6 = 1;
    }
    v44 = BuildHwndList(a1[14]);
    if ( v44 )
    {
      if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80
        && a1[3] == (struct tagWND *)grpdeskRitInput
        && ((*(_DWORD *)(gptiCurrent + 480LL) & 8) != 0
         || (unsigned int)CanForceForeground(*(_QWORD *)(gptiCurrent + 416LL))) )
      {
        CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
      }
      v13 = 0LL;
      if ( a2 != 537 || v33 != 0x8000 && v33 != 32772 || (v13 = 0LL, *(_DWORD *)(v7 + 4) != 2) )
      {
LABEL_17:
        v43 = (_QWORD *)(v44 + 32);
        v14 = *(_QWORD *)(v44 + 32);
        if ( v14 == 1 )
        {
LABEL_18:
          FreeHwndList(v44);
          return v9;
        }
        while ( 1 )
        {
          v34 = 0;
          LOBYTE(v12) = 1;
          v16 = HMValidateHandleNoSecure(v14, v12);
          v17 = v16;
          if ( !v16 )
            goto LABEL_44;
          v12 = *((unsigned int *)a5 + 1);
          if ( (v12 & 2) != 0 && *(_QWORD *)(*(_QWORD *)(v16 + 16) + 424LL) == *(_QWORD *)(v42 + 424) )
            goto LABEL_44;
          if ( (v12 & 0x400) != 0 )
          {
            v27 = *(_QWORD **)(v16 + 16);
            v32 = 0LL;
            if ( (int)GetProcessLuid(*v27, &v32) < 0 || *((_QWORD *)a5 + 4) != v32 )
              goto LABEL_44;
          }
          if ( v13 )
          {
            v24 = *(_QWORD **)(v17 + 16);
            v38 = 0LL;
            if ( (int)GetProcessLuid(*v24, &v38) < 0 )
              goto LABEL_44;
            if ( __PAIR64__(luidSystem[1], luidSystem[0]) != v38 )
              v34 = 1;
          }
          v18 = *(_QWORD *)(v17 + 40);
          if ( (*(_WORD *)(v18 + 42) & 0x3FFF) != 0x29C )
          {
            v12 = **(unsigned __int16 **)(*(_QWORD *)(v17 + 136) + 8LL);
            if ( *(_WORD *)(gpsi + 908LL) != (_WORD)v12
              && gaOleMainThreadWndClass != (_WORD)v12
              && (!v41 || (*(_BYTE *)(v18 + 21) & 2) == 0) )
            {
              v45 = *(_QWORD *)(v42 + 408);
              *(_QWORD *)(v42 + 408) = &v45;
              v46 = v17;
              HMLockObject(v17);
              v19 = *((_DWORD *)a5 + 1);
              if ( (v19 & 0x10) != 0 )
              {
                PostTransformableMessageIL((struct tagWND *)v17, a2, v33, v7, v11);
              }
              else if ( (v19 & 0x100) != 0 )
              {
                xxxSendNotifyMessage(v17, a2, v33, v7, v11);
              }
              else if ( (v19 & 0x20000000) != 0 )
              {
                QueueNotifyTransformableMessage((struct tagWND *)v17, a2, v33, v7, v11, 1);
              }
              else
              {
                BugCheckParameter3 = 0LL;
                InputBuffer = 0LL;
                v20 = v19 & 8;
                LODWORD(Handle) = v19 & 0x20;
                v21 = a2 == 536 && v33 == 4;
                if ( (v19 & 8) != 0 )
                  v22 = v21 ? 2000 : 5000;
                else
                  v22 = 0;
                if ( v21 )
                {
                  InputBuffer = PsGetThreadProcessId(**(PETHREAD **)(v17 + 16));
                  ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
                  v19 = *((_DWORD *)a5 + 1);
                }
                v23 = v20 != 0;
                v11 = a6;
                if ( xxxSendTransformableMessageTimeout(
                       v17,
                       (v19 >> 3) & 8 | (v23 ? 2 : 0),
                       v22,
                       (ULONG_PTR)&BugCheckParameter3,
                       a6,
                       1) )
                {
                  if ( (*((_DWORD *)a5 + 1) & 1) == 0 )
                  {
                    v9 = v31;
                    goto LABEL_39;
                  }
                  v9 = 0;
                  if ( a2 == 17 )
                    v28 = BugCheckParameter3 == 0;
                  else
                    v28 = BugCheckParameter3 == 1112363332;
                  LOBYTE(v9) = !v28;
                }
                else
                {
                  v9 = (unsigned int)Handle;
                }
                v31 = v9;
LABEL_39:
                if ( v21 )
                {
                  v26 = *(PETHREAD **)(v17 + 16);
                  InputBuffer = 0LL;
                  InputBuffer = PsGetThreadProcessId(*v26);
                  ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
                }
                if ( !v9 )
                {
                  v28 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
                  *((_QWORD *)a5 + 3) = *(_QWORD *)v17;
                  if ( !v28 )
                  {
                    v29 = *(void **)(v17 + 24);
                    v30 = 0LL;
                    Handle = 0LL;
                    if ( v29 )
                    {
                      ObOpenObjectByPointer(v29, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
                      v30 = Handle;
                    }
                    *((_QWORD *)a5 + 2) = v30;
                  }
                  v35 = 1;
                }
                v7 = v40;
              }
              ThreadUnlock1();
              if ( v35 )
                goto LABEL_18;
            }
          }
LABEL_44:
          v14 = *++v43;
          if ( *v43 == 1LL )
            goto LABEL_18;
        }
      }
      if ( (*(_DWORD *)(v7 + 12) & 0x40000000) == 0 )
      {
        v25 = *(__m128i *)v7;
        v49 = *(_DWORD *)(v7 + 16);
        v48 = v25;
        v28 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
        v48.m128i_i32[3] = _mm_srli_si128(v25, 8).m128i_i32[1] | 0x40000000;
        if ( v28 )
        {
          v32 = 0LL;
          GetProcessLuid(0LL, &v32);
          v13 = v32 == __PAIR64__(luidSystem[1], luidSystem[0]);
        }
        goto LABEL_17;
      }
    }
  }
  return 0LL;
}
