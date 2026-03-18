/*
 * XREFs of CcUnpinData @ 0x14060C5E0
 * Callers:
 *     CcUnpinData @ 0x14060C5E0 (CcUnpinData.c)
 *     CcPinMappedData @ 0x14064DB20 (CcPinMappedData.c)
 *     CcPinRead @ 0x1406B84B0 (CcPinRead.c)
 *     CcPreparePinWrite @ 0x1406C4AD0 (CcPreparePinWrite.c)
 *     CcUnpinDataForThread @ 0x140822C20 (CcUnpinDataForThread.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x140079100 (CcUnpinFileDataEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CcUnpinData @ 0x14060C5E0 (CcUnpinData.c)
 */

void __stdcall CcUnpinData(PVOID Bcb)
{
  PVOID v1; // rbx
  char v2; // dl
  void *v3; // rax
  char *i; // rdi

  v1 = Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    v2 = 1;
    Bcb = (PVOID)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_3:
    CcUnpinFileDataEx((char *)Bcb, v2, 0);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    v2 = 0;
    goto LABEL_3;
  }
  v3 = (void *)*((_QWORD *)Bcb + 2);
  for ( i = (char *)Bcb + 16; v3; i += 8 )
  {
    CcUnpinData(v3);
    v3 = (void *)*((_QWORD *)i + 1);
  }
  ExFreePoolWithTag(v1, 0);
}
