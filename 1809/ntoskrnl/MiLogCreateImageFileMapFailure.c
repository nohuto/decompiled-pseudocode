/*
 * XREFs of MiLogCreateImageFileMapFailure @ 0x14084F884
 * Callers:
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiLogCreateImageFileMapFailure(__int64 a1, __int64 a2, int a3)
{
  int v4; // r9d
  __int64 v5; // r11
  __int64 v6; // rax
  TraceLoggingHProvider v7; // r10
  int v8; // [rsp+40h] [rbp-39h] BYREF
  int v9; // [rsp+44h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  _DWORD *v12; // [rsp+80h] [rbp+7h]
  int v13; // [rsp+88h] [rbp+Fh]
  int v14; // [rsp+8Ch] [rbp+13h]
  __int64 v15; // [rsp+90h] [rbp+17h]
  _DWORD v16[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v17; // [rsp+A0h] [rbp+27h]
  int v18; // [rsp+A8h] [rbp+2Fh]
  int v19; // [rsp+ACh] [rbp+33h]
  int *v20; // [rsp+B0h] [rbp+37h]
  int v21; // [rsp+B8h] [rbp+3Fh]
  int v22; // [rsp+BCh] [rbp+43h]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 0x400000000000uLL) )
    {
      v8 = a3;
      v9 = v4;
      TlgCreateSz(&pDesc, "SectionAlignmentIssue");
      v6 = *(_QWORD *)(v5 + 96);
      v14 = 0;
      v16[1] = 0;
      v19 = 0;
      v22 = 0;
      v15 = v6;
      v16[0] = *(unsigned __int16 *)(v5 + 88);
      v17 = &v8;
      v12 = v16;
      v20 = &v9;
      v13 = 2;
      v18 = 4;
      v21 = 4;
      TlgWriteEx(v7, &unk_14036ED3F, 0LL, 1u, 0LL, 0LL, 7u, &pData);
    }
  }
}
