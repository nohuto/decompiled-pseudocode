/*
 * XREFs of MiMarkKernelImageCfgBits @ 0x140746B78
 * Callers:
 *     MiProcessKernelCfgImage @ 0x140154394 (MiProcessKernelCfgImage.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiInitializeKernelCfg @ 0x140A22E18 (MiInitializeKernelCfg.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     RtlImageDirectoryEntryToData @ 0x1400AFB30 (RtlImageDirectoryEntryToData.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiFlushKernelCfgBitmap @ 0x1402DD670 (MiFlushKernelCfgBitmap.c)
 *     MiSnapDriverRange @ 0x140710DE8 (MiSnapDriverRange.c)
 *     VslCompleteSecureDriverLoad @ 0x140851AA0 (VslCompleteSecureDriverLoad.c)
 *     MiUnlockDriverPages @ 0x140887E90 (MiUnlockDriverPages.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x1408987A4 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiReleaseKernelCfgLock @ 0x140898914 (MiReleaseKernelCfgLock.c)
 */

__int64 __fastcall MiMarkKernelImageCfgBits(__int64 a1, __int64 a2)
{
  NTSTATUS KernelCfgBitmapPageTables; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // eax
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  unsigned int v11; // edx
  unsigned __int64 v12; // r8
  ULONG Size; // [rsp+38h] [rbp-79h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-61h] BYREF
  int v17; // [rsp+60h] [rbp-51h]
  __int64 v18; // [rsp+64h] [rbp-4Dh]
  int v19; // [rsp+6Ch] [rbp-45h]
  __int64 v20; // [rsp+70h] [rbp-41h]
  __int64 v21; // [rsp+78h] [rbp-39h]
  _QWORD v22[14]; // [rsp+88h] [rbp-29h] BYREF

  v18 = 0LL;
  v19 = 0;
  v21 = 0LL;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140464840, 0LL);
    KernelCfgBitmapPageTables = MiAllocateKernelCfgBitmapPageTables(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64));
    MiReleaseKernelCfgLock();
    if ( KernelCfgBitmapPageTables >= 0 )
    {
      v6 = *(unsigned int *)(a1 + 64);
      v7 = *(_QWORD *)(a1 + 48);
      v8 = *(_DWORD *)(a1 + 64);
      v16[0] = a1;
      v16[1] = 0LL;
      v20 = 0LL;
      v17 = (v8 >> 12) + ((v6 & 0xFFF) != 0);
      KernelCfgBitmapPageTables = VslCompleteSecureDriverLoad(*(_QWORD *)(a1 + 112), v7, v6);
      MiUnlockDriverPages(v16);
      if ( KernelCfgBitmapPageTables >= 0 )
      {
        v9 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, &Size);
        v10 = v9;
        if ( v9 && Size >= 0xB0 && v9[21] )
        {
          v11 = 0;
          while ( 1 )
          {
            v11 = MiSnapDriverRange(a1, v11, 2, 0LL, &v14, &v15);
            if ( v14 )
            {
              v12 = v10[20];
              if ( v12 >= (__int64)(v14 << 25) >> 16 && v12 <= (__int64)((v15 << 25) | 0xFFF0000) >> 16 )
                break;
            }
            if ( !v11 )
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
    memset(v22, 0, 0x68uLL);
    v22[1] = *(_QWORD *)(a1 + 48);
    KernelCfgBitmapPageTables = VslpEnterIumSecureMode(2, 216LL, 0LL, (__int64)v22);
    MiFlushKernelCfgBitmap(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64));
  }
  else
  {
    return 0;
  }
  return (unsigned int)KernelCfgBitmapPageTables;
}
