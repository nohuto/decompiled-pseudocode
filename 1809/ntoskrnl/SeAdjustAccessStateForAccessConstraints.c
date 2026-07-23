/*
 * XREFs of SeAdjustAccessStateForAccessConstraints @ 0x1406328A0
 * Callers:
 *     <none>
 * Callees:
 *     SepFilterCheck @ 0x140052760 (SepFilterCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1400A8F44 (SepLocateTokenTrustLevel.c)
 *     SeGetTrustLabelAce @ 0x1400AA890 (SeGetTrustLabelAce.c)
 *     RtlSidDominatesForTrust @ 0x1400AD0E0 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SeAdjustAccessStateForAccessConstraints(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 result; // rax
  int v7; // esi
  int v8; // eax
  int v9; // r14d
  int v10; // r15d
  __int64 v11; // r8
  __int64 TrustLabelAce; // rax
  __int64 v13; // rbp
  int v14; // r14d
  int v15; // r15d
  void *v16; // r13
  void *TokenTrustLevel; // rax
  int v18; // ecx
  BOOLEAN DominatesTrust; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  DominatesTrust = 0;
  v20 = 0LL;
  v3 = -1;
  result = *(unsigned int *)(a3 + 12);
  v7 = -1;
  if ( (result & 6) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 68);
    if ( v8 == 1 )
    {
      v9 = 17957001;
      v10 = 18809110;
    }
    else if ( v8 == 256 )
    {
      v9 = 16908313;
      v10 = 17760262;
    }
    else
    {
      v9 = 0;
      v10 = 0;
    }
    v11 = *(_QWORD *)(a3 + 32);
    if ( !v11 )
      v11 = *(_QWORD *)(a3 + 48);
    SepFilterCheck(a2, 0LL, v11, 1, (int *)&v20);
    if ( BYTE4(v20) )
      v3 = v20;
    TrustLabelAce = SeGetTrustLabelAce(a2);
    v13 = TrustLabelAce;
    if ( TrustLabelAce )
    {
      v16 = (void *)(TrustLabelAce + 8);
      if ( TrustLabelAce == -8
        || (TokenTrustLevel = (void *)SepLocateTokenTrustLevel((__int64 *)(a3 + 32)),
            RtlSidDominatesForTrust(TokenTrustLevel, v16, &DominatesTrust),
            !DominatesTrust) )
      {
        v7 = *(_DWORD *)(v13 + 4);
      }
    }
    result = ~(v3 & (unsigned int)v7);
    v14 = result & v9;
    v15 = result & v10;
    if ( v7 != -1 || v3 != -1 )
    {
      v18 = *(_DWORD *)(a3 + 12);
      result = *(unsigned int *)(a3 + 20);
      if ( (v18 & 2) != 0 )
        result = ~v14 & (unsigned int)result;
      if ( (v18 & 4) != 0 )
        result = ~v15 & (unsigned int)result;
      *(_DWORD *)(a3 + 20) = result;
    }
  }
  return result;
}
