/*
 * XREFs of ?ResetComposeTop@CWindowNode@@AEAAXXZ @ 0x1800AE2C8
 * Callers:
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x1800AD7FC (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowNode::ResetComposeTop(CWindowNode *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 64LL);
  if ( *(_DWORD *)(v2 + 80) )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8 * v1);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 264LL))(v3) )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= *(_DWORD *)(v2 + 80) )
        return;
    }
    v4 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8 * v1);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
  }
}
