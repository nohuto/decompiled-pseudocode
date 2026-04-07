/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800256EC
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180012388 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180025694 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800147A0 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowRepresentation@@@Z @ 0x1800257D8 (-Remove@-$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowReprese.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x180026E74 (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18004017C (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18008B034 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     McTemplateU0ppd @ 0x180093328 (McTemplateU0ppd.c)
 */

void __fastcall CWindowData::RemoveSecondaryWindowRepresentation(__int64 a1, __int64 a2, int a3, char a4)
{
  int v7; // edi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  if ( a4 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0ppd(a1, a2, a2, *(_QWORD *)(a1 + 40), a3);
    DynArray<CSecondaryWindowRepresentation *,0>::Remove(a1 + 448, &v13);
  }
  v7 = a3 - 1;
  if ( v7 )
  {
    if ( v7 == 2
      && !CWindowData::IsImmersiveWindow((CWindowData *)a1)
      && !(unsigned int)CBaseObject::Release(*(CBaseObject **)(a1 + 440)) )
    {
      CIconicBitmapRegistry::IconicRepresentationDestroyed(
        *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 37),
        (struct CWindowData *)a1);
      *(_QWORD *)(a1 + 440) = 0LL;
    }
  }
  else
  {
    --*(_DWORD *)(a1 + 480);
    LODWORD(v8) = *(_DWORD *)(a1 + 584);
    v9 = *(_DWORD *)(a1 + 480);
    if ( (_DWORD)v8 )
    {
      do
      {
        v8 = (unsigned int)(v8 - 1);
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 560) + 8 * v8);
        if ( *(char *)(v10 + 605) < 0 )
        {
          if ( *(_QWORD *)(a2 + 32) )
          {
            v11 = *(_DWORD *)(a2 + 152);
            v12 = 0LL;
            if ( v11 )
            {
              while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 128) + 8 * v12) + 32LL) != v10 )
              {
                v12 = (unsigned int)(v12 + 1);
                if ( (unsigned int)v12 >= v11 )
                  goto LABEL_10;
              }
              CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation((CSecondaryWindowRepresentation *)a2, v12);
            }
          }
        }
LABEL_10:
        ;
      }
      while ( (_DWORD)v8 );
      v9 = *(_DWORD *)(a1 + 480);
    }
    if ( !v9 )
      CWindowData::TrackOwnedWindows((CWindowData *)a1, 0);
  }
}
