/*
 * XREFs of RtlFindActivationContextSectionString @ 0x180026BF0
 * Callers:
 *     sub_1800267DC @ 0x1800267DC (sub_1800267DC.c)
 *     sub_1800772D8 @ 0x1800772D8 (sub_1800772D8.c)
 * Callees:
 *     sub_180026E54 @ 0x180026E54 (sub_180026E54.c)
 *     sub_18002715C @ 0x18002715C (sub_18002715C.c)
 *     sub_1800274B0 @ 0x1800274B0 (sub_1800274B0.c)
 *     RtlAddRefActivationContext @ 0x180029A80 (RtlAddRefActivationContext.c)
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     sub_1800776BC @ 0x1800776BC (sub_1800776BC.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlFindActivationContextSectionString(int a1, __int64 a2, int a3, int a4, __int64 a5)
{
  struct _TEB *v5; // r10
  struct _PEB *ProcessEnvironmentBlock; // rax
  __int64 result; // rax
  unsigned int v12; // edi
  __int64 v13; // rbx
  _DWORD *v14; // rsi
  void (__fastcall *v15)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *); // rax
  _BYTE v16[4]; // [rsp+48h] [rbp-11h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-Dh] BYREF
  _DWORD *v18; // [rsp+50h] [rbp-9h] BYREF
  int v19; // [rsp+58h] [rbp-1h] BYREF
  int v20; // [rsp+5Ch] [rbp+3h] BYREF
  __int64 v21; // [rsp+60h] [rbp+7h] BYREF
  __int64 v22; // [rsp+68h] [rbp+Fh] BYREF
  unsigned int v23; // [rsp+70h] [rbp+17h] BYREF
  int v24; // [rsp+74h] [rbp+1Bh]
  __int64 v25; // [rsp+78h] [rbp+1Fh]
  int v26; // [rsp+80h] [rbp+27h]
  int v27; // [rsp+84h] [rbp+2Bh]
  int v28; // [rsp+88h] [rbp+2Fh]

  v5 = NtCurrentTeb();
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return 3222601729LL;
  }
  v19 = 0;
  v20 = -1;
  v17 = 0;
  result = sub_1800274B0(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
  {
    v28 = 0;
    v26 = a3;
    v23 = 32;
    v24 = a1;
    v25 = a2;
    v21 = 0LL;
    if ( (a1 & 0xFFFFFFF8) != 0 )
    {
      return 3221225485LL;
    }
    else
    {
      v27 = 0;
      result = sub_180026E54(&v23, &v18, &v17, &v21);
      v12 = v17;
      v13 = v21;
      if ( (int)result >= 0 )
      {
        while ( 1 )
        {
          v14 = v18;
          if ( v12 < 0x2C || *v18 != 1682469715 )
          {
            DbgPrintEx(
              51LL,
              0LL,
              "RtlFindActivationContextSectionString() found section at %p (length %lu) which is not a string section\n",
              v18,
              v12);
            return 3222601731LL;
          }
          result = sub_18002715C((_DWORD)v18, v12, a4, a5, (__int64)&v20, (__int64)&v19);
          if ( (int)result >= 0 )
            break;
          if ( (_DWORD)result != -1072365560 )
            return result;
          v22 = 0LL;
          if ( v23 < 0x20 || (v24 & 0xFFFFFFF8) != 0 )
          {
            result = 3221225485LL;
LABEL_12:
            if ( (_DWORD)result == -1072365567 )
              return 3222601736LL;
            return result;
          }
          result = sub_180026E54(&v23, &v18, &v17, &v22);
          if ( (int)result < 0 )
            goto LABEL_12;
          v13 = v22;
          RtlAddRefActivationContext(v22);
          v12 = v17;
        }
        if ( ((v13 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
        {
          v15 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *))(v13 + 32);
          if ( v15 )
          {
            if ( (*(_BYTE *)(v13 + 48) & 8) == 0 || (*(_BYTE *)(v13 + 80) & 8) == 0 )
            {
              v16[0] = 0;
              v15(3LL, v13, *(_QWORD *)(v13 + 24), *(_QWORD *)(v13 + 40), 0LL, v16);
              *(_DWORD *)(v13 + 48) |= 8u;
              if ( v16[0] )
                *(_DWORD *)(v13 + 80) |= 8u;
            }
          }
        }
        if ( !a5 )
          return 0LL;
        result = sub_1800776BC(a1, a5, v13, (unsigned int)&v23, (__int64)v14, v14[9], v14[10], v12);
        if ( (int)result >= 0 )
          return 0LL;
      }
    }
  }
  return result;
}
