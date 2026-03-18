/*
 * XREFs of ?UpdateRawKeyState@@YAXEH@Z @ 0x1C0035108
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C0034E70 (xxxProcessKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

void __fastcall UpdateRawKeyState(unsigned __int8 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v4; // eax
  unsigned __int64 v5; // rcx
  _BYTE *v6; // r8
  unsigned int v7; // r9d
  int v8; // eax
  PDEVICE_OBJECT v9; // rcx

  v2 = a2;
  if ( (unsigned __int8)(a1 - 16) <= 2u )
  {
    v3 = 4 >> (a1 - 16);
  }
  else
  {
    v3 = 8;
    if ( (unsigned __int8)(a1 - 91) > 1u )
      v3 = 0;
  }
  v4 = a1 & 3;
  v5 = (unsigned __int64)a1 >> 2;
  v6 = gafRawKeyState;
  v7 = 2 * v4;
  if ( (_DWORD)a2 )
  {
    v8 = (unsigned __int8)gafRawKeyState[v5] & ~(1 << v7);
  }
  else
  {
    a2 = (unsigned __int8)gafRawKeyState[v5];
    if ( !_bittest((const int *)&a2, v7) )
    {
      LODWORD(a2) = a2 ^ (1 << (2 * v4 + 1));
      gafRawKeyState[v5] = a2;
    }
    v8 = (unsigned __int8)a2 | (1 << v7);
  }
  gafRawKeyState[v5] = v8;
  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x108u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsEditionUpdateModifiersForHotkeySupported(v9, a2, v6) >= 0 )
    EditionUpdateModifiersForHotkey(v2, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x109u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
}
