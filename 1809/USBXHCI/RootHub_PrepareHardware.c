/*
 * XREFs of RootHub_PrepareHardware @ 0x1C0060A08
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C005C350 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsSecureDevice @ 0x1C000CF68 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00121D8 (WPP_RECORDER_SF_dddd.c)
 *     Register_FindFirstExtendedCapability @ 0x1C001CD80 (Register_FindFirstExtendedCapability.c)
 *     Register_FindNextExtendedCapability @ 0x1C001CDEC (Register_FindNextExtendedCapability.c)
 *     XilRegister_GetOperationalRegisters @ 0x1C001D2E4 (XilRegister_GetOperationalRegisters.c)
 *     XilRegister_ReadBufferUlong @ 0x1C001D2F0 (XilRegister_ReadBufferUlong.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     RootHub_DumpPortData @ 0x1C001DD08 (RootHub_DumpPortData.c)
 *     RootHub_InitializeReadModifyWriteLock @ 0x1C001E7D4 (RootHub_InitializeReadModifyWriteLock.c)
 *     WPP_RECORDER_SF_cccc @ 0x1C00232CC (WPP_RECORDER_SF_cccc.c)
 */

__int64 __fastcall RootHub_PrepareHardware(__int64 a1)
{
  unsigned int v2; // r12d
  __int64 v3; // r13
  __int64 v4; // rcx
  PVOID PoolWithTag; // rax
  int v6; // edi
  unsigned int j; // edx
  __int64 v8; // rcx
  _DWORD *FirstExtendedCapability; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r12d
  int v13; // edi
  int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdi
  int Ulong; // eax
  char v20; // dl
  unsigned int v21; // eax
  unsigned int k; // edi
  int v23; // eax
  __int64 v24; // rcx
  char IsSecureDevice; // al
  int v26; // ecx
  __int64 v27; // r9
  __int64 v28; // r13
  int v29; // eax
  __int64 v30; // rcx
  char v31; // al
  int v32; // ecx
  __int64 v33; // r9
  __int64 v34; // rcx
  char v35; // al
  int v36; // ecx
  unsigned __int16 v37; // r9
  unsigned __int16 v38; // r9
  _QWORD *v39; // rcx
  unsigned int i; // r14d
  int v42; // [rsp+28h] [rbp-89h]
  char v43; // [rsp+58h] [rbp-59h]
  unsigned int v44; // [rsp+5Ch] [rbp-55h]
  unsigned __int64 v45; // [rsp+60h] [rbp-51h]
  __int64 v46; // [rsp+60h] [rbp-51h]
  _QWORD v47[5]; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v48; // [rsp+90h] [rbp-21h]
  unsigned int v49; // [rsp+94h] [rbp-1Dh]
  _QWORD v50[7]; // [rsp+98h] [rbp-19h] BYREF
  unsigned int v51; // [rsp+D0h] [rbp+1Fh] BYREF
  unsigned int v52; // [rsp+D4h] [rbp+23h]
  unsigned int v53; // [rsp+D8h] [rbp+27h]

  v2 = 0;
  v43 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
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
                  80LL * *(unsigned int *)(a1 + 16),
                  0x49434858u);
  *(_QWORD *)(a1 + 48) = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xBu,
      0x14u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
    v6 = -1073741670;
