/*
 * XREFs of NtGdiEngCreateBitmap @ 0x1C012D9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0094930 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C012DD0C (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL sizl, LONG a2, int a3, int a4, char *Address)
{
  HBITMAP Bitmap; // r15
  __int64 v9; // rdx
  unsigned int v10; // rcx^4
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  SIZE_T v14; // rsi
  struct _EPROCESS *CurrentProcess; // rax
  FLONG v16; // r14d
  char *v17; // rcx
  HANDLE v18; // rax
  void *v19; // rsi
  struct _EPROCESS *v20; // rax
  BOOL v22; // [rsp+30h] [rbp-78h]
  _BYTE v23[32]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v24; // [rsp+68h] [rbp-40h]

  Bitmap = 0LL;
  v22 = 1;
  if ( !(unsigned int)ValidUmpdSizl(sizl, 1) )
    return 0LL;
  v13 = v11 * v10;
  if ( v13 > 0xFFFFFFFF )
    return 0LL;
  v14 = (unsigned int)v13;
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
            1160);
        a4 &= ~0x80u;
      }
    }
  }
  if ( Address )
  {
    v16 = a4 & 0xFFFFFFF7;
    if ( (_DWORD)v14 )
    {
      v17 = &Address[(unsigned int)v14];
      if ( (unsigned __int64)v17 > MmUserProbeAddress || v17 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
      v18 = (HANDLE)GrepSecureVirtualMemory(Address, v14, 4LL);
    else
      v18 = MmSecureVirtualMemory(Address, v14, 4u);
    v19 = v18;
    v22 = v18 != 0LL;
  }
  else
  {
    if ( gUMPDSecurityLevel != 2 )
    {
      if ( !gUMPDSecurityLevel
        || (v20 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v9, v11, v12),
            !(unsigned int)bIsProcessLocalSystem(v20)) )
      {
        if ( (unsigned int)(a3 - 1) > 5 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:Creating compressed surface withou"
              "t input buffer\n",
              1203);
          v22 = 0;
        }
      }
    }
    v16 = a4 | 8;
    v19 = 0LL;
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9) + 72) )
      v16 |= 0x80u;
  }
  if ( v22 )
    Bitmap = EngCreateBitmap(sizl, a2, a3 | 0x8000u, v16, Address);
  if ( v19 )
  {
    if ( Bitmap )
    {
      SURFREF::SURFREF((SURFREF *)v23, (HSURF)Bitmap);
      if ( v24 )
      {
        *(_QWORD *)(v24 + 144) = v19;
      }
      else
      {
        if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
          GrepUnsecureVirtualMemory(v19);
        else
          MmUnsecureVirtualMemory(v19);
        EngDeleteSurface((HSURF)Bitmap);
        Bitmap = 0LL;
      }
      SURFREF::~SURFREF((SURFREF *)v23);
    }
    else if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
    {
      GrepUnsecureVirtualMemory(v19);
    }
    else
    {
      MmUnsecureVirtualMemory(v19);
    }
  }
  return Bitmap;
}
