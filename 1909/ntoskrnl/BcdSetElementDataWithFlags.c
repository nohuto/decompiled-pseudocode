/*
 * XREFs of BcdSetElementDataWithFlags @ 0x14073F60C
 * Callers:
 *     PopBcdSetPendingResume @ 0x140728C24 (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14073E530 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x14074174C (PopBcdSetupResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1408E1774 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdSetElementData @ 0x14092E6F4 (BcdSetElementData.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14092F454 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiUpdateBcdObject @ 0x140932050 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140178184 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _ultow_s @ 0x1401A5700 (_ultow_s.c)
 *     BiSetFirmwareModifiedFromObject @ 0x140348644 (BiSetFirmwareModifiedFromObject.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiDeleteKey @ 0x14072A888 (BiDeleteKey.c)
 *     BiDeleteElement @ 0x14073E7D8 (BiDeleteElement.c)
 *     BiCreateKey @ 0x14073F25C (BiCreateKey.c)
 *     BiOpenKey @ 0x14073FA30 (BiOpenKey.c)
 *     BiCloseKey @ 0x14073FBB4 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14073FD94 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14073FF50 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14073FFBC (BiIsLinkedToFirmwareVariable.c)
 *     BiSetRegistryValue @ 0x140740078 (BiSetRegistryValue.c)
 *     BiConvertElementFormatToValueType @ 0x140740168 (BiConvertElementFormatToValueType.c)
 *     BiConvertElementToRegistryData @ 0x140740194 (BiConvertElementToRegistryData.c)
 *     BiLogMessage @ 0x1407403B4 (BiLogMessage.c)
 */

__int64 __fastcall BcdSetElementDataWithFlags(void *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  PVOID v16; // r15
  int v17; // eax
  int *v18; // [rsp+28h] [rbp-59h]
  bool v19; // [rsp+30h] [rbp-51h] BYREF
  char v20; // [rsp+31h] [rbp-50h]
  __int64 v21; // [rsp+38h] [rbp-49h] BYREF
  int v22; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-39h] BYREF
  __int64 v24; // [rsp+50h] [rbp-31h] BYREF
  PVOID P; // [rsp+58h] [rbp-29h] BYREF
  wchar_t DstBuf[24]; // [rsp+60h] [rbp-21h] BYREF

  v23 = a2;
  if ( !a4 && a5 )
    return 3221225485LL;
  v21 = 0LL;
  v8 = 0LL;
  v19 = 0;
  v24 = 0LL;
  P = 0LL;
  if ( !a5 )
  {
    BiDeleteElement(a1, a2);
    return 0LL;
  }
  LOBYTE(v9) = BiIsOfflineHandle((char)a1);
  v20 = v9;
  result = BiAcquireBcdSyncMutant(v9);
  if ( (int)result >= 0 )
  {
    BiLogMessage(2LL, L"Setting element %08x", a2);
    v11 = BiOpenKey(a1, L"Elements", 131101LL, &v21);
    v12 = v11;
    if ( v11 < 0 )
    {
      BiLogMessage(4LL, L"Failed to open key for object's elements. Status: %x", (unsigned int)v11);
    }
    else
    {
      if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
      {
        v12 = -1073741823;
LABEL_15:
        if ( v21 )
          BiCloseKey(v21);
        if ( v12 >= 0 )
        {
          if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(a1, &v23) )
            BiSetFirmwareModifiedFromObject(a1);
        }
        LOBYTE(v13) = v20;
        BiReleaseBcdSyncMutant(v13);
        return (unsigned int)v12;
      }
      v14 = BiCreateKey(v21, DstBuf, 0x10002u, 1u, &v24, &v19);
      v12 = v14;
      if ( v14 < 0 )
      {
        BiLogMessage(4LL, L"Failed to open key for element %s. Status: %x", DstBuf, (unsigned int)v14);
        v8 = v24;
      }
      else
      {
        v18 = &v22;
        v15 = BiConvertElementToRegistryData(a2, a4, a5);
        v8 = v24;
        v12 = v15;
        v16 = P;
        if ( v15 < 0 )
        {
          BiLogMessage(4LL, L"Failed to convert data for element %s. Status: %x", DstBuf, (unsigned int)v15, &P, &v22);
        }
        else
        {
          BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
          LODWORD(v18) = v22;
          v17 = BiSetRegistryValue(v8, L"Element", 0LL);
          v12 = v17;
          if ( v17 < 0 )
            BiLogMessage(
              4LL,
              L"Failed to set registry data for element %s. Status: %x",
              DstBuf,
              (unsigned int)v17,
              v16,
              v18);
        }
        if ( v16 )
          ExFreePoolWithTag(v16, 0x4B444342u);
      }
    }
    if ( v12 < 0 && v19 )
    {
      BiDeleteKey(v8);
      v8 = 0LL;
    }
    if ( v8 )
      BiCloseKey(v8);
    goto LABEL_15;
  }
  return result;
}
