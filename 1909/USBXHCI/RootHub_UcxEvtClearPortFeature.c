/*
 * XREFs of RootHub_UcxEvtClearPortFeature @ 0x1C0022B40
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
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0026E6C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0027744 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_UcxEvtClearPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r8
  int Ulong; // eax
  unsigned int v9; // r11d
  unsigned int v10; // r8d
  int v11; // ebx
  __int64 v12; // rdx
  unsigned int *v13; // r13
  char v14; // r9
  unsigned int *v15; // rcx
  int v16; // r9d
  int v17; // edx
  int v18; // r8d
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // eax
  int v28; // ebx
  int v29; // ebx
  int v30; // eax
  unsigned __int16 v31; // r9
  int v32; // eax
  int v33; // ebx
  int v34; // ebx
  int v35; // eax
  int v36; // ebx
  int v37; // ebx
  int v38; // eax
  int v39; // ebx
  int v40; // ebx
  int v41; // eax
  int v42; // ebx
  int v43; // ebx
  int v44; // eax
  int v45; // ebx
  int v46; // ebx
  int v47; // eax
  int v48; // ebx
  int v49; // ebx
  int v50; // eax
  int v51; // eax
  int v52; // ebx
  int v53; // ebx
  int v54; // eax
  __int64 v55; // rdx
  unsigned __int16 v56; // ax
  int v57; // eax
  int v58; // ebx
  __int64 v59; // r10
  int v60; // ebx
  unsigned __int16 v61; // r9
  __int64 v62; // rcx
  int v63; // ebx
  int v64; // ebx
  int v65; // ebx
  int v66; // ebx
  int v67; // ebx
  int v68; // ebx
  int v69; // ebx
  int v70; // eax
  int v71; // ebx
  unsigned int v72; // ebx
  int v73; // eax
  unsigned __int16 v74; // r9
  int v75; // eax
  int v76; // ebx
  int v77; // ebx
  int v78; // eax
  int v79; // ebx
  int v80; // ebx
  int v81; // eax
  int v82; // ebx
  int v83; // ebx
  int v84; // eax
  int v85; // ebx
  int v86; // ebx
  int v87; // eax
  int v88; // ebx
  int v89; // ebx
  int v90; // eax
  int v91; // ebx
  int v92; // ebx
  int v93; // eax
  int v94; // ebx
  int v95; // ebx
  __int64 v97; // [rsp+28h] [rbp-D0h]
  __int64 v98; // [rsp+70h] [rbp-88h]
  unsigned int v99; // [rsp+78h] [rbp-80h]
  unsigned int v100; // [rsp+7Ch] [rbp-7Ch]
  unsigned int *v101; // [rsp+80h] [rbp-78h]
  _QWORD v103[5]; // [rsp+90h] [rbp-68h] BYREF

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
      1057);
  memset(v103, 0, sizeof(v103));
  LOWORD(v103[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v103);
  v6 = v103[1];
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2u,
        0xBu,
        0x26u,
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
        0x27u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
    Controller_SetControllerGone(*(_QWORD **)(v3 + 8), 1);
    goto LABEL_7;
  }
  if ( (Ulong & 1) == 0 )
  {
    v9 = *(unsigned __int8 *)(v6 + 132);
    v10 = *(unsigned __int8 *)(v6 + 133);
    v11 = *(unsigned __int16 *)(v6 + 130);
    v100 = v9;
    v99 = v10;
    if ( *(_BYTE *)(v6 + 128) != 35
      || *(_BYTE *)(v6 + 129) != 1
      || !*(_BYTE *)(v6 + 132)
      || v9 > *(_DWORD *)(v3 + 16)
      || *(_WORD *)(v6 + 134) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 41;
        v17 = *(unsigned __int8 *)(v6 + 134);
        v18 = *(unsigned __int8 *)(v6 + 131);
        goto LABEL_188;
      }
      goto LABEL_189;
    }
    v12 = 88LL * (v9 - 1);
    v13 = (unsigned int *)(*(_QWORD *)(v3 + 40) + 16LL * (v9 - 1));
    v98 = v12;
    v14 = *(_BYTE *)(v12 + *(_QWORD *)(v3 + 48) + 13);
    v15 = v13 + 1;
    v101 = v13 + 1;
    if ( v14 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x2Au,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          *(unsigned __int8 *)(v6 + 132),
          *(unsigned __int16 *)(v6 + 130),
          *(unsigned __int8 *)(v6 + 133));
        v12 = v98;
        v9 = v100;
        v10 = v99;
      }
      if ( v11 != 22 && v10 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = 43;
LABEL_28:
          v17 = *(unsigned __int8 *)(v6 + 134);
          v18 = *(unsigned __int8 *)(v6 + 133);
LABEL_188:
          WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v17, v18, v16);
          goto LABEL_189;
        }
        goto LABEL_189;
      }
      v19 = v11 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          v50 = RootHub_WaitForPendingU3TransitionCompletion(v3, v9, 0LL);
          v7 = (unsigned int)v50;
          if ( v50 < 0 )
          {
LABEL_190:
            *(_DWORD *)(v6 + 4) = -1073741820;
            return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a2,
                     v7);
          }
          DynamicLock_Acquire(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
          v51 = XilRegister_ReadUlong(v5, v13);
          v52 = v51;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v97) = v51;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x31u,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v97);
          }
          if ( ((v52 & 2) == 0 || (v52 & 0x1E0) != 0x60 && (v52 & 0x1E0) != 0x1E0)
            && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              2u,
              0xBu,
              0x32u,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
          }
          v53 = v52 & 0xE00C200 | 0x101E0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v97) = v53;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x33u,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v97);
          }
          XilRegister_WriteUlong(v5, v13, v53);
          DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
          v54 = XilRegister_ReadUlong(v5, v13);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v97) = v54;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x34u,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v97);
          }
          v55 = *(_QWORD *)(v3 + 48);
          if ( *(int *)(v98 + v55 + 40) <= 0 )
            v56 = 50;
          else
            v56 = *(_WORD *)(v98 + v55 + 44);
          (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            *(_QWORD *)(v98 + v55 + 32),
            -10000LL * v56);
          goto LABEL_116;
        }
        v21 = v20 - 6;
        if ( v21 )
        {
          v22 = v21 - 8;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  v26 = v25 - 1;
                  if ( v26 )
                  {
                    if ( v26 != 2 )
                    {
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        v16 = 75;
                        goto LABEL_28;
                      }
LABEL_189:
                      v7 = 3221225473LL;
                      goto LABEL_190;
                    }
                    if ( v10 > 3 )
                    {
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        v16 = 56;
                        goto LABEL_28;
                      }
                      goto LABEL_189;
                    }
                    DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
                    v27 = XilRegister_ReadUlong(v5, v13);
                    v28 = v27;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LODWORD(v97) = v27;
                      WPP_RECORDER_SF_d(
                        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                        4u,
                        0xBu,
                        0x39u,
                        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                        v97);
                    }
                    v29 = v28 & 0xE000200;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LODWORD(v97) = v29;
                      WPP_RECORDER_SF_d(
                        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                        4u,
                        0xBu,
                        0x3Au,
                        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                        v97);
                    }
                    XilRegister_WriteUlong(v5, v13, v29);
                    DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
                    v30 = XilRegister_ReadUlong(v5, v13);
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_116;
                    v31 = 59;
                  }
                  else
                  {
                    DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
                    v32 = XilRegister_ReadUlong(v5, v13);
                    v33 = v32;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LODWORD(v97) = v32;
                      WPP_RECORDER_SF_d(
                        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                        4u,
                        0xBu,
                        0x3Fu,
                        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                        v97);
                    }
                    v34 = v33 & 0xE00C200 | 0x200000;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LODWORD(v97) = v34;
                      WPP_RECORDER_SF_d(
                        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                        4u,
                        0xBu,
                        0x40u,
                        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                        v97);
                    }
                    XilRegister_WriteUlong(v5, v13, v34);
                    DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
                    v30 = XilRegister_ReadUlong(v5, v13);
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_116;
                    v31 = 65;
                  }
                }
                else
                {
                  DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
                  v35 = XilRegister_ReadUlong(v5, v13);
                  v36 = v35;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v97) = v35;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      4u,
                      0xBu,
                      0x48u,
                      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                      v97);
                  }
                  v37 = v36 & 0xE00C200 | 0x100000;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v97) = v37;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      4u,
                      0xBu,
                      0x49u,
                      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                      v97);
                  }
                  XilRegister_WriteUlong(v5, v13, v37);
                  DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
                  v30 = XilRegister_ReadUlong(v5, v13);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_116;
                  v31 = 74;
                }
              }
              else
              {
                DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
                v38 = XilRegister_ReadUlong(v5, v13);
                v39 = v38;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v97) = v38;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    4u,
                    0xBu,
                    0x45u,
                    (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                    v97);
                }
                v40 = v39 & 0xE00C200 | 0x400000;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v97) = v40;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    4u,
                    0xBu,
                    0x46u,
                    (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                    v97);
                }
                XilRegister_WriteUlong(v5, v13, v40);
                DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
                v30 = XilRegister_ReadUlong(v5, v13);
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_116;
                v31 = 71;
              }
            }
            else
            {
              DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
              v41 = XilRegister_ReadUlong(v5, v13);
              v42 = v41;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v97) = v41;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0x42u,
                  (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                  v97);
              }
              v43 = v42 & 0xE00C200 | 0x40000;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v97) = v43;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0x43u,
                  (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                  v97);
              }
              XilRegister_WriteUlong(v5, v13, v43);
              DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
              v30 = XilRegister_ReadUlong(v5, v13);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_116;
              v31 = 68;
            }
          }
          else
          {
            DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
            v44 = XilRegister_ReadUlong(v5, v13);
            v45 = v44;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v97) = v44;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x3Cu,
                (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                v97);
            }
            v46 = v45 & 0xE00C200 | 0x20000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v97) = v46;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x3Du,
                (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                v97);
            }
            XilRegister_WriteUlong(v5, v13, v46);
            DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
            v30 = XilRegister_ReadUlong(v5, v13);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_116;
            v31 = 62;
          }
        }
        else
        {
          DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
          v47 = XilRegister_ReadUlong(v5, v13);
          v48 = v47;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v97) = v47;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x35u,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v97);
          }
          v49 = v48 & 0xE00C000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v97) = v49;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x36u,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v97);
          }
          XilRegister_WriteUlong(v5, v13, v49);
          DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
          v30 = XilRegister_ReadUlong(v5, v13);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_116;
          v31 = 55;
        }
        goto LABEL_115;
      }
      DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
      v57 = XilRegister_ReadUlong(v5, v13);
      v58 = v57;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v97) = v57;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x2Cu,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v97);
      }
      v59 = *(_QWORD *)(v3 + 8);
      if ( (*(_QWORD *)(v59 + 336) & 0x2000000LL) != 0 )
      {
        if ( ((v58 & 2) == 0 || (v58 & 0x1E0u) >= 0x60)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(v59 + 72),
            3u,
            0xBu,
            0x2Du,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
        }
        v60 = v58 & 0xE00C200 | 0x10060;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_113;
        v61 = 46;
        v62 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL);
      }
      else
      {
        v60 = v58 & 0xE00C200 | 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_113:
          XilRegister_WriteUlong(v5, v13, v60);
          DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
          v30 = XilRegister_ReadUlong(v5, v13);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_116:
            *(_DWORD *)(v6 + 4) = 0;
LABEL_183:
            v7 = 0LL;
            return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a2,
                     v7);
          }
          v31 = 48;
LABEL_115:
          LODWORD(v97) = v30;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            v31,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v97);
          goto LABEL_116;
        }
        v62 = *(_QWORD *)(v59 + 72);
        v61 = 47;
      }
      LODWORD(v97) = v60;
      WPP_RECORDER_SF_d(v62, 4u, 0xBu, v61, (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids, v97);
      goto LABEL_113;
    }
    if ( v14 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 103;
        v17 = *(unsigned __int8 *)(v6 + 134);
        v18 = *(unsigned __int8 *)(v6 + 131);
        goto LABEL_188;
      }
      goto LABEL_189;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x4Cu,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        *(unsigned __int8 *)(v6 + 132),
        *(unsigned __int16 *)(v6 + 130),
        *(unsigned __int8 *)(v6 + 133));
      v12 = v98;
      v15 = v13 + 1;
      v10 = v99;
    }
    if ( v10 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 77;
        goto LABEL_28;
      }
      goto LABEL_189;
    }
    v63 = v11 - 8;
    if ( v63 )
    {
      v64 = v63 - 8;
      if ( v64 )
      {
        v65 = v64 - 3;
        if ( v65 )
        {
          v66 = v65 - 1;
          if ( v66 )
          {
            v67 = v66 - 5;
            if ( v67 )
            {
              v68 = v67 - 1;
              if ( v68 )
              {
                v69 = v68 - 3;
                if ( v69 )
                {
                  if ( v69 != 1 )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      v16 = 102;
                      goto LABEL_28;
                    }
                    goto LABEL_189;
                  }
                  v70 = XilRegister_ReadUlong(v5, v15);
                  v71 = v70;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v97) = v70;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      4u,
                      0xBu,
                      0x63u,
                      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                      v97);
                  }
                  v72 = v71 & 0xFFFEFFFF;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v97) = v72;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      4u,
                      0xBu,
                      0x64u,
                      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                      v97);
                  }
                  XilRegister_WriteUlong(v5, v101, v72);
                  v73 = XilRegister_ReadUlong(v5, v101);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_182;
                  v74 = 101;
                }
                else
                {
                  DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
                  v75 = XilRegister_ReadUlong(v5, v13);
                  v76 = v75;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v97) = v75;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      4u,
                      0xBu,
                      0x60u,
                      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                      v97);
                  }
                  v77 = v76 & 0xE00C200 | 0x80000;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v97) = v77;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      4u,
                      0xBu,
                      0x61u,
                      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                      v97);
                  }
                  XilRegister_WriteUlong(v5, v13, v77);
                  DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
                  v73 = XilRegister_ReadUlong(v5, v13);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_182;
                  v74 = 98;
                }
              }
              else
              {
                DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
                v78 = XilRegister_ReadUlong(v5, v13);
                v79 = v78;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v97) = v78;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    4u,
                    0xBu,
                    0x5Du,
                    (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                    v97);
                }
                v80 = v79 & 0xE00C200 | 0x800000;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v97) = v80;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    4u,
                    0xBu,
                    0x5Eu,
                    (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                    v97);
                }
                XilRegister_WriteUlong(v5, v13, v80);
                DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
                v73 = XilRegister_ReadUlong(v5, v13);
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_182;
                v74 = 95;
              }
            }
            else
            {
              DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
              v81 = XilRegister_ReadUlong(v5, v13);
              v82 = v81;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v97) = v81;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0x5Au,
                  (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                  v97);
              }
              v83 = v82 & 0xE00C200 | 0x400000;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v97) = v83;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0x5Bu,
                  (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                  v97);
              }
              XilRegister_WriteUlong(v5, v13, v83);
              DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
              v73 = XilRegister_ReadUlong(v5, v13);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_182;
              v74 = 92;
            }
          }
          else
          {
            DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
            v84 = XilRegister_ReadUlong(v5, v13);
            v85 = v84;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v97) = v84;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x54u,
                (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                v97);
            }
            v86 = v85 & 0xE00C200 | 0x200000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v97) = v86;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x55u,
                (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                v97);
            }
            XilRegister_WriteUlong(v5, v13, v86);
            DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
            v73 = XilRegister_ReadUlong(v5, v13);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_182;
            v74 = 86;
          }
        }
        else
        {
          DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
          v87 = XilRegister_ReadUlong(v5, v13);
          v88 = v87;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v97) = v87;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x57u,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v97);
          }
          v89 = v88 & 0xE00C200 | 0x100000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v97) = v89;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x58u,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v97);
          }
          XilRegister_WriteUlong(v5, v13, v89);
          DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
          v73 = XilRegister_ReadUlong(v5, v13);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_182;
          v74 = 89;
        }
      }
      else
      {
        DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
        v90 = XilRegister_ReadUlong(v5, v13);
        v91 = v90;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v97) = v90;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x51u,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v97);
        }
        v92 = v91 & 0xE00C200 | 0x20000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v97) = v92;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x52u,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v97);
        }
        XilRegister_WriteUlong(v5, v13, v92);
        DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
        v73 = XilRegister_ReadUlong(v5, v13);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_182;
        v74 = 83;
      }
    }
    else
    {
      DynamicLock_Acquire(*(_QWORD *)(v12 + *(_QWORD *)(v3 + 48) + 24));
      v93 = XilRegister_ReadUlong(v5, v13);
      v94 = v93;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v97) = v93;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x4Eu,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v97);
      }
      v95 = v94 & 0xE00C000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v97) = v95;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x4Fu,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v97);
      }
      XilRegister_WriteUlong(v5, v13, v95);
      DynamicLock_Release(*(_QWORD *)(v98 + *(_QWORD *)(v3 + 48) + 24));
      v73 = XilRegister_ReadUlong(v5, v13);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_182;
      v74 = 80;
    }
    LODWORD(v97) = v73;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      4u,
      0xBu,
      v74,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v97);
LABEL_182:
    *(_DWORD *)(v6 + 4) = 0;
    goto LABEL_183;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      0x28u,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
  *(_DWORD *)(v6 + 4) = -1073741807;
  v7 = 3221225666LL;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v7);
}
