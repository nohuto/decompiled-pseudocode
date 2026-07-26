/*
 * XREFs of ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0108C3C
 * Callers:
 *     ndisPnPAddDevice @ 0x1C002D994 (ndisPnPAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0032B90 (WPP_RECORDER_SF_S.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0108DB8 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsFullMigration(__int64 a1, __int64 a2, char *a3)
{
  void *v4; // rbx
  const wchar_t *v6; // rax
  char v7; // si
  __int64 v8; // r9
  unsigned int v9; // edi
  __int16 v10; // r10
  unsigned int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v14; // [rsp+38h] [rbp-20h]
  void *v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v6 = L"RetiredNetCfgInstanceId";
  v7 = 1;
  v8 = 0x7FFFLL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v8;
  }
  while ( v8 );
  v9 = v8 == 0 ? 0xC000000D : 0;
  if ( v8 )
    v10 = 0x7FFF - v8;
  else
    v10 = 0;
  if ( v8 )
  {
    v14 = L"RetiredNetCfgInstanceId";
    LOWORD(v13) = 2 * v10;
    WORD1(v13) = 2 * v10 + 2;
    v11 = KRegKey::QueryValueString(a1, &v13, &v15);
    v4 = v15;
    v9 = v11;
  }
  if ( v9 == -1073741772 )
  {
    v7 = 0;
LABEL_10:
    *a3 = v7;
    v9 = 0;
    goto LABEL_11;
  }
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xDu,
        0x39u,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        *(const wchar_t **)(*(_QWORD *)a2 + 8LL));
    goto LABEL_10;
  }
LABEL_11:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x7274534Bu);
  return v9;
}
