/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00CFCF4
 * Callers:
 *     xxxSendMessageBSM @ 0x1C00CFB80 (xxxSendMessageBSM.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CanForceForeground @ 0x1C00B3040 (CanForceForeground.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00CC87C (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     _PostTransformableMessageIL @ 0x1C00D01F4 (_PostTransformableMessageIL.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendBSMtoDesktop(
        struct tagWND **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  __int64 v7; // r15
  unsigned __int64 v8; // r13
  unsigned int v9; // edi
  unsigned int v10; // esi
  __int64 v11; // rdx
  _BOOL8 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r8
  unsigned int v18; // ecx
  int v19; // r13d
  BOOL v20; // r15d
  int v21; // esi
  bool v22; // cf
  __m128i *v23; // r9
  int v24; // ecx
  __int64 v25; // rdx
  void *v26; // rcx
  __m128i v27; // xmm0
  PETHREAD *v28; // rcx
  PETHREAD *v29; // rcx
  _QWORD *v30; // rcx
  bool v31; // zf
  void *v32; // rax
  int v33; // [rsp+50h] [rbp-B0h]
  int v34; // [rsp+54h] [rbp-ACh]
  int v35; // [rsp+58h] [rbp-A8h]
  HANDLE InputBuffer; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+68h] [rbp-98h] BYREF
  int v38; // [rsp+6Ch] [rbp-94h]
  int v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp-80h] BYREF
  __m128i *v42; // [rsp+88h] [rbp-78h]
  _DWORD v43[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v44; // [rsp+98h] [rbp-68h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v46; // [rsp+A8h] [rbp-58h]
  void *Handle; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 *v48; // [rsp+B8h] [rbp-48h]
  struct tagBWL *v49; // [rsp+C0h] [rbp-40h]
  _QWORD v50[3]; // [rsp+C8h] [rbp-38h] BYREF
  __m128i v51; // [rsp+E0h] [rbp-20h] BYREF
  int v52; // [rsp+F0h] [rbp-10h]

  v35 = 0;
  v7 = a4;
  v42 = (__m128i *)a4;
  v8 = a3;
  v9 = a2;
  v46 = a3;
  v33 = 1;
  v10 = 1;
  v45 = gptiCurrent;
  if ( (unsigned int)(a2 - 1024) <= 0xBBFF )
  {
    v44 = 1LL;
    UserSetLastError(87LL, a2, a3, a4);
  }
  else
  {
    v44 = 0LL;
  }
  if ( a1 )
  {
    if ( !a6 && (v9 == 21 || v9 == 26 || v9 == 29 || v9 == 295 || v9 == 794) )
      a6 = 1;
    v49 = BuildHwndList(a1[11], 2, 0LL);
    if ( v49 )
    {
      if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80
        && a1[3] == (struct tagWND *)grpdeskRitInput
        && ((*(_DWORD *)(gptiCurrent + 488LL) & 8) != 0 || CanForceForeground(*(_QWORD *)(gptiCurrent + 424LL))) )
      {
        CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
      }
      v12 = 0LL;
      if ( v9 != 537 || v8 != 0x8000 && v8 != 32772 || (v12 = 0LL, *(_DWORD *)(v7 + 4) != 2) )
      {
LABEL_15:
        v48 = (unsigned __int64 *)((char *)v49 + 32);
        v13 = *((_QWORD *)v49 + 4);
        if ( v13 == 1 )
        {
LABEL_16:
          FreeHwndList(v49);
          return v10;
        }
        while ( 1 )
        {
          v34 = 0;
          LOBYTE(v11) = 1;
          v15 = HMValidateHandleNoSecure(v13, v11);
          v16 = v15;
          if ( !v15 )
            goto LABEL_44;
          v11 = *((unsigned int *)a5 + 1);
          if ( (v11 & 2) != 0 && *(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) == *(_QWORD *)(v45 + 432) )
            goto LABEL_44;
          if ( (v11 & 0x400) != 0 )
          {
            v30 = *(_QWORD **)(v15 + 16);
            v38 = 0;
            v37 = 0;
            if ( (int)GetProcessLuid(*v30, &v37) < 0 || *((_DWORD *)a5 + 8) != v37 || *((_DWORD *)a5 + 9) != v38 )
              goto LABEL_44;
          }
          if ( v12 )
          {
            if ( (int)GetProcessLuid(**(_QWORD **)(v16 + 16), v43) < 0 )
              goto LABEL_44;
            if ( luidSystem[0] != v43[0] || luidSystem[1] != v43[1] )
              v34 = 1;
          }
          v17 = *(_QWORD *)(v16 + 40);
          if ( (*(_WORD *)(v17 + 42) & 0x2FFF) != 0x29C )
          {
            v11 = **(unsigned __int16 **)(*(_QWORD *)(v16 + 112) + 8LL);
            if ( *(_WORD *)(gpsi + 908LL) != (_WORD)v11
              && gaOleMainThreadWndClass != (_WORD)v11
              && (!v44 || (*(_BYTE *)(v17 + 21) & 2) == 0) )
            {
              v50[0] = *(_QWORD *)(v45 + 416);
              *(_QWORD *)(v45 + 416) = v50;
              v50[1] = v16;
              _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
              v18 = *((_DWORD *)a5 + 1);
              if ( (v18 & 0x10) != 0 )
              {
                PostTransformableMessageIL((struct tagWND *)v16, v9, v8, v7, a6);
              }
              else if ( (v18 & 0x100) != 0 )
              {
                xxxSendNotifyMessage(v16, v9, v8, v7, a6);
              }
              else if ( (v18 & 0x20000000) != 0 )
              {
                QueueNotifyTransformableMessage((struct tagWND *)v16, v9, v8, v7, a6, 1);
              }
              else
              {
                BugCheckParameter3 = 0LL;
                v19 = v18 & 8;
                v39 = v18 & 0x20;
                v20 = v9 == 536 && v46 == 4;
                if ( (v18 & 8) != 0 )
                  v21 = v20 ? 2000 : 5000;
                else
                  v21 = 0;
                if ( v20 )
                {
                  v28 = *(PETHREAD **)(v16 + 16);
                  InputBuffer = 0LL;
                  InputBuffer = PsGetThreadProcessId(*v28);
                  ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
                  v18 = *((_DWORD *)a5 + 1);
                }
                v22 = v19 != 0;
                v23 = &v51;
                v8 = v46;
                v24 = (v18 >> 3) & 8;
                if ( !v34 )
                  v23 = v42;
                if ( xxxSendTransformableMessageTimeout(
                       (__int64 *)v16,
                       v9,
                       v46,
                       (__int64)v23,
                       (v22 ? 2 : 0) | (unsigned int)v24,
                       v21,
                       (__int64 *)&BugCheckParameter3,
                       a6,
                       1) )
                {
                  if ( (*((_DWORD *)a5 + 1) & 1) == 0 )
                  {
                    v10 = v33;
                    goto LABEL_39;
                  }
                  v10 = 0;
                  if ( v9 == 17 )
                    v31 = BugCheckParameter3 == 0;
                  else
                    v31 = BugCheckParameter3 == 1112363332;
                  LOBYTE(v10) = !v31;
                }
                else
                {
                  v10 = v39;
                }
                v33 = v10;
LABEL_39:
                if ( v20 )
                {
                  v29 = *(PETHREAD **)(v16 + 16);
                  InputBuffer = 0LL;
                  InputBuffer = PsGetThreadProcessId(*v29);
                  ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
                }
                if ( !v10 )
                {
                  v31 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
                  *((_QWORD *)a5 + 3) = *(_QWORD *)v16;
                  if ( !v31 )
                  {
                    v26 = *(void **)(v16 + 24);
                    v32 = 0LL;
                    Handle = 0LL;
                    if ( v26 )
                    {
                      ObOpenObjectByPointer(v26, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
                      v32 = Handle;
                    }
                    *((_QWORD *)a5 + 2) = v32;
                  }
                  v35 = 1;
                }
                v7 = (__int64)v42;
              }
              ThreadUnlock1(v26, v25);
              if ( v35 )
                goto LABEL_16;
            }
          }
LABEL_44:
          v13 = *++v48;
          if ( *v48 == 1 )
            goto LABEL_16;
        }
      }
      if ( (*(_DWORD *)(v7 + 12) & 0x40000000) == 0 )
      {
        v27 = *(__m128i *)v7;
        v52 = *(_DWORD *)(v7 + 16);
        v51 = v27;
        v31 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
        v51.m128i_i32[3] = _mm_srli_si128(v27, 8).m128i_i32[1] | 0x40000000;
        if ( v31 )
        {
          v40 = 0LL;
          GetProcessLuid(0LL, &v40);
          v12 = v40 == __PAIR64__(luidSystem[1], luidSystem[0]);
        }
        goto LABEL_15;
      }
    }
  }
  return 0LL;
}
