/*
 * XREFs of McGenEventWrite @ 0x1800109F4
 * Callers:
 *     McTemplateU0zq @ 0x180010A50 (McTemplateU0zq.c)
 *     McTemplateU0zqq @ 0x18002B518 (McTemplateU0zqq.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  ULONG v7; // r8d

  v5 = (unsigned __int16 *)qword_18004F048;
  v6 = 0;
  if ( qword_18004F048 )
  {
    UserData->Ptr = qword_18004F048;
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
  return EventWriteTransfer(AUDIO_EVENT_PROVIDER_Context, a2, 0LL, 0LL, UserDataCount, UserData);
}
