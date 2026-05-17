/*
 * XREFs of sub_18002D3B4 @ 0x18002D3B4
 * Callers:
 *     sub_18002DEC8 @ 0x18002DEC8 (sub_18002DEC8.c)
 *     sub_18002E4A8 @ 0x18002E4A8 (sub_18002E4A8.c)
 *     sub_180070758 @ 0x180070758 (sub_180070758.c)
 * Callees:
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     sub_180029EFC @ 0x180029EFC (sub_180029EFC.c)
 *     sub_18002D594 @ 0x18002D594 (sub_18002D594.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_18007E384 @ 0x18007E384 (sub_18007E384.c)
 *     sub_180082D20 @ 0x180082D20 (sub_180082D20.c)
 *     sub_18008BAD0 @ 0x18008BAD0 (sub_18008BAD0.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 *     ZwRaiseHardError @ 0x18009F2F0 (ZwRaiseHardError.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CBF80 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800CF490 @ 0x1800CF490 (sub_1800CF490.c)
 *     sub_1800CFA48 @ 0x1800CFA48 (sub_1800CFA48.c)
 */

__int64 __fastcall sub_18002D3B4(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // r12
  int v6; // eax
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // r14
  int i; // esi
  int v11; // eax
  int v12; // r9d
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v18; // r8d
  int v19; // r9d
  char *v20; // rcx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // [rsp+40h] [rbp-59h] BYREF
  __int64 v24; // [rsp+48h] [rbp-51h] BYREF
  __int64 v25; // [rsp+50h] [rbp-49h]
  _QWORD v26[2]; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v27[16]; // [rsp+68h] [rbp-31h] BYREF
  int v28; // [rsp+78h] [rbp-21h] BYREF
  __int64 v29; // [rsp+80h] [rbp-19h]
  __int64 v30; // [rsp+88h] [rbp-11h]
  int v31; // [rsp+90h] [rbp-9h]
  __int128 v32; // [rsp+98h] [rbp-1h]
  char v33; // [rsp+100h] [rbp+67h] BYREF
  __int64 v34; // [rsp+108h] [rbp+6Fh]
  char v35; // [rsp+110h] [rbp+77h] BYREF
  char v36; // [rsp+118h] [rbp+7Fh] BYREF

  v34 = a2;
  v3 = *(_QWORD *)(a1 + 56);
  v25 = *(_QWORD *)(a1 + 168);
  if ( !(unsigned __int8)sub_18002D594(a1, 0LL) )
  {
    v5 = v3 + 72;
    sub_1800255A8(*(_QWORD *)(v3 + 48), v3 + 72, 0x14A5u);
    v28 = 48;
    v29 = 0LL;
    v30 = a2;
    v6 = 64;
    if ( !byte_180165380 )
      v6 = 2112;
    v31 = v6;
    v32 = 0LL;
    v7 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(2112LL) )
      v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v8 = 2147353476LL;
    v9 = 2147353477LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v20 = (unsigned int)RtlGetCurrentServiceSessionId(v8)
          ? (char *)NtCurrentPeb()->HotpatchInformation + 555
          : (char *)2147353477;
      if ( (*v20 & 0x20) != 0 )
      {
        LOBYTE(v19) = -1;
        LOBYTE(v18) = -1;
        sub_1800CFA48(5253, -1, v18, v19, 0LL, 0LL);
      }
    }
    for ( i = 0; ; i = 1 )
    {
      v11 = ZwOpenFile(&v23, 1048609LL, &v28, v27, 5, 96);
      v13 = v11;
      if ( v11 >= 0 )
        break;
      if ( v11 == -1073741772 || v11 == -1073741766 )
      {
        v13 = -1073741515;
        break;
      }
      if ( v11 != -1073741790 )
        break;
      if ( i || !(unsigned __int8)sub_1800CF490(a1) )
        return (unsigned int)v13;
    }
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( byte_180165358 )
    {
      v13 = sub_180082D20(a1, v23);
      if ( v13 < 0 )
      {
        if ( byte_180165310 )
          goto LABEL_21;
      }
    }
    if ( (*(_DWORD *)(a1 + 32) & 0x1000000) != 0 && (NtCurrentPeb()->BitField & 0x10) == 0 )
    {
      LOBYTE(v12) = 8;
      v13 = sub_18008BAD0(v23, *(_QWORD *)(a1 + 56), (unsigned int)&v35, v12, (__int64)&v33);
      if ( v13 < 0 )
        goto LABEL_21;
    }
    v14 = ZwCreateSection(&v24, 13LL, 0LL);
    v13 = v14;
    if ( v14 < 0 )
    {
      if ( v14 == -1073740702 || (unsigned int)(v14 + 1073740674) <= 1 )
      {
        v13 = LdrAppxHandleIntegrityFailure((unsigned int)v14);
      }
      else if ( v14 != -1073741801 && v14 != -1073741670 && v14 != -1073741523 )
      {
        v26[0] = v5;
        v26[1] = v14;
        if ( (int)ZwRaiseHardError(3221225595LL, 2LL, 1LL, v26, 1, &v36) >= 0 && dword_1801664E0 != 3 )
          ++dword_180164F28;
      }
      sub_18007E384((unsigned int)v13, 5253LL, 0LL, v5);
      goto LABEL_21;
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v15) )
      v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v16) )
        v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
      {
        LOBYTE(v22) = -1;
        LOBYTE(v21) = -1;
        sub_1800CFA48(5254, -1, v21, v22, 0LL, 0LL);
      }
    }
    if ( !dword_180165428 && (*(_DWORD *)(a1 + 32) & 0x100) == 0 )
    {
      if ( !qword_1801664F0 )
        goto LABEL_19;
      v13 = ((__int64 (__fastcall *)(__int64, __int64))(__ROR8__(qword_180165028, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
              v23,
              v34);
      if ( v13 == -1073741275 )
        v13 = 0;
    }
    if ( v13 < 0 )
    {
LABEL_20:
      ZwClose(v24);
LABEL_21:
      ZwClose(v23);
      return (unsigned int)v13;
    }
LABEL_19:
    v13 = sub_180029EFC(a1);
    if ( v25 && v13 >= 0 )
    {
      *(_QWORD *)(a1 + 176) = v23;
      *(_QWORD *)(a1 + 24) = v24;
      return (unsigned int)v13;
    }
    goto LABEL_20;
  }
  return 3221226029LL;
}
