/*
 * XREFs of ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C01BD244
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C014F6C0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01BFA94 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DestroySerializeFStateTransitWorker(DXGADAPTER *this)
{
  if ( *((_QWORD *)this + 321) )
  {
    if ( *((_QWORD *)this + 422) )
    {
      *((_BYTE *)this + 3384) = 1;
      KeSetEvent((PRKEVENT)((char *)this + 3248), 0, 0);
      ZwWaitForSingleObject(*((HANDLE *)this + 422), 0, 0LL);
      ZwClose(*((HANDLE *)this + 422));
      *((_QWORD *)this + 422) = 0LL;
    }
  }
}
