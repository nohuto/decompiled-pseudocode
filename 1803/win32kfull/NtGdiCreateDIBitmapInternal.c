/*
 * XREFs of NtGdiCreateDIBitmapInternal @ 0x1C0016150
 * Callers:
 *     <none>
 * Callees:
 *     bCaptureBitmapInfo @ 0x1C00169D0 (bCaptureBitmapInfo.c)
 *     GreCreateDIBitmapReal @ 0x1C0016AA0 (GreCreateDIBitmapReal.c)
 *     GreCreateDIBitmapComp @ 0x1C0102D6C (GreCreateDIBitmapComp.c)
 */

__int64 __fastcall NtGdiCreateDIBitmapInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char *Address,
        void *Src,
        int a7,
        int a8,
        SIZE_T Size)
{
  __int64 v11; // rdi
  HANDLE v12; // r14
  char *v13; // rdx
  __int64 DIBitmapReal; // rax

  v11 = 1LL;
  v12 = 0LL;
  if ( Src && a8 )
  {
    if ( !(unsigned int)bCaptureBitmapInfo(Src) )
      goto LABEL_10;
    if ( Address )
    {
      if ( (_DWORD)Size )
      {
        if ( ((unsigned __int8)Address & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = &Address[(unsigned int)Size];
        if ( (unsigned __int64)v13 > MmUserProbeAddress || v13 < Address )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v12 = MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
      if ( !v12 )
LABEL_10:
        v11 = 0LL;
    }
  }
  if ( v11 == 1 )
  {
    if ( (a4 & 2) != 0 )
      DIBitmapReal = GreCreateDIBitmapReal(a1, a7, a8, Size, 0LL, 0, 0LL, 0, 0LL, 0LL);
    else
      DIBitmapReal = GreCreateDIBitmapComp(a1, (__int64)Address, 0LL, a7, a8, Size);
    v11 = DIBitmapReal;
  }
  if ( v12 )
    MmUnsecureVirtualMemory(v12);
  return v11;
}
