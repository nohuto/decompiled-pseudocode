/*
 * XREFs of ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x18023C228
 * Callers:
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x18023DFF0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1802383D8 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x18023D5C0 (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 */

void __fastcall CManipulationContext::CleanStaleFork(__int64 a1, int a2, _BYTE *a3)
{
  _BYTE *v3; // rbx
  __int64 v4; // rsi
  _BYTE *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-59h] BYREF
  _BYTE *v10; // [rsp+38h] [rbp-51h] BYREF
  _BYTE *v11; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v13; // [rsp+70h] [rbp-19h]
  int v14; // [rsp+78h] [rbp-11h]
  int v15; // [rsp+7Ch] [rbp-Dh]
  _QWORD *v16; // [rsp+80h] [rbp-9h]
  int v17; // [rsp+88h] [rbp-1h]
  int v18; // [rsp+8Ch] [rbp+3h]
  _QWORD *v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+98h] [rbp+Fh]
  int v21; // [rsp+9Ch] [rbp+13h]
  _BYTE *v22; // [rsp+A0h] [rbp+17h]
  int v23; // [rsp+A8h] [rbp+1Fh]
  int v24; // [rsp+ACh] [rbp+23h]

  if ( a3 )
  {
    v3 = a3;
    v4 = a2;
    do
    {
      if ( (v3[184] & 0x40) != 0 )
        break;
      v6 = (_BYTE *)*((_QWORD *)v3 + 25);
      if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
      {
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v13 = &v9;
        v16 = &v10;
        v19 = &v11;
        v7 = v4 - 1;
        v9 = a1;
        v14 = 8;
        v10 = v3;
        v17 = 8;
        v11 = v6;
        v20 = 8;
        if ( (int)v4 - 1 < 0 || v7 >= 6 )
          v7 = 0;
        v23 = 4;
        v24 = 0;
        v22 = &v3[4 * v7 + 240];
        TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802E09D2, 0LL, 0LL, 6u, &pData);
      }
      (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, (unsigned int)v4);
      v8 = v4 - 1;
      if ( (unsigned int)(v4 - 1) >= 6 )
        v8 = 0LL;
      --*(_DWORD *)&v3[4 * v8 + 240];
      if ( !(unsigned int)CInteraction::GetTotalNumContacts((CInteraction *)v3) )
        CManipulationContext::RemoveInteractionLeafFromTree((struct CInteraction *)v3);
      v3[184] &= ~0x80u;
      v3 = v6;
    }
    while ( v6 );
  }
}
