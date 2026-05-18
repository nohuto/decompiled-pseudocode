/*
 * XREFs of ??1CPortClient@@UEAA@XZ @ 0x18000483C
 * Callers:
 *     ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x180004040 (--_ECPortClientRefCounted@@MEAAPEAXI@Z.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x180004800 (--_ECPortClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x1800048B8 (-Disconnect@CPortClient@@QEAAXXZ.c)
 */

void __fastcall CPortClient::~CPortClient(HANDLE *this)
{
  HANDLE v2; // r8

  *this = &CPortClient::`vftable';
  CPortClient::Disconnect((CPortClient *)this);
  v2 = this[9];
  if ( v2 )
  {
    HeapFree(this[10], 0, v2);
    this[9] = 0LL;
  }
}
