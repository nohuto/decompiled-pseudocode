/*
 * XREFs of GetDWORDSettingValuesEx @ 0x1C008C7A0
 * Callers:
 *     UpdatePTPConfigFromRegistry @ 0x1C008C550 (UpdatePTPConfigFromRegistry.c)
 *     GetDWORDSettingValues @ 0x1C008C780 (GetDWORDSettingValues.c)
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C008C844 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     ReadPointerDeviceCfgDWORDSetting @ 0x1C008C900 (ReadPointerDeviceCfgDWORDSetting.c)
 */

__int64 __fastcall GetDWORDSettingValuesEx(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rbp
  void *PointerDeviceConfigurationKey; // r14
  unsigned int v8; // edi
  _DWORD *v10; // rbx

  v4 = a3;
  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(a1, 131097LL, 0LL);
  if ( PointerDeviceConfigurationKey )
  {
    v8 = 1;
    if ( (_DWORD)v4 )
    {
      v10 = (_DWORD *)(a2 + 12);
      do
      {
        if ( (int)ReadPointerDeviceCfgDWORDSetting(PointerDeviceConfigurationKey) < 0 )
        {
          if ( a4 )
            *v10 = *(v10 - 1);
          else
            *v10 = -1;
        }
        a2 += 16LL;
        v10 += 4;
        --v4;
      }
      while ( v4 );
    }
    ZwClose(PointerDeviceConfigurationKey);
  }
  else
  {
    return 0;
  }
  return v8;
}
