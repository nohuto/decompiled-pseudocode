/*
 * XREFs of ??_GCCD_SET_STRING_ID@@QEAAPEAXI@Z @ 0x1C0005B00
 * Callers:
 *     ??1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ @ 0x1C00CC240 (--1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ.c)
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C013061C (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??1CCD_SET_STRING_ID@@QEAA@XZ @ 0x1C00CC2AC (--1CCD_SET_STRING_ID@@QEAA@XZ.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::`scalar deleting destructor'(CCD_SET_STRING_ID *P)
{
  CCD_SET_STRING_ID::~CCD_SET_STRING_ID(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
