/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0043354
 * Callers:
 *     SetSysColor @ 0x1C0042D4C (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0042EB8 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C0042FF0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C007DE80 (bDeleteBrush.c)
 *     GreGetBrushColor @ 0x1C00F5FE0 (GreGetBrushColor.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0021790 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     PushThreadGuardedObject @ 0x1C00243F0 (PushThreadGuardedObject.c)
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1C0068F80 (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2)
{
  _QWORD *v2; // rbx
  unsigned int v3; // edi
  __int64 v5; // rax

  *((_DWORD *)this + 2) = 0;
  v2 = (_QWORD *)((char *)this + 16);
  v3 = (unsigned int)a2;
  memset((char *)this + 16, 0, 0x20uLL);
  PushThreadGuardedObject(
    v2,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64),
    (__int64)UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::OnUnexpectedThreadTerminationStatic);
  v5 = HmgShareLockCheck(v3, 16);
  *(_QWORD *)this = v5;
  if ( v5 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    DEC_SHARE_REF_CNT(*(struct OBJECT **)this);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
