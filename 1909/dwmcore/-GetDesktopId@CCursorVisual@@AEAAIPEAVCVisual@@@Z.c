/*
 * XREFs of ?GetDesktopId@CCursorVisual@@AEAAIPEAVCVisual@@@Z @ 0x180212A90
 * Callers:
 *     ?OnChanged@CCursorVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180212B20 (-OnChanged@CCursorVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetVisualReference@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CURSORVISUAL_SETVISUALREFERENCE@@@Z @ 0x180212BB8 (-ProcessSetVisualReference@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CURSORVISUAL_SE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCursorVisual::GetDesktopId(CCursorVisual *this, struct CVisual *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  _DWORD *i; // rcx

  for ( result = 0LL; a2; a2 = (struct CVisual *)*((_QWORD *)a2 + 10) )
  {
    v3 = *((_QWORD *)a2 + 27);
    if ( (*(_DWORD *)(v3 + 4) & 0x80000) != 0 )
    {
      for ( i = (_DWORD *)(v3 + 12); (*i & 0x7F000000) != 0xD000000; i = (_DWORD *)((char *)i + (*i & 0xFFFFFF) + 4) )
        ;
      result = (unsigned int)i[1];
      if ( (_DWORD)result )
        break;
    }
  }
  return result;
}
