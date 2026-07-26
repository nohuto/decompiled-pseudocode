/*
 * XREFs of ndisIovIoctlInvalidate @ 0x1C00B1BD8
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIovIoctlInvalidate(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  UCHAR Irql; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 24LL) + 24LL) )
  {
    if ( *(_DWORD *)(v4 + 8) >= 0x10u )
    {
      if ( ndisSystemSupportsSriov && (v6 = *(_QWORD *)(a1 + 4608)) != 0 && (*(_BYTE *)(v6 + 8) & 3) == 3 )
      {
        IoAcquireCancelSpinLock(&Irql);
        if ( *(_QWORD *)(a1 + 4616) )
        {
          v7 = *(_QWORD *)(a2 + 24);
          *(_WORD *)v7 = *(_WORD *)(a1 + 4672);
          *(_QWORD *)(v7 + 8) = *(_QWORD *)(a1 + 4616);
          *(_QWORD *)(a2 + 56) = 16LL;
          *(_QWORD *)(a1 + 4616) = 0LL;
        }
        else
        {
          *(_QWORD *)(a1 + 4624) = a2;
          v3 = 259;
          *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
          _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ndisIovCancelIoctlInvalidate);
        }
        IoReleaseCancelSpinLock(Irql);
      }
      else
      {
        return (unsigned int)-1073741637;
      }
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}
