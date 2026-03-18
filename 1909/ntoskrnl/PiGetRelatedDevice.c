/*
 * XREFs of PiGetRelatedDevice @ 0x14066FCAC
 * Callers:
 *     PiControlGetRelatedDevice @ 0x14066FB40 (PiControlGetRelatedDevice.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407198C8 (PiCMGetRelatedDeviceInstance.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140670048 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeLockTree @ 0x140670114 (PpDevNodeLockTree.c)
 */

__int64 __fastcall PiGetRelatedDevice(__int64 a1, char *a2, _DWORD *a3, int a4)
{
  unsigned int v5; // esi
  __int64 v9; // rax
  void *v10; // r14
  __int64 *v11; // rdi
  __int64 v12; // rbp
  int v14; // eax
  struct _KTHREAD *CurrentThread; // rax
  void *v16; // rax
  int v17; // eax

  v5 = 0;
  PpDevNodeLockTree(0LL);
  v9 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 1131441744LL);
  v10 = (void *)v9;
  if ( !v9
    || (v11 = *(__int64 **)(*(_QWORD *)(v9 + 312) + 40LL)) == 0LL
    || (unsigned int)(*((_DWORD *)v11 + 75) - 787) <= 1 )
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
              v16 = (void *)PnpDeviceObjectFromDeviceInstanceWithTag(v11 + 5, 1131441744LL);
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
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
  PpDevNodeUnlockTree(0LL);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x43706E50u);
  return v5;
}
