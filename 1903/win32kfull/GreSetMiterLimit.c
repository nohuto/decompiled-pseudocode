/*
 * XREFs of GreSetMiterLimit @ 0x1C0115770
 * Callers:
 *     NtGdiSetMiterLimit @ 0x1C0115710 (NtGdiSetMiterLimit.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetMiterLimit(HDC a1, float a2, _DWORD *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v4 = v7[0];
  if ( v7[0] && a2 >= 1.0 )
  {
    if ( a3 )
      *a3 = *(_DWORD *)(v7[0] + 224LL);
    *(float *)(v4 + 224) = a2;
    v5 = 1;
  }
  else
  {
    EngSetLastError(0x57u);
    v5 = 0;
  }
  if ( v7[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  return v5;
}
