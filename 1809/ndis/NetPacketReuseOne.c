/*
 * XREFs of NetPacketReuseOne @ 0x1C0082360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?NetPacketClearVolatileFields@@YAXPEBU_NET_DATAPATH_DESCRIPTOR@@PEAU_NET_PACKET@@@Z @ 0x1C00821C4 (-NetPacketClearVolatileFields@@YAXPEBU_NET_DATAPATH_DESCRIPTOR@@PEAU_NET_PACKET@@@Z.c)
 *     NetPacketExtensionPrivateGetData @ 0x1C01081DC (NetPacketExtensionPrivateGetData.c)
 */

void __fastcall NetPacketReuseOne(const struct _NET_DATAPATH_DESCRIPTOR *a1, struct _NET_PACKET *a2)
{
  _QWORD *i; // rbx
  __int64 Data; // rax
  void (__fastcall *v5)(_QWORD, __int64); // r8

  NetPacketClearVolatileFields(a1, a2);
  if ( (dword_1C00A0860 & 8) != 0 )
  {
    for ( i = qword_1C00A2050; i; i = (_QWORD *)i[5] )
    {
      if ( i[10] )
      {
        Data = NetPacketExtensionPrivateGetData(i, a2);
        v5(i[6], Data);
      }
    }
  }
}
