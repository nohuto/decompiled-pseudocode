/*
 * XREFs of ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801D7C1C
 * Callers:
 *     ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x1801D6E80 (-CompleteInteraction@CInteraction@@UEAAJXZ.c)
 *     ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x1801D7D0C (-ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?Remove@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x1801D78FC (-Remove@-$CArray@PEAVCInteraction@@V-$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInter.c)
 */

void __fastcall CInteraction::ResetDefaultInteractionForCurrentMC(CInteraction *this, char a2)
{
  const struct _TlgProvider_t *v3; // rcx
  UINT32 cData; // r9d
  int v5; // eax
  CInteraction *v6; // [rsp+30h] [rbp-9h] BYREF
  CInteraction *v7; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  CInteraction **v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  CInteraction **v12; // [rsp+70h] [rbp+37h]
  UINT32 v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  *((_BYTE *)this + 184) ^= (*((_BYTE *)this + 184) ^ (2 * *((_BYTE *)this + 184))) & 0x10;
  if ( a2 )
  {
    v6 = this;
    CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Remove((__int64)this, &v6);
  }
  if ( dword_18033A240 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
    {
      v11 = 0;
      v9 = &v7;
      v5 = (*((unsigned __int8 *)this + 184) >> 3) & 1;
      v7 = this;
      v14 = 0;
      LODWORD(v6) = v5;
      v12 = &v6;
      v10 = 8;
      v13 = cData;
      TlgWrite(v3, &unk_1802DC399, 0LL, 0LL, cData, &pData);
    }
  }
}
