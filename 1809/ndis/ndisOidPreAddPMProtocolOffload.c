/*
 * XREFs of ndisOidPreAddPMProtocolOffload @ 0x1C00B9E60
 * Callers:
 *     <none>
 * Callees:
 *     ndisSourcePreAddProtocolOffload @ 0x1C00B9FCC (ndisSourcePreAddProtocolOffload.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00BA0A0 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisIsValidPmCountedString @ 0x1C00BBB44 (ndisIsValidPmCountedString.c)
 *     GetMiniportFromReqTracker @ 0x1C00BBDEC (GetMiniportFromReqTracker.c)
 */

char __fastcall ndisOidPreAddPMProtocolOffload(__int64 a1)
{
  __int64 MiniportFromReqTracker; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  char v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v15; // rcx
  unsigned __int8 v16; // al
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  unsigned __int8 v20; // cl
  int v21; // eax
  char v22; // [rsp+30h] [rbp+8h] BYREF

  MiniportFromReqTracker = GetMiniportFromReqTracker();
  v4 = *(_QWORD *)(v3 + 24);
  v5 = 1;
  v6 = *(_QWORD *)(v3 + 32);
  v7 = MiniportFromReqTracker;
  v22 = 1;
  LOBYTE(v8) = 6;
  if ( (!v4
     || (v15 = *(_QWORD *)(v4 + 24), v16 = *(_BYTE *)(v15 + 56), v16 > 6u)
     || v16 == 6 && *(_BYTE *)(v15 + 57) >= 0x14u)
    && ((v9 = *(_QWORD *)(a1 + 8)) == 0
     || (*(_DWORD *)(v6 + 88) & 0x4000) != 0
     || (v19 = *(_QWORD *)(v9 + 16), v20 = *(_BYTE *)(v19 + 100), v20 > 6u)
     || v20 == 6 && *(_BYTE *)(v19 + 101) >= 0x14u)
    && *(_DWORD *)(v6 + 4) == 1 )
  {
    if ( (*(_DWORD *)(v6 + 88) & 0xC0000) != 0 )
      return 0;
    v10 = *(_QWORD *)(v6 + 40);
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v6 + 48) < 0xF0u )
    {
      *(_DWORD *)(v6 + 56) = 240;
      *(_DWORD *)(a1 + 40) = -1073676268;
      return v5;
    }
    if ( *(_BYTE *)v10 != 0x80
      || *(_BYTE *)(v10 + 1) != 1
      || *(_WORD *)(v10 + 2) < 0xF0u
      || !(unsigned __int8)ndisIsValidPmCountedString(v10 + 16, v8)
      || *(_DWORD *)(v11 + 152)
      || (unsigned int)(*(_DWORD *)(v11 + 12) - 1) > 2 )
    {
      *(_DWORD *)(a1 + 40) = -1073676267;
      return v5;
    }
    if ( !*(_QWORD *)(a1 + 24)
      || (v17 = ndisSourcePreAddProtocolOffload(v12, 0LL, v6, &v22), v5 = v22, *(_DWORD *)(a1 + 40) = v17, !v5) )
    {
      v13 = *(_QWORD *)(a1 + 8);
      if ( !v13
        || (*(_DWORD *)(v6 + 88) & 0x4000) != 0
        || (v21 = ndisSourcePreAddProtocolOffload(0LL, v13, v6, &v22), v5 = v22, *(_DWORD *)(a1 + 40) = v21, !v5) )
      {
        if ( !*(_QWORD *)a1 )
          return 0;
        v18 = ndisMiniportPreAddProtocolOffload(v7, v6, &v22);
        v5 = v22;
        *(_DWORD *)(a1 + 40) = v18;
        if ( !v5 )
          return 0;
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return v5;
}
