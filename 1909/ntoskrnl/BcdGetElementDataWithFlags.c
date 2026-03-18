/*
 * XREFs of BcdGetElementDataWithFlags @ 0x14073F7EC
 * Callers:
 *     BcdGetElementData @ 0x14073DC08 (BcdGetElementData.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14073E530 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x14073EAA4 (PopBcdReadElement.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1408E1774 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14092E498 (BiGetDefaultBootEntryIdentifier.c)
 *     BiGetElement @ 0x14092E7E8 (BiGetElement.c)
 *     BiBuildIdentifierList @ 0x14092FB9C (BiBuildIdentifierList.c)
 *     BiUpdateBcdObject @ 0x140932050 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x140178184 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _ultow_s @ 0x1401A5700 (_ultow_s.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x14069DD28 (RtlStringFromGUIDEx.c)
 *     BiGetRegistryValue @ 0x14073F438 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14073FA30 (BiOpenKey.c)
 *     BiCloseKey @ 0x14073FBB4 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14073FD94 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x14073FDBC (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x14073FF50 (BiAcquireBcdSyncMutant.c)
 *     BiConvertElementFormatToValueType @ 0x140740168 (BiConvertElementFormatToValueType.c)
 *     BiLogMessage @ 0x1407403B4 (BiLogMessage.c)
 *     BiConvertRegistryDataToElement @ 0x1407403C8 (BiConvertRegistryDataToElement.c)
 */

__int64 __fastcall BcdGetElementDataWithFlags(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v6; // rcx
  char v7; // r15
  int v8; // eax
  __int64 v9; // rsi
  wchar_t *Buffer; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  int RegistryValue; // eax
  PVOID v16; // r15
  __int64 v17; // rcx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // [rsp+20h] [rbp-91h]
  char v22; // [rsp+40h] [rbp-71h]
  __int64 v24; // [rsp+48h] [rbp-69h] BYREF
  unsigned int v25; // [rsp+50h] [rbp-61h]
  unsigned int v26; // [rsp+54h] [rbp-5Dh] BYREF
  __int64 v27; // [rsp+58h] [rbp-59h] BYREF
  PVOID P; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-49h] BYREF
  __int64 v30; // [rsp+78h] [rbp-39h]
  _QWORD v31[2]; // [rsp+80h] [rbp-31h] BYREF
  wchar_t DstBuf[24]; // [rsp+90h] [rbp-21h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v30 = a4;
  v31[0] = 0LL;
  v31[1] = 0LL;
  if ( !a5 || !a4 && *a5 )
    return 3221225485LL;
  LOBYTE(v6) = BiIsOfflineHandle(a1);
  v22 = v6;
  v7 = v6;
  v8 = BiAcquireBcdSyncMutant(v6);
  if ( v8 < 0 )
  {
    BiLogMessage(4LL, L"BcdGetElementDataWithFlags: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v8);
    return v20;
  }
  else
  {
    v24 = 0LL;
    v27 = 0LL;
    v9 = 0LL;
    P = 0LL;
    RtlInitUnicodeString(&DestinationString, 0LL);
    Buffer = L"N/A";
    if ( (int)BiGetObjectIdentifier(a1, v31) >= 0
      && (int)RtlStringFromGUIDEx((unsigned int *)v31, (__int64)&DestinationString, 1) >= 0 )
    {
      Buffer = DestinationString.Buffer;
    }
    v11 = BiOpenKey(a1, L"Elements", 131097LL, &v24);
    v12 = v11;
    if ( v11 < 0 )
    {
      BiLogMessage(
        4LL,
        L"BcdGetElementDataWithFlags: Failed to open elements key.Object: %ws Status: %x",
        Buffer,
        (unsigned int)v11);
    }
    else if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
    {
      v12 = -1073741823;
    }
    else
    {
      v13 = BiOpenKey(v24, DstBuf, 131097LL, &v27);
      if ( v13 < 0 )
      {
        v19 = 4LL;
        if ( v13 == -1073741772 )
          v19 = 2LL;
        BiLogMessage(
          v19,
          L"BcdGetElementDataWithFlags: Failed to open key.Object: %ws Type: %ws Status: %x",
          Buffer,
          DstBuf,
          v13);
        v9 = v27;
        v12 = -1073741275;
      }
      else
      {
        v14 = BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
        v9 = v27;
        v25 = v14;
        RegistryValue = BiGetRegistryValue(v27, L"Element", 0LL, v14, &P, &v26);
        v16 = P;
        v12 = RegistryValue;
        if ( RegistryValue < 0 )
        {
          LODWORD(v21) = RegistryValue;
          BiLogMessage(
            4LL,
            L"BcdGetElementDataWithFlags: Failed to get registry value.Object: %ws Reg type: %lu Status: %x",
            Buffer,
            v25,
            v21);
        }
        else
        {
          v12 = BiConvertRegistryDataToElement(a1, P, v26, a2, 0, v30, a5);
        }
        if ( v16 )
          ExFreePoolWithTag(v16, 0x4B444342u);
        v7 = v22;
      }
    }
    RtlFreeAnsiString(&DestinationString);
    if ( v9 )
      BiCloseKey(v9);
    if ( v24 )
      BiCloseKey(v24);
    LOBYTE(v17) = v7;
    BiReleaseBcdSyncMutant(v17);
    return v12;
  }
}
