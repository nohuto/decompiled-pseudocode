/*
 * XREFs of GreGetUFIPathname @ 0x1C0260740
 * Callers:
 *     NtGdiGetUFIPathname @ 0x1C0292900 (NtGdiGetUFIPathname.c)
 * Callees:
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C026004C (-ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 */

__int64 __fastcall GreGetUFIPathname(
        struct _UNIVERSAL_FONT_ID *a1,
        _DWORD *a2,
        char *a3,
        unsigned int a4,
        _DWORD *a5,
        char a6,
        int *a7,
        _DWORD *a8,
        volatile void *Address,
        _DWORD *a10,
        unsigned int *a11)
{
  struct PFE *PFEFromUFI; // rax
  struct PFE *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // r15
  SIZE_T v18; // rdi
  PVOID v19; // rsi
  __int64 v20; // rcx
  unsigned int v21; // r8d
  PVOID MappedBase; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR ViewSize[6]; // [rsp+28h] [rbp-30h] BYREF

  PFEFromUFI = ppfeGetPFEFromUFI(a1, a6 & 5, 1);
  v15 = PFEFromUFI;
  ViewSize[1] = (ULONG_PTR)PFEFromUFI;
  if ( !PFEFromUFI )
    return 0LL;
  v16 = *(_QWORD *)PFEFromUFI;
  if ( a5 )
    *a5 = *(_DWORD *)(v16 + 36);
  if ( a2 )
    *a2 = *(_DWORD *)(v16 + 32);
  if ( a3 )
  {
    v17 = *(unsigned int *)(v16 + 32);
    if ( (unsigned int)v17 > a4 )
      return 0LL;
    memmove(a3, *(const void **)(v16 + 24), 2 * v17);
    memset(&a3[2 * v17], 0, 2LL * (a4 - (unsigned int)v17));
  }
  if ( a7 )
    *a7 = *((_DWORD *)v15 + 3) & 0x40;
  if ( (*((_DWORD *)v15 + 3) & 0x40) == 0 )
    goto LABEL_17;
  ViewSize[0] = 0LL;
  v18 = *(unsigned int *)(**(_QWORD **)(v16 + 200) + 24LL);
  if ( a8 )
    *a8 = v18;
  if ( !Address )
    goto LABEL_17;
  if ( MmMapViewInSessionSpace(*(PVOID *)(**(_QWORD **)(v16 + 200) + 32LL), &MappedBase, ViewSize) < 0 )
    return 0LL;
  ProbeForWrite(Address, v18, 1u);
  v19 = MappedBase;
  memmove((void *)Address, (char *)MappedBase + 16, v18);
  MmUnmapViewInSessionSpace(v19);
LABEL_17:
  if ( a10 )
  {
    if ( a11 )
    {
      *a10 = 0;
      *a11 = 0;
      v20 = *(_QWORD *)v15;
      if ( *(struct PDEV **)(*(_QWORD *)v15 + 88LL) == qword_1C031DE98 && !*(_DWORD *)(*(_QWORD *)(v20 + 80) + 8LL) )
      {
        v21 = *(_DWORD *)(v20 + 208);
        if ( v21 >= 4 && (v21 & 1) == 0 )
        {
          *a11 = (unsigned int)(*((_DWORD *)v15 + 22) - 1) >> 1;
          *a10 = 1;
        }
      }
    }
  }
  return 1LL;
}
