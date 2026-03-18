/*
 * XREFs of ?_ReadSettingsFromRegKey@PalmRejection@@YAXXZ @ 0x1C01E08E4
 * Callers:
 *     ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x1C01E07B4 (-CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z.c)
 * Callees:
 *     GetLocalMachineRegistryDWORDValues @ 0x1C00AC5D4 (GetLocalMachineRegistryDWORDValues.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall PalmRejection::_ReadSettingsFromRegKey(PalmRejection *this)
{
  __int64 v1; // rcx
  __int128 *v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // eax
  const wchar_t *v7; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+28h] [rbp-38h]
  unsigned int v9; // [rsp+2Ch] [rbp-34h]
  const wchar_t *v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+38h] [rbp-28h]
  unsigned int v12; // [rsp+3Ch] [rbp-24h]
  const wchar_t *v13; // [rsp+40h] [rbp-20h]
  int v14; // [rsp+48h] [rbp-18h]
  unsigned int v15; // [rsp+4Ch] [rbp-14h]

  v1 = 1000LL;
  v7 = L"HorizEdgeThreshold";
  v2 = (__int128 *)&v7;
  v8 = 1000;
  v10 = L"VertEdgeThreshold";
  v3 = 3LL;
  v9 = 1000;
  v11 = 530;
  v12 = 530;
  v13 = L"TopEdgeThreshold";
  v14 = 1000;
  v15 = 1000;
  do
  {
    GetLocalMachineRegistryDWORDValues(
      v1,
      L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Input\\EdgePalmRejection",
      v2++);
    --v3;
  }
  while ( v3 );
  v4 = 1500;
  v5 = 1500;
  if ( v9 < 0x5DC )
    v5 = v9;
  gPalmRejectHEdgeThr = v5;
  v6 = 1500;
  if ( v12 < 0x5DC )
    v6 = v12;
  gPalmRejectVEdgeThr = v6;
  if ( v15 < 0x5DC )
    v4 = v15;
  gPalmRejectTopEdgeThr = v4;
}
