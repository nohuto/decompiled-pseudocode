/*
 * XREFs of MiInitializeWowPeb @ 0x1406E3BE0
 * Callers:
 *     MmCreatePeb @ 0x14067A018 (MmCreatePeb.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400AFB30 (RtlImageDirectoryEntryToData.c)
 *     MiCreatePebOrTeb @ 0x14060E814 (MiCreatePebOrTeb.c)
 *     MmCheckImageMapping @ 0x1406E4008 (MmCheckImageMapping.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiInitializeWowPeb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int16 v9; // ax
  __int64 result; // rax
  _WORD *v11; // rax
  _WORD *v12; // rdx
  __int64 v13; // rax
  int v14; // ecx
  __int16 v15; // ax
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int16 v19; // cx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int16 v22; // ax
  ULONG Size; // [rsp+24h] [rbp-44h] BYREF
  unsigned int *v24; // [rsp+28h] [rbp-40h]
  __int64 v25[7]; // [rsp+30h] [rbp-38h] BYREF
  BOOLEAN MappedAsImage; // [rsp+80h] [rbp+18h] BYREF

  v8 = *(_QWORD *)(a3 + 1064);
  if ( v8 && ((v9 = *(_WORD *)(v8 + 8), v9 == 332) || v9 == 452) )
  {
    result = MmCheckImageMapping(a3, &MappedAsImage);
    if ( (int)result < 0 )
      return result;
    v11 = RtlImageDirectoryEntryToData(*(PVOID *)(a3 + 968), MappedAsImage, 0xAu, &Size);
    v12 = v11;
    v24 = (unsigned int *)v11;
    if ( v11 )
    {
      if ( ((unsigned __int8)v11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = v24[12];
      if ( ((unsigned int)v13 & (unsigned __int64)qword_140572748[*(unsigned __int16 *)(a4 + 8)]) != v13 )
        v13 = 0LL;
      *(_QWORD *)a4 = v13;
      v12 = v24;
    }
    *(_DWORD *)a1 = *(unsigned __int16 *)(a2 + 92);
    *(_DWORD *)(a1 + 4) = *(unsigned __int16 *)(a2 + 72);
    *(_DWORD *)(a1 + 8) = *(unsigned __int16 *)(a2 + 74);
    v14 = *(_DWORD *)(a2 + 76);
    if ( v14 )
    {
      if ( v12 )
      {
        v15 = v12[26];
        if ( v15 )
        {
          *(_WORD *)(a1 + 26) = v15;
          v14 = *(_DWORD *)(a2 + 76);
        }
      }
      *(_DWORD *)(a1 + 12) = (unsigned __int8)v14;
      *(_DWORD *)(a1 + 16) = BYTE1(v14);
      *(_WORD *)(a1 + 24) = HIWORD(v14);
      *(_DWORD *)(a1 + 20) = (v14 ^ 0xBFFFFFFF) >> 30;
    }
    v16 = 1;
  }
  else
  {
    v16 = 2;
  }
  result = MiCreatePebOrTeb(v16, 0LL, v25);
  if ( (int)result >= 0 )
  {
    v17 = v25[0];
    **(_QWORD **)(a3 + 1064) = v25[0];
    v18 = *(_QWORD *)(a3 + 1064);
    if ( v18 )
    {
      v19 = *(_WORD *)(v18 + 8);
      if ( v19 == 332 || v19 == 452 )
      {
        v20 = *(_QWORD *)(a1 + 32);
        if ( v20 > 0x40000000 )
        {
          v20 = 0x100000LL;
          *(_QWORD *)(a1 + 32) = 0x100000LL;
        }
        if ( *(_QWORD *)(a1 + 40) > v20 )
          *(_QWORD *)(a1 + 40) = 0x2000LL;
      }
    }
    v21 = *(_QWORD *)(a3 + 1064);
    if ( v21 && ((v22 = *(_WORD *)(v21 + 8), v22 == 332) || v22 == 452) )
    {
      *(_DWORD *)(v17 + 164) = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(v17 + 168) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v17 + 172) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v17 + 176) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v17 + 174) = *(_WORD *)(a1 + 26);
      *(_DWORD *)(v17 + 120) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(v17 + 124) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v17 + 100) = KeNumberProcessors_0;
      *(_DWORD *)(v17 + 104) = NtGlobalFlag;
      *(_DWORD *)(v17 + 1144) = NtGlobalFlag2;
      *(_QWORD *)(v17 + 112) = qword_1404659F8;
      *(_DWORD *)(v17 + 520) = dword_1405711A8;
      *(_DWORD *)(v17 + 128) = qword_1405711B8;
      *(_DWORD *)(v17 + 132) = qword_1405711B0;
      *(_DWORD *)(v17 + 468) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v17 + 180) = *(_DWORD *)a1;
      *(_DWORD *)(v17 + 184) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v17 + 188) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v17 = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v17 + 3) = *(_BYTE *)(a1 + 97);
      *(_DWORD *)(v17 + 4) = *(_DWORD *)(a1 + 104);
      *(_DWORD *)(v17 + 8) = *(_DWORD *)(a1 + 112);
      *(_DWORD *)(v17 + 88) = *(_DWORD *)(a1 + 120);
      *(_DWORD *)(v17 + 92) = *(_DWORD *)(a1 + 128);
      *(_DWORD *)(v17 + 96) = *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v17 + 1136) = *(_DWORD *)(a1 + 144);
      *(_DWORD *)(v17 + 1140) = *(_DWORD *)(a1 + 152);
    }
    else
    {
      *(_DWORD *)(v17 + 280) = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(v17 + 284) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v17 + 288) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v17 + 292) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v17 + 290) = *(_WORD *)(a1 + 26);
      *(_QWORD *)(v17 + 200) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v17 + 208) = *(_QWORD *)(a1 + 40);
      *(_DWORD *)(v17 + 184) = KeNumberProcessors_0;
      *(_DWORD *)(v17 + 188) = NtGlobalFlag;
      *(_DWORD *)(v17 + 1988) = NtGlobalFlag2;
      *(_QWORD *)(v17 + 192) = qword_1404659F8;
      *(_QWORD *)(v17 + 792) = (unsigned int)dword_1405711A8;
      *(_QWORD *)(v17 + 216) = qword_1405711B8;
      *(_QWORD *)(v17 + 224) = qword_1405711B0;
      *(_DWORD *)(v17 + 704) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v17 + 296) = *(_DWORD *)a1;
      *(_DWORD *)(v17 + 300) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v17 + 304) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v17 = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v17 + 3) = *(_BYTE *)(a1 + 97);
      *(_QWORD *)(v17 + 8) = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v17 + 16) = *(_QWORD *)(a1 + 112);
      *(_QWORD *)(v17 + 160) = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(v17 + 168) = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(v17 + 176) = *(_QWORD *)(a1 + 136);
      *(_QWORD *)(v17 + 1976) = *(_QWORD *)(a1 + 144);
      *(_DWORD *)(v17 + 1984) = *(_DWORD *)(a1 + 152);
    }
    return 0LL;
  }
  return result;
}
