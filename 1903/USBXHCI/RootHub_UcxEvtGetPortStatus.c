/*
 * XREFs of RootHub_UcxEvtGetPortStatus @ 0x1C0024AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     Controller_SetControllerGone @ 0x1C00102A4 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C0022270 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0027744 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortStatus(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int16 v8; // ax
  int v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // rdi
  unsigned int Ulong; // ebx
  char v13; // dl
  unsigned __int16 v14; // r9
  unsigned __int16 *v15; // r9
  unsigned __int16 v16; // dx
  int v17; // r15d
  int v18; // r8d
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // dx
  int v21; // ecx
  __int16 v22; // ax
  unsigned __int16 v23; // ax
  __int16 v24; // cx
  unsigned __int16 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r15
  unsigned __int16 v28; // cx
  unsigned __int16 v29; // ax
  __int16 v30; // cx
  unsigned __int16 v31; // r9
  unsigned __int16 v32; // cx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  int v36; // r9d
  __int64 v38; // [rsp+28h] [rbp-E0h]
  __int64 v39; // [rsp+30h] [rbp-D8h]
  int v40; // [rsp+70h] [rbp-98h]
  __int64 v41; // [rsp+78h] [rbp-90h]
  unsigned __int16 *v42; // [rsp+80h] [rbp-88h]
  __int64 v43; // [rsp+88h] [rbp-80h]
  __int64 v44; // [rsp+90h] [rbp-78h]
  _QWORD v46[5]; // [rsp+A0h] [rbp-68h] BYREF

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056248);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 88);
  v44 = v6;
  if ( *(_BYTE *)(v5 + 537) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      1882);
  memset(v46, 0, sizeof(v46));
  LOWORD(v46[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v46);
  v7 = v46[1];
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        2u,
        0xBu,
        0x69u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
    goto LABEL_7;
  }
  v8 = *(_WORD *)(v7 + 130);
  v9 = 8;
  v10 = *(unsigned __int16 *)(v7 + 132);
  v40 = v10;
  if ( v8 != 2 )
    v9 = 4;
  if ( *(_BYTE *)(v7 + 128) != 0xA3
    || *(_BYTE *)(v7 + 129)
    || (v8 & 0xFFFD) != 0
    || !*(_WORD *)(v7 + 132)
    || v10 > *(_DWORD *)(v4 + 16)
    || *(unsigned __int16 *)(v7 + 134) != v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v36 = 106;
      goto LABEL_81;
    }
LABEL_82:
    v3 = -1073741823;
    *(_DWORD *)(v7 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             v3);
  }
  v43 = 16LL * (v10 - 1);
  v11 = v10 - 1;
  Ulong = XilRegister_ReadUlong(v6, (unsigned int *)(v43 + *(_QWORD *)(v4 + 40)));
  v41 = 88 * v11;
  v13 = *(_BYTE *)(88 * v11 + *(_QWORD *)(v4 + 48) + 13);
  if ( v13 == 2 )
  {
    if ( !*(_WORD *)(v7 + 130) )
    {
      if ( Ulong == -1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_22:
          Controller_SetControllerGone(*(_QWORD **)(v4 + 8), 1);
LABEL_7:
          *(_DWORD *)(v7 + 4) = -1073713152;
          v3 = -1073741810;
          return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   a2,
                   v3);
        }
        v14 = 107;
LABEL_21:
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          2u,
          0xBu,
          v14,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
        goto LABEL_22;
      }
      v15 = *(unsigned __int16 **)(v7 + 40);
      v42 = v15;
      *(_DWORD *)v15 = 0;
      v16 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          4u,
          0xBu,
          0x6Cu,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v40,
          Ulong);
        v15 = v42;
        v16 = *v42;
      }
      v17 = 1;
      v18 = (Ulong >> 5) & 0xF;
      v19 = v16 & 0xFFFC | Ulong & 1 | (2 * ((Ulong >> 1) & 1));
      if ( v18 == 2 )
      {
        v19 |= 0x20u;
      }
      else
      {
        switch ( (Ulong >> 5) & 0xF )
        {
          case 3u:
            goto LABEL_29;
          case 0xBu:
            v19 |= 0x800u;
            *v15 = v19;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v38) = v40;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                2u,
                0xBu,
                0x6Du,
                (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                v38);
              v15 = v42;
              v18 = (Ulong >> 5) & 0xF;
              v19 = *v42;
            }
            break;
          case 0xFu:
LABEL_29:
            v19 |= 4u;
            break;
        }
      }
      v20 = v19 & 0xFEE7 | (8 * ((Ulong >> 3) & 1 | (2 * ((Ulong >> 4) & 1 | (16 * ((Ulong >> 9) & 1))))));
      v21 = (Ulong >> 10) & 0xF;
      *v15 = v20;
      if ( v21 == 2 )
      {
        v20 |= 0x200u;
        *v15 = v20;
        v22 = v20;
      }
      else
      {
        v22 = v20;
        if ( v21 == 3 )
        {
          v22 = v20 | 0x400;
          *v15 = v20 | 0x400;
          v20 |= 0x400u;
        }
      }
      if ( (Ulong & 0xC000) != 0 )
      {
        v23 = v22 | 0x1000;
        *v15 = v23;
        v20 = v23;
      }
      v24 = v15[1] & 0xFFF8 | (Ulong >> 17) & 1 | (2 * ((Ulong >> 18) & 1));
      if ( v18 != 15 )
        v24 |= 4 * ((Ulong >> 22) & 1);
      v25 = v24 & 0xFFE7 | (8 * ((Ulong >> 20) & 1 | (2 * ((Ulong >> 21) & 1))));
      v15[1] = v25;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v39) = v25;
        LODWORD(v38) = v20;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          4u,
          0xBu,
          0x6Eu,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v38,
          v39);
      }
      v26 = *(_QWORD *)(v4 + 48);
      if ( ((Ulong >> 5) & 0xF) == 0xF )
      {
        _InterlockedOr((volatile signed __int32 *)(v26 + v41 + 56), 1u);
        (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *(_QWORD *)(v41 + *(_QWORD *)(v4 + 48) + 72),
          -100000000LL);
        (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *(_QWORD *)(v41 + *(_QWORD *)(v4 + 48) + 64),
          -10000000LL);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v39) = Ulong;
          LODWORD(v38) = v40;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            4u,
            0xBu,
            0x6Fu,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v38,
            v39);
        }
      }
      else
      {
        _m_prefetchw((const void *)(v26 + v41 + 56));
        if ( _InterlockedAnd((volatile signed __int32 *)(v26 + v41 + 56), 0) == 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v39) = Ulong;
            LODWORD(v38) = v40;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
              4u,
              0xBu,
              0x70u,
              (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
              v38,
              v39);
          }
          (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            *(_QWORD *)(v41 + *(_QWORD *)(v4 + 48) + 72),
            0LL);
          (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            *(_QWORD *)(v41 + *(_QWORD *)(v4 + 48) + 64),
            0LL);
        }
        v17 = 0;
      }
      *(_DWORD *)(v7 + 4) = v17;
      return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               a2,
               v3);
    }
LABEL_77:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v36 = 119;
LABEL_81:
      WPP_RECORDER_SF_DDDDDDDD(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        *(unsigned __int8 *)(v7 + 134),
        *(unsigned __int8 *)(v7 + 133),
        v36);
      goto LABEL_82;
    }
    goto LABEL_82;
  }
  if ( v13 != 3 )
    goto LABEL_77;
  if ( Ulong == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v14 = 113;
    goto LABEL_21;
  }
  v27 = *(_QWORD *)(v7 + 40);
  *(_DWORD *)v27 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      4u,
      0xBu,
      0x72u,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v40,
      Ulong);
  if ( RootHub_HideInvalidDebugPortStatusAndChange(v4, v40) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v38) = v40;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        4u,
        0xBu,
        0x73u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v38);
    }
    v28 = *(_WORD *)v27 & 0xFC04 | 0x2A0;
    *(_WORD *)(v27 + 2) &= 0xFF06u;
    v29 = *(_WORD *)(v27 + 2);
    *(_WORD *)v27 = v28;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v39) = v29;
      LODWORD(v38) = v28;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        4u,
        0xBu,
        0x74u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v38,
        v39);
    }
  }
  else
  {
    v30 = *(_WORD *)v27 & 0xFE04 | Ulong & 1 | (2
                                              * ((Ulong >> 1) & 1 | (4
                                                                   * ((Ulong >> 3) & 1 | (2
                                                                                        * ((Ulong >> 4) & 1 | (2 * ((Ulong >> 5) & 0xF))))))));
    if ( ((2
         * ((Ulong >> 1) & 1 | (unsigned __int16)(4
                                                * ((Ulong >> 3) & 1 | (2
                                                                     * ((Ulong >> 4) & 1 | (2 * ((Ulong >> 5) & 0xF)))))))) & 0x1E0) == 0x1E0 )
      v30 = *(_WORD *)v27 & 0xFE04 | Ulong & 1 | (2
                                                * (((Ulong & 2) != 0) | (unsigned __int8)(4
                                                                                        * (((Ulong & 8) != 0) | (2 * (((Ulong & 0x10) != 0) | (2 * ((Ulong >> 5) & 0xF)))))))) & 0x1F | 0x100;
    if ( (Ulong & 0x1000000) != 0 )
      v30 = v30 & 0xFE1F | 0x140;
    v31 = v30 ^ (v30 ^ ((unsigned __int16)(Ulong >> 9) << 9)) & 0x200;
    *(_WORD *)v27 = v31;
    v32 = *(_WORD *)(v27 + 2) & 0xFF06 | (Ulong >> 17) & 1 | (8
                                                            * ((Ulong >> 20) & 1 | (2
                                                                                  * ((Ulong >> 21) & 1 | (2 * ((Ulong >> 19) & 1 | (2 * ((Ulong >> 22) & 1 | (2 * ((Ulong >> 23) & 1))))))))));
    *(_WORD *)(v27 + 2) = v32;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v39) = v32;
      LODWORD(v38) = v31;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        4u,
        0xBu,
        0x75u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v38,
        v39);
    }
    if ( *(_WORD *)(v7 + 130) == 2 )
    {
      v33 = XilRegister_ReadUlong(v44, (unsigned int *)(*(_QWORD *)(v4 + 40) + v43 + 8));
      *(_DWORD *)(v27 + 4) = 0;
      if ( *(_WORD *)(v41 + *(_QWORD *)(v4 + 48) + 46) || (Ulong & 0x3C00) != 0x400 )
        v34 = (Ulong & 0x3C00 | (Ulong >> 4) & 0x3C0) >> 6;
      else
        v34 = 68;
      v35 = v34 | (v33 >> 8) & 0xFF00;
      *(_DWORD *)(v27 + 4) = v35;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v38) = v35;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          4u,
          0xBu,
          0x76u,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v38);
      }
    }
  }
  *(_DWORD *)(v7 + 4) = 0;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v3);
}
