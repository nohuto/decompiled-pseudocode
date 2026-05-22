/*
 * XREFs of ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180140A70
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036AC0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180131EEC (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180132F14 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180138CD0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180138E9C (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180140C30 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 * Callees:
 *     ?ResetState@MPCButtonHoldHelper@@QEAAXXZ @ 0x180140A54 (-ResetState@MPCButtonHoldHelper@@QEAAXXZ.c)
 */

void __fastcall MPCButtonHoldHelper::UpdateState(MPCButtonHoldHelper *this, char a2, __int64 a3)
{
  char v3; // al
  char v4; // r9
  char v5; // dl
  char v6; // al

  v3 = *((_BYTE *)this + 8);
  *(_DWORD *)((char *)this + 10) = 0;
  v4 = a2;
  *((_QWORD *)this + 4) = a3;
  if ( a2 )
  {
    if ( v3 )
    {
      if ( *((_BYTE *)this + 9) || (unsigned __int64)(a3 - *((_QWORD *)this + 2)) <= *((_QWORD *)this + 3) )
        goto LABEL_14;
      *((_BYTE *)this + 13) = 1;
      *((_BYTE *)this + 9) = 1;
    }
    else
    {
      *((_QWORD *)this + 2) = a3;
      *((_BYTE *)this + 10) = 1;
    }
    goto LABEL_10;
  }
  v5 = v3;
  if ( v3 && !*((_BYTE *)this + 9) )
  {
    *((_BYTE *)this + 11) = 1;
LABEL_10:
    v5 = v3;
    if ( v4 )
      goto LABEL_14;
  }
  v6 = *((_BYTE *)this + 12);
  if ( v5 )
    v6 = 1;
  *((_BYTE *)this + 12) = v6;
  MPCButtonHoldHelper::ResetState(this);
LABEL_14:
  *((_BYTE *)this + 8) = v4;
}
