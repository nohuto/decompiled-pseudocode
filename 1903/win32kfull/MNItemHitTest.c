/*
 * XREFs of MNItemHitTest @ 0x1C0222D58
 * Callers:
 *     FindNCHitEx @ 0x1C0118398 (FindNCHitEx.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0224500 (xxxMNFindWindowFromPoint.c)
 *     xxxMenuItemFromPoint @ 0x1C0246C4C (xxxMenuItemFromPoint.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall MNItemHitTest(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // rax
  int v5; // r11d
  __int64 v6; // r9
  __int64 v7; // r9
  bool v8; // sf
  int v9; // eax
  _QWORD *v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // r10
  unsigned int v14; // r11d
  _QWORD *v15; // r9
  __int64 v16; // rcx
  int v17; // ebx
  int v18; // edi
  int v19; // r10d
  unsigned int v20; // r8d
  __int64 v21; // r9
  unsigned int v22; // r11d
  __int64 *v23; // r10
  __int64 v24; // r8
  int v25; // edx
  int v26; // ecx
  unsigned int v27; // r9d
  __int64 v28; // r10
  unsigned int v29; // r11d
  __int64 v30; // [rsp+20h] [rbp-20h] BYREF
  __int64 v31; // [rsp+28h] [rbp-18h]
  unsigned __int64 v32; // [rsp+60h] [rbp+20h]

  v32 = a3;
  v3 = a1;
  v30 = 0LL;
  v31 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(_DWORD *)(v4 + 44);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v6 = *(_QWORD *)(a2 + 40);
  if ( (*(_DWORD *)(v4 + 40) & 1) != 0 )
  {
    LODWORD(v30) = *(_DWORD *)(v6 + 88) + 3;
    LODWORD(v31) = *(_DWORD *)(v6 + 96) - 3;
    HIDWORD(v30) = *(_DWORD *)(v6 + 92) + 3;
    HIDWORD(v31) = *(_DWORD *)(v6 + 100) - 3;
    if ( !PtInRect(&v30, a3) )
      return 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v7 + 26) & 0x40) != 0 )
      LODWORD(v32) = *(_DWORD *)(v7 + 112) - v32;
    else
      LODWORD(v32) = v32 - *(_DWORD *)(v7 + 104);
    v8 = HIDWORD(v32) - *(_DWORD *)(v7 + 108) < 0;
    v9 = HIDWORD(v32) - *(_DWORD *)(v7 + 108);
    HIDWORD(v32) = v9;
    if ( v8 )
      return 4294967293LL;
    if ( v9 >= *(_DWORD *)(v3 + 68) )
      return 4294967292LL;
  }
  else
  {
    if ( (*(_BYTE *)(v6 + 26) & 0x40) != 0 )
      LODWORD(v32) = *(_DWORD *)(v6 + 96) - a3;
    else
      LODWORD(v32) = a3 - *(_DWORD *)(v6 + 88);
    HIDWORD(v32) = HIDWORD(a3) - *(_DWORD *)(v6 + 92);
  }
  if ( (*(_DWORD *)(v3 + 124) & 3) != 0 )
  {
    v11 = (_QWORD *)MNGetpItemFromIndex(v3, *(_DWORD *)(v3 + 116));
    v15 = v11;
    if ( v11 )
    {
      v16 = *v11;
      v17 = 0;
      v30 = 0LL;
      v18 = 0;
      LODWORD(v31) = *(_DWORD *)(v16 + 72);
      if ( v12 < v14 )
      {
        v19 = *(_DWORD *)(v13 + 68);
        while ( v17 < v19 )
        {
          v17 = v18 + *(_DWORD *)(*v15 + 76LL);
          v18 = v17;
          HIDWORD(v31) = v17;
          if ( PtInRect(&v30, v32) )
            return v20;
          HIDWORD(v30) = v17;
          v15 = (_QWORD *)(v21 + 96);
          if ( v20 + 1 >= v22 )
            return 0xFFFFFFFFLL;
        }
      }
    }
    return 0xFFFFFFFFLL;
  }
  v23 = *(__int64 **)(v3 + 88);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v24 = *v23;
    v25 = *(_DWORD *)(*v23 + 68);
    LODWORD(v30) = *(_DWORD *)(*v23 + 64);
    LODWORD(v31) = *(_DWORD *)(v24 + 72) + v30;
    v26 = v25 + *(_DWORD *)(v24 + 76);
    HIDWORD(v30) = v25;
    HIDWORD(v31) = v26;
    if ( PtInRect(&v30, v32) )
      break;
    v23 = (__int64 *)(v28 + 96);
    if ( v27 + 1 >= v29 )
      return 0xFFFFFFFFLL;
  }
  return v27;
}
