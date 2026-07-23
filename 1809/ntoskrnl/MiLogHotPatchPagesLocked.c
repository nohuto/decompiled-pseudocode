/*
 * XREFs of MiLogHotPatchPagesLocked @ 0x140857880
 * Callers:
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9B84 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     PsGetProcessId @ 0x1400A5650 (PsGetProcessId.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall MiLogHotPatchPagesLocked(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  const struct _TlgProvider_t *v6; // rbx
  unsigned int ProcessId; // eax
  ULONG64 v12; // r8
  ULONG v13; // r9d
  const GUID *v15; // [rsp+28h] [rbp-91h]
  const GUID *v16; // [rsp+30h] [rbp-89h]
  unsigned int v17; // [rsp+48h] [rbp-71h] BYREF
  int v18; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v19; // [rsp+50h] [rbp-69h] BYREF
  int v20; // [rsp+54h] [rbp-65h] BYREF
  __int64 v21; // [rsp+58h] [rbp-61h] BYREF
  __int64 v22; // [rsp+60h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-51h] BYREF
  unsigned int *v24; // [rsp+88h] [rbp-31h]
  int v25; // [rsp+90h] [rbp-29h]
  int v26; // [rsp+94h] [rbp-25h]
  __int64 *v27; // [rsp+98h] [rbp-21h]
  int v28; // [rsp+A0h] [rbp-19h]
  int v29; // [rsp+A4h] [rbp-15h]
  __int64 *v30; // [rsp+A8h] [rbp-11h]
  int v31; // [rsp+B0h] [rbp-9h]
  int v32; // [rsp+B4h] [rbp-5h]
  int *v33; // [rsp+B8h] [rbp-1h]
  int v34; // [rsp+C0h] [rbp+7h]
  int v35; // [rsp+C4h] [rbp+Bh]
  int *v36; // [rsp+C8h] [rbp+Fh]
  int v37; // [rsp+D0h] [rbp+17h]
  int v38; // [rsp+D4h] [rbp+1Bh]
  int *v39; // [rsp+D8h] [rbp+1Fh]
  int v40; // [rsp+E0h] [rbp+27h]
  int v41; // [rsp+E4h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+57h] BYREF

  v5 = &retaddr;
  v6 = hProvider;
  if ( hProvider )
  {
    if ( hProvider->LevelPlus1 > 5 )
    {
      LOBYTE(v5) = TlgKeywordOn(hProvider, 0x400000000020uLL);
      if ( (_BYTE)v5 )
      {
        ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v17 = ProcessId;
        v20 = a5;
        v24 = &v17;
        v27 = &v21;
        v30 = &v22;
        v33 = &v18;
        v36 = &v19;
        v39 = &v20;
        v21 = a1;
        v22 = a2;
        v18 = a3;
        v19 = a4;
        v25 = 4;
        v28 = 8;
        v31 = 8;
        v34 = 4;
        v37 = 4;
        v40 = 4;
        LOBYTE(v5) = TlgWriteEx(v6, &unk_14036F0C8, v12, v13, v15, v16, 8u, &pData);
      }
    }
  }
  return (char)v5;
}
