/*
 * XREFs of ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801D6990
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x18023A674 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x18023C8E0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x1800AC808 (-IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?Add@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x1801D55AC (-Add@-$CArray@PEAVCInteraction@@V-$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteract.c)
 */

void __fastcall CInteraction::UpdateDefaultInteractionForCurrentMC(CInteraction *this)
{
  __int64 v2; // rcx
  char v3; // r9
  unsigned __int8 v4; // r8
  char v5; // al
  const struct _TlgProvider_t *v6; // rcx
  int v7; // r9d
  unsigned int v8; // edx
  int v9; // [rsp+30h] [rbp-29h] BYREF
  CInteraction *v10; // [rsp+38h] [rbp-21h] BYREF
  CInteraction *v11; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  CInteraction **v13; // [rsp+70h] [rbp+17h]
  int v14; // [rsp+78h] [rbp+1Fh]
  int v15; // [rsp+7Ch] [rbp+23h]
  int *v16; // [rsp+80h] [rbp+27h]
  int v17; // [rsp+88h] [rbp+2Fh]
  int v18; // [rsp+8Ch] [rbp+33h]
  CInteraction **v19; // [rsp+90h] [rbp+37h]
  int v20; // [rsp+98h] [rbp+3Fh]
  int v21; // [rsp+9Ch] [rbp+43h]

  if ( !CInteraction::IsDefaultInteractionStateLocked(this) )
  {
    v4 = *(_BYTE *)(v2 + 184);
    if ( v3 )
      v5 = 0;
    else
      v5 = v4 >> 3;
    v10 = this;
    *(_BYTE *)(v2 + 184) = v4 ^ (v4 ^ (16 * v5)) & 0x10;
    CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Add(v2, &v10);
    if ( dword_180337240 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
      {
        v8 = *((unsigned __int8 *)this + 184);
        v15 = 0;
        v18 = 0;
        v13 = &v11;
        v9 = (v8 >> 4) & 1;
        v21 = 0;
        v16 = &v9;
        v19 = &v10;
        v11 = this;
        v14 = 8;
        v17 = v7;
        LODWORD(v10) = (v8 >> 3) & 1;
        v20 = v7;
        TlgWrite(v6, &unk_1802DA4E3, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
