/*
 * XREFs of ObpGetWaitObject @ 0x14006310C
 * Callers:
 *     NtAssociateWaitCompletionPacket @ 0x140062B00 (NtAssociateWaitCompletionPacket.c)
 *     IopCancelWaitCompletionPacket @ 0x14008DD0C (IopCancelWaitCompletionPacket.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402D2EE0 (NtSignalAndWaitForSingleObject.c)
 *     ObWaitForSingleObject @ 0x14071F340 (ObWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ObpGetWaitObject(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r8
  __int64 v3; // rax

  v1 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
  v2 = *(_QWORD *)(v1 + 32);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 2) != 0 )
    {
      if ( (*(_DWORD *)(v1 + 176) & *(_DWORD *)(*(unsigned __int16 *)(v1 + 180) + a1 + 48)) != *(_DWORD *)(v1 + 176) )
      {
        v3 = a1 + 45;
        return v2 + v3;
      }
      return *(_QWORD *)(*(unsigned __int16 *)(v1 + 182) + a1 + 48);
    }
    else
    {
      return *(_QWORD *)(v2 + a1 + 47);
    }
  }
  else
  {
    if ( v2 >= 0 )
    {
      v3 = a1 + 48;
      return v2 + v3;
    }
    return *(_QWORD *)(v1 + 32);
  }
}
