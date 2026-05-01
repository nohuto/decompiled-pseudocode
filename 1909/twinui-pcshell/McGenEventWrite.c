/*
 * XREFs of McGenEventWrite @ 0x18003AA0C
 * Callers:
 *     McTemplateU0q @ 0x180039F5C (McTemplateU0q.c)
 *     McTemplateU0dz @ 0x18003A560 (McTemplateU0dz.c)
 *     McTemplateU0qq @ 0x18003A604 (McTemplateU0qq.c)
 *     McTemplateU0zqtq @ 0x18003A944 (McTemplateU0zqtq.c)
 *     McTemplateU0 @ 0x180068744 (McTemplateU0.c)
 *     McTemplateU0pqztp @ 0x18007F47C (McTemplateU0pqztp.c)
 *     McTemplateU0dddd @ 0x180147A80 (McTemplateU0dddd.c)
 *     McTemplateU0zzz @ 0x1803AD5B8 (McTemplateU0zzz.c)
 *     McTemplateU0zzzq @ 0x1803AD6C0 (McTemplateU0zzzq.c)
 *     McTemplateU0ddz @ 0x1803FDBA8 (McTemplateU0ddz.c)
 *     McTemplateU0qdddd @ 0x1803FDC34 (McTemplateU0qdddd.c)
 *     McTemplateU0sqq @ 0x18042417C (McTemplateU0sqq.c)
 *     McTemplateU0z @ 0x180424D08 (McTemplateU0z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  ULONG v8; // r9d

  v5 = (unsigned __int16 *)a1[1];
  v6 = 0;
  if ( v5 )
  {
    UserData->Ptr = (ULONGLONG)v5;
    v6 = 2;
    v8 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v6;
  return EventWriteTransfer(*a1, a2, 0LL, 0LL, a4, UserData);
}
