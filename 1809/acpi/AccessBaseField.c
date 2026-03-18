/*
 * XREFs of AccessBaseField @ 0x1C00019E0
 * Callers:
 *     ReadFieldObj @ 0x1C00013A0 (ReadFieldObj.c)
 *     WriteFieldObj @ 0x1C0023F50 (WriteFieldObj.c)
 * Callees:
 *     PushFrame @ 0x1C00227C0 (PushFrame.c)
 *     WriteSystemMem @ 0x1C002454C (WriteSystemMem.c)
 *     ReadSystemMem @ 0x1C0024690 (ReadSystemMem.c)
 *     ReadSystemIO @ 0x1C0026D38 (ReadSystemIO.c)
 *     CheckSystemIOAddressValidity @ 0x1C0026DA0 (CheckSystemIOAddressValidity.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(_QWORD, __int64, unsigned __int64, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(), __int64); // r10
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v32; // rcx
  int (__fastcall *v33)(_QWORD, unsigned __int64, __int64 *, _QWORD, __int64 *); // rax
  __int64 v34[11]; // [rsp+50h] [rbp-58h] BYREF
  bool v36; // [rsp+B8h] [rbp+10h]
  char v37; // [rsp+B8h] [rbp+10h]
  __int64 v38; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v39; // [rsp+C8h] [rbp+20h] BYREF

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
  v38 = v16;
  v17 = ~v16;
  if ( 8 * v11 < 0x20 )
    v15 = 1LL << (8 * (unsigned __int8)v11);
  v18 = v15 - 1;
  v39 = v18;
  v36 = (v5 & 0x60) == 0 && (v17 & v18) != 0;
  v19 = v16 & *a4;
  *a4 = v19;
  LODWORD(v20) = v19;
  v21 = (unsigned __int8)a5;
  if ( !(_BYTE)a5 && (a3[3] & 0x60) == 0x20 )
  {
    LODWORD(v20) = v19 | v17;
    *a4 = v19 | v17;
  }
  v22 = *(unsigned __int8 *)(v7 + 12);
  if ( !*(_BYTE *)(v7 + 12) )
  {
    if ( !(_BYTE)v21 )
    {
      if ( v36 )
        *a4 |= ReadSystemMem((void *)v12, v11);
      WriteSystemMem((void *)v12, v11);
      return v10;
    }
    LODWORD(v38) = 0;
    v39 = 0LL;
    if ( v11 > 8 )
    {
      v30 = -1LL;
      goto LABEL_33;
    }
    if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
      || (v33 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, __int64 *))(PmHalDispatchTable + 144)) == 0LL
      || v33(0LL, v12, &v39, v11, &v38) < 0 )
    {
      if ( v11 != 1LL )
        v6 = v12 % v11;
      if ( !v6 )
      {
        switch ( v11 )
        {
          case 1u:
            v29 = *(unsigned __int8 *)v12;
            break;
          case 2u:
            v29 = *(unsigned __int16 *)v12;
            break;
          case 4u:
            v29 = *(unsigned int *)v12;
            break;
          case 8u:
            v29 = *(_QWORD *)v12;
            break;
          default:
            v29 = -1LL;
            break;
        }
        goto LABEL_32;
      }
      memmove(&v39, (const void *)v12, v11);
    }
    v29 = v39;
LABEL_32:
    v30 = v16 & v29;
LABEL_33:
    *a4 = v30;
    return v10;
  }
  if ( v22 == 1 )
  {
    if ( (_BYTE)v21 )
    {
      *a4 = (unsigned int)ReadSystemIO((unsigned int)v12, v11, (unsigned int)v16);
    }
    else
    {
      if ( v36 )
      {
        *a4 = (unsigned int)ReadSystemIO((unsigned int)v12, v11, (unsigned int)~(_DWORD)v16) | (unsigned __int64)*a4;
        v20 = *a4;
      }
      a5 = v20;
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
    }
  }
  else
  {
    v23 = gpRSAccessHead;
    if ( !gpRSAccessHead )
      goto LABEL_56;
    while ( *(_DWORD *)(v23 + 8) != v22 )
    {
      v23 = *(_QWORD *)v23;
      if ( !v23 )
        goto LABEL_56;
    }
    if ( v23
      && (v24 = *(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(), __int64))(v23 + 16)) != 0LL )
    {
      if ( (_BYTE)v21 )
      {
        v37 = 0;
        if ( (gDebugger & 0x100) != 0 )
        {
          _m_prefetchw(&gDebugger);
          v37 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
          v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(), __int64))(v23 + 16))(
                  0LL,
                  a2 + 120,
                  v12,
                  v11,
                  a4,
                  *(_QWORD *)(v23 + 24),
                  RestartCtxtCallback,
                  a1 + 328);
        }
        else
        {
          v25 = v24(0LL, a2 + 120, v12, v11, a4, *(_QWORD *)(v23 + 24), RestartCtxtCallback, a1 + 328);
        }
        v10 = v25;
        if ( (v37 & 0x10) != 0 )
          _InterlockedOr(&gDebugger, 0x10u);
        if ( v25 == 259 )
        {
          return 32772;
        }
        else if ( v25 )
        {
          LogError(3222536216LL, v26, v27, v28);
          AcpiDiagTraceAmlError(a1, 3222536216LL);
          PrintDebugMessage(2, *(unsigned __int8 *)(v7 + 12), v10, 0, 0LL);
          return (unsigned int)-1072431080;
        }
      }
      else
      {
        v10 = PushFrame(a1, 1094931031, 96, (unsigned int)WriteCookAccess, (__int64)v34);
        if ( !v10 )
        {
          v32 = v34[0];
          *(_QWORD *)(v34[0] + 32) = a2;
          *(_QWORD *)(v32 + 40) = v23;
          *(_QWORD *)(v32 + 48) = v12;
          *(_DWORD *)(v32 + 56) = v11;
          *(_QWORD *)(v32 + 64) = *a4;
          *(_QWORD *)(v32 + 72) = v38;
          *(_BYTE *)(v32 + 88) = v36;
        }
      }
    }
    else
    {
LABEL_56:
      v10 = -1072431088;
      LogError(3222536208LL, v18, a3, v21);
      AcpiDiagTraceAmlError(a1, 3222536208LL);
      PrintDebugMessage(1, *(unsigned __int8 *)(v7 + 12), 0, 0, 0LL);
    }
  }
  return v10;
}
