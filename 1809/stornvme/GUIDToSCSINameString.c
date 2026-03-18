/*
 * XREFs of GUIDToSCSINameString @ 0x1C0005DF4
 * Callers:
 *     FormInquiryDeviceIdentifiersData @ 0x1C0005C10 (FormInquiryDeviceIdentifiersData.c)
 * Callees:
 *     HexFromUchar @ 0x1C0005E68 (HexFromUchar.c)
 */

__int64 __fastcall GUIDToSCSINameString(_BYTE *a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  _DWORD *v5; // r10
  _BYTE *v6; // r11
  unsigned int v7; // r9d
  __int64 v8; // rbx
  int v9; // r9d
  __int64 v10; // r11

  v5 = a2;
  v6 = a1;
  if ( a4 < 2 * a3 + 4 )
    return 3238002694LL;
  v7 = 4;
  *a2 = dword_1C001E010;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      LOBYTE(a1) = *v6;
      HexFromUchar(a1, (char *)v5 + v7, a4 - v7);
      v7 = v9 + 2;
      v6 = (_BYTE *)(v10 + 1);
      --v8;
    }
    while ( v8 );
  }
  return 0LL;
}
