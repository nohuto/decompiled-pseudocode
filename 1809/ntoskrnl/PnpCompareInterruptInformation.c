/*
 * XREFs of PnpCompareInterruptInformation @ 0x14071E6A4
 * Callers:
 *     PnpGetDevicePropertyData @ 0x1405879C8 (PnpGetDevicePropertyData.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 */

char __fastcall PnpCompareInterruptInformation(__int64 a1, const void *a2, unsigned int a3)
{
  SIZE_T v3; // rax
  __int64 v4; // rdi
  _DWORD *v5; // rcx
  __int64 v6; // rsi
  int *v7; // rax
  int v8; // r9d
  int v9; // eax
  int v10; // r9d
  int v11; // eax
  int v13; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v14[3]; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-19h] BYREF
  int *v17; // [rsp+70h] [rbp-9h]
  int v18; // [rsp+78h] [rbp-1h]
  int v19; // [rsp+7Ch] [rbp+3h]
  int *v20; // [rsp+80h] [rbp+7h]
  int v21; // [rsp+88h] [rbp+Fh] BYREF
  int v22; // [rsp+8Ch] [rbp+13h]
  int *v23; // [rsp+90h] [rbp+17h]
  int v24; // [rsp+98h] [rbp+1Fh]
  int v25; // [rsp+9Ch] [rbp+23h]
  __int64 v26; // [rsp+A0h] [rbp+27h]
  int v27; // [rsp+A8h] [rbp+2Fh] BYREF
  int v28; // [rsp+ACh] [rbp+33h]

  v3 = *(_QWORD *)(a1 + 312);
  v4 = a3;
  v5 = *(_DWORD **)(v3 + 88);
  v6 = *(_QWORD *)(v3 + 40);
  if ( v5 )
  {
    if ( *v5 == a3 )
    {
      v3 = RtlCompareMemory(v5 + 1, a2, a3);
      if ( v3 != v4 && stru_140400BC8.LevelPlus1 > 5 )
      {
        LOBYTE(v3) = TlgKeywordOn(&stru_140400BC8, 0x400000000000uLL);
        if ( (_BYTE)v3 )
        {
          v14[0] = v10;
          v13 = v4;
          TlgCreateSz(&pDesc, "Compare Failed");
          v19 = 0;
          v22 = 0;
          v25 = 0;
          v28 = 0;
          v18 = 4;
          v21 = 4;
          v23 = &v27;
          v26 = *(_QWORD *)(v6 + 48);
          v11 = *(unsigned __int16 *)(v6 + 40);
          v17 = v14;
          v27 = v11;
          v20 = &v13;
          v24 = 2;
          LOBYTE(v3) = TlgWrite(&stru_140400BC8, &unk_14036E283, 0LL, 0LL, 7u, &pData);
        }
      }
    }
    else if ( stru_140400BC8.LevelPlus1 > 5 )
    {
      LOBYTE(v3) = TlgKeywordOn(&stru_140400BC8, 0x400000000000uLL);
      if ( (_BYTE)v3 )
      {
        v13 = v8;
        v14[0] = v4;
        TlgCreateSz(&pDesc, "Size Mismatch");
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v18 = 4;
        v21 = 4;
        v23 = &v27;
        v26 = *(_QWORD *)(v6 + 48);
        v9 = *(unsigned __int16 *)(v6 + 40);
        v17 = &v13;
        v27 = v9;
        v20 = v14;
        v24 = 2;
        LOBYTE(v3) = TlgWrite(&stru_140400BC8, &unk_14036E22C, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  else if ( stru_140400BC8.LevelPlus1 > 5 )
  {
    LOBYTE(v3) = TlgKeywordOn(&stru_140400BC8, 0x400000000000uLL);
    if ( (_BYTE)v3 )
    {
      TlgCreateSz(&pDesc, "Not Found");
      v7 = *(int **)(v6 + 48);
      v19 = 0;
      v22 = 0;
      v20 = v7;
      v21 = *(unsigned __int16 *)(v6 + 40);
      v17 = &v21;
      v18 = 2;
      LOBYTE(v3) = TlgWrite(&stru_140400BC8, &unk_14036E2DA, 0LL, 0LL, 5u, &pData);
    }
  }
  return v3;
}
