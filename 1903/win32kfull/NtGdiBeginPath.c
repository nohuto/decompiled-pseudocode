/*
 * XREFs of NtGdiBeginPath @ 0x1C014EC50
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiBeginPath(HDC a1)
{
  DC *v1; // rcx
  unsigned int v2; // ebx
  int v4; // eax
  DC *v5[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v6[8]; // [rsp+30h] [rbp-88h] BYREF
  struct HPATH__ **v7; // [rsp+38h] [rbp-80h]

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = v5[0];
  if ( v5[0] )
  {
    if ( *((_QWORD *)v5[0] + 25) )
    {
      v4 = *((_DWORD *)v5[0] + 62);
      if ( (v4 & 2) != 0 )
      {
        *((_DWORD *)v5[0] + 62) = v4 & 0xFFFFFFFD;
        v1 = v5[0];
      }
      *((_DWORD *)v1 + 62) &= ~1u;
      DC::hpath(v1, 0LL);
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v6);
    if ( v7 )
    {
      DC::hpath(v5[0], *v7);
      v2 = 1;
      *((_DWORD *)v5[0] + 62) |= 1u;
    }
    else
    {
      EngSetLastError(8u);
      v2 = 0;
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v6);
  }
  else
  {
    EngSetLastError(6u);
    v2 = 0;
  }
  if ( v5[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  return v2;
}
