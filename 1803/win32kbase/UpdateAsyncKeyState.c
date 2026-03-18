/*
 * XREFs of UpdateAsyncKeyState @ 0x1C0056390
 * Callers:
 *     xxxKeyEvent @ 0x1C0055EB0 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UpdateAsyncKeyState(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 v6; // r8
  int v7; // r9d
  unsigned __int64 v8; // rdx
  unsigned int v9; // r11d
  int v10; // eax
  PDEVICE_OBJECT v11; // rcx
  __int64 result; // rax
  int v13; // eax
  unsigned int v14; // r9d

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x11Au,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsEditionPostUpdateKeyStateEventSupported() >= 0 )
    EditionPostUpdateKeyStateEvent(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x11Bu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  v6 = 0x1C0000000uLL;
  v7 = a2 & 3;
  v8 = (unsigned __int64)(unsigned __int8)a2 >> 2;
  v9 = 2 * v7;
  if ( a3 )
  {
    v10 = *((unsigned __int8 *)&gafAsyncKeyState + v8) & ~(1 << v9);
  }
  else
  {
    *((_BYTE *)&gafAsyncKeyStateRecentDown + ((unsigned __int64)(unsigned __int8)a2 >> 3)) |= 1 << (a2 & 7);
    v13 = *((unsigned __int8 *)&gafAsyncKeyState + v8);
    if ( !_bittest(&v13, v9) )
    {
      v14 = 2 * v7 + 1;
      if ( _bittest(&v13, v14) )
        v13 &= ~(1 << v14);
      else
        v13 |= 1 << v14;
      *((_BYTE *)&gafAsyncKeyState + v8) = v13;
    }
    v10 = (unsigned __int8)v13 | (1 << v9);
  }
  *((_BYTE *)&gafAsyncKeyState + v8) = v10;
  v11 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x11Cu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  result = IsEditionUpdateAsyncKeyStateThreadsSupported(v11, v8, v6);
  if ( (int)result >= 0 )
    result = EditionUpdateAsyncKeyStateThreads(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0x11Du,
             (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return result;
}
