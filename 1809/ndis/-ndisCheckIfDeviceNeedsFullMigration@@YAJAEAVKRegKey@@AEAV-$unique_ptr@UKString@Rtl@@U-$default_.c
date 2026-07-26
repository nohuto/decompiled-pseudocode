/*
 * XREFs of ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00D18D0
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00C7EC0 (ndisPnPAddDevice.c)
 * Callees:
 *     WPP_SF_S @ 0x1C0065340 (WPP_SF_S.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C4B40 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsFullMigration(HANDLE *a1, __int64 a2, char *a3)
{
  void *v3; // rbx
  const wchar_t *v5; // rax
  __int64 v7; // r9
  unsigned int v8; // edi
  unsigned int v9; // eax
  char v10; // al
  _UNICODE_STRING v12; // [rsp+20h] [rbp-18h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  *(_QWORD *)&v12.Length = 0LL;
  v12.Buffer = 0LL;
  v13 = 0LL;
  v5 = L"RetiredNetCfgInstanceId";
  v7 = 0x7FFFLL;
  while ( *v5 )
  {
    ++v5;
    if ( !--v7 )
    {
      v8 = -1073741811;
      goto LABEL_9;
    }
  }
  v12.Buffer = L"RetiredNetCfgInstanceId";
  v12.Length = 2 * (0x7FFF - v7);
  v12.MaximumLength = v12.Length + 2;
  v9 = KRegKey::QueryValueString(a1, &v12, &v13);
  v8 = v9;
  if ( v9 == -1073741772 )
  {
    v10 = 0;
  }
  else
  {
    if ( v9 )
      goto LABEL_8;
    if ( (unsigned __int8)byte_1C00A025C >= 3u )
      WPP_SF_S(0x39u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, *(const wchar_t **)(*(_QWORD *)a2 + 8LL));
    v10 = 1;
  }
  *a3 = v10;
  v8 = 0;
LABEL_8:
  v3 = v13;
LABEL_9:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x7274534Bu);
  return v8;
}
