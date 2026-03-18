/*
 * XREFs of DxgkGetAdapterMiracastInfo @ 0x1C004E348
 * Callers:
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C01426EC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

void __fastcall DxgkGetAdapterMiracastInfo(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  int v4; // eax
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  memset(a2, 0, 0x20uLL);
  *((_DWORD *)a2 + 6) = 128;
  v4 = (*(_DWORD *)(v2 + 3224) != -1) + 128;
  *((_DWORD *)a2 + 6) = v4;
  if ( (v4 & 1) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    *((_DWORD *)a2 + 6) ^= (*((_DWORD *)a2 + 6) ^ (2 * *(_DWORD *)(v2 + 3220))) & 2;
    v5 = a2[3] & 0xFFFFFFFB | (*(_QWORD *)(v2 + 3232) != 0LL ? 4 : 0);
    *((_DWORD *)a2 + 6) = v5;
    if ( (v5 & 4) != 0 )
    {
      v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3232) + 600LL))) & 8;
      *((_DWORD *)a2 + 6) = v6;
      v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3232) + 600LL))) & 0x10;
      *((_DWORD *)a2 + 6) = v7;
      *((_DWORD *)a2 + 6) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3232) + 600LL))) & 0x20;
      *a2 = *(_QWORD *)(*(_QWORD *)(v2 + 3232) + 608LL);
      a2[1] = *(_QWORD *)(*(_QWORD *)(v2 + 3232) + 616LL);
      a2[2] = *(_QWORD *)(*(_QWORD *)(v2 + 3232) + 624LL);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    *((_DWORD *)a2 + 6) = v4;
  }
}
