/*
 * XREFs of MiStoreLogWriteIssueRetry @ 0x1402C4434
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14014CCA0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiStoreLogWriteIssueRetry(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  ULONG64 v7; // r8
  ULONG v8; // r9d
  const struct _TlgProvider_t *v9; // r10
  __int64 *v10; // r11
  __int64 v11; // rax
  const GUID *v12; // [rsp+20h] [rbp-81h]
  const GUID *v13; // [rsp+28h] [rbp-79h]
  int v14; // [rsp+40h] [rbp-61h] BYREF
  int v15; // [rsp+44h] [rbp-5Dh] BYREF
  ULONG v16; // [rsp+48h] [rbp-59h] BYREF
  int v17; // [rsp+4Ch] [rbp-55h] BYREF
  __int64 v18; // [rsp+50h] [rbp-51h] BYREF
  __int64 v19; // [rsp+58h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-41h] BYREF
  __int64 *v21; // [rsp+80h] [rbp-21h]
  int v22; // [rsp+88h] [rbp-19h]
  int v23; // [rsp+8Ch] [rbp-15h]
  __int64 *v24; // [rsp+90h] [rbp-11h]
  int v25; // [rsp+98h] [rbp-9h]
  int v26; // [rsp+9Ch] [rbp-5h]
  int *v27; // [rsp+A0h] [rbp-1h]
  int v28; // [rsp+A8h] [rbp+7h]
  int v29; // [rsp+ACh] [rbp+Bh]
  int *v30; // [rsp+B0h] [rbp+Fh]
  int v31; // [rsp+B8h] [rbp+17h]
  int v32; // [rsp+BCh] [rbp+1Bh]
  ULONG *v33; // [rsp+C0h] [rbp+1Fh]
  int v34; // [rsp+C8h] [rbp+27h]
  int v35; // [rsp+CCh] [rbp+2Bh]
  int *v36; // [rsp+D0h] [rbp+2Fh]
  int v37; // [rsp+D8h] [rbp+37h]
  int v38; // [rsp+DCh] [rbp+3Bh]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 2uLL) )
    {
      v11 = *v10;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v18 = v11;
      v19 = v10[1];
      v17 = a5;
      v21 = &v18;
      v24 = &v19;
      v27 = &v14;
      v30 = &v15;
      v33 = &v16;
      v36 = &v17;
      v14 = a2;
      v15 = a3;
      v16 = v8;
      v22 = 8;
      v25 = 8;
      v28 = 4;
      v31 = 4;
      v34 = 4;
      v37 = 4;
      TlgWriteEx(v9, &unk_14036F6CA, v7, v8, v12, v13, 8u, &pData);
    }
  }
}
