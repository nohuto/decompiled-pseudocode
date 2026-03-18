/*
 * XREFs of SepAdjustAccessStateForConstraints @ 0x1407056DC
 * Callers:
 *     CmpSetAccessStateForBackupRestore @ 0x140705610 (CmpSetAccessStateForBackupRestore.c)
 *     SeAdjustAccessStateForTrustLabel @ 0x14089C0E0 (SeAdjustAccessStateForTrustLabel.c)
 * Callees:
 *     SepFilterCheck @ 0x140052760 (SepFilterCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1400A8FE4 (SepLocateTokenTrustLevel.c)
 *     SeGetTrustLabelAce @ 0x1400AA930 (SeGetTrustLabelAce.c)
 *     RtlSidDominatesForTrust @ 0x1400AD180 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SepAdjustAccessStateForConstraints(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  int v7; // ebp
  int v8; // r12d
  __int64 result; // rax
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  __int64 v13; // r8
  __int64 TrustLabelAce; // rax
  __int64 v15; // r14
  int v16; // eax
  int v17; // edi
  int v18; // ebx
  __int64 v19; // r15
  __int64 TokenTrustLevel; // rax
  int v21; // ecx
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  char v23; // [rsp+88h] [rbp+20h] BYREF

  v23 = 0;
  v22 = 0LL;
  v7 = -1;
  v8 = -1;
  result = *(unsigned int *)(a4 + 12);
  if ( (result & 6) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 68);
    if ( v10 == 1 )
    {
      v11 = 17957001;
      v12 = 18809110;
    }
    else if ( v10 == 256 )
    {
      v11 = 16908313;
      v12 = 17760262;
    }
    else
    {
      v11 = 0;
      v12 = 0;
    }
    v13 = *(_QWORD *)(a4 + 32);
    if ( !v13 )
      v13 = *(_QWORD *)(a4 + 48);
    SepFilterCheck(a2, 0LL, v13, 1, (int *)&v22);
    if ( BYTE4(v22) && a3 )
      v7 = v22;
    TrustLabelAce = SeGetTrustLabelAce(a2);
    v15 = TrustLabelAce;
    if ( TrustLabelAce )
    {
      v19 = TrustLabelAce + 8;
      if ( TrustLabelAce == -8
        || (TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)(a4 + 32)),
            RtlSidDominatesForTrust(TokenTrustLevel, v19, &v23),
            !v23) )
      {
        v8 = *(_DWORD *)(v15 + 4);
      }
    }
    v16 = ~(v7 & v8);
    v17 = v16 & v11;
    v18 = v16 & v12;
    result = 0xFFFFFFFFLL;
    if ( v8 != -1 || v7 != -1 )
    {
      v21 = *(_DWORD *)(a4 + 12);
      result = *(unsigned int *)(a4 + 20);
      if ( (v21 & 2) != 0 )
        result = ~v17 & (unsigned int)result;
      if ( (v21 & 4) != 0 )
        result = ~v18 & (unsigned int)result;
      *(_DWORD *)(a4 + 20) = result;
    }
  }
  return result;
}
