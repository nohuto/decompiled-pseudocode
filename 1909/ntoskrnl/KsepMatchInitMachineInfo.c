/*
 * XREFs of KsepMatchInitMachineInfo @ 0x140A02A5C
 * Callers:
 *     KseInitialize @ 0x140A030C8 (KseInitialize.c)
 * Callees:
 *     KsepLogError @ 0x1401831E0 (KsepLogError.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KsepDebugPrint @ 0x1402B6DB4 (KsepDebugPrint.c)
 *     KsepStringAnsiToUnicode @ 0x14075DBBC (KsepStringAnsiToUnicode.c)
 *     KsepMatchInitBiosInfo @ 0x140A02B5C (KsepMatchInitBiosInfo.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140A02EA4 (KsepMatchInitAcpiOemInfo.c)
 */

__int64 KsepMatchInitMachineInfo()
{
  int matched; // ebx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v2; // r9
  char *VendorString; // r8
  NTSTATUS v4; // ebx
  int v5; // ebx
  __int64 result; // rax
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rcx

  matched = KsepMatchInitAcpiOemInfo();
  if ( matched < 0 )
  {
    v7 = KsepDebugFlag;
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = matched;
    KsepHistoryErrors[2 * v8] = 655516;
    if ( (v7 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", matched);
    KsepLogError(0, "KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", matched);
  }
  memset(&qword_140508810, 0, 0x38uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = -1LL;
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v2;
  while ( VendorString[v2] );
  v4 = KsepStringAnsiToUnicode(word_140508580, 0x20Au, VendorString, v2);
  if ( v4 < 0 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = v4;
    KsepHistoryErrors[2 * v9] = 655522;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v4);
    KsepLogError(0, "KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v4);
  }
  else
  {
    dword_140508834 = CurrentPrcb->CpuType;
    dword_140508830 = CurrentPrcb->CpuModel;
    qword_140508810 = (__int64)word_140508580;
  }
  v5 = KsepMatchInitBiosInfo();
  if ( v5 < 0 )
  {
    v10 = KsepDebugFlag;
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v11 + 1] = v5;
    KsepHistoryErrors[2 * v11] = 655528;
    if ( (v10 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v5);
    KsepLogError(0, "KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v5);
  }
  KsepMatchMachineInfo = (__int64)&qword_140508540;
  qword_1404469E8 = (__int64)&qword_140508790;
  qword_1404469F0 = (__int64)&qword_1405087C8;
  result = 0LL;
  qword_1404469F8 = (__int64)&qword_140508810;
  return result;
}
