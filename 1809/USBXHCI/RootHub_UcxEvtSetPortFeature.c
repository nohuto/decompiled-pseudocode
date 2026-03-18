/*
 * XREFs of RootHub_UcxEvtSetPortFeature @ 0x1C00217F0
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
 *     RootHub_ForceU0AndWait @ 0x1C001DF08 (RootHub_ForceU0AndWait.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C002299C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0023134 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_UcxEvtSetPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // r8
  int Ulong; // eax
  unsigned int v9; // ebx
  unsigned int v10; // esi
  unsigned int v11; // r12d
  __int64 v12; // r11
  int v13; // edi
  char v14; // dl
  int v15; // r9d
  int v16; // r8d
  int v17; // edx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  int v22; // ebx
  char v23; // di
  int v24; // edi
  int v25; // eax
  unsigned __int16 v26; // r9
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  __int64 v35; // rax
  int v36; // eax
  int v37; // ebx
  int v38; // ebx
  int v39; // eax
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  int v47; // ebx
  int v48; // ebx
  unsigned int v49; // ebx
  int v50; // eax
  __int16 v51; // bx
  int v52; // ebx
  int v53; // ebx
  int v54; // ebx
  unsigned int v55; // ebx
  int v56; // ebx
  int v57; // ebx
  int v58; // eax
  int v59; // eax
  int v60; // ebx
  int v61; // ebx
  int v62; // ebx
  __int64 v63; // r8
  int v64; // eax
  int v65; // ebx
  int v66; // ebx
  __int64 v67; // rcx
  __int64 v69; // [rsp+28h] [rbp-E0h]
  __int64 v70; // [rsp+28h] [rbp-E0h]
  __int64 v71; // [rsp+28h] [rbp-E0h]
  __int64 v72; // [rsp+28h] [rbp-E0h]
  __int64 v73; // [rsp+28h] [rbp-E0h]
  __int64 v74; // [rsp+28h] [rbp-E0h]
  __int64 v75; // [rsp+28h] [rbp-E0h]
  __int64 v76; // [rsp+28h] [rbp-E0h]
  __int64 v77; // [rsp+28h] [rbp-E0h]
  __int64 v78; // [rsp+28h] [rbp-E0h]
  __int64 v79; // [rsp+28h] [rbp-E0h]
  __int64 v80; // [rsp+28h] [rbp-E0h]
  __int64 v81; // [rsp+28h] [rbp-E0h]
  __int64 v82; // [rsp+28h] [rbp-E0h]
  __int64 v83; // [rsp+28h] [rbp-E0h]
  __int64 v84; // [rsp+28h] [rbp-E0h]
  __int64 v85; // [rsp+28h] [rbp-E0h]
  __int64 v86; // [rsp+28h] [rbp-E0h]
  __int64 v87; // [rsp+28h] [rbp-E0h]
  __int64 v88; // [rsp+28h] [rbp-E0h]
  __int64 v89; // [rsp+28h] [rbp-E0h]
  __int64 v90; // [rsp+28h] [rbp-E0h]
  __int64 v91; // [rsp+70h] [rbp-98h]
  unsigned int *v92; // [rsp+78h] [rbp-90h]
  unsigned int *v93; // [rsp+88h] [rbp-80h]
  unsigned int *v94; // [rsp+90h] [rbp-78h]
  _QWORD v96[5]; // [rsp+A0h] [rbp-68h] BYREF

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
      2375);
  memset(v96, 0, sizeof(v96));
  LOWORD(v96[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v96);
  v6 = v96[1];
  if ( Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    Ulong = XilRegister_ReadUlong(v5, (unsigned int *)(*(_QWORD *)(v3 + 32) + 4LL));
    if ( Ulong == -1 )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2u,
        0xBu,
        0x79u,
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
        0x7Au,
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
    v11 = *(unsigned __int8 *)(v6 + 133);
    if ( *(_BYTE *)(v6 + 128) != 35
      || *(_BYTE *)(v6 + 129) != 3
      || !*(_BYTE *)(v6 + 132)
      || v10 > *(_DWORD *)(v3 + 16)
      || *(_WORD *)(v6 + 134) )
    {
      v15 = 123;
      v17 = *(unsigned __int8 *)(v6 + 134);
      v16 = BYTE1(v9);
      goto LABEL_88;
    }
    v12 = *(_QWORD *)(v3 + 8);
    v13 = 2;
    v92 = (unsigned int *)(16LL * (v10 - 1) + *(_QWORD *)(v3 + 40));
    v93 = v92 + 1;
    v94 = v92 + 3;
    v91 = 80LL * (v10 - 1);
    v14 = *(_BYTE *)(v91 + *(_QWORD *)(v3 + 48) + 13);
    if ( v14 == 2 )
    {
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v12 + 72),
        4u,
        0xBu,
        0x7Cu,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        *(unsigned __int8 *)(v6 + 132),
        *(unsigned __int16 *)(v6 + 130),
        *(unsigned __int8 *)(v6 + 133));
      if ( v9 - 21 > 1 && v11 )
      {
        v15 = 125;
LABEL_20:
        v16 = *(unsigned __int8 *)(v6 + 133);
        v17 = *(unsigned __int8 *)(v6 + 134);
LABEL_88:
        v67 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL);
        goto LABEL_89;
      }
      v18 = v9 - 2;
      if ( v18 )
      {
        v19 = v18 - 2;
        if ( v19 )
        {
          v20 = v19 - 4;
          if ( v20 )
          {
            v21 = v20 - 13;
            if ( v21 )
            {
              if ( v21 != 1 )
              {
                v15 = 148;
                goto LABEL_20;
              }
              if ( v11 > 3 )
              {
                v15 = 144;
                goto LABEL_20;
              }
              DynamicLock_Acquire(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
              v22 = XilRegister_ReadUlong(v5, v92);
              LODWORD(v69) = v22;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x91u,
                (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                v69);
              v23 = 0;
              if ( v11 != 3 )
                v23 = v11;
              v24 = v22 & 0xE000200 | ((v23 & 3) << 14);
              LODWORD(v70) = v24;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x92u,
                (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                v70);
              XilRegister_WriteUlong(v5, v92, v24);
              DynamicLock_Release(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
              v25 = XilRegister_ReadUlong(v5, v92);
              v26 = 147;
            }
            else
            {
              if ( v11 > 5 )
              {
                v15 = 140;
                goto LABEL_20;
              }
              v27 = XilRegister_ReadUlong(v5, v93);
              LODWORD(v69) = v27;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x8Du,
                (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                v69);
              v28 = (v11 << 28) | v27 & 0xFFFFFFF;
              LODWORD(v72) = v28;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0x8Eu,
                (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                v72);
              XilRegister_WriteUlong(v5, v93, v28);
              v25 = XilRegister_ReadUlong(v5, v93);
              v26 = 143;
            }
          }
          else
          {
            DynamicLock_Acquire(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
            v29 = XilRegister_ReadUlong(v5, v92);
            LODWORD(v69) = v29;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x89u,
              (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
              v69);
            v30 = v29 & 0xE00C000 | 0x200;
            LODWORD(v73) = v30;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x8Au,
              (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
              v73);
            XilRegister_WriteUlong(v5, v92, v30);
            DynamicLock_Release(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
            v25 = XilRegister_ReadUlong(v5, v92);
            v26 = 139;
          }
        }
        else
        {
          DynamicLock_Acquire(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
          if ( *(_BYTE *)(v91 + *(_QWORD *)(v3 + 48) + 20) )
          {
            v31 = XilRegister_ReadUlong(v5, v93);
            LODWORD(v69) = v31;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x7Eu,
              (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
              v69);
            v31 &= 0xFFFE0007;
            LODWORD(v74) = v31;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x7Fu,
              (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
              v74);
            XilRegister_WriteUlong(v5, v93, v31);
            v32 = XilRegister_ReadUlong(v5, v94);
            LODWORD(v75) = v32;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x80u,
              (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
              v75);
            v32 &= 0xFFFFC000;
            LODWORD(v76) = v32;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4u,
              0xBu,
              0x81u,
              (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
              v76);
            XilRegister_WriteUlong(v5, v94, v32);
            *(_BYTE *)(v91 + *(_QWORD *)(v3 + 48) + 20) = 0;
          }
          v33 = XilRegister_ReadUlong(v5, v92);
          LODWORD(v69) = v33;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x82u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v69);
          v34 = v33 & 0xE00C200 | 0x10;
          LODWORD(v77) = v34;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x83u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v77);
          XilRegister_WriteUlong(v5, v92, v34);
          DynamicLock_Release(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
          v25 = XilRegister_ReadUlong(v5, v92);
          v26 = 132;
        }
      }
      else
      {
        v35 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 272LL);
        if ( (v35 & 0x8000000) != 0 || (v35 & 0x80000) != 0 )
        {
          v36 = RootHub_ForceU0AndWait((_QWORD *)v3, v10);
          v7 = (unsigned int)v36;
          if ( v36 < 0 )
            goto LABEL_90;
        }
        DynamicLock_Acquire(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
        *(_BYTE *)(v91 + *(_QWORD *)(v3 + 48) + 18) = 0;
        v37 = XilRegister_ReadUlong(v5, v92);
        LODWORD(v69) = v37;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x85u,
          (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
          v69);
        if ( (v37 & 2) == 0 || (v37 & 0x1E0u) >= 0x60 )
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            3u,
            0xBu,
            0x86u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
        v38 = v37 & 0xE00C200 | 0x10060;
        LODWORD(v78) = v38;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x87u,
          (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
          v78);
        XilRegister_WriteUlong(v5, v92, v38);
        DynamicLock_Release(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
        v25 = XilRegister_ReadUlong(v5, v92);
        v26 = 136;
      }
      goto LABEL_84;
    }
    if ( v14 != 3 )
    {
      v15 = 179;
      v17 = BYTE1(v9);
      v67 = *(_QWORD *)(v12 + 72);
      v16 = (unsigned __int8)v9;
LABEL_89:
      WPP_RECORDER_SF_DDDDDDDD(v67, v17, v16, v15);
      v7 = 3221225473LL;
      goto LABEL_90;
    }
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v12 + 72),
      4u,
      0xBu,
      0x95u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      *(unsigned __int8 *)(v6 + 132),
      *(unsigned __int16 *)(v6 + 130),
      *(unsigned __int8 *)(v6 + 133));
    if ( v9 > 0x1B || (v39 = 159383584, !_bittest(&v39, v9)) )
    {
      if ( v11 )
      {
        v15 = 150;
        goto LABEL_20;
      }
    }
    v40 = v9 - 4;
    if ( !v40 )
    {
      DynamicLock_Acquire(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
      v65 = XilRegister_ReadUlong(v5, v92);
      LODWORD(v79) = v65;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x97u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v79);
      v66 = v65 & 0xE00C200 | 0x10;
      LODWORD(v90) = v66;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x98u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v90);
      XilRegister_WriteUlong(v5, v92, v66);
      DynamicLock_Release(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
      v25 = XilRegister_ReadUlong(v5, v92);
      v26 = 153;
      goto LABEL_84;
    }
    v41 = v40 - 1;
    if ( v41 )
    {
      v42 = v41 - 3;
      if ( v42 )
      {
        v43 = v42 - 15;
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( v44 )
          {
            v45 = v44 - 3;
            if ( v45 )
            {
              v46 = v45 - 1;
              if ( v46 )
              {
                if ( v46 != 2 )
                {
                  v15 = 178;
                  goto LABEL_20;
                }
                v47 = XilRegister_ReadUlong(v5, v93);
                LODWORD(v79) = v47;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0xAFu,
                  (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                  v79);
                v47 |= 0x10000u;
                LODWORD(v80) = v47;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0xB0u,
                  (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                  v80);
                XilRegister_WriteUlong(v5, v93, v47);
                v25 = XilRegister_ReadUlong(v5, v93);
                v26 = 177;
              }
              else
              {
                DynamicLock_Acquire(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
                v48 = XilRegister_ReadUlong(v5, v92);
                LODWORD(v79) = v48;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0x9Au,
                  (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                  v79);
                v49 = v48 & 0xE00C200 | 0x80000000;
                LODWORD(v81) = v49;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  4u,
                  0xBu,
                  0x9Bu,
                  (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                  v81);
                XilRegister_WriteUlong(v5, v92, v49);
                DynamicLock_Release(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
                v25 = XilRegister_ReadUlong(v5, v92);
                v26 = 156;
              }
            }
            else
            {
              if ( (unsigned __int8)v11 >= 8u )
              {
                v15 = 171;
                goto LABEL_20;
              }
              DynamicLock_Acquire(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
              v50 = XilRegister_ReadUlong(v5, v92);
              v51 = v50;
              LODWORD(v79) = v50;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0xACu,
                (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                v79);
              v52 = v51 & 0xC200;
              LODWORD(v82) = v52 | ((v11 & 7) << 25);
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                4u,
                0xBu,
                0xADu,
                (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                v82);
              XilRegister_WriteUlong(v5, v92, v52 | ((v11 & 7) << 25));
              DynamicLock_Release(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
              v25 = XilRegister_ReadUlong(v5, v92);
              v26 = 174;
            }
            goto LABEL_84;
          }
          v53 = XilRegister_ReadUlong(v5, v93);
          LODWORD(v79) = v53;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA4u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v79);
          v53 &= 0xFFFF00FF;
          LODWORD(v83) = v53 | (v11 << 8);
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA5u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v83);
          XilRegister_WriteUlong(v5, v93, v53 | (v11 << 8));
          LODWORD(v84) = XilRegister_ReadUlong(v5, v93);
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA6u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v84);
          *(_BYTE *)(v91 + *(_QWORD *)(v3 + 48) + 22) = v11;
        }
        else
        {
          v54 = XilRegister_ReadUlong(v5, v93);
          LODWORD(v79) = v54;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA1u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v79);
          v55 = v11 | v54 & 0xFFFFFF00;
          LODWORD(v85) = v55;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA2u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v85);
          XilRegister_WriteUlong(v5, v93, v55);
          LODWORD(v86) = XilRegister_ReadUlong(v5, v93);
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0xA3u,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v86);
          *(_BYTE *)(v91 + *(_QWORD *)(v3 + 48) + 21) = v11;
        }
LABEL_85:
        *(_DWORD *)(v6 + 4) = 0;
        v7 = 0LL;
        return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 a2,
                 v7);
      }
      DynamicLock_Acquire(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
      v56 = XilRegister_ReadUlong(v5, v92);
      LODWORD(v79) = v56;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x9Du,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v79);
      v57 = v56 & 0xE00C000 | 0x200;
      LODWORD(v87) = v57;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x9Eu,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v87);
      XilRegister_WriteUlong(v5, v92, v57);
      DynamicLock_Release(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
      v25 = XilRegister_ReadUlong(v5, v92);
      v26 = 159;
LABEL_84:
      LODWORD(v71) = v25;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        v26,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v71);
      goto LABEL_85;
    }
    if ( v11 > 5 )
    {
      v15 = 167;
      goto LABEL_20;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 272LL) & 0x80000LL) != 0 )
    {
      if ( !v11 )
        goto LABEL_74;
      v58 = RootHub_ForceU0AndWait((_QWORD *)v3, v10);
      v7 = (unsigned int)v58;
      if ( v58 < 0 )
        goto LABEL_90;
    }
    if ( v11 )
      goto LABEL_75;
LABEL_74:
    v59 = RootHub_WaitForPendingU3TransitionCompletion(v3, v10, 0LL);
    v7 = (unsigned int)v59;
    if ( v59 >= 0 )
    {
LABEL_75:
      DynamicLock_Acquire(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
      if ( v11 == 3 )
        *(_BYTE *)(v91 + *(_QWORD *)(v3 + 48) + 18) = 0;
      v60 = XilRegister_ReadUlong(v5, v92);
      LODWORD(v79) = v60;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0xA8u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v79);
      v61 = v60 & 0xE00C200;
      if ( v11 != 4 )
        v13 = 32 * (v11 & 0xF | 0x800);
      v62 = v13 | v61;
      LODWORD(v88) = v62;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0xA9u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v88);
      XilRegister_WriteUlong(v5, v92, v62);
      DynamicLock_Release(*(_QWORD *)(v91 + *(_QWORD *)(v3 + 48) + 24));
      LODWORD(v89) = XilRegister_ReadUlong(v5, v92);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0xAAu,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v89);
      if ( v11 == 3 && (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 272LL) & 0x4000000LL) != 0 )
      {
        LOBYTE(v63) = 1;
        v64 = RootHub_WaitForPendingU3TransitionCompletion(v3, v10, v63);
        v7 = (unsigned int)v64;
        if ( v64 < 0 )
          goto LABEL_90;
      }
      goto LABEL_85;
    }
LABEL_90:
    *(_DWORD *)(v6 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             v7);
  }
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    2u,
    0xBu,
    0x78u,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
LABEL_6:
  *(_DWORD *)(v6 + 4) = -1073713152;
  v7 = 3221225486LL;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v7);
}
