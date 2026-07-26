/*
 * XREFs of ?ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C00C3F30
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeRWLock @ 0x1C003E2B0 (NdisFreeRWLock.c)
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 */

void __fastcall ndisVerifyNdisFreeRWLock(KSPIN_LOCK *BugCheckParameter3)
{
  int v2; // ecx

  if ( !KeTestSpinLock(BugCheckParameter3 + 2) )
    goto LABEL_6;
  v2 = 0;
  if ( ndisMaxNumberOfProcessors )
  {
    while ( !*(_QWORD *)((unsigned int)(v2 << 12) + BugCheckParameter3[4]) )
    {
      if ( ++v2 >= ndisMaxNumberOfProcessors )
        goto LABEL_5;
    }
LABEL_6:
    ndisBugCheckEx(0x30uLL, 2uLL, (ULONG_PTR)BugCheckParameter3, 0LL);
  }
LABEL_5:
  NdisFreeRWLock((PNDIS_RW_LOCK_EX)BugCheckParameter3);
}
