/*
 * XREFs of MmWriteTriageInformation @ 0x1402AE7D8
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x14027F794 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     RtlGetNtProductType @ 0x14012AC20 (RtlGetNtProductType.c)
 *     ExVerifySuite @ 0x14018DD80 (ExVerifySuite.c)
 */

__int64 __fastcall MmWriteTriageInformation(_OWORD *a1)
{
  int v2; // ebx
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-50h]
  __int128 v5; // [rsp+30h] [rbp-40h]
  __int128 v6; // [rsp+40h] [rbp-30h]
  __int128 v7; // [rsp+50h] [rbp-20h]
  __int128 v8; // [rsp+60h] [rbp-10h]
  enum _NT_PRODUCT_TYPE ProductType; // [rsp+80h] [rbp+10h] BYREF

  v2 = VerifierTriageActionTaken;
  *(_QWORD *)&v4 = 0x5000000001LL;
  DWORD2(v4) = MmSpecialPoolTag;
  RtlGetNtProductType(&ProductType);
  if ( ProductType != NtProductWinNt
    || ExVerifySuite(EmbeddedNT)
    || ExVerifySuite(EmbeddedRestricted)
    || ExVerifySuite(SecurityAppliance) )
  {
    v2 |= 0x80000000;
  }
  LODWORD(v5) = MmVerifierData;
  HIDWORD(v4) = v2;
  DWORD1(v5) = ((unsigned int)MiFlags >> 1) & 1;
  *((_QWORD *)&v5 + 1) = qword_14043AF90;
  *(_QWORD *)&v6 = qword_140438A58;
  *((_QWORD *)&v6 + 1) = qword_14043AF98;
  *(_QWORD *)&v7 = qword_14043AF88;
  *((_QWORD *)&v7 + 1) = qword_14043E728;
  *(_QWORD *)&v8 = qword_14043E240;
  result = qword_14043E248;
  *a1 = v4;
  *((_QWORD *)&v8 + 1) = result;
  a1[1] = v5;
  a1[2] = v6;
  a1[3] = v7;
  a1[4] = v8;
  return result;
}
