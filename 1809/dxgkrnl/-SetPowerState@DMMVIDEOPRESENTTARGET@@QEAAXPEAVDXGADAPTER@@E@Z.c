/*
 * XREFs of ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C00194EC
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C00194EC (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C0139CE8 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C0139D7C (-SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C00194EC (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C002EF5C (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C002F4A4 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
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
  v5 = (_QWORD **)((char *)this + 424);
  v7 = *v5;
  if ( !a3 )
  {
    while ( v7 != v5 )
    {
      if ( *((_BYTE *)v7 - 36) )
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
  v9 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 57);
  *((_BYTE *)this + 404) = v4;
  if ( v9 )
    DMMVIDEOPRESENTTARGET::SetPowerState(v9, a2, v4);
  v10 = (char *)this + 464;
  for ( i = (char *)*((_QWORD *)this + 58); i != v10; i = *(char **)i )
    DMMVIDEOPRESENTTARGET::SetPowerState((DMMVIDEOPRESENTTARGET *)(i - 480), a2, v4);
}
