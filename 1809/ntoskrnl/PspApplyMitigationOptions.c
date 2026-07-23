/*
 * XREFs of PspApplyMitigationOptions @ 0x14064EF50
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ObReferenceProcessHandleTable @ 0x1405D2160 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleExceptions @ 0x1406C5E28 (ExEnableHandleExceptions.c)
 *     PspDecodeMitigationExecuteOptions @ 0x1406CC2BC (PspDecodeMitigationExecuteOptions.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406CE568 (PspSetNoChildProcessRestrictedPolicy.c)
 *     KeSetCheckStackExtentsProcess @ 0x140844618 (KeSetCheckStackExtentsProcess.c)
 */

unsigned __int64 __fastcall PspApplyMitigationOptions(__int64 a1, __int64 a2, __m128i *a3, __int128 *a4, int a5)
{
  __int64 v5; // rax
  __m128i v9; // xmm1
  __int128 v10; // xmm0
  unsigned __int64 v11; // rsi
  unsigned int v12; // r10d
  bool v13; // zf
  unsigned int v14; // r11d
  unsigned __int64 v15; // rsi
  __int64 v16; // r8
  int v17; // eax
  unsigned __int64 result; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __m128i v23; // [rsp+20h] [rbp-40h] BYREF
  __m128i v24; // [rsp+30h] [rbp-30h] BYREF
  __int128 v25; // [rsp+40h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 1064);
  v9 = *a3;
  v10 = *a4;
  v24 = *a3;
  v25 = v10;
  if ( v5 && *(_WORD *)(v5 + 8) == 332 )
  {
    v23 = v9;
    *(_BYTE *)(a1 + 447) = PspDecodeMitigationExecuteOptions(&v23);
  }
  v11 = v24.m128i_i64[0];
  v12 = 2;
  if ( (((unsigned __int64)v24.m128i_i64[0] >> 8) & 3) != 1 )
  {
    if ( (((unsigned __int64)v24.m128i_i64[0] >> 8) & 3) != 3 )
      goto LABEL_4;
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 8u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x10u);
  v11 = v24.m128i_i64[0];
LABEL_4:
  if ( (v11 & 0x30000) != 0 )
    v13 = (BYTE2(v11) & 3) == 2;
  else
    v13 = (a5 & 1) == 0;
  if ( v13 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x40u);
    v11 = v24.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2080) & 0x40) == 0 )
  {
    if ( ((v11 >> 20) & 3) == 0 )
    {
      if ( (a5 & 2) == 0 )
        goto LABEL_12;
      goto LABEL_11;
    }
    if ( ((v11 >> 20) & 3) == 1 )
    {
LABEL_11:
      _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x20u);
      v11 = v24.m128i_i64[0];
    }
  }
LABEL_12:
  if ( !a2 )
    goto LABEL_17;
  if ( ((v11 >> 24) & 3) == 0 )
  {
    if ( (a5 & 4) == 0 )
      goto LABEL_15;
LABEL_133:
    v20 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)a1);
    if ( v20 )
    {
      LOBYTE(v21) = 1;
      ExEnableHandleExceptions(v20, v21);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 760));
    }
    v12 = 2;
    goto LABEL_15;
  }
  if ( ((v11 >> 24) & 3) == 1 )
    goto LABEL_133;
LABEL_15:
  if ( (*(_DWORD *)(a2 + 2080) & 0x1000) != 0 )
  {
    v11 = v11 & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
    v24.m128i_i64[0] = v11;
  }
LABEL_17:
  if ( ((v11 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x3000u);
    v11 = v24.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2080) & 0x1000) == 0 && (((unsigned __int64)v25 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x2000u);
    v11 = v24.m128i_i64[0];
  }
  if ( ((v11 >> 36) & 3) != 1 )
  {
    if ( ((v11 >> 36) & 3) != 3 )
      goto LABEL_24;
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x200u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x100u);
  v11 = v24.m128i_i64[0];
LABEL_24:
  v14 = 1024;
  v24.m128i_i64[1] = _mm_srli_si128(_mm_load_si128(&v24), 8).m128i_u64[0];
  if ( (v24.m128i_i8[15] & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x400u);
    v11 = v24.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2080) & 0x100) != 0 )
  {
    v24.m128i_i64[1] = v24.m128i_i64[1] & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
    *((_QWORD *)&v25 + 1) = *((_QWORD *)&v25 + 1) & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
  }
  else if ( (((unsigned __int64)v25 >> 36) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x800u);
    v11 = v24.m128i_i64[0];
  }
  if ( (BYTE4(v11) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x80u);
    v11 = v24.m128i_i64[0];
  }
  if ( ((v11 >> 40) & 3) != 0 )
  {
    if ( ((v11 >> 40) & 3) != 1 )
    {
      if ( ((v11 >> 40) & 3) != 3 )
        goto LABEL_37;
      if ( PspDisableControlFlowGuardExportSuppression )
      {
        v24.m128i_i64[0] = v11 & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 2u);
        v24.m128i_i64[0] |= 0x30000000000uLL;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 1u);
      if ( (a5 & 0x10) == 0 )
        KeSetCheckStackExtentsProcess(a1, 1LL);
      goto LABEL_36;
    }
