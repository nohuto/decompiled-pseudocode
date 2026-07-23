/*
 * XREFs of PopDirectedDripsIsExcludedDevice @ 0x14087DE04
 * Callers:
 *     PopMarkDirectedDripsCandidateDevice @ 0x14087E044 (PopMarkDirectedDripsCandidateDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     IoGetDevicePropertyData @ 0x140587930 (IoGetDevicePropertyData.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 */

NTSTATUS __fastcall PopDirectedDripsIsExcludedDevice(__int64 a1, char *a2, _BYTE *a3)
{
  NTSTATUS result; // eax
  char *v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rax
  char v10; // al
  unsigned int v11; // ebx
  ULONG v12; // [rsp+40h] [rbp-38h] BYREF
  ULONG v13; // [rsp+44h] [rbp-34h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-30h] BYREF

  result = IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 32),
             &DEVPKEY_Device_ClassGuid,
             0,
             0,
             0x10u,
             v14,
             &v13,
             &v12);
  if ( result >= 0 && v12 == 13 && v13 == 16 )
  {
    *a2 = 0;
    v7 = (char *)&PopDeviceClassExclusionList;
    *a3 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = **(_QWORD **)v7 - v14[0];
      if ( !v9 )
        v9 = *(_QWORD *)(*(_QWORD *)v7 + 8LL) - v14[1];
      if ( !v9 )
        break;
      ++v8;
      v7 += 8;
      if ( v8 >= 2 )
      {
        v10 = *a2;
        goto LABEL_11;
      }
    }
    *a2 = 1;
    v10 = 1;
LABEL_11:
    if ( !v10 )
    {
      v11 = 0;
      while ( !RtlPrefixUnicodeString(
                 (PCUNICODE_STRING)&PopDripsExcludeInstancePrefix + v11,
                 (PCUNICODE_STRING)(a1 + 40),
                 1u) )
      {
        if ( ++v11 )
          return 0;
      }
      *a3 = 1;
    }
    return 0;
  }
  return result;
}
