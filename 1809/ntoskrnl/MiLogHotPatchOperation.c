/*
 * XREFs of MiLogHotPatchOperation @ 0x1408575F8
 * Callers:
 *     MiHotPatchImage @ 0x140856590 (MiHotPatchImage.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     PsGetProcessId @ 0x1400A5650 (PsGetProcessId.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall MiLogHotPatchOperation(__int64 a1, int a2, int a3, int a4, int *a5, unsigned __int16 *a6, int a7)
{
  _UNKNOWN **v7; // rax
  const struct _TlgProvider_t *v8; // rbx
  int v13; // eax
  ULONG64 v14; // r8
  ULONG v15; // r9d
  const GUID *v17; // [rsp+28h] [rbp-E0h]
  const GUID *v18; // [rsp+30h] [rbp-D8h]
  unsigned int ProcessId; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  int v25; // [rsp+60h] [rbp-A8h] BYREF
  int v26; // [rsp+64h] [rbp-A4h] BYREF
  int v27; // [rsp+68h] [rbp-A0h] BYREF
  int v28; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v29; // [rsp+70h] [rbp-98h] BYREF
  int v30; // [rsp+74h] [rbp-94h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  unsigned int *p_ProcessId; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  int *v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  __int64 *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  int *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  int *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  int *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  int *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  int *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  _DWORD *v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  __int64 v51; // [rsp+138h] [rbp+30h]
  _DWORD v52[2]; // [rsp+140h] [rbp+38h] BYREF
  int *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  int *v55; // [rsp+158h] [rbp+50h]
  __int64 v56; // [rsp+160h] [rbp+58h]
  int *v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]
  _DWORD *v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  __int64 v61; // [rsp+188h] [rbp+80h]
  _DWORD v62[2]; // [rsp+190h] [rbp+88h] BYREF
  int *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  int *v65; // [rsp+1A8h] [rbp+A0h]
  __int64 v66; // [rsp+1B0h] [rbp+A8h]
  _UNKNOWN *retaddr; // [rsp+1E0h] [rbp+D8h] BYREF

  v7 = &retaddr;
  v8 = hProvider;
  if ( hProvider )
  {
    if ( hProvider->LevelPlus1 > 5 )
    {
      LOBYTE(v7) = TlgKeywordOn(hProvider, 0x400000000020uLL);
      if ( (_BYTE)v7 )
      {
        ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
        v20 = a7;
        v31 = *(_QWORD *)(a1 + 24);
        v23 = *(_DWORD *)(a1 + 88);
        v24 = *(_DWORD *)(a1 + 80);
        v25 = *(_DWORD *)(a1 + 84);
        v27 = *a5;
        v28 = a5[1];
        v29 = *(_DWORD *)(a1 + 32);
        v13 = (*(_DWORD *)(a1 + 92) >> 1) & 1;
        v21 = a2;
        v30 = v13;
        p_ProcessId = &ProcessId;
        v35 = &v20;
        v37 = &v31;
        v39 = &v21;
        v41 = &v22;
        v43 = &v23;
        v45 = &v24;
        v47 = &v25;
        v49 = v52;
        v51 = *(_QWORD *)(a1 + 72);
        v52[0] = *(unsigned __int16 *)(a1 + 64);
        v53 = &v26;
        v55 = &v27;
        v57 = &v28;
        v59 = v62;
        v61 = *((_QWORD *)a6 + 1);
        v62[0] = *a6;
        v63 = &v29;
        v22 = a3;
        v26 = a4;
        v34 = 4LL;
        v36 = 4LL;
        v38 = 8LL;
        v40 = 4LL;
        v42 = 4LL;
        v44 = 4LL;
        v46 = 4LL;
        v48 = 4LL;
        v50 = 2LL;
        v52[1] = 0;
        v54 = 4LL;
        v56 = 4LL;
        v58 = 4LL;
        v60 = 2LL;
        v62[1] = 0;
        v64 = 4LL;
        v66 = 4LL;
        v65 = &v30;
        LOBYTE(v7) = TlgWriteEx(v8, &unk_14036F217, v14, v15, v17, v18, 0x13u, &pData);
      }
    }
  }
  return (char)v7;
}
