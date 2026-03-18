/*
 * XREFs of ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x18005D6A4
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x18004E218 (--1CResource@@MEAA@XZ.c)
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18005D610 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18006A560 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x1800C363C (-ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGIN.c)
 *     ?ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETDIAGNOSTICITEMID@@@Z @ 0x18018BEE8 (-ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMAT.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@@Z @ 0x180068F24 (-erase@-$list@U-$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V-$alloc.c)
 */

void __fastcall CAnimationLoggingManager::RemoveResourceDebugInfo(CAnimationLoggingManager *this, struct CResource *a2)
{
  unsigned __int64 v2; // r9
  __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // rsi
  __int64 *i; // r11
  __int64 *v11; // rax
  unsigned __int64 v12; // rax
  _QWORD *v13; // r11
  __int64 v14; // rdx
  struct CResource *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  v2 = 0LL;
  v5 = 0xCBF29CE484222325uLL;
  do
  {
    v6 = *((unsigned __int8 *)&v15 + v2++);
    v5 = 0x100000001B3LL * (v6 ^ v5);
  }
  while ( v2 < 8 );
  v7 = (_QWORD *)((char *)this + 96);
  v8 = *((_QWORD *)this + 14);
  v9 = (__int64 *)*((_QWORD *)this + 12);
  for ( i = *(__int64 **)(v8 + 16 * (v5 & *((_QWORD *)this + 17))); ; i = (__int64 *)*i )
  {
    v11 = *(__int64 **)(v8 + 16 * (v5 & *((_QWORD *)this + 17))) == v9
        ? (__int64 *)*((_QWORD *)this + 12)
        : **(__int64 ***)(v8 + 16 * (v5 & *((_QWORD *)this + 17)) + 8);
    if ( i == v11 )
      break;
    if ( (struct CResource *)i[2] == a2 )
      goto LABEL_8;
  }
  i = (__int64 *)*((_QWORD *)this + 12);
LABEL_8:
  if ( i != v9 )
  {
    v12 = std::_Hash_bytes((const unsigned __int8 *)i + 16, 8uLL);
    v14 = 2 * (*((_QWORD *)this + 17) & v12);
    if ( *(_QWORD **)(v8 + 16 * (*((_QWORD *)this + 17) & v12) + 8) == v13 )
    {
      if ( *(_QWORD **)(v8 + 16 * (*((_QWORD *)this + 17) & v12)) == v13 )
      {
        *(_QWORD *)(v8 + 16 * (*((_QWORD *)this + 17) & v12)) = v9;
        *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v14 + 8) = *v7;
      }
      else
      {
        *(_QWORD *)(v8 + 16 * (*((_QWORD *)this + 17) & v12) + 8) = v13[1];
      }
    }
    else if ( *(_QWORD **)(v8 + 16 * (*((_QWORD *)this + 17) & v12)) == v13 )
    {
      *(_QWORD *)(v8 + 16 * (*((_QWORD *)this + 17) & v12)) = *v13;
    }
    std::list<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>::erase(
      (char *)this + 96,
      &v15,
      v13);
  }
  *((_DWORD *)a2 + 8) &= ~0x10u;
}
