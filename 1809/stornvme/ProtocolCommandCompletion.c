/*
 * XREFs of ProtocolCommandCompletion @ 0x1C0013170
 * Callers:
 *     <none>
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C00029D8 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     GetNamespaceId @ 0x1C0005144 (GetNamespaceId.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 __fastcall ProtocolCommandCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 SrbExtension; // rsi
  _DWORD *v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rbx
  __int64 result; // rax
  __int64 v12; // r8

  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v6 + 2) == 40 )
    v10 = *(_DWORD **)(v6 + 64);
  else
    v10 = *(_DWORD **)(v6 + 24);
  v10[16] = *v8;
  result = *(unsigned int *)(a1 + 52);
  if ( (result & 8) != 0 || (v12 = *(_QWORD *)(SrbExtension + 4216)) == 0 )
  {
    *(_DWORD *)(SrbExtension + 4216) = 0;
  }
  else
  {
    result = StorPortExtendedFunction(1LL, a1, v12, v9);
    *(_QWORD *)(SrbExtension + 4216) = 0LL;
  }
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    v10[5] = 0;
    v10[4] = 1;
  }
  else
  {
    v10[4] = 2;
    result = *(unsigned __int16 *)(a3 + 14);
    v10[5] = result;
    *(_BYTE *)(a2 + 3) = 1;
    if ( v10[7] )
      result = NVMeAllocateDmaBuffer(a1, 0x40u);
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return result;
}
