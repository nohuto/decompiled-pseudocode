/*
 * XREFs of ?FxIFRValidateRecord@@YAJPEAU_WDF_IFR_RECORD@@_K1@Z @ 0x1C003F41C
 * Callers:
 *     ?FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z @ 0x1C003F11C (-FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxIFRValidateRecord(
        _WDF_IFR_RECORD *IfrRecord,
        unsigned __int64 IfrHeaderMaxValidPtr,
        unsigned __int64 IfrMaxValidPtr)
{
  unsigned __int16 Length; // ax
  unsigned __int8 *v4; // rax

  if ( (unsigned __int64)IfrRecord > IfrHeaderMaxValidPtr )
    return 3221225990LL;
  Length = IfrRecord->Length;
  if ( Length < 0x1Cu )
    return 3221225990LL;
  v4 = &IfrRecord[-1].MessageGuid.Data4[Length + 7];
  if ( v4 < (unsigned __int8 *)IfrRecord )
    return 3221225621LL;
  if ( (unsigned __int64)v4 > IfrMaxValidPtr )
    return 3221225990LL;
  else
    return 0LL;
}
