/*
 * XREFs of IopBuildAsynchronousFsdRequest @ 0x140127C80
 * Callers:
 *     IoBuildAsynchronousFsdRequest @ 0x140127C40 (IoBuildAsynchronousFsdRequest.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406CFEF0 (IopBuildSynchronousFsdRequest.c)
 * Callees:
 *     IoAllocateMdl @ 0x140036DE0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x140043F40 (IoFreeIrp.c)
 *     PsGetIoPriorityThread @ 0x14005A5C0 (PsGetIoPriorityThread.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400897F4 (IopVerifierExAllocatePool_0.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140095080 (IoSetDiskIoAttributionFromThread.c)
 *     IoFreeMdl @ 0x1400FEF60 (IoFreeMdl.c)
 *     IopProbeAndLockPages_0 @ 0x140127E30 (IopProbeAndLockPages_0.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 */

__int64 __fastcall IopBuildAsynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6)
{
  SIZE_T v6; // r15
  __int64 Irp; // rbx
  __int64 v11; // rdi
  int v12; // eax
  int v14; // eax
  unsigned int v15; // eax
  PMDL Mdl; // rax
  int v17; // edx
  PVOID Pool_0; // rax

  v6 = a4;
  Irp = IopAllocateIrpExReturn();
  if ( Irp )
  {
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    v11 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v11 - 72) = a1;
    if ( a1 <= 0x1B )
    {
      v12 = 138478080;
      if ( _bittest(&v12, a1) )
      {
LABEL_4:
        *(_DWORD *)(Irp + 16) = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(*(_QWORD *)(Irp + 152))
                                                                     + 1) << 17);
        *(_QWORD *)(Irp + 72) = a6;
        return Irp;
      }
    }
    v14 = *(_DWORD *)(a2 + 48);
    if ( (v14 & 4) != 0 )
    {
      Pool_0 = IopVerifierExAllocatePool_0(NonPagedPoolNxCacheAligned, v6);
      *(_QWORD *)(Irp + 24) = Pool_0;
      if ( Pool_0 )
      {
        if ( a1 == 4 )
        {
          memmove(Pool_0, a3, v6);
          *(_DWORD *)(Irp + 16) = 48;
          goto LABEL_8;
        }
        *(_DWORD *)(Irp + 16) = 112;
        goto LABEL_7;
      }
    }
    else
    {
      if ( (v14 & 0x10) == 0 )
      {
LABEL_7:
        *(_QWORD *)(Irp + 112) = a3;
LABEL_8:
        *(_DWORD *)(v11 - 64) = v6;
        if ( a5 )
          *(_QWORD *)(v11 - 48) = *a5;
        v15 = *(_DWORD *)(a2 + 72);
        if ( v15 >= 7 && (v15 <= 9 || v15 == 36) )
          IoSetDiskIoAttributionFromThread(Irp, *(struct _KTHREAD **)(Irp + 152));
        goto LABEL_4;
      }
      Mdl = IoAllocateMdl(a3, v6, 0, 0, 0LL);
      *(_QWORD *)(Irp + 8) = Mdl;
      if ( Mdl )
      {
        IopProbeAndLockPages_0((_DWORD)Mdl, v17, a1 == 3, a2, *(unsigned __int8 *)(v11 - 72));
        goto LABEL_8;
      }
    }
    IoFreeIrp((PIRP)Irp);
  }
  return 0LL;
}
