/*
 * XREFs of ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18023473C
 * Callers:
 *     ?s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180235900 (-s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@.c)
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180233904 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x180235520 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 */

void __fastcall CInteractionContextWrapper::InteractionContextCallback(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  bool v2; // zf
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  char v8; // r9
  int v9; // r9d
  int v10; // eax
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  CInteractionContextWrapper *v13; // [rsp+38h] [rbp-C8h] BYREF
  CInteractionContextWrapper *v14; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+70h] [rbp-90h] BYREF
  __int128 v18; // [rsp+80h] [rbp-80h] BYREF
  __int128 v19; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  CInteractionContextWrapper **v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  char *v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  char *v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  char *v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  char *v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  __int128 *v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  char *v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  char *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  __int128 *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  int *v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  int *v41; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v43; // [rsp+170h] [rbp+70h] BYREF
  CInteractionContextWrapper **v44; // [rsp+190h] [rbp+90h]
  __int64 v45; // [rsp+198h] [rbp+98h]
  int *v46; // [rsp+1A0h] [rbp+A0h]
  __int64 v47; // [rsp+1A8h] [rbp+A8h]
  int *v48; // [rsp+1B0h] [rbp+B0h]
  __int64 v49; // [rsp+1B8h] [rbp+B8h]
  CInteractionContextWrapper **v50; // [rsp+1C0h] [rbp+C0h]
  __int64 v51; // [rsp+1C8h] [rbp+C8h]

  *((_BYTE *)this + 88) |= 1u;
  v2 = *((_DWORD *)this + 56) == 5;
  v4 = *((_OWORD *)a2 + 1);
  v15 = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 2);
  v16 = v4;
  v6 = *((_OWORD *)a2 + 3);
  v17 = v5;
  v7 = *((_OWORD *)a2 + 4);
  v18 = v6;
  v19 = v7;
  if ( v2 && (_DWORD)v15 == 1 )
  {
    if ( !*((_BYTE *)this + 329) )
    {
      DWORD1(v16) = 0;
      DWORD2(v17) = 0;
      HIDWORD(v18) = 0;
    }
    if ( !*((_BYTE *)this + 330) )
    {
      DWORD2(v16) = 0;
      HIDWORD(v17) = 0;
      LODWORD(v19) = 0;
    }
    if ( !*((_BYTE *)this + 331) )
    {
      HIDWORD(v16) = 0;
      LODWORD(v17) = 0;
      *(_QWORD *)&v18 = 0LL;
      DWORD1(v19) = 0;
    }
  }
  CInteractionContextWrapper::_UpdateInteractionOutput(
    this,
    (const struct INTERACTION_CONTEXT_OUTPUT *)&v15,
    (CInteractionContextWrapper *)((char *)this + 32));
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 112LL))(this) )
    CInteractionContextWrapper::AddBufferedOutput(
      (char **)this,
      *((_DWORD *)this + 55),
      *((_DWORD *)this + 57),
      *((_QWORD *)this + 29),
      (const struct INTERACTION_CONTEXT_OUTPUT *)&v15);
  v8 = v15;
  if ( (_DWORD)v15 == 1 )
  {
    *((_BYTE *)this + 92) = 1;
    *((_BYTE *)this + 156) = v8;
    if ( dword_18033A240 <= 4u )
      return;
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
    {
      v13 = this;
      v21 = &v13;
      v23 = (char *)&v16 + 4;
      v25 = (char *)&v16 + 8;
      v27 = (char *)&v16 + 12;
      v29 = (char *)&v18 + 12;
      v31 = &v19;
      v33 = (char *)&v17 + 8;
      v35 = (char *)&v17 + 12;
      v37 = &v18;
      v11 = HIDWORD(v19);
      v39 = &v11;
      v12 = *((_DWORD *)this + 13);
      v41 = &v12;
      v22 = 8LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DECE6, 0LL, 0LL, 0xDu, &pData);
    }
  }
  if ( dword_18033A240 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
    {
      v14 = this;
      v44 = &v14;
      v46 = &v12;
      v11 = DWORD1(v15);
      v48 = &v11;
      v10 = *((_BYTE *)this + 88) & 1;
      v45 = 8LL;
      LODWORD(v13) = v10;
      v50 = &v13;
      v12 = v9;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DEC60, 0LL, 0LL, 6u, &v43);
    }
  }
}
