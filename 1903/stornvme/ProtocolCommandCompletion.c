/*
 * XREFs of ProtocolCommandCompletion @ 0x1C0012330
 * Callers:
 *     <none>
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001D18 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     GetNamespaceId @ 0x1C0003844 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003A14 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005400 (memset.c)
 */

__int64 __fastcall ProtocolCommandCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 SrbExtension; // rsi
  _DWORD *v8; // r8
  _DWORD *v9; // rbx
  __int64 result; // rax
  __int64 v11; // r8

  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v6 + 2) == 40 )
    v9 = *(_DWORD **)(v6 + 64);
  else
    v9 = *(_DWORD **)(v6 + 24);
  v9[16] = *v8;
  result = *(unsigned int *)(a1 + 52);
  if ( (result & 8) != 0 || (v11 = *(_QWORD *)(SrbExtension + 4216)) == 0 )
  {
    *(_DWORD *)(SrbExtension + 4216) = 0;
  }
  else
  {
    result = StorPortExtendedFunction(1LL, a1, v11);
    *(_QWORD *)(SrbExtension + 4216) = 0LL;
  }
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    v9[5] = 0;
    v9[4] = 1;
  }
  else
  {
    v9[4] = 2;
    result = *(unsigned __int16 *)(a3 + 14);
    v9[5] = result;
    *(_BYTE *)(a2 + 3) = 1;
    if ( v9[7] )
      result = NVMeAllocateDmaBuffer(a1, 0x40u);
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return result;
}
