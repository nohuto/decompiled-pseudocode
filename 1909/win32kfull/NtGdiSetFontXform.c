/*
 * XREFs of NtGdiSetFontXform @ 0x1C0145650
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiSetFontXform(HDC a1, unsigned int a2, unsigned int a3)
{
  int v5; // xmm6_4
  int v6; // xmm7_4
  DC *v7; // rax
  unsigned int v8; // ebx
  DC *v9; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v11; // rdi
  int v13; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+24h] [rbp-3Ch] BYREF
  DC *v15; // [rsp+28h] [rbp-38h] BYREF
  int v16; // [rsp+30h] [rbp-30h]
  unsigned int v17; // [rsp+34h] [rbp-2Ch]
  int v18; // [rsp+88h] [rbp+28h] BYREF

  v18 = 0;
  if ( bConvertDwordToFloat(a2, (float *)&v14)
    && bConvertDwordToFloat(a3, (float *)&v18)
    && (v5 = v18, v6 = v14, v15 = 0LL, v16 = 0, v17 = 0, XDCOBJ::vLock((XDCOBJ *)&v15, a1), (v7 = v15) != 0LL) )
  {
    *((_DWORD *)v15 + 113) = v6;
    v8 = 1;
    *((_DWORD *)v7 + 114) = v5;
    *((_DWORD *)v15 + 63) |= 1u;
    v9 = v15;
    if ( v15 )
    {
      if ( v16 && (*((_DWORD *)v15 + 11) & 2) != 0 )
      {
        if ( !v17 )
        {
          UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v15);
          v9 = v15;
          if ( UserAttr )
          {
            DC::RestoreAttributes(v15, UserAttr);
            v9 = v15;
          }
        }
        *((_DWORD *)v9 + 11) &= ~2u;
        v16 = 0;
        v9 = v15;
      }
      v13 = 0;
      v11 = *(_QWORD *)v9;
      HmgDecrementExclusiveReferenceCountEx(v9, v17, &v13);
      if ( v13 )
        bDeleteDCInternalEx(v11, 0LL);
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
