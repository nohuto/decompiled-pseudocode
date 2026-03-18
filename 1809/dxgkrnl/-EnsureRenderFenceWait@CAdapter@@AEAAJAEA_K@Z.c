/*
 * XREFs of ?EnsureRenderFenceWait@CAdapter@@AEAAJAEA_K@Z @ 0x1C0012F90
 * Callers:
 *     ?SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z @ 0x1C0012F40 (-SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C011D26C (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 */

__int64 __fastcall CAdapter::EnsureRenderFenceWait(CAdapter *this, unsigned __int64 *a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  _QWORD v6[10]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *a2;
  result = 0LL;
  if ( *((_QWORD *)this + 9) != *a2 )
  {
    memset(v6, 0, sizeof(v6));
    LODWORD(v6[0]) = *((_DWORD *)this + 16);
    v6[1] = (char *)this + 48;
    HIDWORD(v6[0]) = 1;
    v6[2] = v2;
    result = DxgkKernelModeWaitForSynchronizationObjectFromGpu(v6);
    if ( (int)result >= 0 )
      *((_QWORD *)this + 9) = *a2;
  }
  return result;
}
