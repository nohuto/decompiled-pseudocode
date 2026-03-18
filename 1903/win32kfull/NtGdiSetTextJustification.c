/*
 * XREFs of NtGdiSetTextJustification @ 0x1C02B4E80
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiSetTextJustification(HDC a1, int a2, int a3)
{
  unsigned int v5; // ebx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v5 = 1;
    *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 284LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 288LL) = a3;
    if ( v7[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  else
  {
    return 0;
  }
  return v5;
}
