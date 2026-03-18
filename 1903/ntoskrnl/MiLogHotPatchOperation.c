/*
 * XREFs of MiLogHotPatchOperation @ 0x14088F93C
 * Callers:
 *     MiHotPatchImage @ 0x14088E7A4 (MiHotPatchImage.c)
 * Callees:
 *     PsGetProcessId @ 0x1400045E0 (PsGetProcessId.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgCreateSz @ 0x1400ED314 (_TlgCreateSz.c)
 *     MiFillLogProcessInfo @ 0x140129F58 (MiFillLogProcessInfo.c)
 *     _TlgWriteEx @ 0x14013C9DC (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

char __fastcall MiLogHotPatchOperation(__int64 a1, int a2, int a3, int a4, int *a5, unsigned __int16 *a6, int a7)
{
  _UNKNOWN **v7; // rax
  const struct _TlgProvider_t *v12; // rbx
  struct _KPROCESS *v13; // r10
  int v14; // eax
  ULONG64 v15; // r8
  ULONG v16; // r9d
  const GUID *v18; // [rsp+28h] [rbp-E0h]
  const GUID *v19; // [rsp+30h] [rbp-D8h]
  unsigned int ProcessId; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  int v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  int v24; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+5Ch] [rbp-ACh] BYREF
  int v26; // [rsp+60h] [rbp-A8h] BYREF
  int v27; // [rsp+64h] [rbp-A4h] BYREF
  int v28; // [rsp+68h] [rbp-A0h] BYREF
  int v29; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v30; // [rsp+70h] [rbp-98h] BYREF
  int v31; // [rsp+74h] [rbp-94h] BYREF
  __int64 v32; // [rsp+78h] [rbp-90h] BYREF
  LPCSTR psz; // [rsp+80h] [rbp-88h] BYREF
  __int64 v34; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *p_ProcessId; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp-40h] BYREF
  int *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  __int64 *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  int *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  int *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  int *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  int *v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  int *v51; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  _DWORD *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  __int64 v55; // [rsp+158h] [rbp+50h]
  _DWORD v56[2]; // [rsp+160h] [rbp+58h] BYREF
  int *v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]
  int *v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  int *v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  _DWORD *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  __int64 v65; // [rsp+1A8h] [rbp+A0h]
  _DWORD v66[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  int *v67; // [rsp+1B8h] [rbp+B0h]
  __int64 v68; // [rsp+1C0h] [rbp+B8h]
  int *v69; // [rsp+1C8h] [rbp+C0h]
  __int64 v70; // [rsp+1D0h] [rbp+C8h]
  _UNKNOWN *retaddr; // [rsp+200h] [rbp+F8h] BYREF

  v7 = &retaddr;
  if ( hProvider )
  {
    LOBYTE(v7) = MiFillLogProcessInfo((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[6], &v32, &psz);
    v12 = hProvider;
    if ( hProvider->LevelPlus1 > 5 )
    {
      LOBYTE(v7) = TlgKeywordOn(hProvider, 0x400000000020uLL);
      if ( (_BYTE)v7 )
      {
        ProcessId = (unsigned int)PsGetProcessId(v13);
        v21 = a7;
        v34 = *(_QWORD *)(a1 + 24);
        v24 = *(_DWORD *)(a1 + 88);
        v25 = *(_DWORD *)(a1 + 80);
        v26 = *(_DWORD *)(a1 + 84);
        v28 = *a5;
        v29 = a5[1];
        v30 = *(_DWORD *)(a1 + 32);
        v14 = (*(_DWORD *)(a1 + 92) >> 1) & 1;
        v22 = a2;
        v31 = v14;
        p_ProcessId = &ProcessId;
        v23 = a3;
        v27 = a4;
        v37 = 4LL;
        TlgCreateSz(&pDesc, psz);
        v40 = 4LL;
        v41 = &v34;
        v39 = &v21;
        v43 = &v22;
        v45 = &v23;
        v47 = &v24;
        v49 = &v25;
        v51 = &v26;
        v53 = v56;
        v55 = *(_QWORD *)(a1 + 72);
        v56[0] = *(unsigned __int16 *)(a1 + 64);
        v57 = &v27;
        v59 = &v28;
        v61 = &v29;
        v63 = v66;
        v65 = *((_QWORD *)a6 + 1);
        v66[0] = *a6;
        v42 = 8LL;
        v44 = 4LL;
        v46 = 4LL;
        v48 = 4LL;
        v50 = 4LL;
        v52 = 4LL;
        v54 = 2LL;
        v56[1] = 0;
        v58 = 4LL;
        v60 = 4LL;
        v62 = 4LL;
        v64 = 2LL;
        v66[1] = 0;
        v67 = &v30;
        v69 = &v31;
        v68 = 4LL;
        v70 = 4LL;
        LOBYTE(v7) = TlgWriteEx(v12, &unk_14038DFF4, v15, v16, v18, v19, 0x14u, &pData);
      }
    }
  }
  return (char)v7;
}
