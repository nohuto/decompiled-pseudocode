/*
 * XREFs of NtGdiEngCreateBitmap @ 0x1C0135770
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C013592C (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C02856D4 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL sizl, LONG a2, unsigned int a3, int a4, char *Address)
{
  HBITMAP Bitmap; // r15
  __int64 v9; // rdx
  unsigned int v10; // rcx^4
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r14
  FLONG v14; // esi
  __int64 v15; // rdx
  struct _EPROCESS *CurrentProcess; // rax
  char *v18; // rcx
  struct _EPROCESS *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  BOOL v22; // [rsp+30h] [rbp-58h]
  HANDLE SecureHandle; // [rsp+38h] [rbp-50h]

  Bitmap = 0LL;
  SecureHandle = 0LL;
  v22 = 1;
  if ( !(unsigned int)ValidUmpdSizl(sizl, 1) )
    return 0LL;
  v13 = v11 * v10;
  if ( v13 > 0xFFFFFFFF )
    return 0LL;
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v9, v11, v12),
          !(unsigned int)bIsProcessLocalSystem(CurrentProcess)) )
    {
      if ( (a4 & 0x80u) != 0 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:BMF_UMPDMEM is set.\n",
            1103);
        a4 &= ~0x80u;
      }
    }
  }
  if ( Address )
  {
    v14 = a4 & 0xFFFFFFF7;
    if ( (_DWORD)v13 )
    {
      v18 = &Address[(unsigned int)v13];
      if ( (unsigned __int64)v18 > MmUserProbeAddress || v18 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    SecureHandle = MmSecureVirtualMemory(Address, (unsigned int)v13, 4u);
    v22 = SecureHandle != 0LL;
  }
  else
  {
    if ( gUMPDSecurityLevel != 2 )
    {
      if ( !gUMPDSecurityLevel
        || (v19 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v9, v11, v12),
            !(unsigned int)bIsProcessLocalSystem(v19)) )
      {
        if ( !a3 || a3 > 6 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:Creating compressed surface withou"
              "t input buffer\n",
              1139);
          v22 = 0;
        }
      }
    }
    v14 = a4 | 8;
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v11, v12) + 72) )
      v14 |= 0x80u;
  }
  if ( v22 )
    Bitmap = EngCreateBitmap(sizl, a2, a3 | 0x8000, v14, Address);
  if ( SecureHandle )
  {
    if ( Bitmap )
    {
      LOBYTE(v15) = 5;
      v20 = HmgShareLockCheck(Bitmap, v15);
      v21 = v20;
      if ( v20 )
      {
        *(_QWORD *)(v20 + 144) = SecureHandle;
      }
      else
      {
        MmUnsecureVirtualMemory(SecureHandle);
        EngDeleteSurface((HSURF)Bitmap);
        Bitmap = 0LL;
      }
      if ( v21 )
        DEC_SHARE_REF_CNT(v21);
    }
    else
    {
      MmUnsecureVirtualMemory(SecureHandle);
    }
  }
  return Bitmap;
}
