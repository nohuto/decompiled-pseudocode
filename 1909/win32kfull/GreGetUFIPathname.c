/*
 * XREFs of GreGetUFIPathname @ 0x1C0279728
 * Callers:
 *     NtGdiGetUFIPathname @ 0x1C02A8020 (NtGdiGetUFIPathname.c)
 * Callees:
 *     memmove @ 0x1C0168100 (memmove.c)
 *     ?ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C027901C (-ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
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
  __int64 v17; // rsi
  __int64 v18; // r15
  SIZE_T v19; // rdi
  PVOID v20; // rsi
  __int64 v21; // rcx
  unsigned int v22; // r8d
  PVOID MappedBase; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR ViewSize[6]; // [rsp+28h] [rbp-30h] BYREF

  PFEFromUFI = ppfeGetPFEFromUFI(a1, a6 & 5, 1);
  v15 = PFEFromUFI;
  ViewSize[1] = (ULONG_PTR)PFEFromUFI;
  if ( !PFEFromUFI )
    return 0LL;
  v17 = *(_QWORD *)PFEFromUFI;
  if ( a5 )
    *a5 = *(_DWORD *)(v17 + 36);
  if ( a2 )
    *a2 = *(_DWORD *)(v17 + 32);
  if ( a3 )
  {
    v18 = *(unsigned int *)(v17 + 32);
    if ( (unsigned int)v18 > a4 )
      return 0LL;
    memmove(a3, *(const void **)(v17 + 24), 2 * v18);
    memset(&a3[2 * v18], 0, 2LL * (a4 - (unsigned int)v18));
  }
  if ( a7 )
    *a7 = *((_DWORD *)v15 + 3) & 0x40;
  if ( (*((_DWORD *)v15 + 3) & 0x40) == 0 )
    goto LABEL_18;
  ViewSize[0] = 0LL;
  v19 = *(unsigned int *)(**(_QWORD **)(v17 + 200) + 24LL);
  if ( a8 )
    *a8 = v19;
  if ( !Address )
    goto LABEL_18;
  if ( MmMapViewInSessionSpace(*(PVOID *)(**(_QWORD **)(v17 + 200) + 32LL), &MappedBase, ViewSize) < 0 )
    return 0LL;
  ProbeForWrite(Address, v19, 1u);
  v20 = MappedBase;
  memmove((void *)Address, (char *)MappedBase + 16, v19);
  MmUnmapViewInSessionSpace(v20);
LABEL_18:
  if ( a10 )
  {
    if ( a11 )
    {
      *a10 = 0;
      *a11 = 0;
      v21 = *(_QWORD *)v15;
      if ( *(struct PDEV **)(*(_QWORD *)v15 + 88LL) == qword_1C0330E80 && !*(_DWORD *)(*(_QWORD *)(v21 + 80) + 8LL) )
      {
        v22 = *(_DWORD *)(v21 + 208);
        if ( v22 >= 4 && (v22 & 1) == 0 )
        {
          *a11 = (unsigned int)(*((_DWORD *)v15 + 22) - 1) >> 1;
          *a10 = 1;
        }
      }
    }
  }
  return 1LL;
}