LABEL_34:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 1u);
    if ( (a5 & 0x10) == 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 5u);
LABEL_36:
    v11 = v24.m128i_i64[0];
    goto LABEL_37;
  }
  if ( (a5 & 8) != 0 )
  {
    v15 = v11 & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
    v24.m128i_i64[0] = v15;
    if ( (a5 & 0x20) != 0 && !PspDisableControlFlowGuardExportSuppression )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 2u);
      v24.m128i_i64[0] = v15 | 0x30000000000LL;
    }
    goto LABEL_34;
  }
LABEL_37:
  if ( (((unsigned __int64)v24.m128i_i64[1] >> 8) & 3) == 1 && (*(_DWORD *)(a1 + 2080) & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 4u);
    v11 = v24.m128i_i64[0];
  }
  if ( ((v11 >> 44) & 3) == 1 )
  {
    if ( *(_BYTE *)(a1 + 1736) < 8u )
      *(_BYTE *)(a1 + 1736) = 8;
    if ( *(_BYTE *)(a1 + 1737) < 8u )
      *(_BYTE *)(a1 + 1737) = 8;
  }
  else
  {
    if ( ((v11 >> 44) & 3) - 1 != v12 )
      goto LABEL_40;
    if ( *(_BYTE *)(a1 + 1736) < 6u )
      *(_BYTE *)(a1 + 1736) = 6;
    if ( *(_BYTE *)(a1 + 1737) < 6u )
      *(_BYTE *)(a1 + 1737) = 6;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x800000u);
  v11 = v24.m128i_i64[0];
LABEL_40:
  if ( (*(_DWORD *)(a1 + 2080) & 0x800000) == 0 )
  {
    if ( (((unsigned __int64)v25 >> 44) & 3) == 1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x1000000u);
    }
    else
    {
      if ( (((unsigned __int64)v25 >> 44) & 3) - 1 != v12 )
        goto LABEL_43;
      _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x2000000u);
    }
    v11 = v24.m128i_i64[0];
  }
LABEL_43:
  if ( (((unsigned __int8)v11 >> 4) & 3) == 0 && (*(_DWORD *)(a1 + 2080) & 1) != 0 )
  {
    v11 = v11 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    v24.m128i_i64[0] = v11;
  }
  if ( (((unsigned __int8)v11 >> 4) & 3) != 1 && (((unsigned __int64)v25 >> 4) & 3) == 1 )
  {
    v11 |= 0x30uLL;
    v24.m128i_i64[0] = v11;
  }
  if ( (a5 & 0x30000) == 0x10000 )
  {
    v11 = v11 & 0xFFFCFFFFFFFFFFFFuLL | 0x1000000000000LL;
LABEL_181:
    v24.m128i_i64[0] = v11;
    goto LABEL_49;
  }
  if ( (a5 & 0x30000) == 0x30000 && (BYTE6(v11) & 3) != 1 )
  {
    v11 |= 0x3000000000000uLL;
    goto LABEL_181;
  }
LABEL_49:
  if ( (HIWORD(v11) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x10000u);
LABEL_162:
    v11 = v24.m128i_i64[0];
    goto LABEL_51;
  }
  if ( (HIWORD(v11) & 3) - 1 == v12 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x20000u);
    goto LABEL_162;
  }
