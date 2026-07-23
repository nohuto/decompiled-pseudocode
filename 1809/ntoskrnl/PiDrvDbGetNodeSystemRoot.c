/*
 * XREFs of PiDrvDbGetNodeSystemRoot @ 0x14083E918
 * Callers:
 *     PiDrvDbQuerySystemPathWin32 @ 0x14083F5D4 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14083FDE4 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14083FF38 (PiDrvDbResolveNodeFilePaths.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 *     RtlDuplicateUnicodeString @ 0x1406D4EA0 (RtlDuplicateUnicodeString.c)
 */

NTSTATUS __fastcall PiDrvDbGetNodeSystemRoot(__int64 a1, UNICODE_STRING *a2)
{
  _WORD *v3; // rcx
  PVOID StringRoutine; // rax
  int v7; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+80h] [rbp+18h] BYREF

  v3 = *(_WORD **)(a1 + 512);
  if ( !v3 )
  {
    *(_DWORD *)(a1 + 504) = 34078720;
    StringRoutine = ExpAllocateStringRoutine(0x208uLL);
    *(_QWORD *)(a1 + 512) = StringRoutine;
    if ( !StringRoutine )
      return -1073741670;
    if ( (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 24),
                7u,
                *(_QWORD *)(a1 + 72),
                0LL,
                (__int64)&DEVPKEY_DriverDatabase_SystemRoot,
                (__int64)&v7,
                (__int64)StringRoutine,
                *(unsigned __int16 *)(a1 + 506),
                (__int64)&v8,
                0) < 0
      || v7 != 18
      || v8 <= 2
      || (v3 = *(_WORD **)(a1 + 512), v3[((unsigned __int64)v8 >> 1) - 1]) )
    {
      **(_WORD **)(a1 + 512) = 0;
      v3 = *(_WORD **)(a1 + 512);
    }
    else
    {
      *(_WORD *)(a1 + 504) = v8 - 2;
    }
  }
  if ( *v3 )
    return RtlDuplicateUnicodeString(1u, (PCUNICODE_STRING)(a1 + 504), a2);
  else
    return -1073741275;
}
