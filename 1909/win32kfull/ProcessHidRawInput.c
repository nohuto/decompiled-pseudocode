/*
 * XREFs of ProcessHidRawInput @ 0x1C01D8120
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C001E4A0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E4CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxProcessHidInput @ 0x1C01D8A70 (xxxProcessHidInput.c)
 */

void __fastcall ProcessHidRawInput(struct DEVICEINFO *a1)
{
  LPCWSTR *v2; // [rsp+38h] [rbp+10h] BYREF
  char v3; // [rsp+40h] [rbp+18h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v3);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v2, L"RawHidInput", 0LL);
  xxxProcessHidInput(a1);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v2);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v3);
}
