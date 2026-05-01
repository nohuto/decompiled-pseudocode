/*
 * XREFs of McGenEventWrite @ 0x18002C8AC
 * Callers:
 *     McTemplateU0qq @ 0x18002B0B4 (McTemplateU0qq.c)
 *     McTemplateU0q @ 0x18002BDE4 (McTemplateU0q.c)
 *     McTemplateU0dz @ 0x18002C470 (McTemplateU0dz.c)
 *     McTemplateU0zqtq @ 0x18002C7E4 (McTemplateU0zqtq.c)
 *     McTemplateU0 @ 0x180068CD8 (McTemplateU0.c)
 *     McTemplateU0pqztp @ 0x18007B190 (McTemplateU0pqztp.c)
 *     McTemplateU0dddd @ 0x1801026D0 (McTemplateU0dddd.c)
 *     McTemplateU0zzz @ 0x18032DCC0 (McTemplateU0zzz.c)
 *     McTemplateU0zzzq @ 0x18032DDC8 (McTemplateU0zzzq.c)
 *     McTemplateU0ddz @ 0x1803787BC (McTemplateU0ddz.c)
 *     McTemplateU0qdddd @ 0x180378848 (McTemplateU0qdddd.c)
 *     McTemplateU0sqq @ 0x18039F54C (McTemplateU0sqq.c)
 *     McTemplateU0z @ 0x1803A00B8 (McTemplateU0z.c)
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
