/*
 * XREFs of ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x18019CD84
 * Callers:
 *     ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x18019BF20 (-CompleteInteraction@CInteraction@@UEAAJXZ.c)
 *     ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x18019CE74 (-ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?Remove@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x18019CA5C (-Remove@-$CArray@PEAVCInteraction@@V-$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInter.c)
 */

void __fastcall CInteraction::ResetDefaultInteractionForCurrentMC(CInteraction *this, char a2)
{
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  CInteraction *v5; // [rsp+30h] [rbp-9h] BYREF
  CInteraction *v6; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  CInteraction **v8; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  CInteraction **v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]

  *((_BYTE *)this + 184) ^= (*((_BYTE *)this + 184) ^ (2 * *((_BYTE *)this + 184))) & 4;
  if ( a2 )
  {
    v5 = this;
    CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Remove((__int64)this, &v5);
  }
  if ( dword_180305E40 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
    {
      v10 = 0;
      v8 = &v6;
      v4 = (*((unsigned __int8 *)this + 184) >> 1) & 1;
      v6 = this;
      v13 = 0;
      LODWORD(v5) = v4;
      v11 = &v5;
      v9 = 8;
      v12 = 4;
      TlgWrite(v3, &unk_1802B4C24, 0LL, 0LL, 4u, &pData);
    }
  }
}
