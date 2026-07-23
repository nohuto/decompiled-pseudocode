/*
 * XREFs of sub_180083108 @ 0x180083108
 * Callers:
 *     sub_180082190 @ 0x180082190 (sub_180082190.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     LdrProcessRelocationBlockEx_0 @ 0x180083200 (LdrProcessRelocationBlockEx_0.c)
 */

__int64 __fastcall sub_180083108(void *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  __int64 v6; // rbp
  NTSTATUS v7; // eax
  USHORT *v8; // rcx
  DWORD v9; // esi
  unsigned int v10; // r8d
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  DWORD v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a3;
  v3 = 0;
  v13 = 0;
  if ( RtlImageNtHeaderEx(1u, a1, 0LL, (PIMAGE_NT_HEADERS *)&v12) < 0 )
    return (unsigned int)-1073741701;
  v5 = v12;
  if ( *(_WORD *)(v12 + 24) == 267 )
  {
    v6 = *(unsigned int *)(v12 + 52);
  }
  else
  {
    if ( *(_WORD *)(v12 + 24) != 523 )
      return (unsigned int)-1073741701;
    v6 = *(_QWORD *)(v12 + 48);
  }
  v7 = sub_18001C4DC((unsigned __int64)a1, 1, 5u, &v13, &v12);
  v8 = (USHORT *)v12;
  if ( v7 < 0 )
    v8 = 0LL;
  if ( !v8 )
    return (*(_BYTE *)(v5 + 22) & 1) != 0 ? 0xC0000018 : 0;
  v9 = v13;
  if ( !v13 )
    return (*(_BYTE *)(v5 + 22) & 1) != 0 ? 0xC0000018 : 0;
  while ( 1 )
  {
    v10 = *((_DWORD *)v8 + 1);
    v9 -= v10;
    v8 = (USHORT *)LdrProcessRelocationBlockEx_0(
                     *(unsigned __int16 *)(v5 + 4),
                     (ULONG_PTR)a1 + *(unsigned int *)v8,
                     (v10 - 8) >> 1,
                     v8 + 4,
                     (LONG_PTR)a1 - v6);
    if ( !v8 )
      break;
    if ( !v9 )
      return v3;
  }
  return (unsigned int)-1073741701;
}
