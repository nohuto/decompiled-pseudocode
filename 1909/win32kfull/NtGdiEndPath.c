/*
 * XREFs of NtGdiEndPath @ 0x1C0152940
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiEndPath(HDC a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  ULONG v4; // ecx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v1 = *(_DWORD *)(v5[0] + 248LL);
    v2 = 1;
    if ( (v1 & 1) != 0 )
    {
      *(_DWORD *)(v5[0] + 248LL) = v1 & 0xFFFFFFFE;
      goto LABEL_4;
    }
    v4 = 1003;
  }
  else
  {
    v4 = 6;
  }
  EngSetLastError(v4);
  v2 = 0;
LABEL_4:
  if ( v5[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  return v2;
}
