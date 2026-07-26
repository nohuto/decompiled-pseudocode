/*
 * XREFs of ?QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z @ 0x1C01077DC
 * Callers:
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0107998 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0107E54 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueUshort(KRegKey *this, wchar_t *a2, unsigned __int16 *a3)
{
  __int64 v4; // r10
  wchar_t *v5; // rax
  __int64 result; // rax
  __int16 v7; // r9
  struct _UNICODE_STRING v8; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)&v8.Length = 0LL;
  v8.Buffer = 0LL;
  if ( !a2 )
  {
LABEL_9:
    result = KRegKey::QueryValueUlong(this, &v8, &v9);
    if ( (int)result >= 0 )
    {
      if ( v9 > 0xFFFF )
      {
        return 3221225621LL;
      }
      else
      {
        *a3 = v9;
        return 0LL;
      }
    }
    return result;
  }
  v4 = 0x7FFFLL;
  v5 = a2;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    v7 = 0x7FFF - v4;
  else
    v7 = 0;
  if ( v4 )
  {
    v8.Buffer = a2;
    v8.Length = 2 * v7;
    v8.MaximumLength = 2 * v7 + 2;
    goto LABEL_9;
  }
  return result;
}
