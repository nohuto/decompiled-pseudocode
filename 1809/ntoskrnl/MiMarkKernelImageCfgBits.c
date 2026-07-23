/*
 * XREFs of MiMarkKernelImageCfgBits @ 0x140710634
 * Callers:
 *     MiProcessKernelCfgImage @ 0x1400F55E4 (MiProcessKernelCfgImage.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiFlushKernelCfgBitmap @ 0x1402C35D0 (MiFlushKernelCfgBitmap.c)
 *     MiSnapDriverRange @ 0x140654DA0 (MiSnapDriverRange.c)
 *     VslCompleteSecureDriverLoad @ 0x1408190E8 (VslCompleteSecureDriverLoad.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x14085CE74 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiReleaseKernelCfgLock @ 0x14085D160 (MiReleaseKernelCfgLock.c)
 */

__int64 __fastcall MiMarkKernelImageCfgBits(__int64 a1, __int64 a2)
{
  NTSTATUS KernelCfgBitmapPageTables; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  unsigned int v8; // edx
  unsigned __int64 v9; // r8
  ULONG Size; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v13[8]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v14; // [rsp+58h] [rbp-80h]

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140439EE8, 0LL);
    KernelCfgBitmapPageTables = MiAllocateKernelCfgBitmapPageTables(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64));
    MiReleaseKernelCfgLock();
    if ( KernelCfgBitmapPageTables >= 0 )
    {
      KernelCfgBitmapPageTables = VslCompleteSecureDriverLoad(
                                    *(_QWORD *)(a1 + 112),
                                    *(_QWORD *)(a1 + 48),
                                    *(unsigned int *)(a1 + 64));
      if ( KernelCfgBitmapPageTables >= 0 )
      {
        v6 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, &Size);
        v7 = v6;
        if ( v6 && Size >= 0xB0 && v6[21] )
        {
          v8 = 0;
          while ( 1 )
          {
            v8 = MiSnapDriverRange(a1, v8, 2, 0LL, &v11, &v12);
            if ( v11 )
            {
              v9 = v7[20];
              if ( v9 >= (__int64)(v11 << 25) >> 16 && v9 <= (__int64)((v12 << 25) | 0xFFF0000) >> 16 )
                break;
            }
            if ( !v8 )
              return (unsigned int)KernelCfgBitmapPageTables;
          }
          *(_DWORD *)(a1 + 104) |= 0x800u;
        }
        else
        {
          *(_DWORD *)(a1 + 104) |= 0x100u;
        }
      }
    }
  }
  else if ( (MiFlags & 0x80000) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 48);
    KernelCfgBitmapPageTables = VslpEnterIumSecureMode(2u, 216LL, 0, (__int64)v13);
    MiFlushKernelCfgBitmap(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64));
  }
  else
  {
    return 0;
  }
  return (unsigned int)KernelCfgBitmapPageTables;
}
