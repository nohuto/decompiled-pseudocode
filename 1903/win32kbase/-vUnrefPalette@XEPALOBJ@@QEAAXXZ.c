/*
 * XREFs of ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0016FD0
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0016D80 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0016FD0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00170E0 (--1SURFMEM@@QEAA@XZ.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C002D110 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0058678 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00AD4C0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00BE400 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C0128C5C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     ?FreePaletteMemory@@YAXPEAVPALETTE@@@Z @ 0x1C001664C (-FreePaletteMemory@@YAXPEAVPALETTE@@@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0016FD0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C00174C0 (HmgRemoveObject.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0020070 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0125860 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall XEPALOBJ::vUnrefPalette(struct _SLIST_ENTRY **this)
{
  struct _SLIST_ENTRY *v2; // rcx
  struct _SLIST_ENTRY *v3; // rdx
  struct _SLIST_ENTRY *v4; // rcx
  unsigned __int8 *v5; // rax
  struct _SLIST_ENTRY *v6; // rdi
  __int64 v7; // rsi
  unsigned __int8 v8; // cl
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  int v10; // [rsp+38h] [rbp-18h]
  struct _SLIST_ENTRY *Next; // [rsp+60h] [rbp+10h] BYREF

  v2 = *this;
  if ( v2 )
  {
    if ( (*(_DWORD *)(&v2[1].Next + 1) & 0x1000000) != 0 || !HmgRemoveObject((int)v2->Next, 0, 1, 0, 8, 0LL) )
    {
      v6 = *this;
      v9 = 0LL;
      v10 = 0;
      HANDLELOCK::vLockHandle(
        (HANDLELOCK *)&v9,
        (unsigned __int16)LODWORD(v6->Next) | (LODWORD(v6->Next) >> 8) & 0xFF0000,
        0,
        0,
        1);
      if ( v10 )
      {
        v7 = v9;
        v8 = *(_BYTE *)(v9 + 14);
        if ( v8 == 5 )
        {
          v8 = 5;
          if ( gbGdiHmgrAltStacks )
          {
            if ( gpentHmgrAltStacks )
            {
              RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)LODWORD(v6->Next));
              v8 = *(_BYTE *)(v7 + 14);
            }
          }
        }
        TrackHmgrReferenceDecrement(v8, (struct OBJECT *)v6);
        --*((_DWORD *)&v6->Next + 2);
        HANDLELOCK::vUnlock((HANDLELOCK *)&v9);
        if ( v10 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v9);
      }
    }
    else
    {
      v3 = *this;
      v4 = *this;
      if ( (*(_DWORD *)(&(*this)[1].Next + 1) & 0x800) != 0 && v3[3].Next )
      {
        Next = v3[3].Next;
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&Next);
        v4 = *this;
        v3 = *this;
      }
      if ( v4 != *(&v4[7].Next + 1) )
      {
        Next = (struct _SLIST_ENTRY *)*((_QWORD *)&v4[7].Next + 1);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&Next);
        v4 = *this;
        v3 = *this;
      }
      v5 = (unsigned __int8 *)*((_QWORD *)&v4[6].Next + 1);
      if ( v5 )
      {
        if ( v5 != gpRGBXlate )
        {
          Win32FreePool(*((_QWORD *)&v4[6].Next + 1));
          v4 = *this;
        }
        *((_QWORD *)&v4[6].Next + 1) = 0LL;
        v3 = *this;
      }
      FreePaletteMemory(v3);
    }
    *this = 0LL;
  }
}
