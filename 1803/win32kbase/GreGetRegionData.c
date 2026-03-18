/*
 * XREFs of GreGetRegionData @ 0x1C001E520
 * Callers:
 *     NtGdiGetRegionData @ 0x1C001E410 (NtGdiGetRegionData.c)
 *     EngGetRgnData @ 0x1C00D9500 (EngGetRgnData.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0020A90 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vDownload@RGNOBJ@@QEAAXPEAX@Z @ 0x1C0020D30 (-vDownload@RGNOBJ@@QEAAXPEAX@Z.c)
 *     ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x1C0020DB0 (-sizeSave@RGNOBJ@@QEAAKXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C00242E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 */

__int64 __fastcall GreGetRegionData(HRGN a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rsi
  unsigned int v6; // ecx
  unsigned int v7; // edi
  unsigned __int64 v8; // rax
  ULONG v10; // ecx
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+30h] [rbp-18h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v11, a1, 1);
  v5 = v11[0];
  if ( !v11[0] )
  {
    v10 = 6;
    goto LABEL_15;
  }
  v6 = RGNOBJ::sizeSave((RGNOBJ *)v11);
  v7 = v6 + 32;
  if ( !a3 )
    goto LABEL_7;
  if ( v7 > a2 )
  {
    v10 = 87;
LABEL_15:
    EngSetLastError(v10);
    v7 = 0;
    goto LABEL_7;
  }
  *(_DWORD *)a3 = 32;
  v8 = ((unsigned __int64)v7 - 32) >> 4;
  *(_DWORD *)(a3 + 4) = 1;
  *(_DWORD *)(a3 + 8) = v8;
  *(_DWORD *)(a3 + 12) = v6;
  if ( (_DWORD)v8 )
  {
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(v5 + 88);
  }
  else
  {
    *(_DWORD *)(a3 + 16) = 0;
    *(_DWORD *)(a3 + 20) = 0;
    *(_DWORD *)(a3 + 24) = 0;
    *(_DWORD *)(a3 + 28) = 0;
  }
  RGNOBJ::vDownload((RGNOBJ *)v11, (void *)(a3 + 32));
LABEL_7:
  if ( !v12 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v11);
  if ( v5 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
  return v7;
}