LABEL_60:
    v39 = *(_QWORD **)(a1 + 48);
    if ( v39 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
      {
        v39 = *(_QWORD **)(a1 + 48);
        if ( v39[10 * i + 8] )
        {
          (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1664))(WPP_MAIN_CB.Dpc.ProcessorHistory);
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 80LL * i + 64) = 0LL;
          v39 = *(_QWORD **)(a1 + 48);
        }
        if ( v39[10 * i + 9] )
        {
          (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1664))(WPP_MAIN_CB.Dpc.ProcessorHistory);
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 80LL * i + 72) = 0LL;
          v39 = *(_QWORD **)(a1 + 48);
        }
      }
      ExFreePoolWithTag(v39, 0x49434858u);
      *(_QWORD *)(a1 + 48) = 0LL;
    }
    return (unsigned int)v6;
  }
  memset(PoolWithTag, 0, 80LL * *(unsigned int *)(a1 + 16));
  for ( j = 0; j < *(_DWORD *)(a1 + 16); *(_DWORD *)(v8 + 8) = j )
  {
    v8 = *(_QWORD *)(a1 + 48) + 80LL * j++;
    *(_QWORD *)v8 = a1;
  }
  FirstExtendedCapability = (_DWORD *)Register_FindFirstExtendedCapability(v3, 2u);
  v45 = (unsigned __int64)FirstExtendedCapability;
  if ( !FirstExtendedCapability )
  {
LABEL_58:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xBu,
      0x1Au,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
LABEL_59:
    v6 = -1073741811;
    goto LABEL_60;
  }
  do
  {
    XilRegister_ReadBufferUlong(v3, FirstExtendedCapability, &v51, 4u);
    if ( v52 == 541217621 )
    {
      v12 = HIBYTE(v51);
      if ( HIBYTE(v51) - 2 <= 1u )
      {
        v13 = BYTE1(v53);
        v49 = BYTE1(v53);
        v48 = HIWORD(v51);
        WPP_RECORDER_SF_dddd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          0xBu,
          0x15u,
          (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
        v14 = (unsigned __int8)v53;
        if ( (_BYTE)v53 && v13 && v13 + (unsigned int)(unsigned __int8)v53 - 1 <= *(_DWORD *)(a1 + 16) )
        {
          v15 = 0;
          v43 = 1;
          v44 = 0;
          v16 = v53;
          while ( 1 )
          {
            v17 = v14 - 1 + v15;
            v18 = *(_QWORD *)(a1 + 48) + 80 * v17;
            if ( *(_BYTE *)(v18 + 13) )
              break;
            if ( v12 == 2 )
              ++*(_WORD *)(a1 + 20);
            else
              ++*(_WORD *)(a1 + 22);
            *(_BYTE *)(v18 + 12) = v48;
            *(_BYTE *)(v18 + 15) = (v16 & 0x20000) != 0;
            *(_BYTE *)(v18 + 13) = v12;
            *(_BYTE *)(v18 + 16) = (v16 & 0x40000) != 0;
            Ulong = XilRegister_ReadUlong(v3, (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * (unsigned int)v17));
            v16 = v53;
            v20 = 0;
            *(_BYTE *)(v18 + 19) = 0;
            if ( (v16 & 0x80000) != 0 )
            {
              *(_BYTE *)(v18 + 19) = 1;
              v20 = 1;
            }
            if ( (v16 & 0x100000) != 0 )
              *(_BYTE *)(v18 + 19) = v20 | 2;
            if ( (Ulong & 0x40000000) == 0 )
              *(_BYTE *)(v18 + 17) = 1;
            v14 = (unsigned __int8)v53;
            *(_BYTE *)(v18 + 14) = (v16 >> 25) & 7;
            *(_WORD *)(v18 + 46) = v16 >> 28;
            *(_QWORD *)(v18 + 48) = v45 + 16;
            v15 = v44 + 1;
            v44 = v15;
            if ( v15 >= v49 )
              goto LABEL_28;
          }
          v37 = 23;
        }
        else
        {
          v37 = 22;
        }
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          0xBu,
          v37,
          (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
        goto LABEL_59;
      }
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0xBu,
        0x18u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
LABEL_28:
      v2 = 0;
    }
    else
    {
      WPP_RECORDER_SF_cccc(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), v52, v10, v11, v42);
    }
    FirstExtendedCapability = (_DWORD *)Register_FindNextExtendedCapability(v3, v45);
    v45 = (unsigned __int64)FirstExtendedCapability;
  }
  while ( FirstExtendedCapability );
  if ( !v43 )
    goto LABEL_58;
  v21 = *(_DWORD *)(a1 + 16);
  for ( k = 0; k < v21; ++k )
  {
    RootHub_DumpPortData((unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * k), *(_QWORD *)(a1 + 8));
    v21 = *(_DWORD *)(a1 + 16);
  }
  v6 = 0;
  if ( v21 )
  {
    while ( 1 )
    {
      v23 = RootHub_InitializeReadModifyWriteLock((_QWORD *)a1, v2);
      v6 = v23;
      if ( v23 < 0 )
        break;
      memset(v47, 0, sizeof(v47));
      LODWORD(v47[2]) = 0;
      LODWORD(v47[3]) = 0;
      LODWORD(v47[0]) = 40;
      v47[1] = RootHub_WdfEvtTimerPortOperationPendingTimerDpc;
      BYTE4(v47[2]) = 1;
      LOBYTE(v47[4]) = 1;
      memset(v50, 0, sizeof(v50));
      v24 = *(_QWORD *)(a1 + 8);
      v50[6] = off_1C004F3D8;
      v50[4] = *(_QWORD *)a1;
      LODWORD(v50[0]) = 56;
      v50[3] = 0x100000001LL;
      IsSecureDevice = Controller_IsSecureDevice(v24);
      v26 = 1;
      if ( IsSecureDevice )
        v26 = 2;
      v27 = *(_QWORD *)(a1 + 48) + 64LL;
      LODWORD(v50[3]) = v26;
      v28 = 80LL * v2;
      v29 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023 + 2544))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              v47,
              v50,
              v28 + v27);
      v6 = v29;
      if ( v29 < 0 )
      {
        v38 = 28;
        goto LABEL_54;
      }
      *(_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   *(_QWORD *)(*(_QWORD *)(a1 + 48) + v28 + 64),
                   off_1C004F3D8) = v28 + *(_QWORD *)(a1 + 48);
      memset(v47, 0, sizeof(v47));
      LODWORD(v47[2]) = 0;
      LODWORD(v47[3]) = 0;
      LODWORD(v47[0]) = 40;
      v47[1] = RootHub_WdfEvtTimerPortOperationPendingTimerDpc;
      BYTE4(v47[2]) = 1;
      LOBYTE(v47[4]) = 1;
      memset(v50, 0, sizeof(v50));
      v30 = *(_QWORD *)(a1 + 8);
      v50[6] = off_1C004F3D8;
      v50[4] = *(_QWORD *)a1;
      LODWORD(v50[0]) = 56;
      v50[3] = 0x100000001LL;
      v31 = Controller_IsSecureDevice(v30);
      v32 = 1;
      if ( v31 )
        v32 = 2;
      v33 = *(_QWORD *)(a1 + 48) + 72LL;
      LODWORD(v50[3]) = v32;
      v29 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023 + 2544))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              v47,
              v50,
              v28 + v33);
      v6 = v29;
      if ( v29 < 0 )
      {
        v38 = 29;
        goto LABEL_54;
      }
      *(_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   *(_QWORD *)(*(_QWORD *)(a1 + 48) + v28 + 72),
                   off_1C004F3D8) = v28 + *(_QWORD *)(a1 + 48);
      v46 = *(_QWORD *)(a1 + 48);
      if ( *(_BYTE *)(v46 + v28 + 13) == 2 )
      {
        memset(v47, 0, sizeof(v47));
        LODWORD(v47[2]) = 0;
        LODWORD(v47[3]) = 0;
        LODWORD(v47[0]) = 40;
        v47[1] = RootHub_WdfEvtTimer20PortResumeCompleteDpc;
        BYTE4(v47[2]) = 1;
        LOBYTE(v47[4]) = 1;
        memset(v50, 0, sizeof(v50));
        v34 = *(_QWORD *)(a1 + 8);
        v50[6] = off_1C004F3D8;
        v50[4] = *(_QWORD *)a1;
        LODWORD(v50[0]) = 56;
        v50[3] = 0x100000001LL;
        v35 = Controller_IsSecureDevice(v34);
        v36 = 1;
        if ( v35 )
          v36 = 2;
        LODWORD(v50[3]) = v36;
        v29 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023 + 2544))(
                WPP_MAIN_CB.Dpc.ProcessorHistory,
                v47,
                v50,
                v28 + v46 + 32);
        v6 = v29;
        if ( v29 < 0 )
        {
          v38 = 30;
LABEL_54:
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            0xBu,
            v38,
            (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
            v29);
          goto LABEL_56;
        }
        *(_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     *(_QWORD *)(*(_QWORD *)(a1 + 48) + v28 + 32),
                     off_1C004F3D8) = v28 + *(_QWORD *)(a1 + 48);
      }
      if ( ++v2 >= *(_DWORD *)(a1 + 16) )
        goto LABEL_56;
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xBu,
      0x1Bu,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v23,
      v2);
LABEL_56:
    if ( v6 < 0 )
      goto LABEL_60;
  }
  return (unsigned int)v6;
}
