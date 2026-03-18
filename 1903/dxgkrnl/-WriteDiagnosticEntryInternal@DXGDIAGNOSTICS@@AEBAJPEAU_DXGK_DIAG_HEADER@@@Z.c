/*
 * XREFs of ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0002E6C
 * Callers:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0002E18 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x1C0001064 (-ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z.c)
 *     ?IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00011E0 (-IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00030B4 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?CopyToBuffer@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@H@Z @ 0x1C00031E0 (-CopyToBuffer@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@H@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ @ 0x1C00410B8 (-ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::WriteDiagnosticEntryInternal(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // eax
  struct _DXGK_DIAG_HEADER *v7; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  int DiagnosticsInternal; // r13d
  unsigned int v12; // eax
  char *v13; // r14
  unsigned __int64 v14; // rax
  __int64 i; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // eax
  unsigned int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  unsigned int v23; // ebx
  int IsPersistentPacket; // eax
  int v25; // r8d
  unsigned int v26; // edx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  int v29; // [rsp+30h] [rbp-89h]
  char *v30; // [rsp+38h] [rbp-81h]
  __m128i v31[3]; // [rsp+40h] [rbp-79h] BYREF
  _DWORD v32[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v33; // [rsp+78h] [rbp-41h]
  __m128i v34; // [rsp+80h] [rbp-39h]
  __m128i v35; // [rsp+90h] [rbp-29h]
  _QWORD v36[7]; // [rsp+A0h] [rbp-19h] BYREF

  memset(v36, 0, sizeof(v36));
  if ( !a2 )
    return 2147483653LL;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)this + 4);
  if ( v4 >= v5 || v4 < 0x30 )
    return 2147483653LL;
  v6 = *((_DWORD *)this + 9);
  v7 = a2;
  v8 = *((_DWORD *)this + 8);
  v9 = v6 + v5;
  v10 = (unsigned __int64)this;
  if ( v8 <= v6 )
    v9 = *((_DWORD *)this + 9);
  DiagnosticsInternal = 0;
  v29 = 0;
  v12 = 0;
  LODWORD(v30) = v9;
  while ( *(_DWORD *)a2 != *(_DWORD *)v10 )
  {
    ++v12;
    v10 += 16LL;
    if ( v12 )
    {
      v13 = v30;
      goto LABEL_10;
    }
  }
  v13 = (char *)this + 16 * v12;
  v29 = 1;
  v10 = *((_QWORD *)v13 + 1);
  if ( v10
    && v4 == *(_DWORD *)(v10 + 4)
    && RtlCompareMemory((char *)a2 + 48, (const void *)(v10 + 48), v4 - 48) == v4 - 48 )
  {
    v7 = (struct _DXGK_DIAG_HEADER *)v36;
    v29 = 0;
    v36[1] = *((_QWORD *)a2 + 1);
    v22 = *((_QWORD *)v13 + 1);
    v36[0] = 0x380000001CLL;
    LODWORD(v36[6]) = *(_DWORD *)(v22 + 40);
  }
LABEL_10:
  v14 = *((unsigned int *)this + 4);
  for ( i = *((_DWORD *)v7 + 1) + v9 - v8; ; i = v9 + *((_DWORD *)v7 + 1) - v8 )
  {
    v16 = i + 48;
    if ( v16 < v14 )
      goto LABEL_12;
    memset(v31, 0, sizeof(v31));
    DiagnosticsInternal = DXGDIAGNOSTICS::ReadDiagnosticsInternal(this, -1, 0x30u, (unsigned __int8 *const)v31, 0LL);
    if ( DiagnosticsInternal < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning();
      v28[3] = v8;
      v28[4] = v7;
      v28[5] = *((unsigned int *)v7 + 1);
      WdLogEvent5_WdWarning(v28);
LABEL_12:
      if ( DiagnosticsInternal < 0 )
      {
        *((_QWORD *)this + 4) = 0LL;
        return (unsigned int)DiagnosticsInternal;
      }
      else
      {
        *((_DWORD *)v7 + 10) = (*((_DWORD *)this + 10))++;
        *((_DWORD *)v7 + 11) = WdLogGetEventOrder(v16, v10);
        v17 = *((_QWORD *)this + 6) + *((unsigned int *)this + 9);
        v18 = DXGDIAGNOSTICS::CopyToBuffer(this, v7, 0);
        if ( v29 )
        {
          if ( !v18 )
            *((_QWORD *)v13 + 1) = v17;
        }
        WriteDxgDiagnosticsEvent(a2);
        return 0LL;
      }
    }
    if ( *((_QWORD *)v7 + 1) - v31[0].m128i_i64[1] >= *((_QWORD *)this + 3)
      || (unsigned int)DXGDIAGNOSTICS::ExpandDiagnosticsBuffer(this) )
    {
      break;
    }
    v8 = *((_DWORD *)this + 8);
    v9 = *((_DWORD *)this + 9);
    v20 = *((_DWORD *)this + 4);
LABEL_19:
    v14 = v20;
  }
  if ( !(unsigned int)DXGDIAGNOSTICS::IsPersistentPacket(
                        this,
                        (struct _DXGK_DIAG_HEADER *)(*((_QWORD *)this + 6) + *((unsigned int *)this + 8))) )
  {
    v10 = (v21 + v31[0].m128i_i32[1]) % v20;
    v8 += v31[0].m128i_u32[1];
    *((_DWORD *)this + 8) = v10;
    goto LABEL_19;
  }
  v33 = v31[0].m128i_i64[1];
  v32[1] = v8 + v20 - v9;
  v32[0] = 27;
  v34 = v31[1];
  v35 = v31[2];
  v35.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v31[2], 8)) - 1;
  DXGDIAGNOSTICS::CopyToBuffer(this, (struct _DXGK_DIAG_HEADER *)v32, 1);
  v23 = *((_DWORD *)this + 8);
  while ( (int)DXGDIAGNOSTICS::ReadDiagnosticsInternal(this, -1, 0x30u, (unsigned __int8 *const)v31, 0LL) >= 0 )
  {
    IsPersistentPacket = DXGDIAGNOSTICS::IsPersistentPacket(
                           this,
                           (struct _DXGK_DIAG_HEADER *)(*((_QWORD *)this + 6) + *((unsigned int *)this + 8)));
    v26 = (unsigned int)(v25 + v31[0].m128i_i32[1]) % *((_DWORD *)this + 4);
    *((_DWORD *)this + 8) = v26;
    if ( !IsPersistentPacket )
      goto LABEL_33;
    v23 = v26;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdWarning();
  v27[3] = v8;
  v27[4] = v7;
  v27[5] = *((unsigned int *)v7 + 1);
  WdLogEvent5_WdWarning(v27);
LABEL_33:
  *((_DWORD *)this + 9) = v23;
  return 3221226029LL;
}
