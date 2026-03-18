/*
 * XREFs of UserDetachQueueFromInputWindowApiExt @ 0x1C00F97B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0021730 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0021E34 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 *     ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1C00F9834 (-DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C010D070 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 */

void __fastcall UserDetachQueueFromInputWindowApiExt(unsigned __int64 a1, struct IInputQueue *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  CInputQueueProp *v7; // rbx
  int v8; // [rsp+40h] [rbp+18h] BYREF
  CInputQueueProp *v9; // [rsp+48h] [rbp+20h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
  LOBYTE(v4) = 1;
  v6 = HMValidateHandleNoSecure(a1, v4, v5);
  if ( v6 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(v6) && CWindowProp::GetProp<CInputQueueProp>(v6, (__int64 *)&v9) )
    {
      v7 = v9;
      CInputQueueProp::DetachInputQueue(v9, a2);
      if ( !*((_DWORD *)v7 + 6) )
        CWindowProp::RemoveAndDeleteProp(v7);
    }
  }
  if ( !v8 )
    UserSessionSwitchLeaveCrit(v6);
}
