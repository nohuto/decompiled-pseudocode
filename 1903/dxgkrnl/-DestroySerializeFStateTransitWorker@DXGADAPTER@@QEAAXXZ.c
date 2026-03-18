/*
 * XREFs of ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C01EC834
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0166B3C (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EEFE8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DestroySerializeFStateTransitWorker(DXGADAPTER *this)
{
  if ( *((_QWORD *)this + 325) )
  {
    if ( *((_QWORD *)this + 426) )
    {
      *((_BYTE *)this + 3416) = 1;
      KeSetEvent((PRKEVENT)((char *)this + 3280), 0, 0);
      ZwWaitForSingleObject(*((HANDLE *)this + 426), 0, 0LL);
      ZwClose(*((HANDLE *)this + 426));
      *((_QWORD *)this + 426) = 0LL;
    }
  }
}
