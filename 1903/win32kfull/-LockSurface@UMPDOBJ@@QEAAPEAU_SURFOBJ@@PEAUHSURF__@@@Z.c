/*
 * XREFs of ?LockSurface@UMPDOBJ@@QEAAPEAU_SURFOBJ@@PEAUHSURF__@@@Z @ 0x1C01341D0
 * Callers:
 *     NtGdiEngLockSurface @ 0x1C0134170 (NtGdiEngLockSurface.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall UMPDOBJ::LockSurface(UMPDOBJ *this, HSURF a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  SURFOBJ *v5; // rax
  SURFOBJ *v6; // rsi
  unsigned __int64 pvBits; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  HDEV hdev; // rax
  __int128 v15; // [rsp+30h] [rbp-58h]

  v3 = 0LL;
  v4 = 0LL;
  if ( !a2 )
    return 0LL;
  v5 = EngLockSurface(a2);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  pvBits = (unsigned __int64)v5->pvBits;
  if ( !pvBits || v5->iType || pvBits < (unsigned __int64)MmSystemRangeStart )
  {
    v4 = EngAllocUserMem(0x60uLL, 0x706D7547u);
    if ( v4 )
    {
      v8 = *(_OWORD *)&v6->dhsurf;
      v9 = *(_OWORD *)&v6->dhpdev;
      *(_QWORD *)&v15 = v9;
      v10 = *(_OWORD *)&v6->sizlBitmap.cx;
      v11 = *(_OWORD *)&v6->pvBits;
      v12 = *(_OWORD *)&v6->lDelta;
      hdev = v6->hdev;
      if ( hdev )
      {
        *((_QWORD *)&v15 + 1) = *((_QWORD *)hdev + 2);
        v9 = v15;
      }
      *(_DWORD *)v4 = 1431130959;
      v4[1] = a2;
      *((_OWORD *)v4 + 1) = v8;
      *((_OWORD *)v4 + 2) = v9;
      *((_OWORD *)v4 + 3) = v10;
      *((_OWORD *)v4 + 4) = v11;
      *((_OWORD *)v4 + 5) = v12;
      if ( (_QWORD)v9 )
        v4[4] = *(_QWORD *)(v9 + 8);
    }
  }
  EngUnlockSurface(v6);
  if ( v4 )
    return (struct _SURFOBJ *)(v4 + 2);
  return (struct _SURFOBJ *)v3;
}
