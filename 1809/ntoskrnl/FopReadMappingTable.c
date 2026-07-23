/*
 * XREFs of FopReadMappingTable @ 0x1409FBABC
 * Callers:
 *     FopInitializeFonts @ 0x1409FB994 (FopInitializeFonts.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     FioFwReadBytesAtOffset @ 0x14017BD48 (FioFwReadBytesAtOffset.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     FopFreeMappingTable @ 0x140952234 (FopFreeMappingTable.c)
 *     FopReadCmapTable @ 0x1409FBE20 (FopReadCmapTable.c)
 */

__int64 __fastcall FopReadMappingTable(__int64 a1, __int64 a2, __int64 *a3)
{
  int v4; // edi
  int v6; // eax
  __int64 v7; // r14
  int BytesAtOffset; // ebx
  _DWORD *v9; // rax
  unsigned int v10; // r8d
  int v11; // ecx
  int v12; // r13d
  unsigned __int16 v13; // bp
  unsigned __int16 v14; // si
  void *Memory; // rax
  __int64 v16; // rdi
  int v17; // eax
  unsigned int v18; // esi
  _WORD *v19; // rax
  _WORD *v20; // rbp
  unsigned int v21; // esi
  _WORD *v22; // rcx
  __int64 v23; // rdx
  int v24; // edx
  __int16 v26; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int16 v27; // [rsp+22h] [rbp-36h]
  unsigned __int16 v28; // [rsp+26h] [rbp-32h]
  __int64 v29; // [rsp+78h] [rbp+20h] BYREF

  v29 = 0LL;
  v4 = a2;
  v6 = FopReadCmapTable(a1, a2, &v29);
  v7 = v29;
  BytesAtOffset = v6;
  if ( v6 >= 0 )
  {
    v9 = (_DWORD *)(v29 + 4);
    v10 = 0;
    if ( !*(_WORD *)(v29 + 2) )
      goto LABEL_24;
    while ( *v9 != 65539 )
    {
      ++v10;
      v9 += 2;
      if ( v10 >= *(unsigned __int16 *)(v29 + 2) )
        goto LABEL_24;
    }
    v11 = v9[1];
    if ( !v11 )
    {
LABEL_24:
      BytesAtOffset = -1073741275;
      goto LABEL_20;
    }
    v12 = v11 + v4;
    BytesAtOffset = FioFwReadBytesAtOffset(a1, v11 + v4, 0xEu, &v26);
    if ( BytesAtOffset < 0 )
    {
      v14 = v28;
      v13 = v27;
    }
    else
    {
      if ( __ROR2__(v26, 8) != 4 )
      {
        BytesAtOffset = -1073741701;
        goto LABEL_20;
      }
      v13 = __ROR2__(v27, 8);
      v14 = __ROR2__(v28, 8);
      BytesAtOffset = 0;
    }
    if ( BytesAtOffset >= 0 )
    {
      Memory = (void *)BgpFwAllocateMemory(0x38uLL);
      v16 = (__int64)Memory;
      if ( Memory )
      {
        memset(Memory, 0, 0x38uLL);
        v17 = v14 >> 1;
        v18 = v13 - 14;
        *(_DWORD *)v16 = v17;
        v19 = (_WORD *)BgpFwAllocateMemory(v18);
        v20 = v19;
        if ( v19 )
        {
          v21 = v18 >> 1;
          *(_QWORD *)(v16 + 8) = v19;
          BytesAtOffset = FioFwReadBytesAtOffset(a1, v12 + 14, 2 * v21, v19);
          if ( BytesAtOffset >= 0 )
          {
            if ( v21 )
            {
              v22 = v20;
              v23 = v21;
              do
              {
                *v22 = __ROR2__(*v22, 8);
                ++v22;
                --v23;
              }
              while ( v23 );
            }
            BytesAtOffset = 0;
          }
          if ( BytesAtOffset >= 0 )
          {
            v24 = 2 * *(_DWORD *)v16;
            *(_QWORD *)(v16 + 24) = v20;
            *(_QWORD *)(v16 + 16) = (char *)v20 + (unsigned int)(v24 + 2);
            *(_QWORD *)(v16 + 32) = (char *)v20 + (unsigned int)(2 * v24 + 2);
            *(_QWORD *)(v16 + 40) = (char *)v20 + (unsigned int)(v24 + 2 * (v24 + 1));
            *(_QWORD *)(v16 + 48) = (char *)v20 + (unsigned int)(4 * v24 + 2);
            *a3 = v16;
            v16 = 0LL;
            BytesAtOffset = 0;
          }
        }
        else
        {
          BytesAtOffset = -1073741801;
        }
        if ( v16 )
          FopFreeMappingTable(v16);
      }
      else
      {
        BytesAtOffset = -1073741801;
      }
    }
  }
LABEL_20:
  if ( v7 )
    BgpFwFreeMemory(v7);
  return (unsigned int)BytesAtOffset;
}
