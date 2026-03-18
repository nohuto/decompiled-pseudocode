/*
 * XREFs of AccessBaseField @ 0x1C00201A0
 * Callers:
 *     WriteFieldObj @ 0x1C001F6A0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C001FB60 (ReadFieldObj.c)
 * Callees:
 *     CheckSystemIOAddressValidity @ 0x1C0020550 (CheckSystemIOAddressValidity.c)
 *     WriteSystemMem @ 0x1C0020714 (WriteSystemMem.c)
 *     ReadSystemMem @ 0x1C0020984 (ReadSystemMem.c)
 *     PushFrame @ 0x1C0020A84 (PushFrame.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     ReadSystemIO @ 0x1C0067AD8 (ReadSystemIO.c)
 */

__int64 __fastcall AccessBaseField(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4, unsigned int a5)
{
  unsigned int v5; // r10d
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  unsigned int v10; // edi
  unsigned int v11; // esi
  unsigned __int64 v12; // r14
  unsigned int v13; // ecx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // r10
  char v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 (__fastcall *v26)(_QWORD, __int64, unsigned __int64, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(__int64), __int64); // r10
  unsigned int v27; // eax
  unsigned __int32 v28; // eax
  __int64 v29; // rcx
  int (__fastcall *v30)(_QWORD, unsigned __int64, __int64 *, _QWORD, __int64 *); // rax
  __int64 v31; // [rsp+50h] [rbp-58h] BYREF
  __int64 v32[10]; // [rsp+58h] [rbp-50h] BYREF
  bool v34; // [rsp+B8h] [rbp+10h]
  char v35; // [rsp+B8h] [rbp+10h]
  __int64 v36; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+20h] BYREF

  v5 = a3[3];
  v6 = 0LL;
  v7 = *(_QWORD *)(a2 + 96);
  v10 = 0;
  v11 = 1;
  v12 = *(_QWORD *)v7 + *a3;
  if ( (v5 & 0xF) - 1 <= 3 )
    v11 = 1 << ((v5 & 0xF) - 1);
  v13 = a3[2];
  v14 = 0LL;
  v15 = 0LL;
  if ( v13 < 0x20 )
    v14 = 1LL << v13;
  v16 = (v14 - 1) << a3[1];
  v36 = v16;
  v17 = ~v16;
  if ( 8 * v11 < 0x20 )
    v15 = 1LL << (8 * (unsigned __int8)v11);
  v37 = v15 - 1;
  v34 = (v5 & 0x60) == 0 && (v17 & (v15 - 1)) != 0;
  v18 = v16 & *a4;
  *a4 = v18;
  LODWORD(v19) = v18;
  v20 = a5;
  if ( !(_BYTE)a5 && (a3[3] & 0x60) == 0x20 )
  {
    LODWORD(v19) = v18 | v17;
    *a4 = v18 | v17;
  }
  v21 = *(unsigned __int8 *)(v7 + 12);
  if ( !*(_BYTE *)(v7 + 12) )
  {
    if ( !v20 )
    {
      if ( v34 )
        *a4 |= ReadSystemMem((void *)v12, v11);
      WriteSystemMem((void *)v12, v11);
      return v10;
    }
    LODWORD(v37) = 0;
    v31 = 0LL;
    if ( v11 > 8 )
    {
      v24 = -1LL;
      goto LABEL_23;
    }
    if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
      || (v30 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, __int64 *))(PmHalDispatchTable + 144)) == 0LL
      || v30(0LL, v12, &v31, v11, &v37) < 0 )
    {
      if ( v11 != 1LL )
        v6 = v12 % v11;
      if ( !v6 )
      {
        switch ( v11 )
        {
          case 1u:
            v23 = *(unsigned __int8 *)v12;
            break;
          case 2u:
            v23 = *(unsigned __int16 *)v12;
            break;
          case 4u:
            v23 = *(unsigned int *)v12;
            break;
          case 8u:
            v23 = *(_QWORD *)v12;
            break;
          default:
            v23 = -1LL;
            break;
        }
        goto LABEL_22;
      }
      memmove(&v31, (const void *)v12, v11);
    }
    v23 = v31;
