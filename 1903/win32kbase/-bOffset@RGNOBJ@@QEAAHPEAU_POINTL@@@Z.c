/*
 * XREFs of ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C00159E0
 * Callers:
 *     GreOffsetRgn @ 0x1C0015600 (GreOffsetRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C001F930 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00A2620 (EngUpdateDeviceSurface.c)
 *     ?vOffset@EPATHOBJ@@QEAAXAEAVEPOINTL@@@Z @ 0x1C00B0630 (-vOffset@EPATHOBJ@@QEAAXAEAVEPOINTL@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

__int64 __fastcall RGNOBJ::bOffset(int **this, struct _POINTL *a2)
{
  int *v2; // r10
  unsigned int v3; // r8d
  __int64 x; // r15
  __int64 y; // r14
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v14; // r10d
  unsigned int *v15; // rdx
  __int64 v16; // rcx
  unsigned int *v17; // r9
  __int128 v18; // [rsp+20h] [rbp-58h]

  v2 = *this;
  v3 = 1;
  x = a2->x;
  y = a2->y;
  if ( (*this)[21] != 1 )
  {
    v7 = v2[22];
    v8 = v2[24];
    v9 = v2[23];
    v10 = v2[25];
    if ( (int)v7 < (int)v8 && (int)v9 < (int)v10 )
    {
      if ( (unsigned __int64)(x + v7 + 0x80000000LL) > 0xFFFFFFFF
        || (unsigned __int64)(y + v10 + 0x80000000LL) > 0xFFFFFFFF
        || (v11 = x + v8, (unsigned __int64)(v11 + 0x80000000LL) > 0xFFFFFFFF)
        || (v12 = y + v9, DWORD2(v18) = v11, (unsigned __int64)(v12 + 0x80000000LL) > 0xFFFFFFFF)
        || (DWORD1(v18) = v12,
            (((_DWORD)x + (_DWORD)v7) & 0xF8000000) != 0 && (((_DWORD)x + (_DWORD)v7) & 0xF8000000) != -134217728)
        || (((((_DWORD)y + (_DWORD)v10) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
        || (((v11 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
        || (((v12 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
      {
        EngSetLastError(0x216u);
        return 0;
      }
      else
      {
        LODWORD(v18) = x + v7;
        HIDWORD(v18) = y + v10;
        *(_OWORD *)(v2 + 22) = v18;
        v14 = (*this)[21];
        v15 = (unsigned int *)(*this + 26);
        while ( v14 )
        {
          v15[1] += y;
          --v14;
          v15[2] += y;
          v16 = *v15;
          if ( (_DWORD)v16 )
          {
            v17 = &v15[v16 + 3];
            do
            {
              *--v17 += x;
              LODWORD(v16) = v16 - 1;
            }
            while ( (_DWORD)v16 );
            LODWORD(v16) = *v15;
          }
          v15 = (unsigned int *)((char *)v15 + (unsigned int)(4 * v16 + 16));
        }
        v15[-*(v15 - 1) - 2] = 0x7FFFFFFF;
        (*this)[27] = 0x80000000;
      }
    }
  }
  return v3;
}
