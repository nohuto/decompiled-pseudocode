/*
 * XREFs of RaidQueryAcpiDsdStorageD3Property @ 0x1C001CA7C
 * Callers:
 *     RaidInitializeAdapter @ 0x1C006D634 (RaidInitializeAdapter.c)
 * Callees:
 *     RaidQueryAcpiDsdSynchronous @ 0x1C001CB30 (RaidQueryAcpiDsdSynchronous.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

char __fastcall RaidQueryAcpiDsdStorageD3Property(__int64 a1, _DWORD *a2)
{
  char v4; // di
  struct _DEVICE_OBJECT *v5; // rcx
  _QWORD v7[24]; // [rsp+30h] [rbp-D8h] BYREF

  *a2 = -1;
  v4 = 0;
  memset(v7, 0, sizeof(v7));
  v5 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  LODWORD(v7[4]) = 1214866753;
  *(GUID *)((char *)&v7[4] + 4) = GUID_STORAGE_ACPI_DSD_D3_ENABLE;
  HIDWORD(v7[6]) = 16;
  strcpy((char *)&v7[7], "StorageD3Enable");
  if ( (int)RaidQueryAcpiDsdSynchronous(v5, &v7[4]) >= 0
    && LODWORD(v7[0]) == 1114596673
    && LODWORD(v7[1]) == 1
    && !WORD2(v7[1]) )
  {
    v4 = 1;
    *a2 = v7[2];
  }
  return v4;
}
