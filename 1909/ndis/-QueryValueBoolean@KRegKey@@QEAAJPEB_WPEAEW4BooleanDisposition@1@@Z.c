/*
 * XREFs of ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C01087AC
 * Callers:
 *     ndisPnPAddDevice @ 0x1C002D984 (ndisPnPAddDevice.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C0127458 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ndisBindBuilderLoadSettings @ 0x1C01464B0 (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0107E54 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBoolean(
        KRegKey *this,
        wchar_t *a2,
        unsigned __int8 *a3,
        enum KRegKey::BooleanDisposition a4)
{
  unsigned int v4; // ebx
  unsigned __int8 v7; // si
  __int64 v8; // r10
  wchar_t *v9; // rax
  __int64 result; // rax
  __int16 v11; // r9
  int v12; // edi
  struct _UNICODE_STRING v13; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  *(_QWORD *)&v13.Length = 0LL;
  v13.Buffer = 0LL;
  v7 = 1;
  if ( !a2 )
  {
LABEL_9:
    if ( KRegKey::QueryValueUlong(this, &v13, &v14) == -1073741772 )
    {
      if ( a4 == FailIfNotFound )
        return (unsigned int)-1073741772;
      v12 = a4 - 1;
      if ( !v12 )
      {
        *a3 = 0;
        return v4;
      }
      if ( v12 != 1 )
        return (unsigned int)-1073741772;
    }
    else if ( v14 )
    {
      if ( v14 != 1 )
        return (unsigned int)-1073739509;
    }
    else
    {
      v7 = 0;
    }
    *a3 = v7;
    return v4;
  }
  v8 = 0x7FFFLL;
  v9 = a2;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v8;
  }
  while ( v8 );
  result = v8 == 0 ? 0xC000000D : 0;
  if ( v8 )
    v11 = 0x7FFF - v8;
  else
    v11 = 0;
  if ( v8 )
  {
    v13.Buffer = a2;
    v13.Length = 2 * v11;
    v13.MaximumLength = 2 * v11 + 2;
    goto LABEL_9;
  }
  return result;
}
