/*
 * XREFs of ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0015EE0
 * Callers:
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0015510 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0015690 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0015B80 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0015D04 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     PopThreadGuardedObject @ 0x1C0015E80 (PopThreadGuardedObject.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0016B30 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     FreeObject @ 0x1C0016BA0 (FreeObject.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0025080 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall RGNOBJAPI::iCombine(RGNOBJAPI *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  struct OBJECT *v8; // rbx
  unsigned int v9; // edi
  struct OBJECT *v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]

  v12 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v11, *(_DWORD *)(*(_QWORD *)this + 80LL));
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
  v8 = v11;
  if ( !v11 )
    goto LABEL_12;
  RGNOBJ::vCopy((RGNOBJ *)&v11, this);
  v9 = RGNOBJ::iCombine((RGNOBJ *)&v11, a2, a3, a4);
  if ( !v9 || !(unsigned int)RGNOBJAPI::bSwap((struct OBJECT **)this, &v11) )
  {
    v8 = v11;
LABEL_12:
    v9 = 0;
    goto LABEL_5;
  }
  v8 = v11;
LABEL_5:
  if ( v8 )
  {
    PopThreadGuardedObject((_QWORD *)v8 + 6);
    if ( v8 != prgnDefault )
      FreeObject(v8, 4LL);
  }
  if ( v12 == 1 )
    REGION::vDeleteREGION(0LL);
  return v9;
}
