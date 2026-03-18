/*
 * XREFs of RootHub_UcxEvtClearPortFeature @ 0x1C001EF80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     Controller_SetControllerGone @ 0x1C000DC30 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C002299C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0023134 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_UcxEvtClearPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // r8
  int Ulong; // eax
  int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // r11
  unsigned int *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r12
  char v15; // cl
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
  int v27; // ebx
  int v28; // eax
  unsigned __int16 v29; // r9
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // ebx
  int v40; // ebx
  int v41; // eax
  int v42; // ebx
  int v43; // ebx
  __int64 v44; // rdx
  unsigned __int16 v45; // ax
  int v46; // ebx
  __int64 v47; // r10
  unsigned __int16 v48; // ax
  int v49; // ebx
  int v50; // ebx
  int v51; // ebx
  int v52; // ebx
  int v53; // ebx
  int v54; // ebx
  int v55; // ebx
  int v56; // ebx
  int v57; // ebx
  int v58; // ebx
  int v59; // ebx
  int v60; // ebx
  int v61; // ebx
  int v62; // ebx
  int v63; // ebx
  int v64; // ebx
  int v65; // ebx
  int v66; // ebx
  int v67; // ebx
  int v68; // ebx
  int v69; // ebx
  int v70; // ebx
  __int64 v71; // rcx
  __int64 v73; // [rsp+28h] [rbp-D0h]
  __int64 v74; // [rsp+28h] [rbp-D0h]
  __int64 v75; // [rsp+28h] [rbp-D0h]
  __int64 v76; // [rsp+28h] [rbp-D0h]
  __int64 v77; // [rsp+28h] [rbp-D0h]
  __int64 v78; // [rsp+28h] [rbp-D0h]
  __int64 v79; // [rsp+28h] [rbp-D0h]
  __int64 v80; // [rsp+28h] [rbp-D0h]
  __int64 v81; // [rsp+28h] [rbp-D0h]
  __int64 v82; // [rsp+28h] [rbp-D0h]
  __int64 v83; // [rsp+28h] [rbp-D0h]
  __int64 v84; // [rsp+28h] [rbp-D0h]
  __int64 v85; // [rsp+28h] [rbp-D0h]
  __int64 v86; // [rsp+28h] [rbp-D0h]
  __int64 v87; // [rsp+28h] [rbp-D0h]
  __int64 v88; // [rsp+28h] [rbp-D0h]
  __int64 v89; // [rsp+28h] [rbp-D0h]
  __int64 v90; // [rsp+28h] [rbp-D0h]
  __int64 v91; // [rsp+28h] [rbp-D0h]
  __int64 v92; // [rsp+28h] [rbp-D0h]
  __int64 v93; // [rsp+28h] [rbp-D0h]
  unsigned int v94; // [rsp+70h] [rbp-88h]
  unsigned int *v95; // [rsp+78h] [rbp-80h]
  _QWORD v97[5]; // [rsp+88h] [rbp-70h] BYREF

  v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F220);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  if ( *(_BYTE *)(v4 + 473) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      1049);
  memset(v97, 0, sizeof(v97));
  LOWORD(v97[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v97);
  v6 = v97[1];
  if ( Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    Ulong = XilRegister_ReadUlong(v5, (unsigned int *)(*(_QWORD *)(v3 + 32) + 4LL));
    if ( Ulong == -1 )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2u,
        0xBu,
        0x27u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
      Controller_SetControllerGone(*(_QWORD *)(v3 + 8), 1);
      goto LABEL_6;
    }
    if ( (Ulong & 1) != 0 )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2u,
        0xBu,
        0x28u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
      v7 = 3221225666LL;
      *(_DWORD *)(v6 + 4) = -1073741807;
      return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               a2,
               v7);
    }
    v9 = *(unsigned __int16 *)(v6 + 130);
    v10 = *(unsigned __int8 *)(v6 + 132);
    v94 = *(unsigned __int8 *)(v6 + 133);
    if ( *(_BYTE *)(v6 + 128) != 35
      || *(_BYTE *)(v6 + 129) != 1
      || !*(_BYTE *)(v6 + 132)
      || v10 > *(_DWORD *)(v3 + 16)
      || *(_WORD *)(v6 + 134) )
    {
      v16 = 41;
      v17 = *(unsigned __int8 *)(v6 + 134);
      v18 = BYTE1(v9);
      goto LABEL_80;
    }
    v11 = *(_QWORD *)(v3 + 8);
    v12 = (unsigned int *)(16LL * (v10 - 1) + *(_QWORD *)(v3 + 40));
    v13 = v10 - 1;
    v95 = v12 + 1;
    v14 = 10 * v13;
    v15 = *(_BYTE *)(*(_QWORD *)(v3 + 48) + 80 * v13 + 13);
    if ( v15 == 2 )
    {
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v11 + 72),
        4u,
        0xBu,
        0x2Au,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        *(unsigned __int8 *)(v6 + 132),
        *(unsigned __int16 *)(v6 + 130),
        *(unsigned __int8 *)(v6 + 133));
      if ( v9 != 22 && v94 )
      {
        v16 = 43;
LABEL_20:
        v17 = *(unsigned __int8 *)(v6 + 134);
        v18 = *(unsigned __int8 *)(v6 + 133);
LABEL_80:
        v71 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL);
        goto LABEL_81;
      }
      v19 = v9 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          v41 = RootHub_WaitForPendingU3TransitionCompletion(v3, v10, 0LL);
          v7 = (unsigned int)v41;
          if ( v41 < 0 )
          {
LABEL_82:
            *(_DWORD *)(v6 + 4) = -1073741820;
            return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a2,
                     v7);
          }
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
          v42 = XilRegister_ReadUlong(v5, v12);
          LODWORD(v73) = v42;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x31u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v73);
          if ( (v42 & 2) == 0 || (v42 & 0x1E0) != 0x60 && (v42 & 0x1E0) != 0x1E0 )
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              2u,
              0xBu,
              0x32u,
              (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
          v43 = v42 & 0xE00C200 | 0x101E0;
          LODWORD(v82) = v43;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x33u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v82);
          XilRegister_WriteUlong(v5, v12, v43);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
          LODWORD(v83) = XilRegister_ReadUlong(v5, v12);
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x34u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v83);
          v44 = *(_QWORD *)(v3 + 48);
          if ( *(int *)(v44 + 8 * v14 + 40) <= 0 )
            v45 = 50;
          else
            v45 = *(_WORD *)(v44 + 8 * v14 + 44);
          (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            *(_QWORD *)(v44 + 8 * v14 + 32),
            -10000LL * v45);
LABEL_77:
          *(_DWORD *)(v6 + 4) = 0;
          v7 = 0LL;
          return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   a2,
                   v7);
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
                      v16 = 75;
                      goto LABEL_20;
                    }
                    if ( v94 > 3 )
                    {
                      v16 = 56;
                      goto LABEL_20;
                    }
                    DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
                    v27 = XilRegister_ReadUlong(v5, v12);
                    LODWORD(v73) = v27;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      4u,
                      0xBu,
                      0x39u,
                      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                      v73);
                    v27 &= 0xE000200u;
                    LODWORD(v74) = v27;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      4u,
                      0xBu,
                      0x3Au,
                      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                      v74);
                    XilRegister_WriteUlong(v5, v12, v27);
                    DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
                    v28 = XilRegister_ReadUlong(v5, v12);
                    v29 = 59;
                  }
                  else
                  {
                    DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
                    v30 = XilRegister_ReadUlong(v5, v12);
                    LODWORD(v73) = v30;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      4u,
                      0xBu,
                      0x3Fu,
                      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                      v73);
                    v31 = v30 & 0xE00C200 | 0x200000;
                    LODWORD(v76) = v31;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      4u,
                      0xBu,
                      0x40u,
                      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                      v76);
                    XilRegister_WriteUlong(v5, v12, v31);
                    DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
                    v28 = XilRegister_ReadUlong(v5, v12);
                    v29 = 65;
                  }
                }
                else
                {
                  DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
                  v32 = XilRegister_ReadUlong(v5, v12);
                  LODWORD(v73) = v32;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    4u,
                    0xBu,
                    0x48u,
                    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                    v73);
                  v33 = v32 & 0xE00C200 | 0x100000;
                  LODWORD(v77) = v33;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    4u,
                    0xBu,
                    0x49u,
                    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                    v77);
                  XilRegister_WriteUlong(v5, v12, v33);
                  DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
                  v28 = XilRegister_ReadUlong(v5, v12);
                  v29 = 74;
                }
              }
              else
              {
                DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
                v34 = XilRegister_ReadUlong(v5, v12);
                LODWORD(v73) = v34;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0x45u,
                  (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                  v73);
                v35 = v34 & 0xE00C200 | 0x400000;
                LODWORD(v78) = v35;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0x46u,
                  (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                  v78);
                XilRegister_WriteUlong(v5, v12, v35);
                DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
                v28 = XilRegister_ReadUlong(v5, v12);
                v29 = 71;
              }
            }
            else
            {
              DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
              v36 = XilRegister_ReadUlong(v5, v12);
              LODWORD(v73) = v36;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x42u,
                (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                v73);
              v37 = v36 & 0xE00C200 | 0x40000;
              LODWORD(v79) = v37;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x43u,
                (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                v79);
              XilRegister_WriteUlong(v5, v12, v37);
              DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
              v28 = XilRegister_ReadUlong(v5, v12);
              v29 = 68;
            }
          }
          else
          {
            DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
            v38 = XilRegister_ReadUlong(v5, v12);
            LODWORD(v73) = v38;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x3Cu,
              (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
              v73);
            v39 = v38 & 0xE00C200 | 0x20000;
            LODWORD(v80) = v39;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x3Du,
              (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
              v80);
            XilRegister_WriteUlong(v5, v12, v39);
            DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
            v28 = XilRegister_ReadUlong(v5, v12);
            v29 = 62;
          }
        }
        else
        {
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
          v40 = XilRegister_ReadUlong(v5, v12);
          LODWORD(v73) = v40;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x35u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v73);
          v40 &= 0xE00C000u;
          LODWORD(v81) = v40;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x36u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v81);
          XilRegister_WriteUlong(v5, v12, v40);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
          v28 = XilRegister_ReadUlong(v5, v12);
          v29 = 55;
        }
      }
      else
      {
        DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
        v46 = XilRegister_ReadUlong(v5, v12);
        LODWORD(v73) = v46;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x2Cu,
          (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
          v73);
        v47 = *(_QWORD *)(v3 + 8);
        if ( (*(_QWORD *)(v47 + 272) & 0x2000000LL) != 0 )
        {
          if ( (v46 & 2) == 0 || (v46 & 0x1E0u) >= 0x60 )
          {
            WPP_RECORDER_SF_(
              *(_QWORD *)(v47 + 72),
              3u,
              0xBu,
              0x2Du,
              (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
            v47 = *(_QWORD *)(v3 + 8);
          }
          v48 = 46;
          v49 = v46 & 0xE00C200 | 0x10060;
        }
        else
        {
          v48 = 47;
          v49 = v46 & 0xE00C200 | 2;
        }
        LODWORD(v84) = v49;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v47 + 72),
          4u,
          0xBu,
          v48,
          (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
          v84);
        XilRegister_WriteUlong(v5, v12, v49);
        DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
        v28 = XilRegister_ReadUlong(v5, v12);
        v29 = 48;
      }
    }
    else
    {
      if ( v15 != 3 )
      {
        v16 = 103;
        v17 = BYTE1(v9);
        v71 = *(_QWORD *)(v11 + 72);
        v18 = (unsigned __int8)v9;
LABEL_81:
        WPP_RECORDER_SF_DDDDDDDD(v71, v17, v18, v16);
        v7 = 3221225473LL;
        goto LABEL_82;
      }
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v11 + 72),
        4u,
        0xBu,
        0x4Cu,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        *(unsigned __int8 *)(v6 + 132),
        *(unsigned __int16 *)(v6 + 130),
        *(unsigned __int8 *)(v6 + 133));
      if ( v94 )
      {
        v16 = 77;
        goto LABEL_20;
      }
      v50 = v9 - 8;
      if ( v50 )
      {
        v51 = v50 - 8;
        if ( v51 )
        {
          v52 = v51 - 3;
          if ( v52 )
          {
            v53 = v52 - 1;
            if ( v53 )
            {
              v54 = v53 - 5;
              if ( v54 )
              {
                v55 = v54 - 1;
                if ( v55 )
                {
                  v56 = v55 - 3;
                  if ( v56 )
                  {
                    if ( v56 != 1 )
                    {
                      v16 = 102;
                      goto LABEL_20;
                    }
                    v57 = XilRegister_ReadUlong(v5, v95);
                    LODWORD(v85) = v57;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      4u,
                      0xBu,
                      0x63u,
                      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                      v85);
                    v57 &= ~0x10000u;
                    LODWORD(v86) = v57;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      4u,
                      0xBu,
                      0x64u,
                      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                      v86);
                    XilRegister_WriteUlong(v5, v95, v57);
                    v28 = XilRegister_ReadUlong(v5, v95);
                    v29 = 101;
                  }
                  else
                  {
                    DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
                    v58 = XilRegister_ReadUlong(v5, v12);
                    LODWORD(v85) = v58;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      4u,
                      0xBu,
                      0x60u,
                      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                      v85);
                    v59 = v58 & 0xE00C200 | 0x80000;
                    LODWORD(v87) = v59;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      4u,
                      0xBu,
                      0x61u,
                      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                      v87);
                    XilRegister_WriteUlong(v5, v12, v59);
                    DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
                    v28 = XilRegister_ReadUlong(v5, v12);
                    v29 = 98;
                  }
                }
                else
                {
                  DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
                  v60 = XilRegister_ReadUlong(v5, v12);
                  LODWORD(v85) = v60;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    4u,
                    0xBu,
                    0x5Du,
                    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                    v85);
                  v61 = v60 & 0xE00C200 | 0x800000;
                  LODWORD(v88) = v61;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    4u,
                    0xBu,
                    0x5Eu,
                    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                    v88);
                  XilRegister_WriteUlong(v5, v12, v61);
                  DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
                  v28 = XilRegister_ReadUlong(v5, v12);
                  v29 = 95;
                }
              }
              else
              {
                DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
                v62 = XilRegister_ReadUlong(v5, v12);
                LODWORD(v85) = v62;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0x5Au,
                  (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                  v85);
                v63 = v62 & 0xE00C200 | 0x400000;
                LODWORD(v89) = v63;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0x5Bu,
                  (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                  v89);
                XilRegister_WriteUlong(v5, v12, v63);
                DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
                v28 = XilRegister_ReadUlong(v5, v12);
                v29 = 92;
              }
            }
            else
            {
              DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
              v64 = XilRegister_ReadUlong(v5, v12);
              LODWORD(v85) = v64;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x54u,
                (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                v85);
              v65 = v64 & 0xE00C200 | 0x200000;
              LODWORD(v90) = v65;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x55u,
                (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                v90);
              XilRegister_WriteUlong(v5, v12, v65);
              DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
              v28 = XilRegister_ReadUlong(v5, v12);
              v29 = 86;
            }
          }
          else
          {
            DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
            v66 = XilRegister_ReadUlong(v5, v12);
            LODWORD(v85) = v66;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x57u,
              (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
              v85);
            v67 = v66 & 0xE00C200 | 0x100000;
            LODWORD(v91) = v67;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x58u,
              (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
              v91);
            XilRegister_WriteUlong(v5, v12, v67);
            DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
            v28 = XilRegister_ReadUlong(v5, v12);
            v29 = 89;
          }
        }
        else
        {
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
          v68 = XilRegister_ReadUlong(v5, v12);
          LODWORD(v85) = v68;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x51u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v85);
          v69 = v68 & 0xE00C200 | 0x20000;
          LODWORD(v92) = v69;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x52u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v92);
          XilRegister_WriteUlong(v5, v12, v69);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
          v28 = XilRegister_ReadUlong(v5, v12);
          v29 = 83;
        }
      }
      else
      {
        DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
        v70 = XilRegister_ReadUlong(v5, v12);
        LODWORD(v85) = v70;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x4Eu,
          (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
          v85);
        v70 &= 0xE00C000u;
        LODWORD(v93) = v70;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x4Fu,
          (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
          v93);
        XilRegister_WriteUlong(v5, v12, v70);
        DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v14 + 24));
        v28 = XilRegister_ReadUlong(v5, v12);
        v29 = 80;
      }
    }
    LODWORD(v75) = v28;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      4u,
      0xBu,
      v29,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v75);
    goto LABEL_77;
  }
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    2u,
    0xBu,
    0x26u,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
LABEL_6:
  *(_DWORD *)(v6 + 4) = -1073713152;
  v7 = 3221225486LL;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v7);
}
