/*
 * XREFs of PiGetRelatedDevice @ 0x1406F9ACC
 * Callers:
 *     PiCMGetRelatedDeviceInstance @ 0x1406EA444 (PiCMGetRelatedDeviceInstance.c)
 *     PiControlGetRelatedDevice @ 0x1406F9990 (PiControlGetRelatedDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059CF10 (PpDevNodeLockTree.c)
 */

__int64 __fastcall PiGetRelatedDevice(__int64 a1, char *a2, _DWORD *a3, int a4)
{
  unsigned int v5; // esi
  _QWORD *v9; // rax
  void *v10; // r14
  __int64 *v11; // rdi
  __int64 v12; // rbp
  int v14; // eax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v16; // rax
  int v17; // eax

  v5 = 0;
  PpDevNodeLockTree(0);
  v9 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
  v10 = v9;
  if ( !v9 || (v11 = *(__int64 **)(v9[39] + 40LL)) == 0LL || (unsigned int)(*((_DWORD *)v11 + 75) - 787) <= 1 )
  {
LABEL_14:
    v5 = -1073741810;
    goto LABEL_11;
  }
  switch ( a4 )
  {
    case 1:
      v11 = (__int64 *)v11[2];
      goto LABEL_6;
    case 2:
      v11 = (__int64 *)v11[1];
      if ( !v11
        || (v14 = *((_DWORD *)v11 + 99), (v14 & 0x2000) == 0)
        || *((_DWORD *)v11 + 101) != 24
        || (v14 & 0x1000) == 0 )
      {
LABEL_18:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        if ( v11 )
        {
          while ( 1 )
          {
            if ( v11[6] )
            {
              v16 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)(v11 + 5), 0x43706E50u);
              if ( v16 )
                break;
            }
            v11 = (__int64 *)*v11;
            if ( !v11 )
              goto LABEL_22;
          }
          ObfDereferenceObjectWithTag(v16, 0x43706E50u);
        }
LABEL_22:
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_7:
        if ( v11 )
        {
          v12 = *((unsigned __int16 *)v11 + 20);
          if ( *a3 <= (unsigned int)v12 )
          {
            v5 = -1073741789;
            LODWORD(v12) = v12 + 2;
          }
          else
          {
            memmove(a2, (const void *)v11[6], *((unsigned __int16 *)v11 + 20));
            *(_WORD *)&a2[v12] = 0;
          }
          *a3 = v12;
          goto LABEL_11;
        }
        goto LABEL_14;
      }
      goto LABEL_24;
    case 3:
      do
      {
LABEL_24:
        v11 = (__int64 *)*v11;
        if ( !v11 )
          break;
        v17 = *((_DWORD *)v11 + 99);
        if ( (v17 & 0x2000) == 0 )
          break;
      }
      while ( *((_DWORD *)v11 + 101) == 24 && (v17 & 0x1000) != 0 );
LABEL_6:
      if ( a4 == 1 )
        goto LABEL_7;
      goto LABEL_18;
  }
  v5 = -1073741811;
LABEL_11:
  PpDevNodeUnlockTree(0);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x43706E50u);
  return v5;
}
