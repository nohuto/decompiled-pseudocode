/*
 * XREFs of GreMoveTo @ 0x1C026A29C
 * Callers:
 *     NtGdiMoveTo @ 0x1C02A8B80 (NtGdiMoveTo.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall GreMoveTo(HDC a1, int a2, int a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  __int64 v8; // r10
  _QWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-10h] BYREF

  v5 = 0;
  v10[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v10, a1);
  v8 = v10[0];
  if ( !v10[0] )
    goto LABEL_13;
  if ( (*(_DWORD *)(v10[0] + 36LL) & 0x10000) != 0 )
  {
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
LABEL_13:
    EngSetLastError(6u);
    return v5;
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 152LL) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v10, 1026);
      if ( !v11[0] )
      {
        XDCOBJ::vUnlockFast((XDCOBJ *)v10);
        return v5;
      }
      EXFORMOBJ::bXform(
        (EXFORMOBJ *)v11,
        (struct _POINTFIX *)(*(_QWORD *)(v10[0] + 976LL) + 8LL),
        (struct _POINTL *)(*(_QWORD *)(v10[0] + 976LL) + 216LL),
        1uLL);
      v8 = v10[0];
    }
    *a4 = *(_QWORD *)(*(_QWORD *)(v8 + 976) + 216LL);
  }
  *(_DWORD *)(*(_QWORD *)(v8 + 976) + 216LL) = a2;
  *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 220LL) = a3;
  *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 152LL) |= 0x200u;
  *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 152LL) &= ~0x100u;
  if ( (*(_DWORD *)(v10[0] + 248LL) & 1) == 0 )
    *(_DWORD *)(v10[0] + 240LL) = 0;
  XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return 1;
}
