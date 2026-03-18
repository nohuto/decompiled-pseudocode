/*
 * XREFs of ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1C022D964
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02387C0 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall InkDeviceParser::GetDeviceCaps(
        PHIDP_PREPARSED_DATA PreparsedData,
        struct UsageValueInfo *a2,
        struct UsageValueInfo *a3,
        struct InkDevice::Capabilities *a4)
{
  _BYTE *v5; // rsi
  unsigned int v9; // r12d
  struct UsageValueInfo *v10; // rdi
  USAGE v11; // r9
  USAGE v12; // dx
  NTSTATUS SpecificValueCaps; // ebx
  _BYTE *v14; // rsi
  struct UsageValueInfo *v15; // rdi
  char v16; // al
  unsigned int v17; // r14d
  USAGE v18; // r9
  USAGE v19; // dx
  USHORT ValueCapsLength[4]; // [rsp+40h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-80h] BYREF
  USHORT *v23; // [rsp+68h] [rbp-60h]
  __int64 v24; // [rsp+70h] [rbp-58h]

  v5 = &unk_1C02D9E6C;
  v9 = 0;
  v10 = a2;
  while ( 1 )
  {
    v11 = *((_WORD *)v5 - 1);
    v12 = *((_WORD *)v5 - 2);
    ValueCapsLength[0] = 1;
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Feature,
                          v12,
                          0,
                          v11,
                          (PHIDP_VALUE_CAPS)((char *)a2 + 76 * v9 + 4),
                          ValueCapsLength,
                          PreparsedData);
    if ( SpecificValueCaps < 0 )
    {
      *(_BYTE *)v10 = 0;
      if ( *v5 )
        goto LABEL_11;
      SpecificValueCaps = 0;
      goto LABEL_8;
    }
    *(_BYTE *)v10 = 1;
    if ( *((_BYTE *)v10 + 6) != *((_BYTE *)a2 + 6) )
      break;
LABEL_8:
    ++v9;
    v10 = (struct UsageValueInfo *)((char *)v10 + 76);
    v5 += 6;
    if ( v9 >= 7 )
      goto LABEL_11;
  }
  if ( !*v5 )
  {
    *(_BYTE *)v10 = 0;
    goto LABEL_8;
  }
  SpecificValueCaps = -1073741762;
LABEL_11:
  if ( SpecificValueCaps < 0 )
  {
    if ( dword_1C030C390 > 2u )
      goto LABEL_13;
    return (unsigned int)SpecificValueCaps;
  }
  v14 = &unk_1C02D9E60;
  *(_BYTE *)a4 = *((_BYTE *)a2 + 6);
  v15 = a3;
  *((_BYTE *)a4 + 2) = *((_BYTE *)a2 + 380);
  v16 = *((_BYTE *)a2 + 456);
  v17 = 0;
  *((_BYTE *)a4 + 1) = v16;
  while ( 2 )
  {
    v18 = *((_WORD *)v14 - 1);
    v19 = *((_WORD *)v14 - 2);
    ValueCapsLength[0] = 1;
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Output,
                          v19,
                          0,
                          v18,
                          (PHIDP_VALUE_CAPS)((char *)a3 + 76 * v17 + 4),
                          ValueCapsLength,
                          PreparsedData);
    if ( SpecificValueCaps < 0 )
    {
      *(_BYTE *)v15 = 0;
      if ( *v14 )
        goto LABEL_24;
      SpecificValueCaps = 0;
LABEL_21:
      ++v17;
      v15 = (struct UsageValueInfo *)((char *)v15 + 76);
      v14 += 6;
      if ( v17 )
        goto LABEL_24;
      continue;
    }
    break;
  }
  *(_BYTE *)v15 = 1;
  if ( *((_BYTE *)v15 + 6) == *((_BYTE *)a3 + 6) )
    goto LABEL_21;
  if ( !*v14 )
  {
    *(_BYTE *)v15 = 0;
    goto LABEL_21;
  }
  SpecificValueCaps = -1073741762;
LABEL_24:
  if ( SpecificValueCaps >= 0 )
  {
    if ( *((_WORD *)a3 + 11) == 8 )
    {
      *((_BYTE *)a4 + 4) = *((_BYTE *)a3 + 6);
      *((_DWORD *)a4 + 2) = *((unsigned __int16 *)a3 + 12);
      return (unsigned int)SpecificValueCaps;
    }
    if ( dword_1C030C390 > 2u )
    {
      *(_DWORD *)ValueCapsLength = -1073741762;
      v23 = ValueCapsLength;
      v24 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    }
    return 3221225534LL;
  }
  else
  {
    if ( dword_1C030C390 > 2u )
    {
LABEL_13:
      *(_DWORD *)ValueCapsLength = SpecificValueCaps;
      v23 = ValueCapsLength;
      v24 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    }
    return (unsigned int)SpecificValueCaps;
  }
}
