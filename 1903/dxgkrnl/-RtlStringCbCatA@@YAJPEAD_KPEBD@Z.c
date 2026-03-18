/*
 * XREFs of ?RtlStringCbCatA@@YAJPEAD_KPEBD@Z @ 0x1C00425B4
 * Callers:
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEADPEAU_EPROCESS@@0IPEA_K@Z @ 0x1C0244F60 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEADPEAU_EPROCESS@@0IPEA_K@Z.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C0042724 (RtlStringCopyWorkerA.c)
 *     RtlStringLengthWorkerA @ 0x1C0042790 (RtlStringLengthWorkerA.c)
 */

__int64 __fastcall RtlStringCbCatA(STRSAFE_PCNZCH psz, size_t a2, const char *a3)
{
  NTSTATUS v3; // r9d
  STRSAFE_PCNZCH v4; // r11
  size_t v6; // r10
  size_t v7; // rax
  size_t v9; // [rsp+20h] [rbp-18h]
  size_t pcchLength; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v4 = psz;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  v6 = a2;
  if ( v3 < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    v3 = RtlStringLengthWorkerA(psz, a2, &pcchLength);
    v7 = pcchLength;
  }
  if ( v3 >= 0 )
    return (unsigned int)RtlStringCopyWorkerA((NTSTRSAFE_PSTR)&v4[v7], v6 - v7, 0LL, a3, v9);
  return (unsigned int)v3;
}
