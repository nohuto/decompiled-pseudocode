/*
 * XREFs of ?RecurseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C000893C
 * Callers:
 *     ?RecurseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C000893C (-RecurseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU.c)
 *     ?GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z @ 0x1C0008A60 (-GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?RecurseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C000893C (-RecurseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU.c)
 */

__int64 __fastcall CSidebandDevice::RecurseForward(
        CSidebandDevice *this,
        struct _KSFILTER_DESCRIPTOR *a2,
        const struct KSTOPOLOGY_CONNECTION *a3,
        unsigned int a4,
        struct _LIST_ENTRY *a5)
{
  CSidebandDevice *v8; // r10
  int v9; // esi
  const KSTOPOLOGY_CONNECTION *Connections; // rcx
  int v12; // ebp
  ULONG ConnectionsCount; // r12d
  const KSTOPOLOGY_CONNECTION *i; // r14
  int v15; // eax
  struct _LIST_ENTRY *PoolWithTag; // rax
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *Flink; // rax
  const KSTOPOLOGY_CONNECTION *v20; // [rsp+80h] [rbp+18h]

  v8 = this;
  v9 = -1073741275;
  if ( a3->ToNode == -1 )
    return a4 != a3->ToNodePin ? 0xC0000225 : 0;
  Connections = a2->Connections;
  v12 = 0;
  ConnectionsCount = a2->ConnectionsCount;
  v20 = Connections;
  if ( ConnectionsCount )
  {
    for ( i = a2->Connections; ; ++i )
    {
      if ( i->FromNode == a3->ToNode )
      {
        v15 = CSidebandDevice::RecurseForward(v8, a2, &Connections[v12], a4, a5);
        Connections = v20;
        v9 = v15;
        v8 = this;
      }
      if ( v9 >= 0 )
        break;
      if ( ++v12 >= ConnectionsCount )
        return (unsigned int)v9;
    }
    PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x66627845u);
    v17 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag->Blink = PoolWithTag;
    PoolWithTag->Flink = PoolWithTag;
    LODWORD(PoolWithTag[1].Flink) = a3->ToNode;
    Flink = a5->Flink;
    if ( a5->Flink->Blink != a5 )
      __fastfail(3u);
    v17->Flink = Flink;
    v17->Blink = a5;
    Flink->Blink = v17;
    a5->Flink = v17;
  }
  return (unsigned int)v9;
}
