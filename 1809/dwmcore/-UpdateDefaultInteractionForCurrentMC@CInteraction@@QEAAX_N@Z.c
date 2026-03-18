/*
 * XREFs of ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x18019D1E0
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801F64A0 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801F8708 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x18009EFC0 (-IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?Add@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x18019BD68 (-Add@-$CArray@PEAVCInteraction@@V-$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteract.c)
 */

void __fastcall CInteraction::UpdateDefaultInteractionForCurrentMC(CInteraction *this)
{
  __int64 v2; // rcx
  char v3; // r9
  unsigned __int8 v4; // r8
  char v5; // al
  const struct _TlgProvider_t *v6; // rcx
  unsigned int v7; // edx
  int v8; // [rsp+30h] [rbp-29h] BYREF
  CInteraction *v9; // [rsp+38h] [rbp-21h] BYREF
  CInteraction *v10; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  CInteraction **v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+7Ch] [rbp+23h]
  int *v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]
  CInteraction **v18; // [rsp+90h] [rbp+37h]
  int v19; // [rsp+98h] [rbp+3Fh]
  int v20; // [rsp+9Ch] [rbp+43h]

  if ( !CInteraction::IsDefaultInteractionStateLocked(this) )
  {
    v4 = *(_BYTE *)(v2 + 184);
    if ( v3 )
      v5 = 0;
    else
      v5 = v4 >> 1;
    v9 = this;
    *(_BYTE *)(v2 + 184) = v4 ^ (v4 ^ (4 * v5)) & 4;
    CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Add(v2, &v9);
    if ( dword_180305E40 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
      {
        v7 = *((unsigned __int8 *)this + 184);
        v14 = 0;
        v17 = 0;
        v12 = &v10;
        v8 = (v7 >> 2) & 1;
        v20 = 0;
        v15 = &v8;
        v18 = &v9;
        v10 = this;
        v13 = 8;
        v16 = 4;
        LODWORD(v9) = (v7 >> 1) & 1;
        v19 = 4;
        TlgWrite(v6, &unk_1802B4C87, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
