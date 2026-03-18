/*
 * XREFs of ?CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z @ 0x1C019A82C
 * Callers:
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C0101C50 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareDeviceVIDPID(struct _UNICODE_STRING *a1, struct _KEY_VALUE_FULL_INFORMATION *a2, int a3)
{
  ULONG NameLength; // r11d
  WCHAR *Name; // rsi
  WCHAR v5; // dx
  unsigned int v6; // edi
  ULONG v8; // r11d
  WCHAR *v9; // rbx
  int v10; // r9d
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx

  NameLength = a2->NameLength;
  Name = a2->Name;
  v5 = a2->Name[0];
  v6 = 0;
  v8 = NameLength >> 1;
  v9 = Name;
  v10 = 0;
  v11 = 0;
  while ( v5 && v11 <= v8 && v11 < 0x45 && (v5 != 38 || v10 != a3) )
  {
    v12 = v10 + 1;
    if ( v5 != 38 )
      v12 = v10;
    ++v11;
    ++v9;
    v10 = v12;
    v5 = *v9;
  }
  v13 = 2 * v11;
  if ( v13 >= 0x2A && a1->Length >= v13 && RtlCompareMemory(a1->Buffer, Name, v13) == v13 )
    return 1;
  return v6;
}
