/*
 * XREFs of DpiResetIoMmuContext @ 0x1C0050A9C
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01F57CC (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 * Callees:
 *     IoMmuDeleteIoMmuDomain @ 0x1C004FF34 (IoMmuDeleteIoMmuDomain.c)
 *     IoMmuDeleteTreeNode @ 0x1C004FF64 (IoMmuDeleteTreeNode.c)
 *     DpiGetIoMmuContextFromDevice @ 0x1C0050688 (DpiGetIoMmuContextFromDevice.c)
 */

__int64 __fastcall DpiResetIoMmuContext(__int64 a1)
{
  __int64 IoMmuContextFromDevice; // rdi
  KIRQL v2; // al
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)IoMmuContextFromDevice);
  *(_DWORD *)(IoMmuContextFromDevice + 136) &= ~1u;
  KeReleaseSpinLock((PKSPIN_LOCK)IoMmuContextFromDevice, v2);
  v3 = *(_QWORD **)(IoMmuContextFromDevice + 16);
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v3 )
        {
          v4 = v3;
          v3 = (_QWORD *)*v3;
          *v4 = 0LL;
        }
        if ( !v3[1] )
          break;
        v5 = v3;
        v3 = (_QWORD *)v3[1];
        v5[1] = 0LL;
      }
      v6 = v3[2];
      IoMmuDeleteTreeNode(v3, IoMmuContextFromDevice + 16);
      v7 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v7 )
        break;
      v3 = (_QWORD *)v7;
    }
  }
  *(_QWORD *)(IoMmuContextFromDevice + 16) = 0LL;
  return IoMmuDeleteIoMmuDomain(IoMmuContextFromDevice);
}
