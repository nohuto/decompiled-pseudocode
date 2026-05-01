/*
 * XREFs of ?RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006CA30
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGameModeTryApplyGraphicsPriority(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  unsigned int v4; // r9d
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  int v9; // eax
  const struct _TlgProvider_t *v10; // rcx
  int v11; // r10d
  int v13; // [rsp+30h] [rbp-39h] BYREF
  int v14; // [rsp+34h] [rbp-35h] BYREF
  int v15; // [rsp+38h] [rbp-31h] BYREF
  int v16; // [rsp+3Ch] [rbp-2Dh] BYREF
  int v17; // [rsp+40h] [rbp-29h] BYREF
  int v18; // [rsp+44h] [rbp-25h]
  int v19; // [rsp+48h] [rbp-21h]
  int v20; // [rsp+4Ch] [rbp-1Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v22; // [rsp+70h] [rbp+7h]
  int v23; // [rsp+78h] [rbp+Fh]
  int v24; // [rsp+7Ch] [rbp+13h]
  int *v25; // [rsp+80h] [rbp+17h]
  int v26; // [rsp+88h] [rbp+1Fh]
  int v27; // [rsp+8Ch] [rbp+23h]
  int *v28; // [rsp+90h] [rbp+27h]
  int v29; // [rsp+98h] [rbp+2Fh]
  int v30; // [rsp+9Ch] [rbp+33h]
  int *v31; // [rsp+A0h] [rbp+37h]
  int v32; // [rsp+A8h] [rbp+3Fh]
  int v33; // [rsp+ACh] [rbp+43h]

  if ( (*((_BYTE *)a1 + 149) & 1) != 0 )
  {
    v4 = -1073741637;
LABEL_6:
    v13 = v4;
    goto LABEL_8;
  }
  v5 = *((_DWORD *)a2 + 32);
  v18 = 0;
  v19 = 0;
  v20 = v5;
  v17 = 16;
  v13 = D3DKMTSetYieldPercentage(&v17);
  v4 = v13;
  if ( v13 >= 0 )
  {
    v8 = *((_DWORD *)a2 + 33);
    v18 = 0;
    v19 = v8;
    v20 = *((_DWORD *)a2 + 34);
    v17 = 16;
    v13 = D3DKMTSetMemoryBudgetTarget(&v17, v6, v7, (unsigned int)v13);
    if ( v13 < 0 )
    {
      v9 = *((_DWORD *)a1 + 12);
      v18 = 0;
      v20 = v9;
      v19 = *((_DWORD *)a1 + 15);
      v17 = 16;
      D3DKMTSetYieldPercentage(&v17);
      v4 = v13;
      goto LABEL_8;
    }
    v4 = 0;
    goto LABEL_6;
  }
LABEL_8:
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v22 = &v13;
    v14 = *((_DWORD *)a2 + 32);
    v25 = &v14;
    v15 = *((_DWORD *)a2 + 33);
    v28 = &v15;
    v16 = *((_DWORD *)a2 + 34);
    v31 = &v16;
    v23 = v11;
    v26 = v11;
    v29 = v11;
    v32 = v11;
    TlgWrite(v10, &unk_1800949B4, 0LL, 0LL, 6u, &pData);
    return (unsigned int)v13;
  }
  return v4;
}
