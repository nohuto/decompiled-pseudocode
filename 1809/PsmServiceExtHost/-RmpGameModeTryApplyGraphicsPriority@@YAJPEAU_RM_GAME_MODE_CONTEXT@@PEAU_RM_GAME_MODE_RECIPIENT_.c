/*
 * XREFs of ?RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18005FAA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGameModeTryApplyGraphicsPriority(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  unsigned int v4; // r9d
  __int64 v5; // rdx
  __int64 v6; // r8
  const struct _TlgProvider_t *v7; // rcx
  int v8; // r10d
  int v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+34h] [rbp-35h] BYREF
  int v12; // [rsp+38h] [rbp-31h] BYREF
  int v13; // [rsp+3Ch] [rbp-2Dh] BYREF
  __int64 v14; // [rsp+40h] [rbp-29h] BYREF
  __int64 v15; // [rsp+48h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v17; // [rsp+70h] [rbp+7h]
  int v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+7Ch] [rbp+13h]
  int *v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]
  int *v23; // [rsp+90h] [rbp+27h]
  int v24; // [rsp+98h] [rbp+2Fh]
  int v25; // [rsp+9Ch] [rbp+33h]
  int *v26; // [rsp+A0h] [rbp+37h]
  int v27; // [rsp+A8h] [rbp+3Fh]
  int v28; // [rsp+ACh] [rbp+43h]

  if ( (*((_BYTE *)a1 + 149) & 1) != 0 )
  {
    v4 = -1073741637;
LABEL_6:
    v10 = v4;
    goto LABEL_8;
  }
  v15 = 0LL;
  v14 = 0LL;
  HIDWORD(v15) = *((_DWORD *)a2 + 32);
  LODWORD(v14) = 16;
  v10 = D3DKMTSetYieldPercentage(&v14);
  v4 = v10;
  if ( v10 >= 0 )
  {
    v15 = 0LL;
    v14 = 0LL;
    v15 = *(_QWORD *)((char *)a2 + 132);
    LODWORD(v14) = 16;
    v10 = D3DKMTSetMemoryBudgetTarget(&v14, v5, v6, (unsigned int)v10);
    if ( v10 < 0 )
    {
      v15 = 0LL;
      v14 = 0LL;
      HIDWORD(v15) = *((_DWORD *)a1 + 12);
      LODWORD(v15) = *((_DWORD *)a1 + 15);
      LODWORD(v14) = 16;
      D3DKMTSetYieldPercentage(&v14);
      v4 = v10;
      goto LABEL_8;
    }
    v4 = 0;
    goto LABEL_6;
  }
LABEL_8:
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v17 = &v10;
    v11 = *((_DWORD *)a2 + 32);
    v20 = &v11;
    v12 = *((_DWORD *)a2 + 33);
    v23 = &v12;
    v13 = *((_DWORD *)a2 + 34);
    v26 = &v13;
    v18 = v8;
    v21 = v8;
    v24 = v8;
    v27 = v8;
    TlgWrite(v7, &unk_180086BD7, 0LL, 0LL, 6u, &pData);
    return (unsigned int)v10;
  }
  return v4;
}
