/*
 * XREFs of NVMeFirmwareActivateCompletion @ 0x1C0011CC0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeControllerAsyncReset @ 0x1C000D44C (NVMeControllerAsyncReset.c)
 */

char __fastcall NVMeFirmwareActivateCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SrbExtension; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r14
  char v10; // bp
  __int64 v11; // rdi
  unsigned int v12; // edx
  char v13; // dl
  int v14; // eax

  SrbExtension = GetSrbExtension(a2);
  v9 = SrbExtension;
  v10 = 1;
  if ( *(_BYTE *)(v7 + 2) == 40 )
    v11 = *(_QWORD *)(v7 + 64);
  else
    v11 = *(_QWORD *)(v7 + 24);
  if ( !a3 )
  {
    *(_DWORD *)(v11 + 20) = 16;
    *(_BYTE *)(v7 + 3) = 4;
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
    goto LABEL_22;
  }
  v12 = *(unsigned __int16 *)(v8 + 14);
  if ( (v12 & 0x1FE) == 0 && (v12 & 0xE00) == 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x20u;
    v13 = 0;
    goto LABEL_8;
  }
  if ( (v12 & 0xE00) != 0x200 )
    goto LABEL_19;
  v14 = (unsigned __int8)(v12 >> 1);
  switch ( v14 )
  {
    case 6:
      *(_DWORD *)(v11 + 20) = 6;
      goto LABEL_20;
    case 7:
      *(_DWORD *)(v11 + 20) = 7;
LABEL_20:
      *(_BYTE *)(a2 + 3) = 4;
      goto LABEL_21;
    case 11:
      goto LABEL_16;
  }
  if ( (unsigned int)(v14 - 16) > 1 )
  {
LABEL_19:
    *(_DWORD *)(v11 + 20) = 16;
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 20) |= 0x20u;
  v13 = (v12 & 0x1FE) == 32;
LABEL_8:
  if ( !NVMeControllerAsyncReset(a1, v13, (__int64)NVMeFirmwareActivateCompletionAfterReset, a2) )
  {
LABEL_16:
    *(_DWORD *)(v11 + 20) = 32;
    *(_BYTE *)(a2 + 3) = 1;
    goto LABEL_21;
  }
  v10 = 0;
LABEL_21:
  LOBYTE(SrbExtension) = (8 * v10) | *(_BYTE *)(v9 + 4253) & 0xF7;
  *(_BYTE *)(v9 + 4253) = SrbExtension;
LABEL_22:
  if ( *(_BYTE *)(a2 + 3) != 1 )
    LOBYTE(SrbExtension) = StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
  return SrbExtension;
}
