/*
 * XREFs of sub_1800820B0 @ 0x1800820B0
 * Callers:
 *     sub_18002A370 @ 0x18002A370 (sub_18002A370.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     sub_180082190 @ 0x180082190 (sub_180082190.c)
 *     sub_180082368 @ 0x180082368 (sub_180082368.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_1800820B0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  DWORD v15; // [rsp+70h] [rbp+18h] BYREF

  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      353,
      (unsigned int)"LdrpRelocateImage",
      3,
      (__int64)"DLL name: %wZ\n",
      a4);
  v8 = 0;
  if ( (*(_BYTE *)(a3 + 22) & 1) != 0 )
    goto LABEL_11;
  v9 = sub_18001C4DC(a1, 1, 5u, &v15, v14);
  v10 = v14[0];
  if ( v9 < 0 )
    v10 = 0LL;
  if ( v10 && v15 )
  {
LABEL_11:
    v12 = sub_18001C4DC(a1, 1, 0xEu, &v15, v14);
    v13 = v14[0];
    if ( v12 < 0 )
      v13 = 0LL;
    if ( !v13 || v15 < 0x48 || (*(_BYTE *)(v13 + 16) & 1) == 0 )
    {
      sub_180082368(a4, *(_QWORD *)(a3 + 48), a1, a2);
      v8 = sub_180082190(a1);
    }
  }
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      393,
      (unsigned int)"LdrpRelocateImage",
      4,
      (__int64)"Status: 0x%08lx\n",
      v8);
  return v8;
}
