/*
 * XREFs of IoConnectInterruptEx @ 0x140711770
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopConnectInterrupt @ 0x1407119EC (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140711FE4 (IopGetInterruptConnectionData.c)
 *     IopConnectMessageBasedInterrupt @ 0x140754670 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectLineBasedInterrupt @ 0x14075B790 (IopConnectLineBasedInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x14075E104 (IopConnectInterruptFullySpecified.c)
 */

NTSTATUS __stdcall IoConnectInterruptEx(PIO_CONNECT_INTERRUPT_PARAMETERS Parameters)
{
  __int64 Version; // rcx
  NTSTATUS result; // eax
  KIRQL SynchronizeIrql; // al
  KIRQL Irql; // dl
  char v6; // di
  USHORT Group; // si
  PVOID v8; // rdi
  unsigned int v9; // edx
  __int64 v10; // rcx
  KIRQL v11; // al
  __int128 v12; // xmm1
  __m128i v13; // xmm2
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  NTSTATUS v16; // esi
  PKSPIN_LOCK SpinLock; // r9
  PVOID ServiceContext; // r8
  PKSERVICE_ROUTINE ServiceRoutine; // rdx
  PKINTERRUPT *InterruptObject; // rcx
  ULONG Vector; // [rsp+28h] [rbp-59h]
  KIRQL v23; // [rsp+30h] [rbp-51h]
  KIRQL v24; // [rsp+38h] [rbp-49h]
  KINTERRUPT_MODE InterruptMode; // [rsp+40h] [rbp-41h]
  BOOLEAN ShareVector; // [rsp+48h] [rbp-39h]
  KAFFINITY ProcessorEnableMask; // [rsp+68h] [rbp-19h] BYREF
  __int64 v28; // [rsp+70h] [rbp-11h]
  _QWORD v29[12]; // [rsp+78h] [rbp-9h] BYREF
  PVOID P; // [rsp+F0h] [rbp+6Fh] BYREF

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  Version = Parameters->Version;
  switch ( (_DWORD)Version )
  {
    case 1:
      goto LABEL_49;
    case 2:
      return IopConnectLineBasedInterrupt(
               Parameters->FullySpecified.PhysicalDeviceObject,
               Parameters->FullySpecified.InterruptObject,
               Parameters->FullySpecified.ServiceRoutine,
               Parameters->FullySpecified.ServiceContext,
               (__int64)Parameters->FullySpecified.SpinLock,
               Parameters->FullySpecified.SynchronizeIrql);
    case 3:
      goto LABEL_5;
    case 4:
LABEL_49:
      if ( !Parameters->FullySpecified.PhysicalDeviceObject )
        return -1073741811;
      if ( !Parameters->FullySpecified.ServiceRoutine )
        return -1073741811;
      SynchronizeIrql = Parameters->FullySpecified.SynchronizeIrql;
      Irql = Parameters->FullySpecified.Irql;
      if ( SynchronizeIrql < Irql )
        return -1073741811;
      if ( SynchronizeIrql || Irql )
      {
        v6 = 0;
      }
      else
      {
        v6 = 1;
        if ( Parameters->FullySpecified.SpinLock )
          return -1073741811;
      }
      if ( (_DWORD)Version == 4 )
        Group = Parameters->FullySpecified.Group;
      else
        Group = 0;
      if ( (int)IopGetInterruptConnectionData(Parameters->FullySpecified.PhysicalDeviceObject) >= 0 )
      {
        memset(v29, 0, sizeof(v29));
        v8 = P;
        v9 = 0;
        LODWORD(v29[0]) = 0;
        if ( *(_DWORD *)P )
        {
          while ( 1 )
          {
            v10 = 88LL * v9;
            if ( *(_DWORD *)((char *)P + v10 + 12) == Parameters->FullySpecified.Vector )
            {
              v11 = Parameters->FullySpecified.Irql;
              if ( (*((_BYTE *)P + v10 + 16) == v11 || !v11)
                && *(_DWORD *)((char *)P + v10 + 24) == Parameters->FullySpecified.InterruptMode
                && *(_WORD *)((char *)P + v10 + 40) == Group
                && *(_QWORD *)((char *)P + v10 + 32) == Parameters->FullySpecified.ProcessorEnableMask )
              {
                break;
              }
            }
            if ( ++v9 >= *(_DWORD *)P )
              goto LABEL_42;
          }
          LODWORD(v29[0]) = 1;
          v12 = *(_OWORD *)((char *)P + 88 * v9 + 40);
          v13 = *(__m128i *)((char *)P + 88 * v9 + 8);
          *(_OWORD *)&v29[3] = *(_OWORD *)((char *)P + 88 * v9 + 24);
          v14 = *(_OWORD *)((char *)P + 88 * v9 + 56);
          *(_OWORD *)&v29[5] = v12;
          v15 = *(_OWORD *)((char *)P + 88 * v9 + 72);
          *(_OWORD *)&v29[7] = v14;
          *(_QWORD *)&v14 = *((_QWORD *)P + 11 * v9 + 11);
          *(__m128i *)&v29[1] = v13;
          v29[11] = v14;
          *(_OWORD *)&v29[9] = v15;
          if ( !_mm_cvtsi128_si32(v13) && (v29[8] & 0x100000000LL) != 0 )
            Parameters->FullySpecified.ShareVector = 1;
          v16 = IopConnectInterrupt(
                  (unsigned int)&P,
                  Parameters->FullySpecified.ServiceRoutine,
                  0,
                  Parameters->FullySpecified.ServiceContext,
                  0,
                  (__int64)Parameters->FullySpecified.SpinLock,
                  Parameters->FullySpecified.SynchronizeIrql,
                  Parameters->FullySpecified.ShareVector);
          if ( v16 >= 0 )
            *Parameters->FullySpecified.InterruptObject = (PKINTERRUPT)((char *)P + 112);
          ExFreePoolWithTag(v8, 0);
          return v16;
        }
LABEL_42:
        ExFreePoolWithTag(P, 0);
        return -1073741637;
      }
      if ( v6 )
        return -1073741637;
      SpinLock = Parameters->FullySpecified.SpinLock;
      ServiceContext = Parameters->FullySpecified.ServiceContext;
      ServiceRoutine = Parameters->FullySpecified.ServiceRoutine;
      InterruptObject = Parameters->FullySpecified.InterruptObject;
      v28 = 0LL;
      ProcessorEnableMask = Parameters->FullySpecified.ProcessorEnableMask;
      ShareVector = Parameters->FullySpecified.ShareVector;
      InterruptMode = Parameters->FullySpecified.InterruptMode;
      v24 = Parameters->FullySpecified.SynchronizeIrql;
      v23 = Parameters->FullySpecified.Irql;
      Vector = Parameters->FullySpecified.Vector;
      LOWORD(v28) = Group;
      return IopConnectInterruptFullySpecified(
               (_DWORD)InterruptObject,
               (_DWORD)ServiceRoutine,
               (_DWORD)ServiceContext,
               (_DWORD)SpinLock,
               Vector,
               v23,
               v24,
               InterruptMode,
               ShareVector,
               (__int64)&ProcessorEnableMask);
  }
  if ( (_DWORD)Version != 5 )
  {
    Parameters->Version = 3;
    return -1073741637;
  }
LABEL_5:
  result = IopConnectMessageBasedInterrupt(
             Version,
             Parameters->FullySpecified.PhysicalDeviceObject,
             Parameters->FullySpecified.InterruptObject,
             Parameters->FullySpecified.ServiceRoutine,
             Parameters->FullySpecified.ServiceContext,
             Parameters->FullySpecified.SpinLock,
             Parameters->FullySpecified.SynchronizeIrql);
  if ( result < 0 )
  {
    if ( Parameters->MessageBased.FallBackServiceRoutine )
    {
      v16 = IopConnectLineBasedInterrupt(
              Parameters->FullySpecified.PhysicalDeviceObject,
              Parameters->FullySpecified.InterruptObject,
              Parameters->MessageBased.FallBackServiceRoutine,
              Parameters->FullySpecified.ServiceContext,
              (__int64)Parameters->FullySpecified.SpinLock,
              Parameters->FullySpecified.SynchronizeIrql);
      Parameters->Version = 2;
      return v16;
    }
    return -1073741637;
  }
  return result;
}
