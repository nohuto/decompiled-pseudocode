/*
 * XREFs of ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C006FACC
 * Callers:
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C006D1A8 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C006D5AC (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C006F970 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

DirectComposition::CApplicationChannel *__fastcall DirectComposition::CApplicationChannel::CApplicationChannel(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CConnection *a2,
        char a3,
        int a4)
{
  char v6; // al
  char v7; // al

  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  v6 = *((_BYTE *)this + 48) & 0xFE;
  *((_DWORD *)this + 2) = 1;
  v7 = a3 | v6;
  *((_QWORD *)this + 5) = a2;
  *((_BYTE *)this + 48) = v7;
  if ( (v7 & 1) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)a2);
  *((_QWORD *)this + 2) = PsGetCurrentProcess(this, a2);
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  *((_BYTE *)this + 64) = a3;
  *((_QWORD *)this + 11) = 8LL;
  *((_BYTE *)this + 120) = a3;
  *((_QWORD *)this + 18) = 8LL;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 264),
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::AllocateTableEntry,
    (PRTL_GENERIC_FREE_ROUTINE)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
    0LL);
  *((_BYTE *)this + 480) = a3;
  *((_QWORD *)this + 63) = 8LL;
  *((_QWORD *)this + 67) = (char *)this + 528;
  *((_QWORD *)this + 66) = (char *)this + 528;
  *((_QWORD *)this + 69) = (char *)this + 544;
  *((_QWORD *)this + 68) = (char *)this + 544;
  *((_QWORD *)this + 71) = (char *)this + 560;
  *((_QWORD *)this + 70) = (char *)this + 560;
  *((_QWORD *)this + 73) = (char *)this + 576;
  *((_QWORD *)this + 72) = (char *)this + 576;
  *((_BYTE *)this + 624) = a3;
  *((_QWORD *)this + 76) = (char *)this + 600;
  *((_QWORD *)this + 75) = (char *)this + 600;
  *((_DWORD *)this + 178) = a4;
  InitializeSListHead((PSLIST_HEADER)this + 12);
  *((_QWORD *)this + 43) = (char *)this + 336;
  *((_QWORD *)this + 42) = (char *)this + 336;
  *((_QWORD *)this + 32) = (char *)this + 248;
  *((_QWORD *)this + 31) = (char *)this + 248;
  return this;
}
