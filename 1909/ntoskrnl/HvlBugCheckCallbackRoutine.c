/*
 * XREFs of HvlBugCheckCallbackRoutine @ 0x14028B7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HvlBugCheckCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( qword_140462E28 )
  {
    if ( (*((_DWORD *)qword_140462E28 + 1) & 1) != 0 )
    {
      ReasonSpecificData[1] = HvlCrashdumpGuid;
      *((_QWORD *)ReasonSpecificData + 4) = qword_140462E28;
      *((_DWORD *)ReasonSpecificData + 10) = dword_140462E38 << 12;
    }
  }
}
