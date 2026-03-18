/*
 * XREFs of UserDetachQueueFromInputWindowApiExt @ 0x1C0018230
 * Callers:
 *     <none>
 * Callees:
 *     ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1C001771C (-DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0019940 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001A014 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C0132570 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 */

void __fastcall UserDetachQueueFromInputWindowApiExt(__int64 a1, struct IInputQueue *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  CInputQueueProp *v7; // rbx
  int v8; // [rsp+40h] [rbp+18h] BYREF
  CInputQueueProp *v9; // [rsp+48h] [rbp+20h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
  LOBYTE(v4) = 1;
  v5 = HMValidateHandleNoSecure(a1, v4);
  if ( v5 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(v5) )
    {
      if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>(v5, &v9) )
      {
        v7 = v9;
        CInputQueueProp::DetachInputQueue(v9, a2, v6);
        if ( !*((_DWORD *)v7 + 6) )
          CWindowProp::RemoveAndDeleteProp(v7);
      }
    }
  }
  if ( !v8 )
    UserSessionSwitchLeaveCrit(v5);
}
