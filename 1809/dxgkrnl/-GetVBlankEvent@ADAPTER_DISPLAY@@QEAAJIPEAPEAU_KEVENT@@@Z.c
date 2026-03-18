/*
 * XREFs of ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C0138710
 * Callers:
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C0138524 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetVBlankEvent(ADAPTER_DISPLAY *this, unsigned int a2, struct _KEVENT **a3)
{
  __int64 v4; // rbx
  __int64 v7; // rax

  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 6224LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_BYTE *)DXGPROCESS::GetCurrent() + 322) )
    *a3 = *(struct _KEVENT **)(3760 * v4 + *((_QWORD *)this + 14) + 936);
  return 0LL;
}
