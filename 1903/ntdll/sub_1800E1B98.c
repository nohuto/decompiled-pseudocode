/*
 * XREFs of sub_1800E1B98 @ 0x1800E1B98
 * Callers:
 *     RtlSetImageMitigationPolicy @ 0x1800E0BA0 (RtlSetImageMitigationPolicy.c)
 * Callees:
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwDeleteKey @ 0x18009E0B0 (ZwDeleteKey.c)
 *     sub_1800E1C18 @ 0x1800E1C18 (sub_1800E1C18.c)
 */

__int64 __fastcall sub_1800E1B98(unsigned __int16 *a1)
{
  int v2; // ebx
  __int64 result; // rax
  char v4; // si
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  while ( 1 )
  {
    result = sub_180073150(a1, 65545LL, 0, &KeyHandle);
    if ( (int)result < 0 )
      break;
    v4 = sub_1800E1C18(KeyHandle);
    if ( v4 )
      ZwDeleteKey(KeyHandle);
    ZwClose(KeyHandle);
    if ( v4 )
    {
      if ( (unsigned int)++v2 < 2 )
        continue;
    }
    return 0LL;
  }
  if ( (_DWORD)result != -1073741772 )
    return result;
  return 0LL;
}
