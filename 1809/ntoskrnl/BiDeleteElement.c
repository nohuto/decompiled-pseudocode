/*
 * XREFs of BiDeleteElement @ 0x14071259C
 * Callers:
 *     PopBcdClearPendingResume @ 0x140710FA8 (PopBcdClearPendingResume.c)
 *     BcdSetElementDataWithFlags @ 0x140713370 (BcdSetElementDataWithFlags.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1408A3544 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1408F3FFC (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateBcdObject @ 0x1408F48E8 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14016E5BC (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     _ultow_s @ 0x14019A770 (_ultow_s.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1403273A8 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x1406E1E6C (BiDeleteKey.c)
 *     BiOpenKey @ 0x140713780 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407138F0 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140713AD0 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140713C80 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140713CD8 (BiIsLinkedToFirmwareVariable.c)
 *     BiLogMessage @ 0x1407140B4 (BiLogMessage.c)
 */

__int64 __fastcall BiDeleteElement(void *a1, unsigned int a2)
{
  __int64 v4; // rcx
  char v5; // r15
  __int64 result; // rax
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  wchar_t DstBuf[24]; // [rsp+38h] [rbp-38h] BYREF

  v15 = a2;
  LOBYTE(v4) = BiIsOfflineHandle((char)a1);
  v5 = v4;
  result = BiAcquireBcdSyncMutant(v4);
  if ( (int)result >= 0 )
  {
    BiLogMessage(2LL, L"Deleting element %08x", a2);
    v14 = 0LL;
    v16 = 0LL;
    v7 = BiOpenKey(a1, L"Elements", 131097LL, &v14);
    v8 = v7;
    if ( v7 < 0 )
    {
      BiLogMessage(4LL, L"Failed to open key for all object's elements. Status: %x", (unsigned int)v7);
    }
    else if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
    {
      v8 = -1073741823;
    }
    else
    {
      v10 = BiOpenKey(v14, DstBuf, 0x10000LL, &v16);
      if ( v10 < 0 )
      {
        v13 = 4LL;
        if ( v10 == -1073741772 )
          v13 = 2LL;
        BiLogMessage(v13, L"Failed to open element %ws key for delete. Status: %x", DstBuf, (unsigned int)v10);
        v11 = v16;
        v8 = -1073741275;
      }
      else
      {
        v11 = v16;
        v12 = BiDeleteKey(v16);
        v8 = v12;
        if ( v12 < 0 )
          BiLogMessage(4LL, L"Failed to open element %ws key for delete. Status: %x", DstBuf, (unsigned int)v12);
        else
          v11 = 0LL;
      }
      if ( v11 )
        BiCloseKey(v11);
    }
    if ( v14 )
      BiCloseKey(v14);
    if ( v8 >= 0 )
    {
      if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(a1, &v15) )
        BiSetFirmwareModifiedFromObject(a1);
    }
    LOBYTE(v9) = v5;
    BiReleaseBcdSyncMutant(v9);
    return (unsigned int)v8;
  }
  return result;
}
