/*
 * XREFs of McGenEventWrite @ 0x18005A3C0
 * Callers:
 *     McTemplateU0sqq @ 0x18005A424 (McTemplateU0sqq.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // rdx
  ULONG v6; // eax
  ULONG v7; // edx

  v5 = (unsigned __int16 *)qword_1801DE408;
  v6 = 0;
  if ( qword_1801DE408 )
  {
    UserData->Ptr = qword_1801DE408;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v7 = 0;
  }
  UserData->Size = v7;
  UserData->Reserved = v6;
  return EventWriteTransfer(MICROSOFT_WINDOWSPHONE_INPUT_Context, &EhmMessage, 0LL, 0LL, 4u, UserData);
}
