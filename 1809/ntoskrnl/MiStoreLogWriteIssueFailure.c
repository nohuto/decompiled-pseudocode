/*
 * XREFs of MiStoreLogWriteIssueFailure @ 0x1402C42EC
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14014CCA0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiStoreLogWriteIssueFailure(int a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  ULONG64 v8; // r8
  ULONG v9; // r9d
  const struct _TlgProvider_t *v10; // r10
  __int64 *v11; // r11
  __int64 v12; // rax
  const GUID *v13; // [rsp+20h] [rbp-E0h]
  const GUID *v14; // [rsp+28h] [rbp-D8h]
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v23; // [rsp+90h] [rbp-70h]
  int v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+9Ch] [rbp-64h]
  __int64 *v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+ACh] [rbp-54h]
  __int64 *v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  int *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  ULONG *v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+DCh] [rbp-24h]
  int *v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  int *v41; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 2uLL) )
    {
      v12 = *v11;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v20 = v12;
      v21 = v11[1];
      v18 = a5;
      v19 = a6;
      v23 = &v15;
      v26 = &v20;
      v29 = &v21;
      v32 = &v16;
      v35 = &v17;
      v38 = &v18;
      v41 = &v19;
      v15 = a1;
      v16 = a3;
      v17 = v9;
      v24 = 4;
      v27 = 8;
      v30 = 8;
      v33 = 4;
      v36 = 4;
      v39 = 4;
      v42 = 4;
      TlgWriteEx(v10, &unk_14036F5C4, v8, v9, v13, v14, 9u, &pData);
    }
  }
}
