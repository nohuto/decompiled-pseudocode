/*
 * XREFs of ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801F40A4
 * Callers:
 *     ?s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801F5240 (-s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801F3228 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x1801F4E30 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 */

void __fastcall CInteractionContextWrapper::InteractionContextCallback(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  int v4; // eax
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  CInteractionContextWrapper *v7; // [rsp+38h] [rbp-C8h] BYREF
  CInteractionContextWrapper *v8; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  CInteractionContextWrapper **v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  char *v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  char *v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  char *v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  char *v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  char *v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  char *v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  char *v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  char *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  int *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  int *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v32; // [rsp+120h] [rbp+20h] BYREF
  CInteractionContextWrapper **v33; // [rsp+140h] [rbp+40h]
  __int64 v34; // [rsp+148h] [rbp+48h]
  int *v35; // [rsp+150h] [rbp+50h]
  __int64 v36; // [rsp+158h] [rbp+58h]
  int *v37; // [rsp+160h] [rbp+60h]
  __int64 v38; // [rsp+168h] [rbp+68h]
  CInteractionContextWrapper **v39; // [rsp+170h] [rbp+70h]
  __int64 v40; // [rsp+178h] [rbp+78h]

  *((_BYTE *)this + 88) |= 1u;
  CInteractionContextWrapper::_UpdateInteractionOutput(this, a2, (CInteractionContextWrapper *)((char *)this + 32));
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 88LL))(this) )
    CInteractionContextWrapper::AddBufferedOutput(
      (char **)this,
      *((_DWORD *)this + 55),
      *((_DWORD *)this + 57),
      *((_QWORD *)this + 29),
      a2);
  if ( *(_DWORD *)a2 == 1 )
  {
    *((_BYTE *)this + 92) = 1;
    *((_BYTE *)this + 156) = 1;
    if ( dword_180305E40 <= 4u )
      return;
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
    {
      v7 = this;
      v10 = &v7;
      v12 = (char *)a2 + 20;
      v14 = (char *)a2 + 24;
      v16 = (char *)a2 + 28;
      v18 = (char *)a2 + 60;
      v20 = (char *)a2 + 64;
      v22 = (char *)a2 + 40;
      v24 = (char *)a2 + 44;
      v26 = (char *)a2 + 48;
      v5 = *((_DWORD *)a2 + 19);
      v28 = &v5;
      v6 = *((_DWORD *)this + 13);
      v30 = &v6;
      v11 = 8LL;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B7D1F, 0LL, 0LL, 0xDu, &pData);
    }
  }
  if ( dword_180305E40 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
    {
      v8 = this;
      v33 = &v8;
      v6 = *(_DWORD *)a2;
      v35 = &v6;
      v5 = *((_DWORD *)a2 + 1);
      v37 = &v5;
      v4 = *((_BYTE *)this + 88) & 1;
      v34 = 8LL;
      LODWORD(v7) = v4;
      v39 = &v7;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B7DFA, 0LL, 0LL, 6u, &v32);
    }
  }
}