LABEL_51:
  if ( (*(_DWORD *)(a1 + 2080) & 0x30000) == 0 && (WORD3(v25) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x20000u);
    v11 = v24.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 2080) & 0x80000) != 0 )
  {
    v11 = v11 & 0xFFCFFFFFFFFFFFFFuLL | 0x10000000000000LL;
    v24.m128i_i64[0] = v11;
  }
  if ( ((v11 >> 52) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x80000u);
    v11 = v24.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2080) & 0x80000) == 0 && (((unsigned __int64)v25 >> 52) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x100000u);
    v11 = v24.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 2080) & 0x200000) != 0 )
  {
    v11 = v11 & 0xFCFFFFFFFFFFFFFFuLL | 0x100000000000000LL;
    v24.m128i_i64[0] = v11;
  }
  if ( (HIBYTE(v11) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x200000u);
    v11 = v24.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2080) & 0x200000) == 0 && (BYTE7(v25) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x400000u);
    v11 = v24.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 2080) & 0x40000) != 0 )
  {
    v11 = v11 & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
    v24.m128i_i64[0] = v11;
  }
  if ( ((v11 >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x40000u);
  v16 = 0x8000000LL;
  if ( a2 )
  {
    v17 = *(_DWORD *)(a2 + 2080);
    if ( (v17 & 0x4000000) != 0 )
    {
      v24.m128i_i64[1] = v24.m128i_i64[1] & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    }
    else if ( (v17 & 0x8000000) != 0 )
    {
      v24.m128i_i64[1] |= 0x30uLL;
    }
  }
  if ( (((unsigned __int64)v24.m128i_i64[1] >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0xC000000u);
  }
  else if ( (((unsigned __int64)v24.m128i_i64[1] >> 4) & 3) - 1 == v12 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x8000000u);
  }
  if ( (*(_DWORD *)(a1 + 2080) & 0xC000000) == 0 && ((*((_QWORD *)&v25 + 1) >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x8000000u);
  if ( (((unsigned __int64)v24.m128i_i64[1] >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2084), 1u);
  if ( (*(_DWORD *)(a1 + 2084) & 1) == 0 && ((*((_QWORD *)&v25 + 1) >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2084), v12);
  if ( (v24.m128i_i8[12] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2084), 4u);
  if ( (HIWORD(v24.m128i_i64[1]) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x40000000u);
  if ( (((unsigned __int64)v24.m128i_i64[1] >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2084), 0x2000u);
  if ( (*(_DWORD *)(a1 + 2084) & 4) == 0 && (BYTE12(v25) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2084), 8u);
  if ( (((unsigned __int64)v24.m128i_i64[1] >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2084), v14);
  if ( (v14 & *(_DWORD *)(a1 + 2084)) == 0 && ((*((_QWORD *)&v25 + 1) >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2084), 0x800u);
  if ( (((unsigned __int64)v24.m128i_i64[1] >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2084), 0x10u);
  if ( (*(_DWORD *)(a1 + 2084) & 0x10) == 0 && ((*((_QWORD *)&v25 + 1) >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2084), 0x20u);
  result = *(_QWORD *)(a1 + 1064);
  if ( result )
  {
    result = *(unsigned __int16 *)(result + 8);
    if ( (_WORD)result == 332 )
    {
      if ( (((unsigned __int64)v24.m128i_i64[1] >> 20) & 3) == 1 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 2084), 0x40u);
      result = *(unsigned int *)(a1 + 2084);
      if ( (result & 0x40) == 0 && ((*((_QWORD *)&v25 + 1) >> 20) & 3) == 1 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 2084), 0x80u);
      if ( (((unsigned __int64)v24.m128i_i64[1] >> 24) & 3) == 1 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 2084), 0x100u);
      if ( (*(_DWORD *)(a1 + 2084) & 0x100) == 0 && ((*((_QWORD *)&v25 + 1) >> 24) & 3) == 1 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 2084), 0x200u);
    }
  }
  v19 = (unsigned __int64)v24.m128i_i64[1] >> 36;
  if ( (((unsigned __int64)v24.m128i_i64[1] >> 36) & 3) == 1 )
  {
    v22 = 1LL;
    goto LABEL_186;
  }
  if ( (((unsigned __int64)v24.m128i_i64[1] >> 36) & 3) - 1 == v12 )
  {
    v22 = v12;
LABEL_186:
    result = PspSetNoChildProcessRestrictedPolicy(a1, v22, 0x8000000LL);
  }
  if ( (v19 & 3) != 1 && ((*((_QWORD *)&v25 + 1) >> 36) & 3) == 1 )
    result = PspSetNoChildProcessRestrictedPolicy(a1, 3LL, v16);
  if ( a2 )
  {
    result = *(unsigned int *)(a2 + 2080);
    if ( (result & 0x10000000) != 0 && (result & 0x20000000) == 0 )
    {
      result = v24.m128i_i64[1] & 0xFFFFCFFFFFFFFFFFuLL | 0x100000000000LL;
      v24.m128i_i64[1] = result;
    }
  }
  if ( (((unsigned __int64)v24.m128i_i64[1] >> 44) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x10000000u);
  }
  else if ( (((unsigned __int64)v24.m128i_i64[1] >> 44) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2080), 0x30000000u);
  }
  if ( (((unsigned __int64)v24.m128i_i64[1] >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2084), 0x4000u);
  *a3 = v24;
  return result;
}
