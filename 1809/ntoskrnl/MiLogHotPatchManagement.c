/*
 * XREFs of MiLogHotPatchManagement @ 0x140857204
 * Callers:
 *     NtManageHotPatch @ 0x1408596B0 (NtManageHotPatch.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgCreateSid @ 0x140012F98 (_TlgCreateSid.c)
 *     PsGetProcessId @ 0x1400A5650 (PsGetProcessId.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiLogHotPatchManagement(int a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  const struct _TlgProvider_t *v4; // rbx
  ULONG64 v8; // r8
  ULONG v9; // r9d
  ULONG64 v10; // r8
  ULONG v11; // r9d
  ULONG64 v12; // r8
  ULONG v13; // r9d
  ULONG64 v14; // r8
  ULONG v15; // r9d
  const GUID *v16; // [rsp+20h] [rbp-E0h]
  const GUID *v17; // [rsp+28h] [rbp-D8h]
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int ProcessId; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+64h] [rbp-9Ch] BYREF
  int v28; // [rsp+68h] [rbp-98h] BYREF
  int v29; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v30; // [rsp+70h] [rbp-90h] BYREF
  int v31; // [rsp+74h] [rbp-8Ch] BYREF
  int v32; // [rsp+78h] [rbp-88h] BYREF
  int v33; // [rsp+7Ch] [rbp-84h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  int *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  int *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  int *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  _DWORD *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  __int64 v45; // [rsp+F0h] [rbp-10h]
  _DWORD v46[2]; // [rsp+F8h] [rbp-8h] BYREF
  EVENT_DATA_DESCRIPTOR v47; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *p_ProcessId; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  int *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  int *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  int *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  _DWORD *v56; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+168h] [rbp+68h]
  __int64 v58; // [rsp+170h] [rbp+70h]
  _DWORD v59[2]; // [rsp+178h] [rbp+78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+180h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR v61; // [rsp+190h] [rbp+90h] BYREF
  unsigned int *v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1B8h] [rbp+B8h]
  int *v64; // [rsp+1C0h] [rbp+C0h]
  __int64 v65; // [rsp+1C8h] [rbp+C8h]
  int *v66; // [rsp+1D0h] [rbp+D0h]
  __int64 v67; // [rsp+1D8h] [rbp+D8h]
  int *v68; // [rsp+1E0h] [rbp+E0h]
  __int64 v69; // [rsp+1E8h] [rbp+E8h]
  EVENT_DATA_DESCRIPTOR v70; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int *v71; // [rsp+210h] [rbp+110h]
  __int64 v72; // [rsp+218h] [rbp+118h]
  int *v73; // [rsp+220h] [rbp+120h]
  __int64 v74; // [rsp+228h] [rbp+128h]
  int *v75; // [rsp+230h] [rbp+130h]
  __int64 v76; // [rsp+238h] [rbp+138h]
  int *v77; // [rsp+240h] [rbp+140h]
  __int64 v78; // [rsp+248h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+250h] [rbp+150h] BYREF

  v4 = hProvider;
  if ( hProvider )
  {
    if ( a1 )
    {
      if ( a1 == 3 )
      {
        if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 0x20uLL) )
        {
          ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
          v24 = *(_DWORD *)(a2 + 92);
          v25 = *(_DWORD *)(a2 + 96);
          p_ProcessId = &ProcessId;
          v50 = &v23;
          v52 = &v24;
          v54 = &v25;
          v56 = v59;
          v58 = *((_QWORD *)a3 + 1);
          v59[0] = *a3;
          v23 = a4;
          v49 = 4LL;
          v51 = 4LL;
          v53 = 4LL;
          v55 = 4LL;
          v57 = 2LL;
          v59[1] = 0;
          TlgCreateSid(&pDesc, (const SID *)(a2 + 24));
          TlgWriteEx(v4, &unk_14036F332, v10, v11, v16, v17, 9u, &v47);
        }
      }
      else if ( a1 == 1 )
      {
        if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 0x20uLL) )
        {
          v26 = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
          v28 = *(_DWORD *)(a2 + 4);
          v29 = *(_DWORD *)(a2 + 8);
          v62 = &v26;
          v64 = &v27;
          v66 = &v28;
          v68 = &v29;
          v27 = a4;
          v63 = 4LL;
          v65 = 4LL;
          v67 = 4LL;
          v69 = 4LL;
          TlgWriteEx(v4, &unk_14036F1C5, v12, v13, v16, v17, 6u, &v61);
        }
      }
      else if ( a1 == 4 && hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 0x20uLL) )
      {
        v30 = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
        v32 = *(_DWORD *)(a2 + 4);
        v33 = *(_DWORD *)(a2 + 8);
        v71 = &v30;
        v73 = &v31;
        v75 = &v32;
        v77 = &v33;
        v31 = a4;
        v72 = 4LL;
        v74 = 4LL;
        v76 = 4LL;
        v78 = 4LL;
        TlgCreateSid(&v79, (const SID *)(a2 + 12));
        TlgWriteEx(v4, &unk_14036F163, v14, v15, v16, v17, 7u, &v70);
      }
    }
    else if ( hProvider->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(hProvider, 0x20uLL) )
      {
        v18 = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
        v20 = *(_DWORD *)(a2 + 92);
        v21 = *(_DWORD *)(a2 + 96);
        v35 = &v18;
        v37 = &v19;
        v39 = &v20;
        v41 = &v21;
        v43 = v46;
        v45 = *((_QWORD *)a3 + 1);
        v46[0] = *a3;
        v19 = a4;
        v36 = 4LL;
        v38 = 4LL;
        v40 = 4LL;
        v42 = 4LL;
        v44 = 2LL;
        v46[1] = 0;
        TlgWriteEx(v4, &unk_14036F39D, v8, v9, v16, v17, 8u, &pData);
      }
    }
  }
}
