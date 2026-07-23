/*
 * XREFs of EtwpTiFillVadEventWrite @ 0x14031301C
 * Callers:
 *     EtwpTiVadQueryEventWrite @ 0x140313154 (EtwpTiVadQueryEventWrite.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1408BE940 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     EtwpTiFillVad @ 0x140312F7C (EtwpTiFillVad.c)
 */

NTSTATUS __fastcall EtwpTiFillVadEventWrite(
        PEVENT_DATA_DESCRIPTOR UserData,
        ULONG UserDataCount,
        char a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        PCEVENT_DESCRIPTOR EventDescriptor)
{
  __int64 v7; // r11
  int v12; // r9d
  struct _EVENT_DATA_DESCRIPTOR *v13; // rax

  v7 = 0LL;
  if ( a6 )
  {
    v12 = a5;
    do
    {
      if ( a3 && _bittest(&v12, v7) )
      {
        UserDataCount += EtwpTiFillVad((__int64)&UserData[UserDataCount], a4 + 48 * v7);
      }
      else
      {
        v13 = &UserData[UserDataCount];
        v13->Reserved = 0;
        v13->Ptr = (ULONGLONG)&unk_14037EF80;
        v13->Size = 4;
        v13[1].Reserved = 0;
        v13[1].Ptr = (ULONGLONG)&unk_14037EF80;
        v13[1].Size = 8;
        v13[2].Reserved = 0;
        v13[2].Ptr = (ULONGLONG)&unk_14037EF80;
        v13[2].Size = 4;
        v13[3].Reserved = 0;
        v13[3].Ptr = (ULONGLONG)&unk_14037EF80;
        v13[3].Size = 4;
        v13[4].Reserved = 0;
        v13[4].Ptr = (ULONGLONG)&unk_14037EF80;
        v13[4].Size = 8;
        v13[5].Reserved = 0;
        v13[5].Ptr = (ULONGLONG)&unk_14037EF80;
        v13[5].Size = 8;
        v13[6].Reserved = 0;
        UserDataCount += 7;
        v13[6].Ptr = (ULONGLONG)&unk_14037EF80;
        v13[6].Size = 2;
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < a6 );
  }
  return EtwWriteEx(EtwThreatIntProvRegHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
}