LABEL_22:
    v24 = v16 & v23;
LABEL_23:
    *a4 = v24;
    return v10;
  }
  if ( (_DWORD)v21 == 1 )
  {
    if ( !v20 )
    {
      if ( v34 )
      {
        *a4 = (unsigned int)ReadSystemIO((unsigned int)v12, v11, (unsigned int)~(_DWORD)v16) | (unsigned __int64)*a4;
        v19 = *a4;
      }
      a5 = v19;
      if ( (unsigned __int8)CheckSystemIOAddressValidity(0LL, (unsigned int)v12, v11, &a5) )
      {
        switch ( v11 )
        {
          case 1u:
            __outbyte(v12, a5);
            break;
          case 2u:
            __outword(v12, a5);
            break;
          case 4u:
            __outdword(v12, a5);
            break;
        }
      }
      return v10;
    }
    LODWORD(v36) = 0;
    LOBYTE(v21) = 1;
    if ( (unsigned __int8)CheckSystemIOAddressValidity(v21, (unsigned int)v12, v11, &v36) )
    {
      switch ( v11 )
      {
        case 1u:
          LOBYTE(v28) = __inbyte(v12);
          v28 = (unsigned __int8)v28;
LABEL_47:
          *a4 = v28 & (unsigned int)v16;
          return v10;
        case 2u:
          LOWORD(v28) = __inword(v12);
          v28 = (unsigned __int16)v28;
          goto LABEL_47;
        case 4u:
          v28 = __indword(v12);
          goto LABEL_47;
      }
    }
    v28 = v36;
    goto LABEL_47;
  }
  v22 = gpRSAccessHead;
  if ( !gpRSAccessHead )
    goto LABEL_58;
  while ( *(_DWORD *)(v22 + 8) != (_DWORD)v21 )
  {
    v22 = *(_QWORD *)v22;
    if ( !v22 )
      goto LABEL_58;
  }
  if ( v22
    && (v26 = *(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v22 + 16)) != 0LL )
  {
    if ( v20 )
    {
      v35 = 0;
      if ( (gDebugger & 0x100) != 0 )
      {
        _m_prefetchw(&gDebugger);
        v35 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
        v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v22 + 16))(
                0LL,
                a2 + 120,
                v12,
                v11,
                a4,
                *(_QWORD *)(v22 + 24),
                RestartCtxtCallback,
                a1 + 328);
      }
      else
      {
        v27 = v26(0LL, a2 + 120, v12, v11, a4, *(_QWORD *)(v22 + 24), RestartCtxtCallback, a1 + 328);
      }
      v10 = v27;
      if ( (v35 & 0x10) != 0 )
        _InterlockedOr(&gDebugger, 0x10u);
      if ( v27 == 259 )
      {
        return 32772;
      }
      else if ( v27 )
      {
        LogError(3222536216LL);
        AcpiDiagTraceAmlError(a1, 3222536216LL);
        PrintDebugMessage(2, *(unsigned __int8 *)(v7 + 12), v10, 0, 0LL);
        return (unsigned int)-1072431080;
      }
    }
    else
    {
      v10 = PushFrame(a1, 1094931031, 96, (unsigned int)WriteCookAccess, (__int64)v32);
      if ( !v10 )
      {
        v29 = v32[0];
        *(_QWORD *)(v32[0] + 32) = a2;
        *(_QWORD *)(v29 + 40) = v22;
        *(_QWORD *)(v29 + 48) = v12;
        *(_DWORD *)(v29 + 56) = v11;
        *(_QWORD *)(v29 + 64) = *a4;
        *(_QWORD *)(v29 + 72) = v36;
        *(_BYTE *)(v29 + 88) = v34;
      }
    }
  }
  else
  {
LABEL_58:
    v10 = -1072431088;
    LogError(3222536208LL);
    AcpiDiagTraceAmlError(a1, 3222536208LL);
    PrintDebugMessage(1, *(unsigned __int8 *)(v7 + 12), 0, 0, 0LL);
  }
  return v10;
}
