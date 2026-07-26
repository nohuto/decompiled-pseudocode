/*
 * XREFs of ndisOidPreAddPMProtocolOffload @ 0x1C0022FB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIsValidPmCountedString @ 0x1C001CF04 (ndisIsValidPmCountedString.c)
 *     ndisSourcePreAddProtocolOffload @ 0x1C00232D4 (ndisSourcePreAddProtocolOffload.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C0023410 (ndisMiniportPreAddProtocolOffload.c)
 *     GetMiniportFromReqTracker @ 0x1C0035134 (GetMiniportFromReqTracker.c)
 */

char __fastcall ndisOidPreAddPMProtocolOffload(__int64 a1)
{
  char MiniportFromReqTracker; // al
  __int64 v3; // rcx
  __int64 v4; // r10
  char v5; // r8
  __int64 v6; // rdi
  char v7; // si
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r9
  char v11; // r10
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  unsigned __int8 v18; // cl
  int v19; // eax

  MiniportFromReqTracker = GetMiniportFromReqTracker();
  v4 = *(_QWORD *)(v3 + 24);
  v5 = 1;
  v6 = *(_QWORD *)(v3 + 32);
  v7 = MiniportFromReqTracker;
  if ( (!v4
     || (v13 = *(_QWORD *)(v4 + 24), v14 = *(_BYTE *)(v13 + 56), v14 > 6u)
     || v14 == 6 && *(_BYTE *)(v13 + 57) >= 0x14u)
    && ((v8 = *(_QWORD *)(a1 + 8)) == 0
     || (*(_DWORD *)(v6 + 88) & 0x4000) != 0
     || (v17 = *(_QWORD *)(v8 + 16), v18 = *(_BYTE *)(v17 + 100), v18 > 6u)
     || v18 == 6 && *(_BYTE *)(v17 + 101) >= 0x14u)
    && *(_DWORD *)(v6 + 4) == 1 )
  {
    if ( (*(_DWORD *)(v6 + 88) & 0xC0000) == 0 )
    {
      v9 = *(_QWORD *)(v6 + 40);
      *(_DWORD *)(a1 + 40) = 0;
      if ( *(_DWORD *)(v6 + 48) < 0xF0u )
      {
        *(_DWORD *)(v6 + 56) = 240;
        *(_DWORD *)(a1 + 40) = -1073676268;
        return v5;
      }
      if ( *(_BYTE *)v9 != 0x80
        || *(_BYTE *)(v9 + 1) != 1
        || *(_WORD *)(v9 + 2) < 0xF0u
        || !ndisIsValidPmCountedString((_WORD *)(v9 + 16))
        || *(_DWORD *)(v10 + 152)
        || (unsigned int)(*(_DWORD *)(v10 + 12) - 1) > 2 )
      {
        *(_DWORD *)(a1 + 40) = -1073676267;
        return v5;
      }
      if ( *(_QWORD *)(a1 + 24) )
      {
        v15 = ndisSourcePreAddProtocolOffload(v11);
        v5 = 1;
        *(_DWORD *)(a1 + 40) = v15;
        return v5;
      }
      if ( *(_QWORD *)(a1 + 8) && (*(_DWORD *)(v6 + 88) & 0x4000) == 0 )
      {
        v19 = ndisSourcePreAddProtocolOffload(0);
        v5 = 1;
        *(_DWORD *)(a1 + 40) = v19;
        return v5;
      }
      if ( *(_QWORD *)a1 )
      {
        v16 = ndisMiniportPreAddProtocolOffload(v7);
        v5 = 1;
        *(_DWORD *)(a1 + 40) = v16;
        return v5;
      }
    }
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return v5;
}
