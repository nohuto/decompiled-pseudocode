/*
 * XREFs of NtGdiCheckBitmapBits @ 0x1C02AEA60
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02AE28C (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 */

__int64 __fastcall NtGdiCheckBitmapBits(HDC a1, void *a2, char *a3, int a4, SIZE_T Size, int a6, int a7, char *Address)
{
  unsigned int v12; // r14d
  unsigned __int64 v13; // rax
  unsigned int v14; // ecx
  char *v15; // r8
  HANDLE v16; // rsi
  HANDLE v17; // rax
  void *v18; // rbx
  ULONG v20; // ecx
  _QWORD v21[11]; // [rsp+40h] [rbp-58h] BYREF

  memset(v21, 0, 0x20uLL);
  v12 = 1;
  if ( a4 != 2 || a6 != 1 )
    goto LABEL_24;
  v13 = 3LL * (unsigned int)Size;
  if ( v13 > 0xFFFFFFFF || (int)v13 + 3 < (unsigned int)v13 )
  {
    v20 = 534;
LABEL_25:
    EngSetLastError(v20);
    return 0LL;
  }
  v14 = (v13 + 3) & 0xFFFFFFFC;
  if ( a7 != v14 )
  {
LABEL_24:
    v20 = 87;
    goto LABEL_25;
  }
  LODWORD(v21[0]) = 5;
  HIDWORD(v21[0]) = Size;
  LODWORD(v21[1]) = 1;
  HIDWORD(v21[1]) = (v13 + 3) & 0xFFFFFFFC;
  v21[2] = 0LL;
  LODWORD(v21[3]) = 0;
  if ( v14 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = &a3[v14];
    if ( (unsigned __int64)v15 > MmUserProbeAddress || v15 < a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( (_DWORD)Size
    && ((unsigned __int64)&Address[(unsigned int)Size] > MmUserProbeAddress || &Address[(unsigned int)Size] < Address) )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  v16 = MmSecureVirtualMemory(a3, v14, 2u);
  v17 = MmSecureVirtualMemory(Address, (unsigned int)Size, 4u);
  v18 = v17;
  if ( v16 )
  {
    if ( v17 )
      v12 = GreCheckBitmapBits(a1, a2, (struct _DEVBITMAPINFO *)v21, a3, (unsigned __int8 *)Address);
    MmUnsecureVirtualMemory(v16);
  }
  if ( v18 )
    MmUnsecureVirtualMemory(v18);
  return v12;
}
