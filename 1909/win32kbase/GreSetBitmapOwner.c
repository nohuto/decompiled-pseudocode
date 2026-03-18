/*
 * XREFs of GreSetBitmapOwner @ 0x1C00160B0
 * Callers:
 *     GreSetBrushOwner @ 0x1C001B890 (GreSetBrushOwner.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0016200 (HmgSetOwner.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C001BDB0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     HmgShareLockCheck @ 0x1C001D840 (HmgShareLockCheck.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0020E70 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0122FF0 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall GreSetBitmapOwner(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int8 v9; // cl
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]

  v2 = a2;
  LOBYTE(a2) = 5;
  v3 = 0;
  v5 = HmgShareLockCheck(a1, a2);
  v7 = v5;
  if ( v5 )
  {
    if ( (*(_WORD *)(v5 + 100) || !*(_QWORD *)(v5 + 192) || v2) && (a1 & 0x800000) == 0 )
    {
      LOBYTE(v6) = 5;
      v3 = HmgSetOwner(a1, v2, v6);
    }
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v11, (struct OBJECT *)v7, 0, 0, 1);
    if ( v12 )
    {
      v8 = v11;
      v9 = *(_BYTE *)(v11 + 14);
      if ( v9 == 5 )
      {
        if ( gbGdiHmgrAltStacks )
        {
          v9 = 5;
          if ( gpentHmgrAltStacks )
          {
            RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v7);
            v9 = *(_BYTE *)(v8 + 14);
          }
        }
      }
      TrackHmgrReferenceDecrement(v9, (struct OBJECT *)v7);
      --*(_DWORD *)(v7 + 8);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
      if ( v12 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
    }
  }
  return v3;
}
