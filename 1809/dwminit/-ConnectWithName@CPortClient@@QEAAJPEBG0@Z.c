/*
 * XREFs of ?ConnectWithName@CPortClient@@QEAAJPEBG0@Z @ 0x1800048A4
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004490 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPortClient::ConnectWithName(
        CPortClient *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  return (*((__int64 (__fastcall **)(CPortClient *, const unsigned __int16 *, _QWORD))this + 1))(this, a2, 0LL);
}
