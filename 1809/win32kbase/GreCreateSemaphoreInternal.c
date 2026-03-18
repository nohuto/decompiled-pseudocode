/*
 * XREFs of GreCreateSemaphoreInternal @ 0x1C002BF30
 * Callers:
 *     GreCreateSemaphore @ 0x1C002D3D0 (GreCreateSemaphore.c)
 *     EngCreateSemaphore @ 0x1C008B860 (EngCreateSemaphore.c)
 *     EngInitializeSafeSemaphore @ 0x1C01068B0 (EngInitializeSafeSemaphore.c)
 *     InitializeGre @ 0x1C021A080 (InitializeGre.c)
 *     bInitPALOBJ @ 0x1C021A8AC (bInitPALOBJ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     MultiUserGreTrackAddEngResource @ 0x1C002BEA0 (MultiUserGreTrackAddEngResource.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 */

__int64 __fastcall GreCreateSemaphoreInternal(char a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 ThreadWin32Thread; // rax

  v2 = Win32AllocPoolNonPaged(136LL, 1835365191LL);
  v3 = v2;
  if ( v2 )
  {
    v3 = v2 + 32;
    v4 = v2;
    v5 = v2;
    if ( ExInitializeResourceLite((PERESOURCE)(v2 + 32)) < 0 )
    {
      Win32FreePool(v4);
      return 0LL;
    }
    else
    {
      MultiUserGreTrackAddEngResource(v5, (a1 & 1) != 0 ? 4 : 1);
      if ( v3 )
      {
        *(_QWORD *)(v3 - 8) = 0LL;
      }
      else
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        if ( ThreadWin32Thread )
        {
          *(_DWORD *)(ThreadWin32Thread + 104) = 0;
          *(_DWORD *)(ThreadWin32Thread + 108) = 0;
        }
      }
    }
  }
  return v3;
}
