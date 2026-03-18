/*
 * XREFs of ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x180075F08
 * Callers:
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x18004F360 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x180056380 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x180194D68 (-erase@-$list@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V-$allocator@U-$pair@.c)
 */

void __fastcall CDropShadow::RemoveVisualFromCache(CDropShadow *this, struct CVisual *a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r11
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 *i; // r11
  __int64 *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // r11
  __int64 v14; // rdx
  char v15; // [rsp+40h] [rbp+8h] BYREF
  struct CVisual *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  v4 = std::_Hash_bytes((const unsigned __int8 *)&v16, 8uLL);
  v6 = *((_QWORD *)this + 27);
  v7 = *((_QWORD *)this + 30) & v4;
  v8 = (__int64 *)*((_QWORD *)this + 25);
  v9 = 2 * v7;
  for ( i = *(__int64 **)(v6 + 16 * v7); ; i = (__int64 *)*i )
  {
    v11 = *(__int64 **)(v6 + 8 * v9) == v8 ? (__int64 *)*((_QWORD *)this + 25) : **(__int64 ***)(v6 + 8 * v9 + 8);
    if ( i == v11 )
      break;
    if ( (struct CVisual *)i[2] == a2 )
      goto LABEL_6;
  }
  i = (__int64 *)*((_QWORD *)this + 25);
LABEL_6:
  if ( i != v8 )
  {
    v12 = std::_Hash_bytes((const unsigned __int8 *)i + 16, v5);
    v14 = 2 * (*((_QWORD *)this + 30) & v12);
    if ( *(_QWORD **)(v6 + 16 * (*((_QWORD *)this + 30) & v12) + 8) == v13 )
    {
      if ( *(_QWORD **)(v6 + 16 * (*((_QWORD *)this + 30) & v12)) == v13 )
      {
        *(_QWORD *)(v6 + 16 * (*((_QWORD *)this + 30) & v12)) = v8;
        *(_QWORD *)(*((_QWORD *)this + 27) + 8 * v14 + 8) = *((_QWORD *)this + 25);
      }
      else
      {
        *(_QWORD *)(v6 + 16 * (*((_QWORD *)this + 30) & v12) + 8) = v13[1];
      }
    }
    else if ( *(_QWORD **)(v6 + 16 * (*((_QWORD *)this + 30) & v12)) == v13 )
    {
      *(_QWORD *)(v6 + 16 * (*((_QWORD *)this + 30) & v12)) = *v13;
    }
    std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::erase((char *)this + 200, &v15, v13);
  }
}
