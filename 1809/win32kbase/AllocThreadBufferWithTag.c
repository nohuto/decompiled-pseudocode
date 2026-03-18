/*
 * XREFs of AllocThreadBufferWithTag @ 0x1C0024150
 * Callers:
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C005E740 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C005EA70 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall AllocThreadBufferWithTag(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  unsigned int v12; // ecx

  v3 = 0LL;
  if ( a1 < 0xFFFFEFDF )
  {
    if ( (a3 & 0x20) != 0 )
    {
      v12 = a1 + 32;
      if ( v12 > 0x400 && v12 + 4096 >= v12 )
        v12 = (v12 + 4095) & 0xFFFFF000;
      a1 = v12 - 32;
    }
    v5 = a1 + 32;
    if ( a1 != -32 && (int)IsWin32AllocPoolImplSupported() >= 0 )
    {
      v6 = Win32AllocPoolImpl(33LL, v5, a2);
      v7 = (_QWORD *)v6;
      if ( v6 )
      {
        v3 = v6 + 32;
        KeEnterCriticalRegion();
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v7[2] = v3;
        v7[3] = FreeThreadBufferWithTag;
        if ( ThreadWin32Thread )
        {
          v9 = *(_QWORD *)(ThreadWin32Thread + 88);
          v10 = (_QWORD *)(ThreadWin32Thread + 88);
          if ( *(_QWORD **)(v9 + 8) != v10 )
            __fastfail(3u);
          *v7 = v9;
          v7[1] = v10;
          *(_QWORD *)(v9 + 8) = v7;
          *v10 = v7;
        }
        else
        {
          v7[1] = v7;
          *v7 = v7;
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  return v3;
}
