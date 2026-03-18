/*
 * XREFs of ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C001AEA4
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C001AEA4 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C014A434 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C014A4C8 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C001AEA4 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0034758 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0034CB0 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetPowerState(
        DMMVIDEOPRESENTTARGET *this,
        struct DXGADAPTER *a2,
        unsigned __int8 a3)
{
  unsigned __int8 v4; // di
  _QWORD **v5; // rcx
  _QWORD *v7; // rax
  unsigned int v8; // edx
  DMMVIDEOPRESENTTARGET *v9; // rcx
  char *v10; // rsi
  char *i; // rbx
  char v12; // al

  v4 = a3;
  v5 = (_QWORD **)((char *)this + 440);
  v7 = *v5;
  if ( !a3 )
  {
    while ( v7 != v5 )
    {
      if ( *((_BYTE *)v7 - 52) )
      {
        v4 = 1;
        break;
      }
      v7 = (_QWORD *)*v7;
    }
  }
  v8 = *((_DWORD *)this + 100);
  if ( v8 != -1 )
  {
    v12 = *((_BYTE *)this + 404);
    if ( v4 )
    {
      if ( !v12 )
        DXGADAPTER::SetPowerComponentActiveCBInternal(a2, v8, 1u, 0);
    }
    else if ( v12 )
    {
      DXGADAPTER::SetPowerComponentIdleCBInternal(a2, v8, 0);
    }
  }
  v9 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 59);
  *((_BYTE *)this + 404) = v4;
  if ( v9 )
    DMMVIDEOPRESENTTARGET::SetPowerState(v9, a2, v4);
  v10 = (char *)this + 480;
  for ( i = (char *)*((_QWORD *)this + 60); i != v10; i = *(char **)i )
    DMMVIDEOPRESENTTARGET::SetPowerState((DMMVIDEOPRESENTTARGET *)(i - 496), a2, v4);
}
