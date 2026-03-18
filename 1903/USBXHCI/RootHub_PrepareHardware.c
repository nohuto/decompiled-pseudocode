/*
 * XREFs of RootHub_PrepareHardware @ 0x1C00689FC
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0063A00 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsSecureDevice @ 0x1C000F418 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     Register_FindFirstExtendedCapability @ 0x1C00206F8 (Register_FindFirstExtendedCapability.c)
 *     Register_FindNextExtendedCapability @ 0x1C0020764 (Register_FindNextExtendedCapability.c)
 *     XilRegister_GetOperationalRegisters @ 0x1C0020C8C (XilRegister_GetOperationalRegisters.c)
 *     XilRegister_ReadBufferUlong @ 0x1C0020C98 (XilRegister_ReadBufferUlong.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     RootHub_DumpPortData @ 0x1C00216E4 (RootHub_DumpPortData.c)
 *     RootHub_InitializeReadModifyWriteLock @ 0x1C00222D0 (RootHub_InitializeReadModifyWriteLock.c)
 *     WPP_RECORDER_SF_cccc @ 0x1C00278DC (WPP_RECORDER_SF_cccc.c)
 */

__int64 __fastcall RootHub_PrepareHardware(__int64 a1)
{
  unsigned int v2; // r13d
  __int64 v3; // rdi
  __int64 v4; // rcx
  PVOID PoolWithTag; // rax
  int v6; // edi
  unsigned int i; // edx
  __int64 v8; // rcx
  _DWORD *FirstExtendedCapability; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r9d^2
  unsigned int v13; // r13d
  unsigned int v14; // eax
  unsigned int j; // edi
  int v16; // eax
  __int64 v17; // rcx
  char IsSecureDevice; // al
  int v19; // r8d
  int v20; // ecx
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rcx
  bool v24; // zf
  int v25; // r8d
  int v26; // ecx
  __int64 v27; // r9
  __int64 v28; // rcx
  char v29; // al
  int v30; // r8d
  int v31; // ecx
  unsigned int v32; // ecx
  int v33; // r10d
  unsigned int v34; // edx
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rdi
  int Ulong; // eax
  char v39; // dl
  unsigned __int16 v40; // r9
  unsigned __int16 v41; // r9
  char *v42; // rcx
  unsigned int k; // esi
  __int64 v44; // r14
  int v46; // [rsp+28h] [rbp-A9h]
  char v47; // [rsp+58h] [rbp-79h]
  __int64 v48; // [rsp+60h] [rbp-71h]
  int v49; // [rsp+60h] [rbp-71h]
  unsigned int v50; // [rsp+68h] [rbp-69h]
  unsigned int v51; // [rsp+6Ch] [rbp-65h]
  __int64 v52; // [rsp+70h] [rbp-61h]
  __int64 v53; // [rsp+70h] [rbp-61h]
  _QWORD v54[5]; // [rsp+78h] [rbp-59h] BYREF
  _QWORD v55[7]; // [rsp+A0h] [rbp-31h] BYREF
  _DWORD *v56; // [rsp+D8h] [rbp+7h]
  __int64 v57; // [rsp+E0h] [rbp+Fh]
  __int64 v58; // [rsp+E8h] [rbp+17h] BYREF
  __int64 v59; // [rsp+F0h] [rbp+1Fh]

  v58 = 0LL;
  v59 = 0LL;
  memset(v55, 0, sizeof(v55));
  memset(v54, 0, sizeof(v54));
  v2 = 0;
  v47 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v52 = v3;
  *(_DWORD *)(a1 + 16) = *(unsigned __int8 *)(v3 + 83);
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 24) = (unsigned __int8)*(_WORD *)(v3 + 96);
  *(_WORD *)(a1 + 26) = *(_WORD *)(v3 + 98);
  *(_QWORD *)(a1 + 32) = XilRegister_GetOperationalRegisters(v3);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(v3 + 32) + 1024LL;
  if ( Register_FindFirstExtendedCapability(v4, 0xAu) )
    *(_BYTE *)(a1 + 56) = 1;
  PoolWithTag = ExAllocatePoolWithTag(
                  *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                  88LL * *(unsigned int *)(a1 + 16),
                  0x49434858u);
  *(_QWORD *)(a1 + 48) = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0xBu,
        0x14u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
    v6 = -1073741670;
    goto LABEL_74;
  }
  memset(PoolWithTag, 0, 88LL * *(unsigned int *)(a1 + 16));
  for ( i = 0; i < *(_DWORD *)(a1 + 16); *(_DWORD *)(v8 + 8) = i )
  {
    v8 = *(_QWORD *)(a1 + 48) + 88LL * i++;
    *(_QWORD *)v8 = a1;
  }
  FirstExtendedCapability = (_DWORD *)Register_FindFirstExtendedCapability(v3, 2u);
  v56 = FirstExtendedCapability;
  if ( !FirstExtendedCapability )
  {
LABEL_71:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0xBu,
        0x1Au,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
    goto LABEL_73;
  }
  do
  {
    XilRegister_ReadBufferUlong(v3, FirstExtendedCapability, &v58, 4u);
    if ( HIDWORD(v58) != 541217621 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_cccc(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), HIDWORD(v58), v10, v11, v46);
      goto LABEL_15;
    }
    v12 = BYTE2(v58);
    v57 = v58;
    v13 = BYTE3(v58);
    if ( BYTE3(v58) - 2 <= 1u )
    {
      v32 = v59;
      v33 = (unsigned __int8)v59;
      v34 = BYTE1(v59);
      v51 = BYTE1(v59);
      v49 = (unsigned __int8)v59;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_dddd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          0xBu,
          0x15u,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
        v32 = v59;
        v34 = v51;
        v12 = BYTE2(v57);
        v33 = v49;
      }
      if ( v33 && v34 && v34 + v33 - 1 <= *(_DWORD *)(a1 + 16) )
      {
        v35 = 0;
        v47 = 1;
        v50 = 0;
        while ( 1 )
        {
          v36 = v33 + v35 - 1;
          v37 = *(_QWORD *)(a1 + 48) + 88 * v36;
          if ( *(_BYTE *)(v37 + 13) )
            break;
          if ( v13 == 2 )
            ++*(_WORD *)(a1 + 20);
          else
            ++*(_WORD *)(a1 + 22);
          *(_BYTE *)(v37 + 12) = v12;
          *(_BYTE *)(v37 + 13) = v13;
          *(_BYTE *)(v37 + 15) = (v32 & 0x20000) != 0;
          *(_BYTE *)(v37 + 16) = (v32 & 0x40000) != 0;
          Ulong = XilRegister_ReadUlong(v52, (unsigned int *)(*(_QWORD *)(a1 + 40) + 16 * v36));
          v32 = v59;
          v39 = 0;
          *(_BYTE *)(v37 + 19) = 0;
          if ( (v32 & 0x80000) != 0 )
          {
            *(_BYTE *)(v37 + 19) = 1;
            v39 = 1;
          }
          if ( (v32 & 0x100000) != 0 )
            *(_BYTE *)(v37 + 19) = v39 | 2;
          if ( (Ulong & 0x40000000) == 0 )
            *(_BYTE *)(v37 + 17) = 1;
          v12 = BYTE2(v57);
          v33 = v49;
          *(_BYTE *)(v37 + 14) = (v32 >> 25) & 7;
          *(_WORD *)(v37 + 46) = v32 >> 28;
          *(_QWORD *)(v37 + 48) = v56 + 4;
          v35 = v50 + 1;
          v50 = v35;
          if ( v35 >= v51 )
          {
            v3 = v52;
            goto LABEL_14;
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v40 = 23;
LABEL_56:
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            0xBu,
            v40,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v40 = 22;
        goto LABEL_56;
      }
LABEL_73:
      v6 = -1073741811;
      goto LABEL_74;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0xBu,
        0x18u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
LABEL_14:
    v2 = 0;
LABEL_15:
    FirstExtendedCapability = (_DWORD *)Register_FindNextExtendedCapability(v3, (unsigned __int64)v56);
    v56 = FirstExtendedCapability;
  }
  while ( FirstExtendedCapability );
  if ( !v47 )
    goto LABEL_71;
  v14 = *(_DWORD *)(a1 + 16);
  for ( j = 0; j < v14; ++j )
  {
    RootHub_DumpPortData((unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * j), *(_QWORD *)(a1 + 8));
    v14 = *(_DWORD *)(a1 + 16);
  }
  v6 = 0;
  if ( v14 )
  {
    while ( 1 )
    {
      v16 = RootHub_InitializeReadModifyWriteLock((_QWORD *)a1, v2);
      v6 = v16;
      if ( v16 < 0 )
        break;
      memset(v54, 0, sizeof(v54));
      v17 = *(_QWORD *)(a1 + 8);
      LODWORD(v54[0]) = 40;
      LODWORD(v54[2]) = 0;
      v54[1] = RootHub_WdfEvtTimerPortOperationPendingTimerDpc;
      v55[6] = off_1C0056400;
      v55[4] = *(_QWORD *)a1;
      BYTE4(v54[2]) = 1;
      LODWORD(v54[3]) = 0;
      LOBYTE(v54[4]) = 1;
      *(_OWORD *)((char *)v55 + 4) = 0LL;
      HIDWORD(v55[2]) = 0;
      v55[5] = 0LL;
      LODWORD(v55[0]) = 56;
      v55[3] = 0x100000001LL;
      IsSecureDevice = Controller_IsSecureDevice(v17);
      v20 = v19;
      if ( IsSecureDevice )
        v20 = 2;
      v21 = *(_QWORD *)(a1 + 48) + 64LL;
      LODWORD(v55[3]) = v20;
      v48 = 88LL * v2;
      v22 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023 + 2544))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              v54,
              v55,
              v48 + v21);
      v6 = v22;
      if ( v22 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_69;
        v41 = 28;
        goto LABEL_66;
      }
      *(_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   *(_QWORD *)(*(_QWORD *)(a1 + 48) + v48 + 64),
                   off_1C0056400) = v48 + *(_QWORD *)(a1 + 48);
      memset(v54, 0, sizeof(v54));
      v23 = *(_QWORD *)(a1 + 8);
      v54[1] = RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc;
      v55[6] = off_1C0056400;
      v55[4] = *(_QWORD *)a1;
      LODWORD(v54[0]) = 40;
      LODWORD(v54[2]) = 0;
      BYTE4(v54[2]) = 1;
      LODWORD(v54[3]) = 0;
      LOBYTE(v54[4]) = 1;
      *(_OWORD *)((char *)v55 + 4) = 0LL;
      HIDWORD(v55[2]) = 0;
      v55[5] = 0LL;
      LODWORD(v55[0]) = 56;
      v55[3] = 0x100000001LL;
      v24 = Controller_IsSecureDevice(v23) == 0;
      v26 = v25;
      if ( !v24 )
        v26 = 2;
      v27 = *(_QWORD *)(a1 + 48) + v48 + 72;
      LODWORD(v55[3]) = v26;
      v22 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023 + 2544))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              v54,
              v55,
              v27);
      v6 = v22;
      if ( v22 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_69;
        v41 = 29;
        goto LABEL_66;
      }
      *(_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   *(_QWORD *)(*(_QWORD *)(a1 + 48) + v48 + 72),
                   off_1C0056400) = v48 + *(_QWORD *)(a1 + 48);
      v53 = *(_QWORD *)(a1 + 48);
      if ( *(_BYTE *)(v53 + v48 + 13) == 2 )
      {
        memset(v54, 0, sizeof(v54));
        v28 = *(_QWORD *)(a1 + 8);
        LODWORD(v54[0]) = 40;
        LODWORD(v54[2]) = 0;
        v54[1] = RootHub_WdfEvtTimer20PortResumeCompleteDpc;
        v55[6] = off_1C0056400;
        v55[4] = *(_QWORD *)a1;
        BYTE4(v54[2]) = 1;
        LODWORD(v54[3]) = 0;
        LOBYTE(v54[4]) = 1;
        *(_OWORD *)((char *)v55 + 4) = 0LL;
        HIDWORD(v55[2]) = 0;
        v55[5] = 0LL;
        LODWORD(v55[0]) = 56;
        v55[3] = 0x100000001LL;
        v29 = Controller_IsSecureDevice(v28);
        v31 = v30;
        if ( v29 )
          v31 = 2;
        LODWORD(v55[3]) = v31;
        v22 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023 + 2544))(
                WPP_MAIN_CB.Dpc.ProcessorHistory,
                v54,
                v55,
                v53 + 32 + v48);
        v6 = v22;
        if ( v22 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_69;
          v41 = 30;
LABEL_66:
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            0xBu,
            v41,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v22);
          goto LABEL_69;
        }
        *(_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     *(_QWORD *)(*(_QWORD *)(a1 + 48) + v48 + 32),
                     off_1C0056400) = *(_QWORD *)(a1 + 48) + v48;
      }
      if ( ++v2 >= *(_DWORD *)(a1 + 16) )
        goto LABEL_69;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0xBu,
        0x1Bu,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v16,
        v2);
LABEL_69:
    if ( v6 < 0 )
    {
LABEL_74:
      v42 = *(char **)(a1 + 48);
      if ( v42 )
      {
        for ( k = 0; k < *(_DWORD *)(a1 + 16); ++k )
        {
          v42 = *(char **)(a1 + 48);
          v44 = 88LL * k;
          if ( *(_QWORD *)&v42[v44 + 64] )
          {
            (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1664))(WPP_MAIN_CB.Dpc.ProcessorHistory);
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + v44 + 64) = 0LL;
            v42 = *(char **)(a1 + 48);
          }
          if ( *(_QWORD *)&v42[v44 + 72] )
          {
            (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1664))(WPP_MAIN_CB.Dpc.ProcessorHistory);
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + v44 + 72) = 0LL;
            v42 = *(char **)(a1 + 48);
          }
        }
        ExFreePoolWithTag(v42, 0x49434858u);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
    }
  }
  return (unsigned int)v6;
}
