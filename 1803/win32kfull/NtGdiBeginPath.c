/*
 * XREFs of NtGdiBeginPath @ 0x1C0129EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiBeginPath(HDC a1)
{
  DC *v1; // rdi
  unsigned int v2; // ebx
  int v4; // eax
  _QWORD v5[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v6[8]; // [rsp+30h] [rbp-88h] BYREF
  struct HPATH__ **v7; // [rsp+38h] [rbp-80h]

  MDCOBJ::MDCOBJ((MDCOBJ *)v5, a1);
  v1 = (DC *)v5[0];
  v2 = 0;
  if ( v5[0] )
  {
    if ( *(_QWORD *)(v5[0] + 208LL) )
    {
      v4 = *(_DWORD *)(v5[0] + 256LL);
      if ( (v4 & 2) != 0 )
      {
        v4 &= ~2u;
        *(_DWORD *)(v5[0] + 256LL) = v4;
      }
      *((_DWORD *)v1 + 64) = v4 & 0xFFFFFFFE;
      DC::hpath(v1, 0LL);
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v6);
    if ( v7 )
    {
      DC::hpath(v1, *v7);
      *((_DWORD *)v1 + 64) |= 1u;
      v2 = 1;
    }
    else
    {
      EngSetLastError(8u);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v6);
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v2;
}
