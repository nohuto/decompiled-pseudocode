/*
 * XREFs of ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180078E34
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800671F0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180078CC0 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180078F04 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18007B8BC (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1801C16F4 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::PropagateBackdropUpdates(CVisual *this, int a2, int a3)
{
  CVisual *v3; // rax

  if ( a2 || a3 )
  {
    v3 = this;
    do
    {
      *((_DWORD *)this + 66) += a2;
      *((_DWORD *)this + 67) += a3;
      this = (CVisual *)*((_QWORD *)this + 10);
      if ( v3 )
      {
        v3 = (CVisual *)*((_QWORD *)v3 + 10);
        if ( v3 )
          v3 = (CVisual *)*((_QWORD *)v3 + 10);
      }
    }
    while ( this != v3 );
  }
}
