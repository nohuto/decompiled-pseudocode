/*
 * XREFs of ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C014D598
 * Callers:
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C014D384 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetVBlankEvent(ADAPTER_DISPLAY *this, __int64 a2, struct _KEVENT **a3)
{
  __int64 v4; // rbx
  __int64 v7; // rax

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v7 + 24) = 6477LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_BYTE *)DXGPROCESS::GetCurrent((__int64)this, a2) + 298) )
    *a3 = *(struct _KEVENT **)(3968 * v4 + *((_QWORD *)this + 14) + 936);
  return 0LL;
}
