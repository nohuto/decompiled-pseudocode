/*
 * XREFs of NVMeAsyncEventRequestCompletion @ 0x1C0013990
 * Callers:
 *     <none>
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001D18 (BuildGetLogPageCommand.c)
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     GetNamespaceId @ 0x1C0003DA4 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003F74 (NVMeAllocateDmaBuffer.c)
 *     GetLocalCommand @ 0x1C0008F48 (GetLocalCommand.c)
 *     NVMeControllerAsyncReset @ 0x1C000A85C (NVMeControllerAsyncReset.c)
 *     IsNVMeControllerOnFatalError @ 0x1C0013928 (IsNVMeControllerOnFatalError.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C0015B6C (NVMeIssueAsyncEventCommand.c)
 */

char __fastcall NVMeAsyncEventRequestCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SrbExtension; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r8
  int v10; // r11d
  __int64 v11; // r15
  int v12; // ecx
  unsigned int v13; // ebp
  char v14; // al
  char v15; // al

  SrbExtension = GetSrbExtension(a2);
  v8 = SrbExtension;
  if ( !v9
    || (LOBYTE(SrbExtension) = *(_BYTE *)(v7 + 3), (_BYTE)SrbExtension == 14)
    || (*(_DWORD *)(a1 + 20) & 0xE) != 0
    || (_BYTE)SrbExtension != 1 )
  {
    *(_BYTE *)(v8 + 4253) |= 8u;
    return SrbExtension;
  }
  SrbExtension = GetLocalCommand(a1, a2);
  v11 = SrbExtension;
  v12 = *(_DWORD *)a3 & 7;
  if ( !v12 )
  {
    v13 = 64;
    StorPortExtendedFunction(86LL, a1, 0LL);
    v14 = *(_BYTE *)(a3 + 1);
    if ( v14 == 1 || v14 == 3 && IsNVMeControllerOnFatalError(a1) )
      NVMeControllerAsyncReset(a1, 0, 0LL, 0LL);
    goto LABEL_28;
  }
  if ( v12 == v10 )
  {
    v13 = 512;
    goto LABEL_27;
  }
  switch ( v12 )
  {
    case 2:
      v15 = *(_BYTE *)(a3 + 1);
      v13 = 512;
      if ( v15 )
      {
        if ( v15 != (_BYTE)v10 && v15 != 2 )
          goto LABEL_28;
      }
      else
      {
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 3732), 1u) )
        {
LABEL_28:
          LOBYTE(SrbExtension) = NVMeAllocateDmaBuffer(a1, v13);
          break;
        }
        v13 = 4096;
      }
LABEL_27:
      StorPortExtendedFunction(86LL, a1, 0LL);
      goto LABEL_28;
    case 6:
      if ( *(_BYTE *)(a3 + 1) == (_BYTE)v10 )
        LOBYTE(SrbExtension) = StorPortExtendedFunction(86LL, a1, 0LL);
      break;
    case 7:
      v13 = 512;
      goto LABEL_27;
  }
  if ( v11 )
    LOBYTE(SrbExtension) = NVMeIssueAsyncEventCommand(a1, v11);
  return SrbExtension;
}
