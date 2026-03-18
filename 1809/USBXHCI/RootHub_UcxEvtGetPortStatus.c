/*
 * XREFs of RootHub_UcxEvtGetPortStatus @ 0x1C0020A50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     Controller_SetControllerGone @ 0x1C000DC30 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C001E774 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0023134 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortStatus(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int16 v8; // cx
  int v9; // edx
  unsigned int v10; // r15d
  int v11; // r8d
  unsigned int Ulong; // edi
  char v13; // dl
  unsigned __int16 v14; // r9
  unsigned __int16 *v15; // r13
  int v16; // ebx
  int v17; // r9d
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // dx
  int v20; // ecx
  __int16 v21; // ax
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // r8
  __int16 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r13
  unsigned __int16 v27; // ax
  int v28; // edx
  int v29; // eax
  __int16 v30; // cx
  int v31; // eax
  unsigned int v32; // eax
  int v33; // edi
  int v34; // eax
  int v35; // r9d
  __int64 v37; // [rsp+28h] [rbp-E0h]
  __int64 v38; // [rsp+28h] [rbp-E0h]
  __int64 v39; // [rsp+28h] [rbp-E0h]
  __int64 v40; // [rsp+28h] [rbp-E0h]
  __int64 v41; // [rsp+28h] [rbp-E0h]
  __int64 v42; // [rsp+30h] [rbp-D8h]
  __int64 v43; // [rsp+30h] [rbp-D8h]
  __int64 v44; // [rsp+30h] [rbp-D8h]
  __int64 v45; // [rsp+78h] [rbp-90h]
  __int64 v46; // [rsp+80h] [rbp-88h]
  __int64 v47; // [rsp+88h] [rbp-80h]
  _QWORD v49[5]; // [rsp+98h] [rbp-70h] BYREF

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F220);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 88);
  v47 = v6;
  if ( *(_BYTE *)(v5 + 473) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      1874);
  memset(v49, 0, sizeof(v49));
  LOWORD(v49[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v49);
  v7 = v49[1];
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      2u,
      0xBu,
      0x69u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
LABEL_6:
    *(_DWORD *)(v7 + 4) = -1073713152;
    v3 = -1073741810;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             v3);
  }
  v8 = *(_WORD *)(v7 + 130);
  v9 = 8;
  v10 = *(unsigned __int16 *)(v7 + 132);
  if ( v8 != 2 )
    v9 = 4;
  LOWORD(v11) = HIBYTE(*(_WORD *)(v7 + 132));
  if ( *(_BYTE *)(v7 + 128) != 0xA3
    || *(_BYTE *)(v7 + 129)
    || v8 && v8 != 2
    || !*(_WORD *)(v7 + 132)
    || v10 > *(_DWORD *)(v4 + 16)
    || *(unsigned __int16 *)(v7 + 134) != v9 )
  {
    v35 = 106;
    v11 = (unsigned __int8)v11;
    goto LABEL_61;
  }
  v45 = 16LL * (v10 - 1);
  Ulong = XilRegister_ReadUlong(v6, (unsigned int *)(v45 + *(_QWORD *)(v4 + 40)));
  v46 = 80LL * (v10 - 1);
  v13 = *(_BYTE *)(*(_QWORD *)(v4 + 48) + v46 + 13);
  if ( v13 == 2 && !*(_WORD *)(v7 + 130) )
  {
    if ( Ulong == -1 )
    {
      v14 = 107;
LABEL_20:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        2u,
        0xBu,
        v14,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
      Controller_SetControllerGone(*(_QWORD *)(v4 + 8), 1);
      goto LABEL_6;
    }
    v15 = *(unsigned __int16 **)(v7 + 40);
    *(_DWORD *)v15 = 0;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      4u,
      0xBu,
      0x6Cu,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v10,
      Ulong);
    v16 = 1;
    v17 = (Ulong >> 5) & 0xF;
    v18 = *v15 & 0xFFFC | Ulong & 1 | (2 * ((Ulong >> 1) & 1));
    *v15 = v18;
    if ( v17 == 2 )
    {
      v18 |= 0x20u;
      *v15 = v18;
      goto LABEL_29;
    }
    if ( ((Ulong >> 5) & 0xF) != 3 )
    {
      if ( ((Ulong >> 5) & 0xF) == 0xB )
      {
        *v15 = v18 | 0x800;
        LODWORD(v37) = v10;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          2u,
          0xBu,
          0x6Du,
          (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
          v37);
        v18 = *v15;
        v17 = (Ulong >> 5) & 0xF;
LABEL_29:
        v19 = v18 & 0xFEE7 | (8 * ((Ulong >> 3) & 1 | (2 * ((Ulong >> 4) & 1 | (16 * ((Ulong >> 9) & 1))))));
        *v15 = v19;
        v20 = (Ulong >> 10) & 0xF;
        if ( v20 == 2 )
        {
          v19 |= 0x200u;
          *v15 = v19;
          v21 = v19;
        }
        else
        {
          v21 = v19;
          if ( v20 == 3 )
          {
            v21 = v19 | 0x400;
            *v15 = v19 | 0x400;
            v19 |= 0x400u;
          }
        }
        if ( (Ulong & 0xC000) != 0 )
        {
          v22 = v21 | 0x1000;
          *v15 = v22;
          v19 = v22;
        }
        v23 = v15[1] & 0xFFFC | (Ulong >> 17) & 1 | (2 * ((Ulong >> 18) & 1));
        v15[1] = v23;
        v24 = v23 & 0xFFFB;
        if ( v17 != 15 )
          v24 |= 4 * ((Ulong >> 22) & 1);
        v15[1] = v24 & 0xFFE7 | (8 * ((Ulong >> 20) & 1 | (2 * ((Ulong >> 21) & 1))));
        LODWORD(v42) = v24 & 0xFFE7 | (unsigned __int16)(8 * ((Ulong >> 20) & 1 | (2 * ((Ulong >> 21) & 1))));
        LODWORD(v37) = v19;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          4u,
          0xBu,
          0x6Eu,
          (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
          v37,
          v42);
        v25 = *(_QWORD *)(v4 + 48);
        if ( ((Ulong >> 5) & 0xF) == 0xF )
        {
          _InterlockedOr((volatile signed __int32 *)(v25 + v46 + 56), 1u);
          (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            *(_QWORD *)(*(_QWORD *)(v4 + 48) + v46 + 72),
            -100000000LL);
          (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            *(_QWORD *)(*(_QWORD *)(v4 + 48) + v46 + 64),
            -10000000LL);
          LODWORD(v43) = Ulong;
          LODWORD(v38) = v10;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            4u,
            0xBu,
            0x6Fu,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v38,
            v43);
        }
        else
        {
          _m_prefetchw((const void *)(v25 + v46 + 56));
          if ( _InterlockedAnd((volatile signed __int32 *)(v25 + v46 + 56), 0) == 1 )
          {
            LODWORD(v43) = Ulong;
            LODWORD(v38) = v10;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
              4u,
              0xBu,
              0x70u,
              (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
              v38,
              v43);
            (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *(_QWORD *)(*(_QWORD *)(v4 + 48) + v46 + 72),
              0LL);
            (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *(_QWORD *)(*(_QWORD *)(v4 + 48) + v46 + 64),
              0LL);
          }
          v16 = 0;
        }
        *(_DWORD *)(v7 + 4) = v16;
        return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 a2,
                 v3);
      }
      if ( ((Ulong >> 5) & 0xF) != 0xF )
        goto LABEL_29;
    }
    v18 |= 4u;
    *v15 = v18;
    goto LABEL_29;
  }
  if ( v13 != 3 )
  {
    v11 = *(unsigned __int8 *)(v7 + 133);
    v35 = 119;
LABEL_61:
    WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(v7 + 134), v11, v35);
    v3 = -1073741823;
    *(_DWORD *)(v7 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             v3);
  }
  if ( Ulong == -1 )
  {
    v14 = 113;
    goto LABEL_20;
  }
  v26 = *(_QWORD *)(v7 + 40);
  *(_DWORD *)v26 = 0;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
    4u,
    0xBu,
    0x72u,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v10,
    Ulong);
  if ( RootHub_HideInvalidDebugPortStatusAndChange(v4, v10) )
  {
    LODWORD(v39) = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      4u,
      0xBu,
      0x73u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v39);
    v27 = *(_WORD *)v26 & 0xFC04 | 0x2A0;
    *(_WORD *)(v26 + 2) &= 0xFF06u;
    v28 = v27;
    v29 = *(unsigned __int16 *)(v26 + 2);
    *(_WORD *)v26 = v28;
    LODWORD(v44) = v29;
    LODWORD(v40) = v28;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      4u,
      0xBu,
      0x74u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v40,
      v44);
  }
  else
  {
    v30 = Ulong & 1 | *(_WORD *)v26 & 0xFE04 | (2
                                              * ((Ulong >> 1) & 1 | (4
                                                                   * ((Ulong >> 3) & 1 | (2
                                                                                        * ((Ulong >> 4) & 1 | (2 * ((Ulong >> 5) & 0xF))))))));
    *(_WORD *)v26 = v30;
    if ( (v30 & 0x1E0) == 0x1E0 )
    {
      v30 = v30 & 0xFE1F | 0x100;
      *(_WORD *)v26 = v30;
    }
    if ( (Ulong & 0x1000000) != 0 )
    {
      v30 = v30 & 0xFE1F | 0x140;
      *(_WORD *)v26 = v30;
    }
    *(_WORD *)v26 = v30 ^ (v30 ^ Ulong & 0xFE00) & 0x200;
    v31 = *(_WORD *)(v26 + 2) & 0xFF06 | (Ulong >> 17) & 1 | (unsigned __int16)(8
                                                                              * ((Ulong >> 20) & 1 | (2 * ((Ulong >> 21) & 1 | (2 * ((Ulong >> 19) & 1 | (2 * ((Ulong >> 22) & 1 | (2 * ((Ulong >> 23) & 1))))))))));
    *(_WORD *)(v26 + 2) = v31;
    LODWORD(v44) = v31;
    LODWORD(v39) = (unsigned __int16)(v30 ^ (v30 ^ Ulong & 0xFE00) & 0x200);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      4u,
      0xBu,
      0x75u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v39,
      v44);
    if ( *(_WORD *)(v7 + 130) == 2 )
    {
      v32 = XilRegister_ReadUlong(v47, (unsigned int *)(*(_QWORD *)(v4 + 40) + v45 + 8));
      *(_DWORD *)(v26 + 4) = 0;
      if ( *(_WORD *)(*(_QWORD *)(v4 + 48) + v46 + 46) || (Ulong & 0x3C00) != 0x400 )
        v33 = (Ulong >> 10) & 0xF | (Ulong >> 6) & 0xF0;
      else
        v33 = 68;
      v34 = v33 | (v32 >> 8) & 0xFF00;
      *(_DWORD *)(v26 + 4) = v34;
      LODWORD(v41) = v34;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        4u,
        0xBu,
        0x76u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v41);
    }
  }
  *(_DWORD *)(v7 + 4) = 0;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v3);
}
