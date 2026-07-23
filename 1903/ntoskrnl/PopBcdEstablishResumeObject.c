/*
 * XREFs of PopBcdEstablishResumeObject @ 0x14073B9C0
 * Callers:
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x14074B26C (PoInitHiberServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     BcdGetElementData @ 0x14073BD08 (BcdGetElementData.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14073C630 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdQueryObject @ 0x14073CA40 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14073D18C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073D318 (BcdCloseObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1408B681C (PopBcdRegenerateResumeObject.c)
 */

__int64 __fastcall PopBcdEstablishResumeObject(HANDLE BcdStoreHandle, _QWORD *a2)
{
  HANDLE v3; // rbx
  NTSTATUS ElementData; // edi
  NTSTATUS v6; // eax
  NTSTATUS v8; // eax
  _WORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG BufferSize; // [rsp+24h] [rbp-3Ch] BYREF
  HANDLE BcdObjectHandle; // [rsp+28h] [rbp-38h] BYREF
  HANDLE v12; // [rsp+30h] [rbp-30h] BYREF
  BCD_OBJECT_DESCRIPTION Description; // [rsp+38h] [rbp-28h] BYREF
  GUID Buffer; // [rsp+40h] [rbp-20h] BYREF

  v9[0] = 0;
  Description = 0LL;
  v3 = 0LL;
  *(_QWORD *)&Buffer.Data1 = 0LL;
  v12 = 0LL;
  *(_QWORD *)Buffer.Data4 = 0LL;
  BcdObjectHandle = 0LL;
  ElementData = BcdOpenObject(BcdStoreHandle, &GUID_CURRENT_BOOT_ENTRY, &BcdObjectHandle);
  if ( ElementData < 0 )
    goto LABEL_10;
  BufferSize = 16;
  ElementData = BcdGetElementData(BcdObjectHandle, 0x23000003u, &Buffer, &BufferSize);
  if ( ElementData >= 0 )
  {
    v6 = BcdOpenObject(BcdStoreHandle, &Buffer, &v12);
    v3 = v12;
    ElementData = v6;
    if ( v6 >= 0 )
    {
      ElementData = BcdQueryObject(v12, 1u, (BCD_OBJECT_DESCRIPTION)&Description, 0LL);
      if ( ElementData >= 0 )
      {
        if ( (Description.Type & 0xF0000000) == 0x10000000
          && (Description.Type & 0xF00000) == 0x200000
          && (Description.Type & 0xFFFFF) == 4 )
        {
          BufferSize = 2;
          ElementData = BcdGetElementData(v3, 0x26000003u, v9, &BufferSize);
          if ( ElementData < 0 || !LOBYTE(v9[0]) )
            ElementData = PopBcdSetDefaultResumeObjectElements(v3, BcdObjectHandle);
          goto LABEL_10;
        }
        ElementData = -1073741275;
      }
    }
    if ( v3 )
    {
      BcdCloseObject(v3);
      v3 = 0LL;
      v12 = 0LL;
    }
  }
  if ( !InitIsWinPEMode )
  {
    v8 = PopBcdRegenerateResumeObject(BcdStoreHandle, BcdObjectHandle, &v12);
    v3 = v12;
    ElementData = v8;
  }
  if ( ElementData >= 0 )
    ElementData = 0;
  else
    v3 = 0LL;
LABEL_10:
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  if ( ElementData < 0 )
  {
    if ( !v3 )
      return (unsigned int)ElementData;
    goto LABEL_16;
  }
  if ( !a2 )
  {
LABEL_16:
    BcdCloseObject(v3);
    return (unsigned int)ElementData;
  }
  *a2 = v3;
  return (unsigned int)ElementData;
}
