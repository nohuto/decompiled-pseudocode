/*
 * XREFs of GreSetBitmapOwner @ 0x1C001DC00
 * Callers:
 *     <none>
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C001CE84 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     HmgSetOwner @ 0x1C001E630 (HmgSetOwner.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0027830 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C29C4 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall GreSetBitmapOwner(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  SURFACE *v5; // rax
  SURFACE *v6; // rbx
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // rdi
  unsigned __int8 v10; // cl
  unsigned __int64 v11; // rdx
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+38h] [rbp-20h]

  v2 = a2;
  LOBYTE(a2) = 5;
  v4 = 0;
  v5 = (SURFACE *)HmgShareLockCheck(a1, a2);
  v6 = v5;
  if ( v5 )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection(v5) || v2) && (a1 & 0x800000) == 0 )
    {
      LOBYTE(v7) = 5;
      v4 = HmgSetOwner(a1, v2, v7);
    }
    v8 = *(_DWORD *)v6;
    v13 = 0LL;
    v14 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v13, (unsigned __int16)v8 | (v8 >> 8) & 0xFF0000, 0, 0, 1);
    if ( v14 )
    {
      v9 = v13;
      v10 = *(_BYTE *)(v13 + 14);
      if ( v10 == 5 )
      {
        if ( gbGdiHmgrAltStacks )
        {
          v10 = 5;
          if ( gpentHmgrAltStacks )
          {
            v11 = (unsigned __int16)*(_DWORD *)v6 | ((unsigned __int64)*(unsigned int *)v6 >> 8) & 0xFF0000;
            RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v11 | ((unsigned int)v11 >> 8) & 0xFF0000);
            v10 = *(_BYTE *)(v9 + 14);
          }
        }
      }
      TrackHmgrReferenceDecrement(v10, v6);
      --*((_DWORD *)v6 + 2);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
      if ( v14 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
    }
  }
  return v4;
}
