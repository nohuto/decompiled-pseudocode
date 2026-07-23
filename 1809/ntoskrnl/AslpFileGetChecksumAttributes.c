/*
 * XREFs of AslpFileGetChecksumAttributes @ 0x1408ED7A0
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407218F4 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x1400F51C4 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x140178D58 (RtlFileMapMapView.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x1408EAC48 (AslFileMappingEnsureMappedAs.c)
 *     AslpFileGetChecksum @ 0x1408ED6A8 (AslpFileGetChecksum.c)
 *     AslpFileGetCrcChecksum @ 0x1408EDCB8 (AslpFileGetCrcChecksum.c)
 */

__int64 __fastcall AslpFileGetChecksumAttributes(__int64 a1, __int64 a2)
{
  int Checksum; // ebx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD v9[8]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v10; // [rsp+98h] [rbp+28h] BYREF

  memset(v9, 0, 0x38uLL);
  if ( !*(_DWORD *)(a2 + 84) )
  {
    Checksum = AslFileMappingEnsureMappedAs(a2);
    if ( (int)(Checksum + 0x80000000) >= 0 && Checksum != -1073741554 )
      goto LABEL_5;
    v5 = (_QWORD *)(a2 + 8);
    if ( Checksum == -1073741554 )
    {
      memset(v9, 0, 0x38uLL);
      v9[0] = *v5;
      LOBYTE(v9[6]) = 0;
      Checksum = RtlFileMapMapView((__int64)v9, 0);
      if ( Checksum < 0 )
      {
LABEL_5:
        AslLogCallPrintf(1LL);
        goto LABEL_12;
      }
      v5 = v9;
    }
    v10 = 0;
    Checksum = AslpFileGetChecksum(&v10, (__int64)v5);
    if ( Checksum >= 0 )
    {
      v6 = v10;
      *(_DWORD *)(a1 + 88) |= 1u;
      v10 = 0;
      *(_QWORD *)(a1 + 72) = 4LL;
      *(_QWORD *)(a1 + 80) = v6;
      *(_DWORD *)(a1 + 64) = 2;
      Checksum = AslpFileGetCrcChecksum(&v10, v5);
      if ( Checksum >= 0 )
      {
        v7 = v10;
        *(_DWORD *)(a1 + 856) |= 1u;
        *(_QWORD *)(a1 + 848) = v7;
        Checksum = 0;
        *(_DWORD *)(a1 + 832) = 2;
        *(_QWORD *)(a1 + 840) = 4LL;
        goto LABEL_12;
      }
    }
    goto LABEL_5;
  }
  AslLogCallPrintf(1LL);
  *(_DWORD *)(a1 + 88) |= 2u;
  Checksum = -1073741823;
  *(_DWORD *)(a1 + 856) |= 2u;
LABEL_12:
  RtlFileMapFree(v9);
  return (unsigned int)Checksum;
}
