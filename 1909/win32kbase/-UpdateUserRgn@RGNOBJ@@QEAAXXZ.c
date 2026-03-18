/*
 * XREFs of ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0027100
 * Callers:
 *     GreSetRectRgn @ 0x1C000F200 (GreSetRectRgn.c)
 *     bDeleteRegion @ 0x1C00185B0 (bDeleteRegion.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0020A50 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     SetRectRgnIndirect @ 0x1C0026FE0 (SetRectRgnIndirect.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00275A0 (SetOrCreateRectRgnIndirectPublic.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C002A944 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreGetRegionData @ 0x1C003A8F0 (GreGetRegionData.c)
 *     GreOffsetRgn @ 0x1C0049CF0 (GreOffsetRgn.c)
 *     GreGetRgnBox @ 0x1C00792B0 (GreGetRgnBox.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001FE60 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall RGNOBJ::UpdateUserRgn(RGNOBJ *this)
{
  _DWORD *v2; // r14
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r13d
  unsigned int v10; // r9d
  __int64 v11; // r15
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  _DWORD *v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // edi

  v2 = *(_DWORD **)this;
  if ( *(_QWORD *)this )
  {
    v3 = (unsigned __int16)*v2;
    v4 = v3 | (*v2 >> 8) & 0xFF0000;
    if ( v4 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v17 = (unsigned __int16)v3;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v3,
                                    1)
             + 13) == HIWORD(v4) )
          v4 = v17;
      }
      else
      {
        v4 = (unsigned __int16)v3;
      }
    }
    v5 = *((_QWORD *)gpHandleManager + 2);
    v6 = *(_DWORD *)(v5 + 2056);
    if ( v4 >= v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
    {
      v11 = 0LL;
      v9 = 1;
    }
    else
    {
      if ( v4 >= v6 )
        v7 = ((v4 - v6) >> 16) + 1;
      else
        v7 = 0LL;
      v8 = *(_QWORD *)(v5 + 8 * v7 + 8);
      v9 = 1;
      if ( (_DWORD)v7 )
        v10 = v4 + ((1 - (_DWORD)v7) << 16) - v6;
      else
        v10 = v4;
      v11 = 0LL;
      if ( v10 < *(_DWORD *)(v8 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8LL * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8) )
      {
        v11 = *(_QWORD *)v8 + 24LL * v10;
      }
    }
    if ( v4 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v4,
                                    1)
             + 13) == HIWORD(v4) )
          v4 = (unsigned __int16)v4;
      }
      else
      {
        v4 = (unsigned __int16)v4;
      }
    }
    v12 = *(_DWORD *)(v5 + 2056);
    if ( v4 >= v12 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
      goto LABEL_42;
    if ( v4 >= v12 )
      v13 = ((v4 - v12) >> 16) + 1;
    else
      v13 = 0LL;
    v14 = *(_QWORD *)(v5 + 8 * v13 + 8);
    if ( (_DWORD)v13 )
      v4 += ((1 - (_DWORD)v13) << 16) - v12;
    if ( v4 >= *(_DWORD *)(v14 + 20) )
LABEL_42:
      v15 = 0LL;
    else
      v15 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8LL * (v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8);
    if ( v15 != v2 )
      v11 = 0LL;
    v16 = *(_QWORD *)(v11 + 16);
    if ( v16 && (*(_DWORD *)v16 & 0x10) != 0 )
    {
      if ( v2[21] != 1 )
        v9 = (v2[20] > 0xA0u) + 2;
      *(_DWORD *)(v16 + 4) = v9;
      *(_OWORD *)(v16 + 8) = *(_OWORD *)(*(_QWORD *)this + 88LL);
    }
  }
}
