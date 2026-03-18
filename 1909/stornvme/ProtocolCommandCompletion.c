/*
 * XREFs of ProtocolCommandCompletion @ 0x1C0012260
 * Callers:
 *     <none>
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001D18 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     GetNamespaceId @ 0x1C0003DA4 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003F74 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005980 (memset.c)
 */

__int64 __fastcall ProtocolCommandCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  _DWORD *v8; // r8
  __int64 v9; // rsi
  _DWORD *v10; // rbx
  __int64 v11; // r8

  result = GetSrbExtension(a2);
  v9 = result;
  if ( v8 )
  {
    if ( *(_BYTE *)(v7 + 2) == 40 )
      v10 = *(_DWORD **)(v7 + 64);
    else
      v10 = *(_DWORD **)(v7 + 24);
    v10[16] = *v8;
    result = *(unsigned int *)(a1 + 52);
    if ( (result & 8) != 0 || (v11 = *(_QWORD *)(v9 + 4216)) == 0 )
    {
      *(_DWORD *)(v9 + 4216) = 0;
    }
    else
    {
      result = StorPortExtendedFunction(1LL, a1, v11);
      *(_QWORD *)(v9 + 4216) = 0LL;
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
  }
  else
  {
    *(_BYTE *)(v7 + 3) = 4;
  }
  *(_BYTE *)(v9 + 4253) |= 8u;
  return result;
}
