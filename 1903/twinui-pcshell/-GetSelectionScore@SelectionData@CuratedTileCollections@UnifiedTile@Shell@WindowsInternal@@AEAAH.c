/*
 * XREFs of ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x180169008
 * Callers:
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@Z@5@PEAUParsedTaskbarLayout@@@Z @ 0x1801679C8 (--$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z@5@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1801E7578 (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsI.c)
 * Callees:
 *     ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x180168308 (--0-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801683E8 (--0-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V-$a.c)
 *     ?CompareStringVector@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXV?$vector@PEAGV?$allocator@PEAG@std@@@std@@_N01AEAH@Z @ 0x180168B28 (-CompareStringVector@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEA.c)
 *     ?ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_NW4CollectionOfficeSKU@2345@@Z @ 0x180168BE0 (-ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18016A3E8 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::GetSelectionScore(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *this,
        const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *a2)
{
  int *v4; // rcx
  int v5; // ebx
  void **v7; // rbx
  void **v8; // rax
  void ***v9; // rcx
  int v10; // r15d
  void **v11; // r12
  void **v12; // rax
  void **v13; // rdx
  _DWORD *v14; // rcx
  _DWORD *v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  void *v19[3]; // [rsp+38h] [rbp-38h] BYREF
  void *v20[4]; // [rsp+50h] [rbp-20h] BYREF
  void **v21; // [rsp+B0h] [rbp+40h] BYREF
  void **v22; // [rsp+C0h] [rbp+50h]

  LODWORD(v21) = 0;
  if ( !*((_BYTE *)this + 93) && *((_BYTE *)a2 + 93) == 1 && !*((_BYTE *)this + 94) && *((_BYTE *)a2 + 94) == 1 )
    return (unsigned int)-1;
  if ( *((_BYTE *)this + 4)
    && (v4 = (int *)*((_QWORD *)this + 8), (__int64)(*((_QWORD *)this + 9) - (_QWORD)v4) >> 2 == 1) )
  {
    if ( *((_BYTE *)a2 + 4)
      && !WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::ContainsOfficeSKU(
            (__int64)a2,
            *v4) )
    {
      return (unsigned int)-1;
    }
  }
  else if ( *((_BYTE *)a2 + 4) )
  {
    return (unsigned int)-1;
  }
  if ( *((_BYTE *)a2 + 7) && *((_BYTE *)a2 + 95) != *((_BYTE *)this + 95)
    || *((_BYTE *)a2 + 8) && *((_BYTE *)a2 + 96) != *((_BYTE *)this + 96) )
  {
    return (unsigned int)-1;
  }
  v22 = v19;
  v7 = std::vector<unsigned short *>::vector<unsigned short *>(v19, (__int64)a2 + 16);
  v8 = std::vector<unsigned short *>::vector<unsigned short *>(v20, (__int64)this + 16);
  v9 = &v21;
  LOBYTE(v9) = *(_BYTE *)a2;
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::CompareStringVector(
    (__int64)v9,
    (LPCWCH **)v8,
    *(_BYTE *)this,
    (LPCWCH **)v7,
    *(_BYTE *)a2,
    (int *)&v21);
  v5 = (int)v21;
  if ( (int)v21 >= 0 )
  {
    if ( *((_BYTE *)this + 1) && *((_BYTE *)a2 + 1) )
    {
      if ( *((_DWORD *)this + 22) == *((_DWORD *)a2 + 22) )
        v5 = (_DWORD)v21 + 1;
      else
        v5 = -1;
    }
    if ( v5 >= 0 )
    {
      if ( *((_BYTE *)this + 2) && *((_BYTE *)a2 + 2) )
      {
        if ( *((_BYTE *)this + 92) == *((_BYTE *)a2 + 92) )
          ++v5;
        else
          v5 = -1;
      }
      if ( v5 >= 0 )
      {
        v10 = 0;
        v21 = v20;
        v11 = std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
                v20,
                (__int64)a2 + 40);
        v12 = std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
                v19,
                (__int64)this + 40);
        v13 = v12;
        if ( *((_BYTE *)this + 3) && *((_BYTE *)a2 + 3) )
        {
          v14 = *v12;
          if ( *v12 == v12[1] )
          {
LABEL_36:
            v10 = -1;
          }
          else
          {
            while ( 1 )
            {
              v15 = *v11;
              if ( *v11 != v11[1] )
                break;
LABEL_35:
              if ( ++v14 == v13[1] )
                goto LABEL_36;
            }
            while ( *v14 != *v15 )
            {
              if ( ++v15 == v11[1] )
                goto LABEL_35;
            }
            v10 = 1;
          }
        }
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(v13);
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(v11);
        if ( v10 < 0 )
        {
          v5 = v10;
        }
        else
        {
          v5 += 100 * v10;
          v10 = v5;
        }
        if ( v10 >= 0 )
        {
          v16 = v10;
          if ( *((_BYTE *)this + 5) && *((_BYTE *)a2 + 5) )
          {
            if ( *((_BYTE *)this + 93) == *((_BYTE *)a2 + 93) )
            {
              v5 = v10 + 1;
              v16 = v10 + 1;
            }
            else
            {
              v5 = -1;
              v16 = -1;
            }
          }
          if ( v16 >= 0 )
          {
            v17 = v16;
            if ( *((_BYTE *)this + 6) && *((_BYTE *)a2 + 6) )
            {
              if ( *((_BYTE *)this + 94) == *((_BYTE *)a2 + 94) )
              {
                v5 = v16 + 1;
                v17 = v16 + 1;
              }
              else
              {
                v5 = -1;
                v17 = -1;
              }
            }
            if ( v17 >= 0 )
            {
              v18 = v17;
              if ( *((_BYTE *)this + 7) && *((_BYTE *)a2 + 7) )
              {
                if ( *((_BYTE *)this + 95) == *((_BYTE *)a2 + 95) )
                {
                  v5 = v17 + 1;
                  v18 = v17 + 1;
                }
                else
                {
                  v5 = -1;
                  v18 = -1;
                }
              }
              if ( v18 >= 0 && *((_BYTE *)this + 8) && *((_BYTE *)a2 + 8) )
              {
                if ( *((_BYTE *)this + 96) == *((_BYTE *)a2 + 96) )
                  return (unsigned int)(v18 + 1);
                else
                  return (unsigned int)-1;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
