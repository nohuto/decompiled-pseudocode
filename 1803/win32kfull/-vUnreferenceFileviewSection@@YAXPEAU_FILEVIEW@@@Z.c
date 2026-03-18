/*
 * XREFs of ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C007EE54
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C003E43C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     vUnmapFile @ 0x1C004F6B4 (vUnmapFile.c)
 *     ?bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00566C8 (-bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C007EE00 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0082860 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C00BF524 (EngMapFontFileFDInternal.c)
 *     FreeFileView @ 0x1C00FFF18 (FreeFileView.c)
 *     EngUnmapFile @ 0x1C025AFF0 (EngUnmapFile.c)
 *     bMapFile @ 0x1C025B360 (bMapFile.c)
 *     GreMakeFontDir @ 0x1C0289210 (GreMakeFontDir.c)
 * Callees:
 *     ZwWin32CreateSection @ 0x1C00BFBDC (ZwWin32CreateSection.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C025A868 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     ?bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z @ 0x1C025AD88 (-bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z.c)
 */

void __fastcall vUnreferenceFileviewSection(struct _FILEVIEW *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // [rsp+28h] [rbp-60h]
  void *v9; // [rsp+38h] [rbp-50h]
  int v10; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h]
  __int64 v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  __int128 v14; // [rsp+70h] [rbp-18h]
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF
  __int64 v16; // [rsp+98h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a1 + 10) & 2) != 0 )
  {
    v4 = (void *)*((_QWORD *)a1 + 7);
    if ( v4 )
    {
      if ( bUnreferenceNetworkedFontFileNode(v4) )
      {
        v6 = *((_QWORD *)a1 + 6);
        if ( v6 )
        {
          if ( (*((_DWORD *)a1 + 10) & 4) != 0 )
          {
            v7 = *((unsigned int *)a1 + 6);
            v11 = 0LL;
            v12 = 0LL;
            v14 = 0LL;
            v16 = v7;
            v10 = 48;
            v13 = 576;
            if ( (int)ZwWin32CreateSection((int)&Object, v5, (int)&v10, (int)&v16, 4u, v8, v6, v9) >= 0 )
            {
              bCopySection(Object, *((void **)a1 + 4), *((unsigned int *)a1 + 6));
              ObfDereferenceObject(Object);
            }
          }
        }
      }
    }
  }
  v2 = (void *)*((_QWORD *)a1 + 4);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 6);
  if ( v3 )
  {
    ZwClose(v3);
    *((_QWORD *)a1 + 6) = 0LL;
  }
}
