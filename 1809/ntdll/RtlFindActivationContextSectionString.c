/*
 * XREFs of RtlFindActivationContextSectionString @ 0x18000B990
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x18000B588 (sxsisol_SearchActCtxForDllName.c)
 *     LdrpQuerySxSMUIFile @ 0x1800584B4 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     RtlpFindNextActivationContextSection @ 0x18000ACC0 (RtlpFindNextActivationContextSection.c)
 *     RtlpLocateActivationContextSection @ 0x18000AE54 (RtlpLocateActivationContextSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x18000AFDC (RtlpFindActivationContextSection_CheckParameters.c)
 *     RtlpFindUnicodeStringInSection @ 0x18000BCF4 (RtlpFindUnicodeStringInSection.c)
 *     RtlAddRefActivationContext @ 0x18002E500 (RtlAddRefActivationContext.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x1800318B8 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlFindActivationContextSectionString(int a1, _QWORD *a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  struct _TEB *v5; // r10
  int v7; // r14d
  unsigned int v8; // ebx
  _PEB *ProcessEnvironmentBlock; // rax
  _DWORD *v11; // rsi
  __int64 result; // rax
  __int64 v13; // rbx
  _DWORD *v14; // rdi
  struct _TEB *v15; // rcx
  char *SystemDefaultActivationContextData; // rsi
  unsigned int v17; // r14d
  __int64 ActivationContext; // rdi
  _PEB *v19; // r13
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  void (__fastcall *v24)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *); // rax
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  _BYTE v26[4]; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-1Dh] BYREF
  __int64 v28; // [rsp+50h] [rbp-19h] BYREF
  _DWORD *v29; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-9h] BYREF
  int v31; // [rsp+64h] [rbp-5h]
  _QWORD *v32; // [rsp+68h] [rbp-1h]
  unsigned int v33; // [rsp+70h] [rbp+7h]
  unsigned int v34; // [rsp+74h] [rbp+Bh]
  int v35; // [rsp+78h] [rbp+Fh]
  int v36; // [rsp+80h] [rbp+17h] BYREF
  int v37; // [rsp+84h] [rbp+1Bh] BYREF
  struct _TEB *v38; // [rsp+88h] [rbp+1Fh]
  int v39; // [rsp+E0h] [rbp+77h]

  v39 = a4;
  v5 = NtCurrentTeb();
  v7 = a4;
  v8 = a3;
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return 3222601729LL;
  }
  v11 = a5;
  v37 = -1;
  v27 = 0;
  v36 = 0;
  result = RtlpFindActivationContextSection_CheckParameters(a1, (__int64)a2, a3, a4, a5);
  if ( (int)result >= 0 )
  {
    v33 = v8;
    v28 = 0LL;
    v30 = 32;
    v31 = a1;
    v35 = 0;
    v32 = a2;
    if ( (a1 & 0xFFFFFFF8) != 0 )
      return 3221225485LL;
    v34 = 0;
    result = RtlpFindNextActivationContextSection((__int64)&v30, (int)&v29, (__int64)&v27, &v28);
    v13 = v28;
    if ( (int)result >= 0 )
    {
      v14 = v29;
      while ( 1 )
      {
        if ( v27 < 0x2C || *v14 != 1682469715 )
        {
          DbgPrintEx(
            51LL,
            0LL,
            "RtlFindActivationContextSectionString() found section at %p (length %lu) which is not a string section\n",
            v14,
            v27);
          return 3222601731LL;
        }
        result = RtlpFindUnicodeStringInSection((_DWORD)v14, v27, v7, (_DWORD)v11, (__int64)&v37, (__int64)&v36);
        if ( (int)result >= 0 )
        {
          if ( ((v13 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
          {
            v24 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *))(v13 + 32);
            if ( v24 )
            {
              if ( (*(_BYTE *)(v13 + 48) & 8) == 0 || (*(_BYTE *)(v13 + 80) & 8) == 0 )
              {
                v26[0] = 0;
                v24(3LL, v13, *(_QWORD *)(v13 + 24), *(_QWORD *)(v13 + 40), 0LL, v26);
                *(_DWORD *)(v13 + 48) |= 8u;
                if ( v26[0] )
                  *(_DWORD *)(v13 + 80) |= 8u;
              }
            }
          }
          if ( !v11 )
            return 0LL;
          result = RtlpFindActivationContextSection_FillOutReturnedData(
                     a1,
                     (_DWORD)v11,
                     v13,
                     (unsigned int)&v30,
                     (__int64)v14,
                     v14[9],
                     v14[10],
                     v27);
          if ( (int)result >= 0 )
            return 0LL;
          return result;
        }
        if ( (_DWORD)result != -1072365560 )
          return result;
        v13 = 0LL;
        v28 = 0LL;
        if ( v30 < 0x20 || (v31 & 0xFFFFFFF8) != 0 )
        {
          result = 3221225485LL;
LABEL_19:
          if ( (_DWORD)result == -1072365567 )
            return 3222601736LL;
          return result;
        }
        v15 = NtCurrentTeb();
        SystemDefaultActivationContextData = 0LL;
        v17 = v34;
        ActivationContext = 0LL;
        v38 = v15;
        v19 = v15->ProcessEnvironmentBlock;
        while ( 1 )
        {
          if ( v17 )
          {
            if ( v17 != 1 )
            {
              if ( v17 != 2 )
                goto LABEL_16;
              goto LABEL_25;
            }
          }
          else
          {
            ActivationContextStackPointer = v15->ActivationContextStackPointer;
            if ( ActivationContextStackPointer && ActivationContextStackPointer->ActiveFrame )
            {
              ActivationContext = (__int64)ActivationContextStackPointer->ActiveFrame->ActivationContext;
              if ( ActivationContext )
              {
                if ( ActivationContext == -4 )
                {
                  SystemDefaultActivationContextData = (char *)v19->SystemDefaultActivationContextData;
                }
                else
                {
                  if ( ActivationContext == -3 )
                  {
                    SystemDefaultActivationContextData = "Actx ";
LABEL_60:
                    v17 = 1;
LABEL_27:
                    v34 = v17;
                    goto LABEL_17;
                  }
                  SystemDefaultActivationContextData = *(char **)(ActivationContext + 24);
                }
              }
              if ( SystemDefaultActivationContextData )
                goto LABEL_60;
            }
          }
          SystemDefaultActivationContextData = (char *)v19->ActivationContextData;
          ActivationContext = 0LL;
          if ( SystemDefaultActivationContextData )
          {
            v17 = 2;
            goto LABEL_27;
          }
LABEL_25:
          SystemDefaultActivationContextData = (char *)v19->SystemDefaultActivationContextData;
          ActivationContext = -4LL;
          if ( SystemDefaultActivationContextData )
          {
            v17 = 3;
            goto LABEL_27;
          }
LABEL_16:
          if ( v17 > 3 )
          {
            result = 3221225701LL;
            goto LABEL_19;
          }
LABEL_17:
          if ( !SystemDefaultActivationContextData )
          {
            result = 3222601729LL;
            goto LABEL_19;
          }
          result = RtlpLocateActivationContextSection(SystemDefaultActivationContextData, v32, v33, &v29, &v27);
          if ( (int)result >= 0 )
            break;
          if ( (_DWORD)result != -1072365567 || v17 == 3 )
            goto LABEL_33;
          v15 = v38;
        }
        v21 = 2;
        v22 = 0;
        if ( ActivationContext != -4 )
          v21 = 0;
        LOBYTE(v22) = ActivationContext == 0;
        v23 = v22 | v21;
        result = 0LL;
        v35 = v23;
        if ( ActivationContext != -4 )
          v13 = ActivationContext;
LABEL_33:
        if ( (int)result < 0 )
          goto LABEL_19;
        RtlAddRefActivationContext(v13, v20, 0LL);
        v14 = v29;
        v11 = a5;
        v7 = v39;
      }
    }
  }
  return result;
}
