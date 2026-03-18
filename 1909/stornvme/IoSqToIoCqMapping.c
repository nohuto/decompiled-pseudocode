/*
 * XREFs of IoSqToIoCqMapping @ 0x1C000A270
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B078 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     IsIntelChatham @ 0x1C0007E44 (IsIntelChatham.c)
 */

char __fastcall IoSqToIoCqMapping(__int64 a1)
{
  char v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int i; // edx
  __int64 v6; // rcx
  char v7; // al
  unsigned int v8; // r10d
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int j; // esi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 *v18; // r9
  unsigned __int8 k; // cl
  __int64 v20; // rdx
  unsigned int m; // edx

  v2 = 0;
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 760) + 50LL) = *(_WORD *)(*(_QWORD *)(a1 + 768) + 168LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 768) + 176LL) = 0;
    LOBYTE(v3) = IsIntelChatham(a1);
    if ( (_BYTE)v3 )
    {
      v3 = *(_QWORD *)(v4 + 768);
      *(_DWORD *)(v3 + 176) = 1;
    }
  }
  else
  {
    LOWORD(v3) = *(_WORD *)(a1 + 274);
    for ( i = 0; i < (unsigned int)v3; ++i )
    {
      v6 = *(_QWORD *)(a1 + 768) + 344LL * i;
      if ( *(_DWORD *)(v6 + 180) )
      {
        v7 = v2;
        *(_QWORD *)(v6 + 180) = 0LL;
        if ( !v2 )
          v7 = 1;
        v2 = v7;
      }
      LODWORD(v3) = *(unsigned __int16 *)(a1 + 274);
    }
    if ( v2 )
    {
      NVMeZeroMemory(
        *(void **)(*(_QWORD *)(a1 + 768) + 192LL),
        8 * (unsigned __int16)v3 * ((*(unsigned __int16 *)(a1 + 272) - 1) / (unsigned __int16)v3 + 1));
      LOWORD(v3) = *(_WORD *)(a1 + 274);
    }
    v8 = 0;
    if ( *(_WORD *)(a1 + 272) )
    {
      do
      {
        v9 = v8++;
        v10 = *(_QWORD *)(a1 + 760) + 136 * v9;
        v11 = (unsigned __int16)((*(unsigned __int16 *)(v10 + 40) - 1) % *(unsigned __int16 *)(a1 + 274) + 1);
        *(_WORD *)(v10 + 50) = v11;
        v12 = *(_QWORD *)(a1 + 768);
        v13 = 344 * v11;
        *(_QWORD *)(*(_QWORD *)(344 * v11 + v12 - 152) + 8LL * *(unsigned int *)(344 * v11 + v12 - 160)) = v10;
        ++*(_DWORD *)(v13 + v12 - 160);
        ++*(_DWORD *)(v13 + v12 - 164);
      }
      while ( v8 < *(unsigned __int16 *)(a1 + 272) );
      LOWORD(v3) = *(_WORD *)(a1 + 274);
    }
    for ( j = 0; j < (unsigned int)v3; ++j )
    {
      v15 = *(_QWORD *)(a1 + 248);
      v16 = j;
      v17 = *(_QWORD *)(a1 + 768) + 344LL * j;
      if ( *(_WORD *)(a1 + 240) != 1 )
        v16 = j + 1;
      *(_DWORD *)(v17 + 176) = *(_DWORD *)(v15 + 24 * v16);
      *(_QWORD *)(v15 + 24 * v16 + 16) = v17;
      if ( *(_BYTE *)(v17 + 200) && (*(_DWORD *)(a1 + 3748) & 0x10) != 0 )
      {
        v18 = *(__int64 **)(v15 + 24 * v16 + 8);
        for ( k = 0; k < 0x40u; ++k )
        {
          v20 = *v18;
          if ( _bittest64(&v20, k) )
            break;
        }
        StorPortNotification(4107LL, a1, v17 + 216);
      }
      LODWORD(v3) = *(unsigned __int16 *)(a1 + 274);
    }
    for ( m = 0; m < (unsigned int)v3; LODWORD(v3) = *(unsigned __int16 *)(a1 + 274) )
    {
      v3 = m++;
      *(_DWORD *)(344 * v3 + *(_QWORD *)(a1 + 768) + 184) = 0;
    }
  }
  return v3;
}
