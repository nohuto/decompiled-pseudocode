/*
 * XREFs of CcUnpinData @ 0x1405DFDF0
 * Callers:
 *     CcUnpinData @ 0x1405DFDF0 (CcUnpinData.c)
 *     CcPinRead @ 0x1406393D0 (CcPinRead.c)
 *     CcPinMappedData @ 0x1406395C0 (CcPinMappedData.c)
 *     CcPreparePinWrite @ 0x1406A1050 (CcPreparePinWrite.c)
 *     CcUnpinDataForThread @ 0x1407E9A60 (CcUnpinDataForThread.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CcUnpinData @ 0x1405DFDF0 (CcUnpinData.c)
 */

void __stdcall CcUnpinData(PVOID Bcb)
{
  __int64 v1; // rdx
  PVOID v2; // rbx
  void *v3; // rax
  char *i; // rdi

  v2 = Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    LOBYTE(v1) = 1;
    Bcb = (PVOID)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_3:
    CcUnpinFileDataEx((char *)Bcb, v1, 0);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    v1 = 0LL;
    goto LABEL_3;
  }
  v3 = (void *)*((_QWORD *)Bcb + 2);
  for ( i = (char *)Bcb + 16; v3; i += 8 )
  {
    CcUnpinData(v3);
    v3 = (void *)*((_QWORD *)i + 1);
  }
  ExFreePoolWithTag(v2, 0);
}
