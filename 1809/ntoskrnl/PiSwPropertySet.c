/*
 * XREFs of PiSwPropertySet @ 0x1406D7950
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1406D6E58 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfacePropertySet @ 0x1406D777C (PiSwIrpInterfacePropertySet.c)
 *     PiSwCompleteCreate @ 0x1406D806C (PiSwCompleteCreate.c)
 *     PiSwIrpPropertySet @ 0x14071D214 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x140753FAC (PiSwIrpInterfaceRegister.c)
 * Callees:
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     PiPnpRtlEndOperation @ 0x140595CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140596E08 (PiPnpRtlBeginOperation.c)
 *     _PnpOpenObjectRegKey @ 0x140597118 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlSetObjectProperty @ 0x1406E5250 (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiSwPropertySet(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v8; // ebx
  unsigned int v9; // esi
  _QWORD *v10; // rdi
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp-20h] BYREF

  P = 0LL;
  Handle = 0LL;
  v8 = PiPnpRtlBeginOperation(&P);
  if ( v8 >= 0 )
  {
    v8 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a1, a2, 7, 0, (__int64)&Handle);
    if ( v8 >= 0 )
    {
      v9 = 0;
      if ( a4 )
      {
        v10 = (_QWORD *)(a3 + 40);
        do
        {
          v8 = PiPnpRtlSetObjectProperty(
                 *(_QWORD *)&PiPnpRtlCtx,
                 a1,
                 a2,
                 Handle,
                 *(v10 - 2),
                 v10 - 5,
                 *((_DWORD *)v10 - 2),
                 *v10,
                 *((_DWORD *)v10 - 1),
                 0);
          if ( v8 == -1073741275 )
          {
            if ( *((_DWORD *)v10 - 2) )
              break;
            v8 = 0;
          }
          if ( v8 < 0 )
            break;
          ++v9;
          v10 += 6;
        }
        while ( v9 < a4 );
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v8;
}
