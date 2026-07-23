/*
 * XREFs of MiStoreLogWriteDisabled @ 0x1402C4230
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14014CCA0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void MiStoreLogWriteDisabled()
{
  int v0; // edx
  ULONG64 v1; // r8
  const struct _TlgProvider_t *v2; // r9
  int v3; // r10d
  int v4; // r11d
  const GUID *v5; // [rsp+20h] [rbp-88h]
  const GUID *v6; // [rsp+28h] [rbp-80h]
  int v7; // [rsp+40h] [rbp-68h] BYREF
  int v8; // [rsp+44h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-58h] BYREF
  int *v10; // [rsp+70h] [rbp-38h]
  int v11; // [rsp+78h] [rbp-30h]
  int v12; // [rsp+7Ch] [rbp-2Ch]
  int *v13; // [rsp+80h] [rbp-28h]
  int v14; // [rsp+88h] [rbp-20h]
  int v15; // [rsp+8Ch] [rbp-1Ch]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 2uLL) )
    {
      v12 = 0;
      v15 = 0;
      v10 = &v7;
      v13 = &v8;
      v7 = v4;
      v8 = v3;
      v11 = v0 + 2;
      v14 = v0 + 2;
      TlgWriteEx(v2, &unk_14036F74E, v1, (ULONG)v2, v5, v6, v0 + 2, &pData);
    }
  }
}
