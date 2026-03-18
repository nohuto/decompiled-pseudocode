/*
 * XREFs of RootHub_UcxEvtSetPortFeature @ 0x1C00259C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     Controller_SetControllerGone @ 0x1C00102A4 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     RootHub_ForceU0AndWait @ 0x1C0021948 (RootHub_ForceU0AndWait.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0026E6C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0027744 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_UcxEvtSetPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // r8
  int Ulong; // eax
  unsigned int v9; // r11d
  unsigned int v10; // edi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  unsigned int *v13; // r8
  char v14; // r9
  int v15; // r9d
  int v16; // edx
  int v17; // r8d
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  char v22; // bl
  int v23; // eax
  int v24; // edi
  int v25; // ebx
  int v26; // eax
  unsigned __int16 v27; // r9
  int v28; // eax
  int v29; // ebx
  int v30; // ebx
  int v31; // eax
  int v32; // ebx
  int v33; // ebx
  int v34; // eax
  int v35; // ebx
  unsigned int v36; // ebx
  int v37; // eax
  int v38; // ebx
  unsigned int v39; // ebx
  int v40; // eax
  int v41; // ebx
  int v42; // ebx
  int v43; // eax
  int v44; // eax
  int v45; // ebx
  int v46; // ebx
  int v47; // eax
  unsigned int v48; // ebx
  unsigned int v49; // ebx
  unsigned int v50; // ebx
  unsigned int v51; // ebx
  unsigned int v52; // ebx
  unsigned int v53; // ebx
  unsigned int v54; // ebx
  int v55; // eax
  int v56; // ebx
  int v57; // ebx
  int v58; // eax
  int v59; // ebx
  unsigned int v60; // ebx
  int v61; // eax
  __int16 v62; // di
  int v63; // edi
  int v64; // eax
  int v65; // ebx
  unsigned int v66; // ebx
  int v67; // eax
  int v68; // eax
  int v69; // ebx
  unsigned int v70; // ebx
  int v71; // eax
  int v72; // eax
  int v73; // ebx
  int v74; // ebx
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // ebx
  int v79; // ebx
  int v80; // eax
  int v81; // eax
  int v82; // eax
  __int64 v83; // r8
  int v84; // eax
  int v85; // eax
  int v86; // ebx
  int v87; // ebx
  __int64 v89; // [rsp+28h] [rbp-F0h]
  __int64 v90; // [rsp+70h] [rbp-A8h]
  unsigned int *v91; // [rsp+78h] [rbp-A0h]
  unsigned int v92; // [rsp+80h] [rbp-98h]
  unsigned int *v93; // [rsp+88h] [rbp-90h]
  char v94; // [rsp+90h] [rbp-88h]
  int v95; // [rsp+90h] [rbp-88h]
  unsigned int *v96; // [rsp+98h] [rbp-80h]
  _QWORD v98[5]; // [rsp+A8h] [rbp-70h] BYREF

  v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056248);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  if ( *(_BYTE *)(v4 + 537) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      2383);
  memset(v98, 0, sizeof(v98));
  LOWORD(v98[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v98);
  v6 = v98[1];
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2u,
        0xBu,
        0x78u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
LABEL_7:
    *(_DWORD *)(v6 + 4) = -1073713152;
    v7 = 3221225486LL;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             v7);
  }
  Ulong = XilRegister_ReadUlong(v5, (unsigned int *)(*(_QWORD *)(v3 + 32) + 4LL));
  if ( Ulong == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2u,
        0xBu,
        0x79u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
    Controller_SetControllerGone(*(_QWORD **)(v3 + 8), 1);
    goto LABEL_7;
  }
  if ( (Ulong & 1) == 0 )
  {
    v9 = *(unsigned __int8 *)(v6 + 132);
    v10 = *(unsigned __int8 *)(v6 + 133);
    v11 = *(unsigned __int16 *)(v6 + 130);
    v92 = v9;
    v94 = *(_BYTE *)(v6 + 133);
    if ( *(_BYTE *)(v6 + 128) != 35
      || *(_BYTE *)(v6 + 129) != 3
      || !*(_BYTE *)(v6 + 132)
      || v9 > *(_DWORD *)(v3 + 16)
      || *(_WORD *)(v6 + 134) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 123;
        v16 = *(unsigned __int8 *)(v6 + 134);
        v17 = *(unsigned __int8 *)(v6 + 131);
        goto LABEL_184;
      }
      goto LABEL_185;
    }
    v12 = 88LL * (v9 - 1);
    v90 = v12;
    v91 = (unsigned int *)(16LL * (v9 - 1) + *(_QWORD *)(v3 + 40));
    v13 = v91 + 1;
    v96 = v91 + 3;
    v93 = v91 + 1;
    v14 = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v12 + 13);
    if ( v14 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x7Cu,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          *(unsigned __int8 *)(v6 + 132),
          *(unsigned __int16 *)(v6 + 130),
          *(unsigned __int8 *)(v6 + 133));
        v12 = v90;
        v13 = v91 + 1;
        v9 = v92;
      }
      if ( v11 - 21 > 1 && v10 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = 125;
LABEL_28:
          v16 = *(unsigned __int8 *)(v6 + 134);
          v17 = *(unsigned __int8 *)(v6 + 133);
LABEL_184:
          WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v16, v17, v15);
          goto LABEL_185;
        }
        goto LABEL_185;
      }
      v18 = v11 - 2;
      if ( v18 )
      {
        v19 = v18 - 2;
        if ( !v19 )
        {
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v12 + 24));
          if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v90 + 20) )
          {
            v34 = XilRegister_ReadUlong(v5, v93);
            v35 = v34;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v89) = v34;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x7Eu,
                (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                v89);
            }
            v36 = v35 & 0xFFFE0007;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v89) = v36;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x7Fu,
                (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                v89);
            }
            XilRegister_WriteUlong(v5, v93, v36);
            v37 = XilRegister_ReadUlong(v5, v96);
            v38 = v37;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v89) = v37;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x80u,
                (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                v89);
            }
            v39 = v38 & 0xFFFFC000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v89) = v39;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x81u,
                (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                v89);
            }
            XilRegister_WriteUlong(v5, v96, v39);
            *(_BYTE *)(*(_QWORD *)(v3 + 48) + v90 + 20) = 0;
          }
          v40 = XilRegister_ReadUlong(v5, v91);
          v41 = v40;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v89) = v40;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x82u,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v89);
          }
          v42 = v41 & 0xE00C200 | 0x10;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v89) = v42;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x83u,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v89);
          }
          XilRegister_WriteUlong(v5, v91, v42);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v90 + 24));
          v26 = XilRegister_ReadUlong(v5, v91);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_179;
          v27 = 132;
          goto LABEL_178;
        }
        v20 = v19 - 4;
        if ( !v20 )
        {
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v12 + 24));
          v31 = XilRegister_ReadUlong(v5, v91);
          v32 = v31;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v89) = v31;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x89u,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v89);
          }
          v33 = v32 & 0xE00C000 | 0x200;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v89) = v33;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x8Au,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v89);
          }
          XilRegister_WriteUlong(v5, v91, v33);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v90 + 24));
          v26 = XilRegister_ReadUlong(v5, v91);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_179;
          v27 = 139;
          goto LABEL_178;
        }
        v21 = v20 - 13;
        if ( v21 )
        {
          if ( v21 != 1 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v15 = 148;
              goto LABEL_28;
            }
LABEL_185:
            v7 = 3221225473LL;
            goto LABEL_186;
          }
          if ( v10 > 3 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v15 = 144;
              goto LABEL_28;
            }
            goto LABEL_185;
          }
          v22 = 0;
          if ( v10 != 3 )
            v22 = v10;
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v12 + 24));
          v23 = XilRegister_ReadUlong(v5, v91);
          v24 = v23;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v89) = v23;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x91u,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v89);
          }
          v25 = v24 & 0xE000200 | ((v22 & 3) << 14);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v89) = v25;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x92u,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v89);
          }
          XilRegister_WriteUlong(v5, v91, v25);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v90 + 24));
          v26 = XilRegister_ReadUlong(v5, v91);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v27 = 147;
LABEL_178:
            LODWORD(v89) = v26;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              v27,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v89);
          }
        }
        else
        {
          if ( v10 > 5 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v15 = 140;
              goto LABEL_28;
            }
            goto LABEL_185;
          }
          v28 = XilRegister_ReadUlong(v5, v13);
          v29 = v28;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v89) = v28;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x8Du,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v89);
          }
          v30 = (v10 << 28) | v29 & 0xFFFFFFF;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v89) = v30;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x8Eu,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v89);
          }
          XilRegister_WriteUlong(v5, v93, v30);
          v26 = XilRegister_ReadUlong(v5, v93);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v27 = 143;
            goto LABEL_178;
          }
        }
      }
      else
      {
        if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL) & 0x8000000LL) != 0 )
        {
          v43 = RootHub_ForceU0AndWait((_QWORD *)v3, v9);
          v7 = (unsigned int)v43;
          if ( v43 < 0 )
            goto LABEL_186;
        }
        DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v90 + 24));
        *(_BYTE *)(*(_QWORD *)(v3 + 48) + v90 + 18) = 0;
        v44 = XilRegister_ReadUlong(v5, v91);
        v45 = v44;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v44;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x85u,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v89);
        }
        if ( ((v45 & 2) == 0 || (v45 & 0x1E0u) >= 0x60)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            3u,
            0xBu,
            0x86u,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
        }
        v46 = v45 & 0xE00C200 | 0x10060;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v46;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x87u,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v89);
        }
        XilRegister_WriteUlong(v5, v91, v46);
        DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v90 + 24));
        v26 = XilRegister_ReadUlong(v5, v91);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = 136;
          goto LABEL_178;
        }
      }
LABEL_179:
      *(_DWORD *)(v6 + 4) = 0;
      v7 = 0LL;
      return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               a2,
               v7);
    }
    if ( v14 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 179;
        v16 = *(unsigned __int8 *)(v6 + 134);
        v17 = *(unsigned __int8 *)(v6 + 131);
        goto LABEL_184;
      }
      goto LABEL_185;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x95u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        *(unsigned __int8 *)(v6 + 132),
        *(unsigned __int16 *)(v6 + 130),
        *(unsigned __int8 *)(v6 + 133));
      v12 = v90;
      v13 = v91 + 1;
      v9 = v92;
    }
    if ( v11 > 0x1B || (v47 = 159383584, !_bittest(&v47, v11)) )
    {
      if ( v10 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = 150;
          goto LABEL_28;
        }
        goto LABEL_185;
      }
    }
    v48 = v11 - 4;
    if ( !v48 )
    {
      DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v12 + 24));
      v85 = XilRegister_ReadUlong(v5, v91);
      v86 = v85;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v89) = v85;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x97u,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v89);
      }
      v87 = v86 & 0xE00C200 | 0x10;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v89) = v87;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x98u,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v89);
      }
      XilRegister_WriteUlong(v5, v91, v87);
      DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v90 + 24));
      v26 = XilRegister_ReadUlong(v5, v91);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_179;
      v27 = 153;
      goto LABEL_178;
    }
    v49 = v48 - 1;
    if ( v49 )
    {
      v50 = v49 - 3;
      if ( !v50 )
      {
        DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v12 + 24));
        v72 = XilRegister_ReadUlong(v5, v91);
        v73 = v72;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v72;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x9Du,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v89);
        }
        v74 = v73 & 0xE00C000 | 0x200;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v74;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x9Eu,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v89);
        }
        XilRegister_WriteUlong(v5, v91, v74);
        DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v90 + 24));
        v26 = XilRegister_ReadUlong(v5, v91);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_179;
        v27 = 159;
        goto LABEL_178;
      }
      v51 = v50 - 15;
      if ( !v51 )
      {
        v68 = XilRegister_ReadUlong(v5, v13);
        v69 = v68;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v68;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA1u,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v89);
        }
        v70 = v10 | v69 & 0xFFFFFF00;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v70;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA2u,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v89);
        }
        XilRegister_WriteUlong(v5, v93, v70);
        v71 = XilRegister_ReadUlong(v5, v93);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v71;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA3u,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v89);
        }
        *(_BYTE *)(*(_QWORD *)(v3 + 48) + v90 + 21) = v10;
        goto LABEL_179;
      }
      v52 = v51 - 1;
      if ( !v52 )
      {
        v64 = XilRegister_ReadUlong(v5, v13);
        v65 = v64;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v64;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA4u,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v89);
        }
        v66 = (v10 << 8) | v65 & 0xFFFF00FF;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v66;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA5u,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v89);
        }
        XilRegister_WriteUlong(v5, v93, v66);
        v67 = XilRegister_ReadUlong(v5, v93);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v67;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA6u,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v89);
        }
        *(_BYTE *)(*(_QWORD *)(v3 + 48) + v90 + 22) = v10;
        goto LABEL_179;
      }
      v53 = v52 - 3;
      if ( v53 )
      {
        v54 = v53 - 1;
        if ( !v54 )
        {
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v12 + 24));
          v58 = XilRegister_ReadUlong(v5, v91);
          v59 = v58;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v89) = v58;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x9Au,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v89);
          }
          v60 = v59 & 0xE00C200 | 0x80000000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v89) = v60;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x9Bu,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v89);
          }
          XilRegister_WriteUlong(v5, v91, v60);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v90 + 24));
          v26 = XilRegister_ReadUlong(v5, v91);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_179;
          v27 = 156;
          goto LABEL_178;
        }
        if ( v54 != 2 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v15 = 178;
            goto LABEL_28;
          }
          goto LABEL_185;
        }
        v55 = XilRegister_ReadUlong(v5, v13);
        v56 = v55;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v55;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xAFu,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v89);
        }
        v57 = v56 | 0x10000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v57;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xB0u,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v89);
        }
        XilRegister_WriteUlong(v5, v93, v57);
        v26 = XilRegister_ReadUlong(v5, v93);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = 177;
          goto LABEL_178;
        }
      }
      else
      {
        if ( (unsigned __int8)v10 >= 8u )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v15 = 171;
            goto LABEL_28;
          }
          goto LABEL_185;
        }
        DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v12 + 24));
        v61 = XilRegister_ReadUlong(v5, v91);
        v62 = v61;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v61;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xACu,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v89);
        }
        v63 = v62 & 0xC200;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v63 | ((v94 & 7) << 25);
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xADu,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v89);
        }
        XilRegister_WriteUlong(v5, v91, v63 | ((v94 & 7) << 25));
        DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v90 + 24));
        v26 = XilRegister_ReadUlong(v5, v91);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = 174;
          goto LABEL_178;
        }
      }
      goto LABEL_179;
    }
    if ( v10 > 5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 167;
        goto LABEL_28;
      }
      goto LABEL_185;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL) & 0x80000LL) != 0 )
    {
      if ( !v10 )
        goto LABEL_156;
      v75 = RootHub_ForceU0AndWait((_QWORD *)v3, v9);
      v7 = (unsigned int)v75;
      if ( v75 < 0 )
        goto LABEL_186;
    }
    if ( v10 )
      goto LABEL_157;
LABEL_156:
    v76 = RootHub_WaitForPendingU3TransitionCompletion(v3, v92, 0LL);
    v7 = (unsigned int)v76;
    if ( v76 >= 0 )
    {
LABEL_157:
      DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v90 + 24));
      if ( v10 == 3 )
        *(_BYTE *)(*(_QWORD *)(v3 + 48) + v90 + 18) = 0;
      v77 = XilRegister_ReadUlong(v5, v91);
      v78 = v77;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v89) = v77;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0xA8u,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v89);
      }
      v79 = v78 & 0xE00C200;
      if ( v10 == 4 )
        v80 = 2;
      else
        v80 = 32 * (v10 & 0xF | 0x800);
      v81 = v79 | v80;
      v95 = v81;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v89) = v81;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0xA9u,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v89);
        v81 = v95;
      }
      XilRegister_WriteUlong(v5, v91, v81);
      DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + v90 + 24));
      v82 = XilRegister_ReadUlong(v5, v91);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v89) = v82;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0xAAu,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v89);
      }
      if ( v10 == 3 && (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL) & 0x4000000LL) != 0 )
      {
        LOBYTE(v83) = 1;
        v84 = RootHub_WaitForPendingU3TransitionCompletion(v3, v92, v83);
        v7 = (unsigned int)v84;
        if ( v84 < 0 )
          goto LABEL_186;
      }
      goto LABEL_179;
    }
LABEL_186:
    *(_DWORD *)(v6 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             v7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      0x7Au,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
  *(_DWORD *)(v6 + 4) = -1073741807;
  v7 = 3221225666LL;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v7);
}
